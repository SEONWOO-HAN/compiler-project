
%{
#include "minicpp.tab.h"
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
FLOATNUM	[0-9]+.[0-9]*
INTNUM		[0-9]+
ID			[A-Za-z_][A-Za-z0-9_]*
ASSIGNMENT	[=]

%%
.			{yyerror("error");}
[ \t\n]		;
"class" :	{return CLASS;}
"private" :	{return PRIVATE;}
"public" :	{return PUBLIC;}
"main" :		{return MAIN;}
"return" :	{return RETURN;}
"while" :	{return WHILE;}
"do" :		{return DO;}
"for" :		{return FOR;}
"if"	 :		{return IF;}
"else" :		{return EL;}

"{" :		{return OBRACE;}
"}" :		{return CBRACE;}
"(" :		{return OPRNTH;}
")" :		{return CPRNTH;}
"[" :		{return OBRCK;}
"]" :		{return CBRCK;}

";" :		{return SEMICOLON;}
":" :		{return COLON;}

{UNOP} :		{return UNOP;}
{ADDIOP} :	{return ADDIOP;}
{MULTOP} :	{return MULTOP;}
{RELAOP} :	{return RELAOP;}
{EQLTOP} :	{return EQLTOP;}
{FLOATNUM} :	{return FLOATNUM;}
{INTNUM} :	{return INTNUM;}
{ID} :		{return ID;}
{ASSIGNMENT}:{return ASSIGNMENT;}
{INTNUM} :	{ yylval = atoi(yytext); return INTNUM;}
{FLOATNUM} :	{
				float temp;
				sscanf(yytext, "%lf", %temp);
				yylval.float_val = temp;
				return FLOATNUM;
}