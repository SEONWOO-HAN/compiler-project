/* declarations */

%{

#include <stdio.h>
#include <string.h>
#include "AST.h"

int yylex();

void yyerror(char *str);

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

%token PROGRAM MEMBER VARIABLE FUNCDECL FUNCDEF CLASSMETHODDEF PARAM TYPE COMPOUNDSTMT STMT

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
| ClassMethodList MainFunc	{ $$ = alloc_program(PROGRAM, NULL, $2, $3); }
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
| VarDeclList MethodDefList	{ $$ = alloc_member(MEMBER, $1, NULL, $3); }
| MethodDeclList MethodDefList	{ $$ = alloc_member(MEMBER, NULL, $2, $3); }
| MethodDeclList	{ $$ = alloc_member(MEMBER, NULL, $2, NULL); }
| MethodDefList	{ $$ = alloc_member(MEMBER, NULL, NULL, $3); }
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

VarDecl: INT Ident COLON	{ union { int intnum; float floatnum; } assigner;
$$ = alloc_vardecl(VARIABLE, NULL, $2, 1, assigner, NULL); }
| FLOAT Ident COLON	{ union { int intnum; float floatnum; } assigner;
$$ = alloc_vardecl(VARIABLE, NULL, $2, 0, assigner, NULL); }
;
FuncDecl: Type ID OPRNTH ParamList CPRNTH COLON	{ $$ = alloc_methoddecl(FUNCDECL, $2, $1, $4, NULL); }
;
FuncDef: Type ID OPRNTH ParamList CPRNTH CompoundStmt	{ $$ = alloc_methoddef(FUNCDEF, $2, $1, $4, $6, NULL); }
;

ClassMethodList: ClassMethodDef ClassMethodList	{ $$ = change_classmethoddef_prev($1, $2); }
|	{ $$ = NULL; }
;
ClassMethodDef: Type ID COLON COLON ID OPRNTH ParamList CPRNTH CompoundStmt	{ $$ = alloc_classmethoddef(CLASSMETHODDEF, $1, $2, $5, $7, $9, NULL); }
| Type ID COLON COLON ID OPRNTH CPRNTH CompoundStmt { $$ = alloc_classmethoddef(CLASSMETHODDEF, $1, $2, $5, NULL, $9, NULL); }
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
| ID OBRCK INTNUM CBRCK	{ $$ = alloc_ident(ID, $1, $3) }
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

Stmt: ExprStmt	{ union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.exprStmt = $1;
$$ = alloc_stmt(STMT, eExpr, type2, NULL); }
| AssignStmt { union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.assignStmt = $1;
$$ = alloc_stmt(STMT, eAssign, type2, NULL); }
| RetStmt { union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.retStmt = $1;
$$ = alloc_stmt(STMT, eRet, type2, NULL); }
| WhileStmt { union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.whileStmt = $1;
$$ = alloc_stmt(STMT, eWhile, type2, NULL); }
| DoStmt { union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.doStmt = $1;
$$ = alloc_stmt(STMT, eDo, type2, NULL); }
| ForStmt { union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.forStmt = $1;
$$ = alloc_stmt(STMT, eFor, type2, NULL); }
| IfStmt { union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.ifStmt = $1;
$$ = alloc_stmt(STMT, eIf, type2, NULL); }
| CompoundStmt { union { struct ast *exprStmt; struct ast *assignStmt; struct ast *retStmt; struct ast *whileStmt; struct ast *doStmt; struct ast *forStmt; struct ast *ifStmt; struct ast *compoundStmt;} type2; 
type2.compoundStmt = $1;
$$ = alloc_stmt(STMT, eCompound, type2, NULL); }
;

ExprStmt: Expr COLON
;

AssignStmt: RefVarExpr ASSIGNMENT Expr COLON
;

RetStmt: RETURN Expr COLON
| RETURN COLON
;

WhileStmt: WHILE OPRNTH Expr CPRNTH Stmt
;

DoStmt: DO Stmt WHILE OPRNTH Expr CPRNTH COLON
;

ForStmt: FOR OPRNTH Expr SEMICOLON Expr SEMICOLON Expr CPRNTH Stmt
;

IfStmt: IF OPRNTH Expr CPRNTH Stmt EL Stmt
| IF OPRNTH Expr CPRNTH Stmt
;

Expr: OperExpr
| RefExpr
| INTNUM
| FLOATNUM
;

OperExpr: UNOP Expr
| Expr ADDIOP Expr
| Expr MULTOP Expr
| Expr RELAOP Expr
| Expr EQLTOP Expr
| OPRNTH Expr CPRNTH
;

RefExpr: RefVarExpr
| RefCallExpr
;

RefVarExpr: RefExpr DOT IdentExpr
| IdentExpr
;

RefCallExpr: RefExpr DOT CallExpr
| CallExpr
;
IdentExpr: ID OBRCK Expr CBRCK
| ID
;

CallExpr: ID OPRNTH CPRNTH
| ID ID OPRNTH ArgList CPRNTH
;

ArgList: Expr
| Expr ArgList
| COMMA Expr ArgList
;

%%

/* C code */

int main() {
	yyparse();

}

void yyerror(char* s) {
	fprintf(stderr, "error: %s\n", s);
}

