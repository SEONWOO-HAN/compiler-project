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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "minicpp.tab.h".  */
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
#line 19 "minicpp.y" /* yacc.c:355  */

	struct ast *node;
	char *id_val;
	int int_val;
	float float_val;

#line 181 "minicpp.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINICPP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "minicpp.tab.c" /* yacc.c:358  */

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
#define YYLAST   275

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    58,    59,    62,    63,    66,    67,
      68,    69,    71,    72,    73,    74,    75,    76,    77,    80,
      81,    83,    84,    86,    87,    90,    91,    93,    94,    96,
      97,   100,   101,   103,   104,   107,   110,   111,   113,   116,
     117,   119,   120,   121,   124,   125,   126,   129,   130,   133,
     134,   135,   136,   137,   138,   139,   140,   143,   146,   149,
     150,   153,   156,   159,   162,   163,   166,   167,   168,   169,
     172,   173,   174,   175,   176,   177,   180,   181,   184,   185,
     188,   189,   191,   192,   195,   196,   199,   200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "CLASS", "PRIVATE", "PUBLIC",
  "MAIN", "RETURN", "WHILE", "DO", "FOR", "IF", "EL", "OBRACE", "CBRACE",
  "OPRNTH", "CPRNTH", "OBRCK", "CBRCK", "SEMICOLON", "COLON", "INT",
  "FLOAT", "FLOATNUM", "INTNUM", "ID", "RELAOP", "EQLTOP", "ADDIOP",
  "MULTOP", "ASSIGNMENT", "UNOP", "DOT", "COMMA", "PROGRAM", "MEMBER",
  "VARIABLE", "FUNCDECL", "FUNCDEF", "CLASSMETHODDEF", "PARAM", "TYPE",
  "COMPOUNDSTMT", "STMT", "EXPRSTMT", "EXPR", "OPEREXPR", "REFEXPR",
  "REFVAREXPR", "REFCALLEXPR", "IDENTEXPR", "CALLEXPR", "ARGLIST",
  "$accept", "Program", "ClassList", "Class", "Member", "VarDeclList",
  "MethodDeclList", "MethodDefList", "VarDecl", "FuncDecl", "FuncDef",
  "ClassMethodList", "ClassMethodDef", "MainFunc", "ParamList", "Param",
  "Ident", "Type", "CompoundStmt", "StmtList", "Stmt", "ExprStmt",
  "AssignStmt", "RetStmt", "WhileStmt", "DoStmt", "ForStmt", "IfStmt",
  "Expr", "OperExpr", "RefExpr", "RefVarExpr", "RefCallExpr", "IdentExpr",
  "CallExpr", "ArgList", YY_NULLPTR
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
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,   -15,    20,  -118,  -118,    34,    50,    56,    41,   120,
    -118,    42,    63,    75,  -118,    41,  -118,  -118,    20,  -118,
    -118,  -118,    88,    92,    14,   100,  -118,    96,   109,   111,
     113,  -118,   131,   129,    42,   141,   141,   146,  -118,  -118,
     136,    42,    42,    35,   120,   120,  -118,    22,   120,   120,
      42,   144,   115,   161,    70,   172,   173,  -118,   160,    42,
      42,  -118,  -118,   106,   160,    70,  -118,   167,    70,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,   185,  -118,   157,   175,
    -118,  -118,  -118,    25,   187,   188,   190,  -118,   120,  -118,
    -118,    42,  -118,  -118,    42,  -118,   194,  -118,  -118,   189,
    -118,   160,   212,   160,   160,    71,   149,   160,  -118,   207,
    -118,  -118,  -118,   160,   160,   160,   160,   197,   160,   131,
     208,   192,    42,  -118,  -118,   141,  -118,   220,   221,   224,
    -118,    99,   222,   200,   166,  -118,  -118,   239,   223,    -5,
    -118,   150,   150,   209,  -118,  -118,  -118,   204,  -118,   131,
     120,  -118,   234,   231,   238,    39,   235,    70,   160,   160,
      70,   160,  -118,  -118,  -118,  -118,  -118,  -118,   131,   241,
     236,   242,  -118,  -118,    83,  -118,   170,   215,   249,  -118,
     131,   243,  -118,  -118,   245,   160,    70,  -118,   174,  -118,
      70,  -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    41,    42,    43,     0,     0,     6,     0,     0,
       5,     0,     0,     0,     1,     0,     2,     7,     0,     4,
      41,    32,    39,     0,     0,     0,     3,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    35,    40,
       0,     0,     0,     0,    12,    17,    18,    19,    21,    23,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,    69,    68,    83,     0,     0,    56,     0,    47,    49,
      50,    51,    52,    53,    54,    55,     0,    66,    67,    76,
      77,    79,    81,     0,     0,     0,     0,     8,    13,    15,
      16,     0,    20,    22,     0,    24,     0,    10,    60,     0,
      76,     0,     0,     0,     0,     0,     0,     0,    70,     0,
      45,    48,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    25,    26,     0,    14,     0,     0,     0,
      59,     0,     0,     0,     0,    75,    84,    86,     0,     0,
      44,    73,    74,    71,    72,    78,    80,     0,    34,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    82,    58,    33,    37,     9,     0,     0,
       0,     0,    27,    29,     0,    61,     0,     0,    65,    87,
       0,     0,    28,    30,     0,     0,     0,    62,     0,    64,
       0,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,   244,  -118,   -32,   -29,    67,   -39,  -118,  -118,
    -118,     7,  -118,    77,  -117,  -118,    -4,    26,   -30,    40,
     -53,  -118,  -118,  -118,  -118,  -118,  -118,  -118,   -49,  -118,
    -118,   -37,  -118,   153,   154,   114
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    43,    44,    45,    46,    47,    48,
      49,     8,     9,    10,   120,   121,    84,   122,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   100,    80,    81,    82,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      79,   102,    38,    99,    51,    89,    90,    23,    65,   105,
      95,    12,   156,    15,   163,   108,    21,    79,    92,    29,
      30,     1,   113,   114,   115,   116,    11,    13,    79,    31,
      40,    79,    11,   166,    14,    11,   169,   171,    85,     2,
       3,    86,   119,     4,    59,    60,    96,    20,     3,   126,
      87,     4,   131,    37,   133,   134,    85,   137,   139,   172,
       1,    50,    50,    18,   141,   142,   143,   144,    22,   147,
      50,    91,     2,     3,    94,    91,     4,    24,    52,    53,
      54,    55,    56,    16,    37,    19,    58,   127,   135,   148,
     128,    25,    26,   152,    61,    62,    63,    37,   113,   114,
     115,   116,    64,   182,   175,   109,    27,   178,   111,   176,
     177,    88,   137,    28,    91,    93,   157,    32,   151,   165,
      79,    33,   106,    79,   107,   173,   113,   114,   115,   116,
      34,    58,    35,   189,    36,    98,   188,   191,   173,    61,
      62,    63,    20,     3,   183,    37,     4,    64,    39,    79,
     183,    50,    83,    79,    52,    53,    54,    55,    56,    97,
      37,    57,    58,    41,    42,    58,   136,     4,    59,    60,
      61,    62,    63,    61,    62,    63,    58,   101,    64,   115,
     116,    64,   110,   160,    61,    62,    63,   184,   103,   104,
     117,   190,    64,   113,   114,   115,   116,   113,   114,   115,
     116,   113,   114,   115,   116,   112,   118,   123,   124,   130,
     129,   125,   113,   114,   115,   116,   113,   114,   115,   116,
     159,   132,   140,    63,   164,   149,   150,   113,   114,   115,
     116,   113,   114,   115,   116,   185,   153,   154,   158,   116,
     162,   155,   113,   114,   115,   116,    20,     3,   168,   167,
       4,    17,   174,    20,     3,   170,   172,     4,   180,   181,
      20,     3,   186,   182,     4,   187,   113,   114,   115,   116,
     145,   146,     0,   161,     0,   179
};

static const yytype_int16 yycheck[] =
{
      37,    54,    32,    52,    36,    44,    45,    11,    37,    58,
      49,    26,   129,     6,    19,    64,     9,    54,    47,     5,
       6,     4,    27,    28,    29,    30,     0,     7,    65,    15,
      34,    68,     6,   150,     0,     9,   153,   154,    42,    22,
      23,     6,    17,    26,    22,    23,    50,    22,    23,    88,
      15,    26,   101,    14,   103,   104,    60,   106,   107,    20,
       4,    35,    36,    22,   113,   114,   115,   116,    26,   118,
      44,    45,    22,    23,    48,    49,    26,    14,     8,     9,
      10,    11,    12,     6,    14,     8,    16,    91,    17,   119,
      94,    16,    15,   125,    24,    25,    26,    14,    27,    28,
      29,    30,    32,    20,   157,    65,    18,   160,    68,   158,
     159,    44,   161,    21,    88,    48,    17,    17,   122,   149,
     157,    25,    16,   160,    18,   155,    27,    28,    29,    30,
      21,    16,    21,   186,    21,    20,   185,   190,   168,    24,
      25,    26,    22,    23,   174,    14,    26,    32,    19,   186,
     180,   125,    16,   190,     8,     9,    10,    11,    12,    15,
      14,    15,    16,    22,    23,    16,    17,    26,    22,    23,
      24,    25,    26,    24,    25,    26,    16,    16,    32,    29,
      30,    32,    15,    17,    24,    25,    26,    17,    16,    16,
      33,    17,    32,    27,    28,    29,    30,    27,    28,    29,
      30,    27,    28,    29,    30,    20,    31,    20,    20,    20,
      16,    21,    27,    28,    29,    30,    27,    28,    29,    30,
      20,     9,    15,    26,    20,    17,    34,    27,    28,    29,
      30,    27,    28,    29,    30,    20,    16,    16,    16,    30,
      17,    17,    27,    28,    29,    30,    22,    23,    17,    15,
      26,     7,    17,    22,    23,    17,    20,    26,    17,    17,
      22,    23,    13,    20,    26,    20,    27,    28,    29,    30,
     117,   117,    -1,    34,    -1,   161
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    22,    23,    26,    55,    56,    57,    65,    66,
      67,    71,    26,     7,     0,    65,    67,    56,    22,    67,
      22,    65,    26,    70,    14,    16,    67,    18,    21,     5,
       6,    15,    17,    25,    21,    21,    21,    14,    72,    19,
      70,    22,    23,    58,    59,    60,    61,    62,    63,    64,
      71,    58,     8,     9,    10,    11,    12,    15,    16,    22,
      23,    24,    25,    26,    32,    59,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    16,    70,    70,     6,    15,    60,    61,
      61,    71,    59,    60,    71,    61,    70,    15,    20,    82,
      85,    16,    74,    16,    16,    82,    16,    18,    82,    73,
      15,    73,    20,    27,    28,    29,    30,    33,    31,    17,
      68,    69,    71,    20,    20,    21,    61,    70,    70,    16,
      20,    82,     9,    82,    82,    17,    17,    82,    89,    82,
      15,    82,    82,    82,    82,    87,    88,    82,    72,    17,
      34,    70,    58,    16,    16,    17,    68,    17,    16,    20,
      17,    34,    17,    19,    20,    72,    68,    15,    17,    68,
      17,    68,    20,    72,    17,    74,    82,    82,    74,    89,
      17,    17,    20,    72,    17,    20,    13,    20,    82,    74,
      17,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    56,    56,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    68,    68,    69,    70,
      70,    71,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    76,    77,
      77,    78,    79,    80,    81,    81,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     1,     2,     7,    10,
       7,     4,     1,     2,     3,     2,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     3,     3,     5,     6,     5,
       6,     1,     2,     9,     8,     5,     1,     3,     2,     1,
       4,     1,     1,     1,     4,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     3,
       2,     5,     7,     9,     7,     5,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     1,     1,     3,     1,
       3,     1,     4,     1,     3,     4,     1,     3
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
#line 56 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, (yyvsp[-1].node), NULL, (yyvsp[0].node)); print_ast((yyval.node)); print_symbol_table((yyval.node)); }
#line 1427 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 57 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); print_ast((yyval.node)); print_symbol_table((yyval.node)); }
#line 1433 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 58 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, NULL, (yyvsp[-1].node), (yyvsp[0].node)); print_ast((yyval.node)); print_symbol_table((yyval.node)); }
#line 1439 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_program(PROGRAM, NULL, NULL, (yyvsp[0].node)); print_ast((yyval.node)); print_symbol_table((yyval.node)); }
#line 1445 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1451 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_class_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1457 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-5].id_val), (yyvsp[-1].node), NULL, NULL); }
#line 1463 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-8].id_val), (yyvsp[-4].node), (yyvsp[-1].node), NULL); }
#line 1469 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-5].id_val), NULL, (yyvsp[-1].node), NULL); }
#line 1475 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_class(CLASS, (yyvsp[-2].id_val), NULL, NULL, NULL); }
#line 1481 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 71 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[0].node), NULL, NULL); }
#line 1487 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 72 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 1493 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 73 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1499 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 74 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, (yyvsp[-1].node), NULL, (yyvsp[0].node)); }
#line 1505 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 75 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, NULL, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1511 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, NULL, (yyvsp[0].node), NULL); }
#line 1517 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_member(MEMBER, NULL, NULL, (yyvsp[0].node)); }
#line 1523 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1529 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_vardecl_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1535 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 83 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1541 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_methoddecl_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1547 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1553 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 87 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_methoddef_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1559 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_vardecl(VARIABLE, NULL, (yyvsp[-1].node), 1, 0, 0, NULL); }
#line 1565 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 91 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_vardecl(VARIABLE, NULL, (yyvsp[-1].node), 0, 0, 0, NULL); }
#line 1571 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 93 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_methoddecl(FUNCDECL, (yyvsp[-3].node), (yyvsp[-4].node), NULL, NULL); }
#line 1577 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 94 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_methoddecl(FUNCDECL, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), NULL); }
#line 1583 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_methoddef(FUNCDEF, (yyvsp[-3].node), (yyvsp[-4].node), NULL, (yyvsp[0].node), NULL); }
#line 1589 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_methoddef(FUNCDEF, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 1595 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 100 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1601 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 101 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_classmethoddef_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1607 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 103 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_classmethoddef(CLASSMETHODDEF, (yyvsp[-8].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 1613 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 104 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_classmethoddef(CLASSMETHODDEF, (yyvsp[-7].node), (yyvsp[-6].node), (yyvsp[-3].node), NULL, (yyvsp[0].node), NULL); }
#line 1619 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_mainfunc(MAIN, (yyvsp[0].node)); }
#line 1625 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1631 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 111 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_param_prev((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1637 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 113 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_param(PARAM, (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 1643 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 116 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ident(ID, (yyvsp[0].id_val), 0); }
#line 1649 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 117 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ident(ID, (yyvsp[-3].id_val), (yyvsp[-1].int_val)); }
#line 1655 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 119 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_type(TYPE, NULL, eInt); }
#line 1661 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 120 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_type(TYPE, NULL, eFloat); }
#line 1667 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 121 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_type(TYPE, (yyvsp[0].id_val), eClass); }
#line 1673 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 124 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_compoundstmt(COMPOUNDSTMT, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1679 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 125 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_compoundstmt(COMPOUNDSTMT, NULL, (yyvsp[-1].node)); }
#line 1685 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_compoundstmt(COMPOUNDSTMT, NULL, NULL); }
#line 1691 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 129 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1697 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 130 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = change_stmt_prev((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1703 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 133 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eExpr, (yyvsp[0].node), NULL); }
#line 1709 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 134 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eAssign, (yyvsp[0].node), NULL); }
#line 1715 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 135 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eRet, (yyvsp[0].node), NULL); }
#line 1721 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 136 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eWhile, (yyvsp[0].node), NULL); }
#line 1727 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eDo, (yyvsp[0].node), NULL); }
#line 1733 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 138 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eFor, (yyvsp[0].node), NULL); }
#line 1739 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 139 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eIf, (yyvsp[0].node), NULL); }
#line 1745 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_stmt(STMT, eCompound, (yyvsp[0].node), NULL); }
#line 1751 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 143 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_exprstmt(EXPRSTMT, (yyvsp[-1].node)); }
#line 1757 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 146 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_assignstmt(ASSIGNMENT, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1763 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 149 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_retstmt(RETURN, (yyvsp[-1].node)); }
#line 1769 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 150 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_retstmt(RETURN, NULL); }
#line 1775 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 153 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_whilestmt(WHILE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1781 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 156 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_dostmt(DO, (yyvsp[-2].node), (yyvsp[-5].node)); }
#line 1787 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 159 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_forstmt(FOR, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1793 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 162 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ifstmt(IF, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1799 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 163 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_ifstmt(IF, (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 1805 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 166 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eOper, 0, 0, (yyvsp[0].node)); }
#line 1811 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eRef, 0, 0, (yyvsp[0].node)); }
#line 1817 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eIntnum, (yyvsp[0].int_val), 0, NULL); }
#line 1823 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 169 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_expr(EXPR, eFloatnum, 0, (yyvsp[0].float_val), NULL); }
#line 1829 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 172 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eUn, (yyvsp[0].node), NULL, NULL); }
#line 1835 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 173 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eAddi, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1841 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 174 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eMult, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1847 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 175 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eRela, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1853 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 176 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eEqlt, NULL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1859 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 177 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_operexpr(OPEREXPR, eBracket, (yyvsp[-1].node), NULL, NULL); }
#line 1865 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 180 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refexpr(REFEXPR, eVar, (yyvsp[0].node)); }
#line 1871 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 181 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refexpr(REFEXPR, eCall, (yyvsp[0].node)); }
#line 1877 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 184 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refvarexpr(REFVAREXPR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1883 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 185 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refvarexpr(REFCALLEXPR, NULL, (yyvsp[0].node)); }
#line 1889 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 188 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refcallexpr(REFCALLEXPR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1895 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 189 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_refcallexpr(REFCALLEXPR, NULL, (yyvsp[0].node)); }
#line 1901 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 191 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_identexpr(IDENTEXPR, (yyvsp[-3].id_val), (yyvsp[-1].node)); }
#line 1907 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 192 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_identexpr(IDENTEXPR, (yyvsp[0].id_val), NULL); }
#line 1913 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 195 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_callexpr(CALLEXPR, (yyvsp[-2].id_val), NULL); }
#line 1919 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 196 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_callexpr(CALLEXPR, (yyvsp[-3].id_val), (yyvsp[-1].node)); }
#line 1925 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 199 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_arg(ARGLIST, (yyvsp[0].node), NULL); }
#line 1931 "minicpp.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 200 "minicpp.y" /* yacc.c:1646  */
    { (yyval.node) = alloc_arg(ARGLIST, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1937 "minicpp.tab.c" /* yacc.c:1646  */
    break;


#line 1941 "minicpp.tab.c" /* yacc.c:1646  */
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
#line 203 "minicpp.y" /* yacc.c:1906  */


/* C code */

int main(int argc, char* argv[]) {
	yyin = fopen(argv[1], "r");
	extern int yydebug;
	yydebug = 1;
	yyparse();
	close(yyin);
	return 0;
}

void yyerror(char* s) {
	printf("error: %s\n", s);
}

