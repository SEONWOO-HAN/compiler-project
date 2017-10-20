/* declarations */

%{

#include <stdio.h>
#include <string.h>

int yylex();

void yyerror(char *str);

%}

%union{
	float float_val;
}

%token CLASS PRIVATE PUBLIC MAIN RETURN WHILE DO FOR IF EL
%token OBRACE CBRACE OPRNTH CPRNTH OBRCK CBRCK SEMICOLON COLON
%token INT FLOAT
%token FLOATNUM INTNUM ID

%left RELAOP EQLTOP 
%left ADDIOP
%left MULTOP
%right ASSIGNMENT
%nonassoc UNOP

%%

/* rules & actions */

Program: ClassList MainFunc
| ClassList ClassMethodList MainFunc
| ClassMethodList MainFunc
| MainFunc
;

ClassList: Class ClassList
| ClassList
|
;

Class: CLASS ID OBRACE PRIVATE COLON Member CBRACE
| CLASS ID OBRACE PRIVATE COLON Member PUBLIC COLON Member CBRACE
| CLASS ID OBRACE PUBLIC COLON Member CBRACE
| CLASS ID OBRACE CBRACE
;
Member: VarDeclList
| VarDeclList MethodDeclList
| VarDeclList MethodDeclList MethodDefList
| VarDeclList MethodDeflList
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

OperExpr: UNUP Expr
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

