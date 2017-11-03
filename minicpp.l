/* declarations */
%{
#include "minicpp.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
%%
define NAME / return TOKEN
%%
*/


%}

UNOP		[-]
ADDIOP		[-]|[+]
MULTOP		[*]|[/]|[%]
RELAOP		[<]|[>]|[<=]|[>=]
EQLTOP		[==]|[!=]
ID		[A-Za-z_][A-Za-z0-9_]*

%%
[\t]		{}
\n		{}
" "	{}

"class"		{return CLASS;}
"private"	{return PRIVATE;}
"public"	{return PUBLIC;}
"main"		{return MAIN;}
"return"	{return RETURN;}
"while"		{return WHILE;}
"do"		{return DO;}
"for"		{return FOR;}
"if"		{return IF;}
"else"		{return EL;}

"int"		{return INT;}
"float"		{return FLOAT;}

"{"		{return OBRACE;}
"}"		{return CBRACE;}
"("		{return OPRNTH;}
")"		{return CPRNTH;}
"["		{return OBRCK;}
"]"		{return CBRCK;}

";"		{return SEMICOLON;}
":"		{return COLON;}
"."		{return DOT;}
","		{return COMMA;}

{UNOP}		{return UNOP;}
{ADDIOP}	{return ADDIOP;}
{MULTOP}	{return MULTOP;}
{RELAOP}	{return RELAOP;}
{EQLTOP}	{return EQLTOP;}
{ID}		{strcat(yylval.id_val, yytext); return ID;}

[0-9]+		{yylval.int_val = atoi(yytext); return INTNUM;}
[0-9]+.[0-9]*	{
			float temp;
			sscanf(yytext, "%lf", &temp);
			yylval.float_val = temp;
			return FLOATNUM;
}

.		{fprintf(stderr, "error: mystery character '%c'\n", *yytext);}

%%

/* C code */
/*
int main() {
	yylex();
}
*/
