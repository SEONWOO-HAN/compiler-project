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

/*rules & actions */

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

