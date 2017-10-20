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

classlist: ADDIOP { printf("amuguna"); }

%%

/* C code */

int main() {
	yyparse();

}

void yyerror(char* s) {
	fprintf(stderr, "error: %s\n", s);
}

