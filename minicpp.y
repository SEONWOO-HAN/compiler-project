/* declarations */

%{

#include <stdio.h>
#include <string.h>
#include "AST.h"

int yylex();

void yyerror(char *str);

FILE *yyin;

%}

%union{
	struct ast *node;
	char *id_val;
	int int_val;
	float float_val;
}

%token CLASS PRIVATE PUBLIC MAIN RETURN WHILE DO FOR IF EL
%token OBRACE CBRACE OPRNTH CPRNTH OBRCK CBRCK SEMICOLON COLON
%token INT FLOAT
%token <float_val> FLOATNUM
%token <int_val> INTNUM
%token <id_val> ID

%left RELAOP EQLTOP 
%left ADDIOP
%left MULTOP
%right ASSIGNMENT
%nonassoc UNOP

%token DOT COMMA

%token PROGRAM MEMBER VARIABLE FUNCDECL FUNCDEF CLASSMETHODDEF PARAM TYPE COMPOUNDSTMT STMT EXPRSTMT EXPR OPEREXPR REFEXPR REFVAREXPR REFCALLEXPR IDENTEXPR CALLEXPR ARGLIST

%type <node> Program
%type <node> ClassList Class Member VarDeclList MethodDeclList MethodDefList VarDecl FuncDecl FuncDef ClassMethodList
%type <node> ClassMethodDef
%type <node> MainFunc
%type <node> ParamList Param Ident Type
%type <node> CompoundStmt StmtList Stmt ExprStmt AssignStmt RetStmt WhileStmt DoStmt ForStmt IfStmt
%type <node> Expr OperExpr RefExpr RefVarExpr RefCallExpr IdentExpr CallExpr ArgList

%%

/* rules & actions */

Program: ClassList MainFunc	{ $$ = alloc_program(PROGRAM, $1, NULL, $2); }
| ClassList ClassMethodList MainFunc	{ $$ = alloc_program(PROGRAM, $1, $2, $3); }
| ClassMethodList MainFunc	{ $$ = alloc_program(PROGRAM, NULL, $1, $2); }
| MainFunc	{ $$ = alloc_program(PROGRAM, NULL, NULL, $1); }
;

ClassList: Class ClassList	{ $$ = change_class_prev($1, $2); }
|	{ $$ = NULL; }
;

Class: CLASS ID OBRACE PRIVATE COLON Member CBRACE	{ $$ = alloc_class(CLASS, $2, $6, NULL, NULL); }
| CLASS ID OBRACE PRIVATE COLON Member PUBLIC COLON Member CBRACE	{ $$ = alloc_class(CLASS, $2, $6, $9, NULL); }
| CLASS ID OBRACE PUBLIC COLON Member CBRACE	{ $$ = alloc_class(CLASS, $2, NULL, $6, NULL); }
| CLASS ID OBRACE CBRACE	{ $$ = alloc_class(CLASS, $2, NULL, NULL, NULL); }
;
Member: VarDeclList	{ $$ = alloc_member(MEMBER, $1, NULL, NULL); }
| VarDeclList MethodDeclList	{ $$ = alloc_member(MEMBER, $1, $2, NULL); }
| VarDeclList MethodDeclList MethodDefList	{ $$ = alloc_member(MEMBER, $1, $2, $3); }
| VarDeclList MethodDefList	{ $$ = alloc_member(MEMBER, $1, NULL, $2); }
| MethodDeclList MethodDefList	{ $$ = alloc_member(MEMBER, NULL, $1, $2); }
| MethodDeclList	{ $$ = alloc_member(MEMBER, NULL, $1, NULL); }
| MethodDefList	{ $$ = alloc_member(MEMBER, NULL, NULL, $1); }
|	{ $$ = NULL; }
;

VarDeclList: VarDecl VarDeclList	{ $$ = change_vardecl_prev($1, $2); }
|	{ $$ = NULL; }
;
MethodDeclList: FuncDecl MethodDeclList	{ $$ = change_methoddecl_prev($1, $2); }
|	{ $$ = NULL; }
;
MethodDefList: FuncDef MethodDefList	{ $$ = change_methoddef_prev($1, $2); }
|	{ $$ = NULL; }
;

VarDecl: INT Ident COLON	{ $$ = alloc_vardecl(VARIABLE, NULL, $2, 1, 0, 0, NULL); }
| FLOAT Ident COLON	{ $$ = alloc_vardecl(VARIABLE, NULL, $2, 0, 0, 0, NULL); }
;
FuncDecl: Type ID OPRNTH ParamList CPRNTH COLON	{ $$ = alloc_methoddecl(FUNCDECL, $2, $1, $4, NULL); }
;
FuncDef: Type ID OPRNTH ParamList CPRNTH CompoundStmt	{ $$ = alloc_methoddef(FUNCDEF, $2, $1, $4, $6, NULL); }
;

ClassMethodList: ClassMethodDef ClassMethodList	{ $$ = change_classmethoddef_prev($1, $2); }
|	{ $$ = NULL; }
;
ClassMethodDef: Type ID COLON COLON ID OPRNTH ParamList CPRNTH CompoundStmt	{ $$ = alloc_classmethoddef(CLASSMETHODDEF, $1, $2, $5, $7, $9, NULL); }
| Type ID COLON COLON ID OPRNTH CPRNTH CompoundStmt { $$ = alloc_classmethoddef(CLASSMETHODDEF, $1, $2, $5, NULL, $8, NULL); }
;

MainFunc: INT MAIN OPRNTH CPRNTH CompoundStmt	{ $$ = alloc_mainfunc(MAIN, $5); }
;

ParamList: Param ParamList	{ $$ = change_param_prev($1, $2); }
| COMMA Param ParamList	{ $$ = change_param_prev($2, $3); }
|	{ $$ = NULL; }
;
Param: Type Ident	{ $$ = alloc_param(PARAM, $1, $2, NULL); }
;

Ident: ID	{ $$ = alloc_ident(ID, $1, 0); }
| ID OBRCK INTNUM CBRCK	{ $$ = alloc_ident(ID, $1, $3); }
;
Type: INT	{ $$ = alloc_type(TYPE, NULL, eInt); }
| FLOAT	{ $$ = alloc_type(TYPE, NULL, eFloat); }
| ID	{ $$ = alloc_type(TYPE, $1, eClass); }
;

CompoundStmt: OBRACE VarDeclList StmtList CBRACE	{ $$ = alloc_compoundstmt(COMPOUNDSTMT, $2, $3); }
| OBRACE StmtList CBRACE	{ $$ = alloc_compoundstmt(COMPOUNDSTMT, NULL, $2); }
| OBRACE CBRACE	{ $$ = alloc_compoundstmt(COMPOUNDSTMT, NULL, NULL); }
;

StmtList: Stmt StmtList	{ $$ = change_stmt_prev($1, $2); }
|	{ $$ = NULL; }
;

Stmt: ExprStmt	{ $$ = alloc_stmt(STMT, eExpr, $1, NULL); }
| AssignStmt { $$ = alloc_stmt(STMT, eAssign, $1, NULL); }
| RetStmt { $$ = alloc_stmt(STMT, eRet, $1, NULL); }
| WhileStmt { $$ = alloc_stmt(STMT, eWhile, $1, NULL); }
| DoStmt { $$ = alloc_stmt(STMT, eDo, $1, NULL); }
| ForStmt { $$ = alloc_stmt(STMT, eFor, $1, NULL); }
| IfStmt { $$ = alloc_stmt(STMT, eIf, $1, NULL); }
| CompoundStmt { $$ = alloc_stmt(STMT, eCompound, $1, NULL); }
;

ExprStmt: Expr COLON	{ $$ = alloc_exprstmt(EXPRSTMT, $1); }
;

AssignStmt: RefVarExpr ASSIGNMENT Expr COLON	{ $$ = alloc_assignstmt(ASSIGNMENT, $1, $3); }
;

RetStmt: RETURN Expr COLON	{ $$ = alloc_retstmt(RETURN, $2); }
| RETURN COLON	{ $$ = alloc_retstmt(RETURN, NULL); }
;

WhileStmt: WHILE OPRNTH Expr CPRNTH Stmt	{ $$ = alloc_whilestmt(WHILE, $3, $5); }
;

DoStmt: DO Stmt WHILE OPRNTH Expr CPRNTH COLON	{ $$ = alloc_dostmt(DO, $5, $2); }
;

ForStmt: FOR OPRNTH Expr SEMICOLON Expr SEMICOLON Expr CPRNTH Stmt	{ $$ = alloc_forstmt(FOR, $3, $5, $7, $9); }
;

IfStmt: IF OPRNTH Expr CPRNTH Stmt EL Stmt	{ $$ = alloc_ifstmt(IF, $3, $5, $7); }
| IF OPRNTH Expr CPRNTH Stmt	{ $$ = alloc_ifstmt(IF, $3, $5, NULL); }
;

Expr: OperExpr	{ Expr_e e = eOper;
$$ = alloc_expr(EXPR, e, 0, 0, $1); }
| RefExpr	{ Expr_e e = eOper;
$$ = alloc_expr(EXPR, e, 0, 0, $1); }
| INTNUM	{ Expr_e e = eInt;
$$ = alloc_expr(EXPR, e, $1, 0, NULL); }
| FLOATNUM	{ Expr_e e = eFloat;
$$ = alloc_expr(EXPR, e, $1, 0, NULL); }
;

OperExpr: UNOP Expr	{ Oper_e e = eUn;
$$ = alloc_operexpr(OPEREXPR, e, $2, NULL, NULL); }
| Expr ADDIOP Expr	{ Oper_e e = eAddi;
$$ = alloc_operexpr(OPEREXPR, e, NULL, $1, $3); }
| Expr MULTOP Expr	{ Oper_e e = eMult;
$$ = alloc_operexpr(OPEREXPR, e, NULL, $1, $3); }
| Expr RELAOP Expr	{ Oper_e e = eRela;
$$ = alloc_operexpr(OPEREXPR, e, NULL, $1, $3); }
| Expr EQLTOP Expr	{ Oper_e e = eEqlt;
$$ = alloc_operexpr(OPEREXPR, e, NULL, $1, $3); }
| OPRNTH Expr CPRNTH	{ Oper_e e = eBracket;
$$ = alloc_operexpr(OPEREXPR, e, NULL, $2, NULL); }
;

RefExpr: RefVarExpr	{ Ref_e e = eVar;
$$ = alloc_refexpr(REFEXPR, e, $1); }
| RefCallExpr	{ Ref_e e = eCall;
$$ = alloc_refexpr(REFEXPR, e, $1); }
;

RefVarExpr: RefExpr DOT IdentExpr	{ $$ = alloc_refvarexpr(REFVAREXPR, $1, $3); }
| IdentExpr	{ $$ = alloc_refvarexpr(REFCALLEXPR, NULL, $1); }
;

RefCallExpr: RefExpr DOT CallExpr	{ $$ = alloc_refcallexpr(REFCALLEXPR, $1, $3); }
| CallExpr	{ $$ = alloc_refcallexpr(REFCALLEXPR, NULL, $1); }
;
IdentExpr: ID OBRCK Expr CBRCK	{ $$ = alloc_identexpr(IDENTEXPR, $1, $3); }
| ID	{ $$ = alloc_identexpr(IDENTEXPR, $1, NULL); }
;

CallExpr: ID OPRNTH CPRNTH	{ $$ = alloc_callexpr(CALLEXPR, $1, NULL); }
| ID OPRNTH ArgList CPRNTH	{ $$ = alloc_callexpr(CALLEXPR, $1, $3); }
;

ArgList: Expr	{ $$ = alloc_arg(ARGLIST, $1, NULL); }
| Expr ArgList	{ $$ = alloc_arg(ARGLIST, $1, $2); }
| COMMA Expr ArgList	{ $$ = alloc_arg(ARGLIST, $2, $3); }
;

%%

/* C code */

int main(int argc, char* argv[]) {
	//yyin = fopen(argv[1], "r");
	yyparse();
	//close(yyin);
	return 0;
}

void yyerror(char* s) {
	printf("error: %s\n", s);
}

