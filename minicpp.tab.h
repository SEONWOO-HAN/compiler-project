/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MINICPP_TAB_H_INCLUDED
# define YY_YY_MINICPP_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 258,
    CLASS = 259,
    PRIVATE = 260,
    PUBLIC = 261,
    MAIN = 262,
    RETURN = 263,
    WHILE = 264,
    DO = 265,
    FOR = 266,
    IF = 267,
    EL = 268,
    OBRACE = 269,
    CBRACE = 270,
    OPRNTH = 271,
    CPRNTH = 272,
    OBRCK = 273,
    CBRCK = 274,
    SEMICOLON = 275,
    COLON = 276,
    INT = 277,
    FLOAT = 278,
    FLOATNUM = 279,
    INTNUM = 280,
    ID = 281,
    RELAOP = 282,
    EQLTOP = 283,
    ADDIOP = 284,
    MULTOP = 285,
    ASSIGNMENT = 286,
    UNOP = 287,
    DOT = 288,
    COMMA = 289,
    PROGRAM = 290,
    MEMBER = 291,
    VARIABLE = 292,
    FUNCDECL = 293,
    FUNCDEF = 294,
    CLASSMETHODDEF = 295,
    PARAM = 296,
    TYPE = 297,
    COMPOUNDSTMT = 298,
    STMT = 299,
    EXPRSTMT = 300,
    EXPR = 301,
    OPEREXPR = 302,
    REFEXPR = 303,
    REFVAREXPR = 304,
    REFCALLEXPR = 305,
    IDENTEXPR = 306,
    CALLEXPR = 307,
    ARGLIST = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "minicpp.y" /* yacc.c:1909  */

	struct ast *node;
	char *id_val;
	int int_val;
	float float_val;

#line 115 "minicpp.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINICPP_TAB_H_INCLUDED  */
