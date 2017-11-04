/* declarations */

%{

#include <stdio.h>
#include <string.h>
#include "AST.h"

int yylex();

void yyerror(char *str);

FILE *yyin;

%}

%error-verbose

%union{
	struct ast *node;
	char *id_val;
	int int_val;
	float float_val;
}

%token END
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

Program: ClassList MainFunc	{ $$ = alloc_program(PROGRAM, $1, NULL, $2); print_ast($$); print_symbol_table($$); }
| ClassList ClassMethodList MainFunc	{ $$ = alloc_program(PROGRAM, $1, $2, $3); print_ast($$); print_symbol_table($$); }
| ClassMethodList MainFunc	{ $$ = alloc_program(PROGRAM, NULL, $1, $2); print_ast($$); print_symbol_table($$); }
| MainFunc	{ $$ = alloc_program(PROGRAM, NULL, NULL, $1); print_ast($$); print_symbol_table($$); }
;

ClassList: Class	{ $$ = $1; }
| Class ClassList	{ $$ = change_class_prev($1, $2); }
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
;

VarDeclList: VarDecl	{ $$ = $1; }
| VarDecl VarDeclList	{ $$ = change_vardecl_prev($1, $2); }
;
MethodDeclList: FuncDecl	{ $$ = $1; }
| FuncDecl MethodDeclList	{ $$ = change_methoddecl_prev($1, $2); }
;
MethodDefList: FuncDef	{ $$ = $1; }
| FuncDef MethodDefList	{ $$ = change_methoddef_prev($1, $2); }
;

VarDecl: INT Ident SEMICOLON	{ $$ = alloc_vardecl(VARIABLE, NULL, $2, 1, 0, 0, NULL); }
| FLOAT Ident SEMICOLON	{ $$ = alloc_vardecl(VARIABLE, NULL, $2, 0, 0, 0, NULL); }
;
FuncDecl: Type Ident OPRNTH CPRNTH SEMICOLON	{ $$ = alloc_methoddecl(FUNCDECL, $2, $1, NULL, NULL); }
| Type Ident OPRNTH ParamList CPRNTH SEMICOLON { $$ = alloc_methoddecl(FUNCDECL, $2, $1, $4, NULL); }
;
FuncDef:  Type Ident OPRNTH CPRNTH CompoundStmt { $$ = alloc_methoddef(FUNCDEF, $2, $1, NULL, $5, NULL); }
| Type Ident OPRNTH ParamList CPRNTH CompoundStmt	{ $$ = alloc_methoddef(FUNCDEF, $2, $1, $4, $6, NULL); }
;

ClassMethodList: ClassMethodDef	{ $$ = $1; }
| ClassMethodDef ClassMethodList	{ $$ = change_classmethoddef_prev($1, $2); }
;
ClassMethodDef: Type Ident COLON COLON Ident OPRNTH ParamList CPRNTH CompoundStmt	{ $$ = alloc_classmethoddef(CLASSMETHODDEF, $1, $2, $5, $7, $9, NULL); }
| Type Ident COLON COLON Ident OPRNTH CPRNTH CompoundStmt { $$ = alloc_classmethoddef(CLASSMETHODDEF, $1, $2, $5, NULL, $8, NULL); }
;

MainFunc: INT MAIN OPRNTH CPRNTH CompoundStmt	{ $$ = alloc_mainfunc(MAIN, $5); }
;

ParamList: Param { $$ = $1; }
| Param COMMA ParamList	{ $$ = change_param_prev($1, $3); }
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

StmtList: Stmt	{ $$ = $1; }
| Stmt StmtList { $$ = change_stmt_prev($1, $2); }
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

ExprStmt: Expr SEMICOLON	{ $$ = alloc_exprstmt(EXPRSTMT, $1); }
;

AssignStmt: RefVarExpr ASSIGNMENT Expr SEMICOLON	{ $$ = alloc_assignstmt(ASSIGNMENT, $1, $3); }
;

RetStmt: RETURN Expr SEMICOLON	{ $$ = alloc_retstmt(RETURN, $2); }
| RETURN SEMICOLON	{ $$ = alloc_retstmt(RETURN, NULL); }
;

WhileStmt: WHILE OPRNTH Expr CPRNTH Stmt	{ $$ = alloc_whilestmt(WHILE, $3, $5); }
;

DoStmt: DO Stmt WHILE OPRNTH Expr CPRNTH SEMICOLON	{ $$ = alloc_dostmt(DO, $5, $2); }
;

ForStmt: FOR OPRNTH Expr SEMICOLON Expr SEMICOLON Expr CPRNTH Stmt	{ $$ = alloc_forstmt(FOR, $3, $5, $7, $9); }
;

IfStmt: IF OPRNTH Expr CPRNTH Stmt EL Stmt	{ $$ = alloc_ifstmt(IF, $3, $5, $7); }
| IF OPRNTH Expr CPRNTH Stmt	{ $$ = alloc_ifstmt(IF, $3, $5, NULL); }
;

Expr: OperExpr	{ $$ = alloc_expr(EXPR, eOper, 0, 0, $1); }
| RefExpr	{ $$ = alloc_expr(EXPR, eRef, 0, 0, $1); }
| INTNUM	{ $$ = alloc_expr(EXPR, eIntnum, $1, 0, NULL); }
| FLOATNUM	{ $$ = alloc_expr(EXPR, eFloatnum, 0, $1, NULL); }
;

OperExpr: UNOP Expr	{ $$ = alloc_operexpr(OPEREXPR, eUn, $2, NULL, NULL); }
| Expr ADDIOP Expr	{ $$ = alloc_operexpr(OPEREXPR, eAddi, NULL, $1, $3); }
| Expr MULTOP Expr	{ $$ = alloc_operexpr(OPEREXPR, eMult, NULL, $1, $3); }
| Expr RELAOP Expr	{ $$ = alloc_operexpr(OPEREXPR, eRela, NULL, $1, $3); }
| Expr EQLTOP Expr	{ $$ = alloc_operexpr(OPEREXPR, eEqlt, NULL, $1, $3); }
| OPRNTH Expr CPRNTH	{ $$ = alloc_operexpr(OPEREXPR, eBracket, $2, NULL, NULL); }
;

RefExpr: RefVarExpr	{ $$ = alloc_refexpr(REFEXPR, eVar, $1); }
| RefCallExpr	{ $$ = alloc_refexpr(REFEXPR, eCall, $1); }
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
| Expr COMMA ArgList	{ $$ = alloc_arg(ARGLIST, $1, $3); }
;

%%

/* C code */

int main(int argc, char* argv[]) {
	yyin = fopen(argv[1], "r");
	extern int yydebug;
	yydebug = 1;
	yyparse();
	close(yyin);
	return 0;
}

void yyerror(char* s) {
	printf("error: %s\n", s);
}

