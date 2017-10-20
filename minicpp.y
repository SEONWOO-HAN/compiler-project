/* declarations */

%{

#include <stdio.h>
#include <string.h>

void yyerror(const char *str)
{
	fprintf(stderr, "error: %s\n", str);
}

main()
{
	yyparse();

}

%}

%union{
	float float_val;
}

%token CLASS PRIVATE PUBLIC MAIN RETURN WHILE DO FOR IF EL
%token OBRACE CBRACE OPRNTH CPRNTH OBRCK CBRCK SEMICOLON COLON
%token FLOATNUM INTNUM ID

%left RELAOP EQLTOP 
%left ADDIOP
%left MULTOP
%right ASSIGNMENT
%nonassoc UNOP

%%
/*rules & actions */



%%

/* C code */
