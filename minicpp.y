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

%token PROGRAM

%type <node> Program
%type <node> ClassList Class Member VarDeclList MethodDeclList MethodDefList VarDecl FuncDecl FuncDef ClassMethodList
%type <node> ClassMethodDef
%type <node> MainFunc
%type <node> ParamList Param Ident Type
%type <node> CompoundStmt StmtList Stmt ExprStmt AssignStmt RetStmt WhileStmt DoStmt ForStmt IfStmt
%type <node> Expr OperExpr RefExpr RefVarExpr RefCallExpr IdentExpr CallExpr ArgList

%%

/* rules & actions */

Program: ClassList MainFunc	{ alloc_program(PROGRAM, $1, NULL, $2); }
| ClassList ClassMethodList MainFunc
| ClassMethodList MainFunc
| MainFunc
;

ClassList: Class ClassList	{ change_class_prev($1, $2); }
| ClassList
|
;

Class: CLASS ID OBRACE PRIVATE COLON Member CBRACE	{ alloc_class(CLASS, $2, $6, NULL, NULL); }
| CLASS ID OBRACE PRIVATE COLON Member PUBLIC COLON Member CBRACE
| CLASS ID OBRACE PUBLIC COLON Member CBRACE
| CLASS ID OBRACE CBRACE
;
Member: VarDeclList
| VarDeclList MethodDeclList
| VarDeclList MethodDeclList MethodDefList
| VarDeclList MethodDefList
| MethodDeclList MethodDefList
| MethodDeclList
| MethodDefList
|
;

VarDeclList: VarDecl VarDeclList
|
;
MethodDeclList: FuncDecl MethodDeclList
|
;
MethodDefList: FuncDef MethodDefList
|
;

VarDecl: INT Ident COLON
| FLOAT Ident COLON
;
FuncDecl: Type ID OPRNTH ParamList CPRNTH COLON
;
FuncDef: Type ID OPRNTH ParamList CPRNTH CompoundStmt
;

ClassMethodList: ClassMethodDef ClassMethodList
|
;
ClassMethodDef: Type ID COLON COLON ID OPRNTH ParamList CPRNTH CompoundStmt
| Type ID COLON COLON ID OPRNTH CPRNTH CompoundStmt
;

MainFunc: INT MAIN OPRNTH CPRNTH CompoundStmt
;

ParamList: Param ParamList
| COMMA Param ParamList
|
;
Param: Type Ident
;

Ident: ID
| ID OBRCK INTNUM CBRCK
;
Type: INT
| FLOAT
| ID
;

CompoundStmt: OBRACE VarDeclList StmtList CBRACE
| OBRACE StmtList CBRACE
| OBRACE CBRACE
;

StmtList: Stmt StmtList
|
;

Stmt: ExprStmt
| AssignStmt
| RetStmt
| WhileStmt
| DoStmt
| ForStmt
| IfStmt
| CompoundStmt
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

