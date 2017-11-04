/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "minicpp.y" /* yacc.c:339  */


#include <stdio.h>
#include <string.h>
#include "AST.h"

int yylex();

void yyerror(char *str);

FILE *yyin;


#line 80 "minicpp.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "minicpp.tab.h".  */
#ifndef YY_YY_MINICPP_TAB_H_INCLUDED
# define YY_YY_MINICPP_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CLASS = 258,
    PRIVATE = 259,
    PUBLIC = 260,
    MAIN = 261,
    RETURN = 262,
    WHILE = 263,
    DO = 264,
    FOR = 265,
    IF = 266,
    EL = 267,
    OBRACE = 268,
    CBRACE = 269,
    OPRNTH = 270,
    CPRNTH = 271,
    OBRCK = 272,
    CBRCK = 273,
    SEMICOLON = 274,
    COLON = 275,
    INT = 276,
    FLOAT = 277,
    FLOATNUM = 278,
    INTNUM = 279,
    ID = 280,
    RELAOP = 281,
    EQLTOP = 282,
    ADDIOP = 283,
    MULTOP = 284,
    ASSIGNMENT = 285,
    UNOP = 286,
    DOT = 287,
    COMMA = 288,
    PROGRAM = 289,
    MEMBER = 290,
    VARIABLE = 291,
    FUNCDECL = 292,
    FUNCDEF = 293,
    CLASSMETHODDEF = 294,
    PARAM = 295,
    TYPE = 296,
    COMPOUNDSTMT = 297,
    STMT = 298,
    EXPRSTMT = 299,
    EXPR = 300,
    OPEREXPR = 301,
    REFEXPR = 302,
    REFVAREXPR = 303,
    REFCALLEXPR = 304,
    IDENTEXPR = 305,
    CALLEXPR = 306,
    ARGLIST = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "minicpp.y" /* yacc.c:355  */

	struct ast *node;
	char *id_val;
	int int_val;
	float float_val;

#line 180 "minicpp.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINICPP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "minicpp.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    54,    55,    56,    59,    60,    63,    64,
      65,    66,    68,    69,    70,    71,    72,    73,    74,    75,
      78,    79,    81,    82,    84,    85,    88,    89,    91,    93,
      96,    97,    99,   100,   103,   106,   107,   108,   110,   113,
     114,   116,   117,   118,   121,   122,   123,   126,   127,   130,
     131,   132,   133,   134,   135,   136,   137,   140,   143,   146,
     147,   150,   153,   156,   159,   160,   163,   164,   165,   166,
     169,   170,   171,   172,   173,   174,   177,   178,   181,   182,
     185,   186,   188,   189,   192,   193,   196,   197,   198
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PRIVATE", "PUBLIC", "MAIN",
  "RETURN", "WHILE", "DO", "FOR", "IF", "EL", "OBRACE", "CBRACE", "OPRNTH",
  "CPRNTH", "OBRCK", "CBRCK", "SEMICOLON", "COLON", "INT", "FLOAT",
  "FLOATNUM", "INTNUM", "ID", "RELAOP", "EQLTOP", "ADDIOP", "MULTOP",
  "ASSIGNMENT", "UNOP", "DOT", "COMMA", "PROGRAM", "MEMBER", "VARIABLE",
  "FUNCDECL", "FUNCDEF", "CLASSMETHODDEF", "PARAM", "TYPE", "COMPOUNDSTMT",
  "STMT", "EXPRSTMT", "EXPR", "OPEREXPR", "REFEXPR", "REFVAREXPR",
  "REFCALLEXPR", "IDENTEXPR", "CALLEXPR", "ARGLIST", "$accept", "Program",
  "ClassList", "Class", "Member", "VarDeclList", "MethodDeclList",
  "MethodDefList", "VarDecl", "FuncDecl", "FuncDef", "ClassMethodList",
  "ClassMethodDef", "MainFunc", "ParamList", "Param", "Ident", "Type",
  "CompoundStmt", "StmtList", "Stmt", "ExprStmt", "AssignStmt", "RetStmt",
  "WhileStmt", "DoStmt", "ForStmt", "IfStmt", "Expr", "OperExpr",
  "RefExpr", "RefVarExpr", "RefCallExpr", "IdentExpr", "CallExpr",
  "ArgList", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,    26,    51,  -124,  -124,    95,    72,   102,   104,   144,
    -124,   110,   127,   130,  -124,   104,  -124,  -124,    51,  -124,
    -124,  -124,   129,   115,   136,  -124,   133,   141,   159,  -124,
     171,   168,   195,   195,   149,  -124,   183,   170,   170,    33,
     144,   144,  -124,    90,   144,   144,   174,   187,   163,   203,
     123,   206,   216,  -124,   166,   170,   170,  -124,  -124,    18,
     166,   123,  -124,   201,   123,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,    -8,  -124,   204,   202,  -124,  -124,  -124,     1,
     218,   214,   226,   227,  -124,   144,  -124,  -124,   221,  -124,
    -124,   223,  -124,   234,  -124,  -124,    57,  -124,   166,   242,
     166,   166,    46,   152,   166,  -124,   237,  -124,  -124,  -124,
     166,   166,   166,   166,   228,   166,   171,   144,   236,     7,
     170,   230,  -124,  -124,   195,  -124,   240,   241,     7,  -124,
      53,   243,   200,   176,  -124,  -124,   166,    75,   244,   196,
    -124,   114,   114,   232,  -124,  -124,  -124,   211,  -124,     7,
     171,  -124,  -124,   239,   245,     7,     7,   246,   123,   166,
     166,   123,    75,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,   247,   248,    12,  -124,   180,   215,   253,  -124,   171,
     249,  -124,  -124,   250,   166,   123,  -124,   184,  -124,   123,
    -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    41,    42,    43,     0,     0,     7,     0,     0,
       5,     0,     0,     0,     1,     0,     2,     6,     0,     4,
      41,    30,     0,     0,     0,     3,     0,     0,     0,    11,
       0,     0,    19,    19,     0,    34,     0,     0,     0,     0,
      12,    17,    18,    21,    23,    25,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,    69,    68,    83,
       0,    48,    56,     0,    48,    49,    50,    51,    52,    53,
      54,    55,     0,    66,    67,    76,    77,    79,    81,     0,
      39,     0,     0,     0,     8,    13,    15,    16,     0,    20,
      22,     0,    24,     0,    10,    60,     0,    76,     0,     0,
       0,     0,     0,     0,     0,    70,     0,    45,    47,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,    26,    27,    19,    14,     0,     0,    37,    59,
       0,     0,     0,     0,    75,    84,     0,    86,     0,     0,
      44,    73,    74,    71,    72,    78,    80,     0,    33,    37,
       0,    35,    38,     0,     0,    37,    37,     0,     0,     0,
       0,     0,     0,    87,    85,    82,    58,    36,    32,    40,
       9,     0,     0,     0,    61,     0,     0,    65,    88,     0,
       0,    28,    29,     0,     0,     0,    62,     0,    64,     0,
      63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   259,  -124,   -28,    20,    78,   -33,  -124,  -124,
    -124,    37,  -124,   101,   -78,   150,   -32,     4,   -29,    62,
     -48,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   -45,  -124,
    -124,   -34,  -124,   156,   157,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    39,    40,    41,    42,    43,    44,
      45,     8,     9,    10,   118,   119,    81,   120,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    97,    76,    77,    78,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      75,    35,    99,    96,    11,    47,    82,    86,    87,   102,
      11,   109,    92,    11,   163,   105,    75,   116,   110,   111,
     112,   113,    20,     3,    82,    34,     4,    75,    20,     3,
      75,   181,     4,   103,   117,   104,    46,    46,    83,   178,
     117,   151,     1,    15,    46,    88,    21,    84,    91,    88,
     157,    12,   125,   130,    61,   132,   133,    13,   137,   139,
       2,     3,   134,    89,     4,   141,   142,   143,   144,   158,
     147,   167,   110,   111,   112,   113,   129,   171,   172,   110,
     111,   112,   113,   110,   111,   112,   113,   148,   152,    88,
      54,   162,   137,     2,     3,    14,   154,     4,    57,    58,
      59,   110,   111,   112,   113,     1,    60,    16,   136,    19,
     174,    55,    56,   177,   175,   176,    25,   137,    85,    27,
      28,   168,    90,   106,    75,    18,   108,    75,    46,    29,
      48,    49,    50,    51,    52,    22,    34,   188,    54,   187,
      23,   190,   112,   113,   182,    24,    57,    58,    59,    26,
     182,    75,    30,    31,    60,    75,    48,    49,    50,    51,
      52,    32,    34,    53,    54,    20,     3,    54,   135,     4,
      55,    56,    57,    58,    59,    57,    58,    59,    54,    33,
      60,    54,    95,    60,    34,   136,    57,    58,    59,    57,
      58,    59,   161,    36,    60,    80,   183,    60,    79,    93,
     189,    94,   110,   111,   112,   113,   110,   111,   112,   113,
     110,   111,   112,   113,   165,   107,    37,    38,    98,   160,
       4,   100,   110,   111,   112,   113,   110,   111,   112,   113,
     166,   101,   115,   122,   184,   121,   114,   110,   111,   112,
     113,   110,   111,   112,   113,   123,   126,   124,   127,   128,
     131,   140,   150,    59,   153,   155,   156,   169,   159,   170,
     164,   113,   173,   179,   180,   185,    17,   149,   181,   186,
     145,   146
};

static const yytype_uint8 yycheck[] =
{
      34,    30,    50,    48,     0,    33,    38,    40,    41,    54,
       6,    19,    45,     9,   137,    60,    50,    16,    26,    27,
      28,    29,    21,    22,    56,    13,    25,    61,    21,    22,
      64,    19,    25,    15,    33,    17,    32,    33,     5,   162,
      33,   119,     3,     6,    40,    41,     9,    14,    44,    45,
     128,    25,    85,    98,    34,   100,   101,     6,   103,   104,
      21,    22,    16,    43,    25,   110,   111,   112,   113,    16,
     115,   149,    26,    27,    28,    29,    19,   155,   156,    26,
      27,    28,    29,    26,    27,    28,    29,   116,   120,    85,
      15,   136,   137,    21,    22,     0,   124,    25,    23,    24,
      25,    26,    27,    28,    29,     3,    31,     6,    33,     8,
     158,    21,    22,   161,   159,   160,    15,   162,    40,     4,
       5,   150,    44,    61,   158,    21,    64,   161,   124,    14,
       7,     8,     9,    10,    11,    25,    13,   185,    15,   184,
      13,   189,    28,    29,   173,    15,    23,    24,    25,    20,
     179,   185,    16,    20,    31,   189,     7,     8,     9,    10,
      11,    20,    13,    14,    15,    21,    22,    15,    16,    25,
      21,    22,    23,    24,    25,    23,    24,    25,    15,    20,
      31,    15,    19,    31,    13,    33,    23,    24,    25,    23,
      24,    25,    16,    25,    31,    25,    16,    31,    15,    25,
      16,    14,    26,    27,    28,    29,    26,    27,    28,    29,
      26,    27,    28,    29,    18,    14,    21,    22,    15,    19,
      25,    15,    26,    27,    28,    29,    26,    27,    28,    29,
      19,    15,    30,    19,    19,    17,    32,    26,    27,    28,
      29,    26,    27,    28,    29,    19,    25,    20,    25,    15,
       8,    14,    16,    25,    24,    15,    15,    18,    15,    14,
      16,    29,    16,    16,    16,    12,     7,   117,    19,    19,
     114,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    21,    22,    25,    54,    55,    56,    64,    65,
      66,    70,    25,     6,     0,    64,    66,    55,    21,    66,
      21,    64,    25,    13,    15,    66,    20,     4,     5,    14,
      16,    20,    20,    20,    13,    71,    25,    21,    22,    57,
      58,    59,    60,    61,    62,    63,    70,    57,     7,     8,
       9,    10,    11,    14,    15,    21,    22,    23,    24,    25,
      31,    58,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    15,
      25,    69,    69,     5,    14,    59,    60,    60,    70,    58,
      59,    70,    60,    25,    14,    19,    81,    84,    15,    73,
      15,    15,    81,    15,    17,    81,    72,    14,    72,    19,
      26,    27,    28,    29,    32,    30,    16,    33,    67,    68,
      70,    17,    19,    19,    20,    60,    25,    25,    15,    19,
      81,     8,    81,    81,    16,    16,    33,    81,    88,    81,
      14,    81,    81,    81,    81,    86,    87,    81,    71,    68,
      16,    67,    69,    24,    57,    15,    15,    67,    16,    15,
      19,    16,    81,    88,    16,    18,    19,    67,    71,    18,
      14,    67,    67,    16,    73,    81,    81,    73,    88,    16,
      16,    19,    71,    16,    19,    12,    19,    81,    73,    16,
      73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    54,    54,    55,    55,    56,    56,
      56,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    63,
      64,    64,    65,    65,    66,    67,    67,    67,    68,    69,
      69,    70,    70,    70,    71,    71,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    75,    76,
      76,    77,    78,    79,    80,    80,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     2,     0,     7,    10,
       7,     4,     1,     2,     3,     2,     2,     1,     1,     0,
       2,     0,     2,     0,     2,     0,     3,     3,     6,     6,
       2,     0,     9,     8,     5,     2,     3,     0,     2,     1,
       4,     1,     1,     1,     4,     3,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     3,
       2,     5,     7,     9,     7,     5,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     1,     1,     3,     1,
       3,     1,     4,     1,     3,     4,     1,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 53 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, (yyvsp[-1].node), NULL, (yyvsp[0].node)); }
#line 1426 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 54 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1432 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, NULL, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1438 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 56 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, NULL, NULL, (yyvsp[0].node)); }
#line 1444 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_class_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1450 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1456 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 63 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-5].id_val), (yyvsp[-1].node), NULL, NULL); }
#line 1462 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 64 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-8].id_val), (yyvsp[-4].node), (yyvsp[-1].node), NULL); }
#line 1468 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 65 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-5].id_val), NULL, (yyvsp[-1].node), NULL); }
#line 1474 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-2].id_val), NULL, NULL, NULL); }
#line 1480 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 68 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[0].node), NULL, NULL); }
#line 1486 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 69 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 1492 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 70 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1498 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 71 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[-1].node), NULL, (yyvsp[0].node)); }
#line 1504 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, NULL, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1510 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, NULL, (yyvsp[0].node), NULL); }
#line 1516 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 74 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, NULL, NULL, (yyvsp[0].node)); }
#line 1522 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1528 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_vardecl_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1534 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 79 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1540 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 81 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_methoddecl_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1546 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1552 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 84 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_methoddef_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1558 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 85 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1564 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_vardecl(VARIABLE, NULL, (yyvsp[-1].node), 1, 0, 0, NULL); }
#line 1570 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_vardecl(VARIABLE, NULL, (yyvsp[-1].node), 0, 0, 0, NULL); }
#line 1576 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 91 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_methoddecl(FUNCDECL, (yyvsp[-4].id_val), (yyvsp[-5].node), (yyvsp[-2].node), NULL); }
#line 1582 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 93 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_methoddef(FUNCDEF, (yyvsp[-4].id_val), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 1588 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 96 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_classmethoddef_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1594 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1600 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 99 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_classmethoddef(CLASSMETHODDEF, (yyvsp[-8].node), (yyvsp[-7].id_val), (yyvsp[-4].id_val), (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 1606 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_classmethoddef(CLASSMETHODDEF, (yyvsp[-7].node), (yyvsp[-6].id_val), (yyvsp[-3].id_val), NULL, (yyvsp[0].node), NULL); }
#line 1612 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 103 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_mainfunc(MAIN, (yyvsp[0].node)); }
#line 1618 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_param_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1624 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_param_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1630 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1636 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_param(PARAM, (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 1642 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 113 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ident(ID, (yyvsp[0].id_val), 0); }
#line 1648 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ident(ID, (yyvsp[-3].id_val), (yyvsp[-1].int_val)); }
#line 1654 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 116 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_type(TYPE, NULL, eInt); }
#line 1660 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 117 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_type(TYPE, NULL, eFloat); }
#line 1666 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 118 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_type(TYPE, (yyvsp[0].id_val), eClass); }
#line 1672 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 121 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_compoundstmt(COMPOUNDSTMT, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1678 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 122 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_compoundstmt(COMPOUNDSTMT, NULL, (yyvsp[-1].node)); }
#line 1684 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 123 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_compoundstmt(COMPOUNDSTMT, NULL, NULL); }
#line 1690 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 126 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_stmt_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1696 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 127 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1702 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 130 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eExpr, (yyvsp[0].node), NULL); }
#line 1708 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 131 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eAssign, (yyvsp[0].node), NULL); }
#line 1714 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 132 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eRet, (yyvsp[0].node), NULL); }
#line 1720 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eWhile, (yyvsp[0].node), NULL); }
#line 1726 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eDo, (yyvsp[0].node), NULL); }
#line 1732 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eFor, (yyvsp[0].node), NULL); }
#line 1738 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eIf, (yyvsp[0].node), NULL); }
#line 1744 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eCompound, (yyvsp[0].node), NULL); }
#line 1750 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 140 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_exprstmt(EXPRSTMT, (yyvsp[-1].node)); }
#line 1756 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_assignstmt(ASSIGNMENT, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1762 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_retstmt(RETURN, (yyvsp[-1].node)); }
#line 1768 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_retstmt(RETURN, NULL); }
#line 1774 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 150 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_whilestmt(WHILE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1780 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 153 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_dostmt(DO, (yyvsp[-2].node), (yyvsp[-5].node)); }
#line 1786 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 156 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_forstmt(FOR, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1792 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 159 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ifstmt(IF, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1798 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 160 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ifstmt(IF, (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 1804 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 163 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eOper, 0, 0, (yyvsp[0].node)); }
#line 1810 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 164 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eRef, 0, 0, (yyvsp[0].node)); }
#line 1816 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 165 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eIntnum, (yyvsp[0].int_val), 0, NULL); }
#line 1822 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 166 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eFloatnum, 0, (yyvsp[0].float_val), NULL); }
#line 1828 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 169 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eUn, (yyvsp[0].node), NULL, NULL); }
#line 1834 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 170 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eAddi, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1840 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 171 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eMult, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1846 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 172 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eRela, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1852 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 173 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eEqlt, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1858 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 174 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eBracket, (yyvsp[-1].node), NULL, NULL); }
#line 1864 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 177 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refexpr(REFEXPR, eVar, (yyvsp[0].node)); }
#line 1870 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 178 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refexpr(REFEXPR, eCall, (yyvsp[0].node)); }
#line 1876 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 181 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refvarexpr(REFVAREXPR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1882 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 182 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refvarexpr(REFCALLEXPR, NULL, (yyvsp[0].node)); }
#line 1888 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 185 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refcallexpr(REFCALLEXPR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1894 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 186 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refcallexpr(REFCALLEXPR, NULL, (yyvsp[0].node)); }
#line 1900 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 188 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_identexpr(IDENTEXPR, (yyvsp[-3].id_val), (yyvsp[-1].node)); }
#line 1906 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 189 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_identexpr(IDENTEXPR, (yyvsp[0].id_val), NULL); }
#line 1912 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 192 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_callexpr(CALLEXPR, (yyvsp[-2].id_val), NULL); }
#line 1918 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 193 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_callexpr(CALLEXPR, (yyvsp[-3].id_val), (yyvsp[-1].node)); }
#line 1924 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 196 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_arg(ARGLIST, (yyvsp[0].node), NULL); }
#line 1930 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 197 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_arg(ARGLIST, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1936 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 198 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_arg(ARGLIST, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1942 "minicpp.tab.c" /* yacc.c:1646  */
    break;


#line 1946 "minicpp.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 201 "minicpp.y" /* yacc.c:1906  */


/* C code */

int main(int argc, char* argv[]) {
	//yyin = fopen(argv[1], "r");
	yyparse();
	//close(yyin);
	return 0;
}

void yyerror(char* s) {
	printf("error: %s\n", s);
}

