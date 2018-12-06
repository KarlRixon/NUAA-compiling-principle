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
#line 1 "h100.y" /* yacc.c:339  */


int yylex(void);
void yyerror(const char *s);
bool fatal = false;
bool reporterrorline = true;
int error_count = 0;
extern int nlines;

#include <stdio.h>

#include "ast.h"
#include "variable.h"
#include "generate.h"
#include "function.h"
#include "init.h"

#line 84 "h100.tab.c" /* yacc.c:339  */

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
   by #include "h100.tab.h".  */
#ifndef YY_YY_H100_TAB_H_INCLUDED
# define YY_YY_H100_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    STRING = 259,
    INTEGER = 260,
    CHAR = 261,
    FUNC = 262,
    VAR = 263,
    CFUNC = 264,
    PRINT = 265,
    PRINTLN = 266,
    GET = 267,
    GETCHAR = 268,
    GETLINE = 269,
    FOR = 270,
    WHILE = 271,
    IF = 272,
    RET = 273,
    BREAK = 274,
    CONT = 275,
    EXIT = 276,
    ETC = 277,
    IFX = 278,
    ELSE = 279,
    VARDECLARE = 280,
    OR = 281,
    AND = 282,
    NE = 283,
    EQ = 284,
    GE = 285,
    LE = 286,
    NEG = 287,
    POS = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "h100.y" /* yacc.c:355  */

        _ast* a;
        int v;
        char s[80];
        int label;

#line 165 "h100.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_H100_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 182 "h100.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   721

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,    45,    40,    44,     2,
      46,    47,    38,    36,    26,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
      34,    27,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      25,    28,    29,    30,    31,    32,    33,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    56,    60,    61,    64,    65,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    82,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   117,   118,   119,
     124,   132,   136,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "INTEGER",
  "CHAR", "FUNC", "VAR", "CFUNC", "PRINT", "PRINTLN", "GET", "GETCHAR",
  "GETLINE", "FOR", "WHILE", "IF", "RET", "BREAK", "CONT", "EXIT", "ETC",
  "IFX", "ELSE", "VARDECLARE", "','", "'='", "OR", "AND", "NE", "EQ", "GE",
  "LE", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "NEG", "POS",
  "'!'", "'&'", "'$'", "'('", "')'", "'['", "']'", "'{'", "'}'", "';'",
  "$accept", "routines", "routine", "stmts", "function_header", "function",
  "expr", "variable", "if_prefix", "stmt", "@1", "$@2", "@3", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    44,    61,   281,   282,
     283,   284,   285,   286,    60,    62,    43,    45,    42,    47,
      37,   287,   288,    33,    38,    36,    40,    41,    91,    93,
     123,   125,    59
};
# endif

#define YYPACT_NINF -33

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-33)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,    82,   -33,   -30,   -12,   -33,   -33,   -33,    20,    23,
      24,   148,   148,    25,    25,    25,   -15,    30,    38,     1,
     -20,   -13,     4,   148,   148,   148,    48,   148,   148,   -33,
     -33,   -33,    54,   -33,   209,    80,   266,   -33,   -33,    69,
     148,    62,    90,    75,    85,   313,   338,    63,    72,    84,
      87,   148,   148,   148,   -33,   363,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   260,   162,   -33,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     -33,   148,   113,   -33,   463,   291,     5,   148,     6,   -33,
       7,   148,   -33,   -33,   -33,   -33,   -33,   388,   589,   609,
     -33,   -33,   -33,   -33,   214,   681,   324,   347,   347,   119,
     119,   119,   119,    10,    10,   -33,   -33,   -33,   669,   -33,
     148,   -33,    96,    95,   -23,   -33,   413,    99,   123,   -14,
     -33,   523,   148,   -33,   -33,   -33,   266,   483,   133,   148,
     143,   -33,   -33,   -32,   158,   166,   -33,   438,   266,   -33,
     148,   -33,   167,   545,    -7,   182,   -33,   136,    83,   148,
     -33,   503,   137,   142,   192,   -33,   147,   -33,   194,   -33,
     629,   148,   -33,   -33,   148,    94,   -27,    97,   -33,   649,
     567,   197,   -33,   196,   -33,   199,   -33,   266,   -33,   -33,
     156,   155,   163,   -33,   -33,   157,   -33,   -33
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    47,    21,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      53,     3,     0,     4,     0,    22,     0,     5,    55,     0,
       0,     0,     0,     0,    47,     0,     0,    47,     0,     0,
       0,     0,     0,     0,    72,     0,    79,    78,    80,    40,
      41,    39,    46,    51,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,    68,    23,     0,     0,     0,     0,     0,    57,
       0,     0,    73,    74,    75,    76,    77,     0,     0,     0,
      71,    45,    56,     7,     0,    43,    42,    36,    35,    37,
      38,    33,    34,    28,    29,    30,    31,    32,    44,    69,
       0,    24,     0,    48,     0,     8,     0,     0,     0,     0,
      13,     0,     0,    66,    52,    18,     0,     0,     0,     0,
       0,     9,    58,     0,     0,     0,    14,     0,     0,    70,
       0,    25,     0,     0,     0,     0,    60,     0,     0,     0,
      67,     0,     0,    49,     0,    10,     0,    59,     0,    15,
       0,     0,    26,    63,     0,     0,     0,     0,    64,     0,
       0,     0,    11,     0,    61,     0,    16,     0,    27,    50,
       0,     0,     0,    65,    12,     0,    17,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -33,   -33,   -33,   145,   -33,   -33,   -10,    65,   -33,    -1,
     -33,   -33,   -33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    31,    65,    32,    33,    34,    35,    36,   103,
     187,   148,   136
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,    45,    46,   140,    44,     5,     6,     7,   124,    55,
     129,   127,   145,    59,    60,    61,   155,    63,    64,   164,
     156,   183,    38,    41,   141,   184,    42,    43,    47,    84,
      85,    51,    56,   146,    39,    82,    40,    23,    24,    57,
     165,    97,    98,    99,    25,    26,    27,    28,    77,    78,
      79,    62,   125,    54,   130,   128,    58,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
      27,   118,    44,     5,     6,     7,    52,   126,    48,    49,
      50,   131,     2,     3,    53,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    66,    23,    24,    81,    86,   168,
     137,    91,    25,    26,    27,    28,    83,    87,    23,    24,
     181,    90,   147,   185,    94,    25,    26,    27,    28,   153,
     169,    39,    29,    91,    30,   149,    95,   119,    88,    96,
     161,   182,    89,   139,   186,   138,   154,   160,   143,   170,
     144,    44,     5,     6,     7,    75,    76,    77,    78,    79,
     152,   179,   157,     3,   180,     4,     5,     6,     7,   158,
       9,   162,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   193,   166,   167,   173,
     174,    25,    26,    27,    28,   175,   176,   177,    23,    24,
     190,   191,   192,   194,   195,    25,    26,    27,    28,   197,
     196,   104,    29,   102,    30,     3,     0,     4,     5,     6,
       7,     0,     9,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      23,    24,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    80,     0,     0,    29,   135,    30,     3,     0,     4,
       5,     6,     7,     0,     9,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    23,    24,     0,     0,     0,   101,     0,    25,
      26,    27,    28,   122,     0,     0,    29,     0,    30,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
     123,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    92,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      93,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     159,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   150,
     121,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   171,
     151,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
     172,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,   123,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,   163,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,   189,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,   133,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,   134,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,   178,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,   188,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79
};

static const yytype_int16 yycheck[] =
{
       1,    11,    12,    26,     3,     4,     5,     6,     3,    19,
       3,     5,    26,    23,    24,    25,    48,    27,    28,    26,
      52,    48,    52,     3,    47,    52,     3,     3,     3,    39,
      40,    46,    52,    47,    46,    36,    48,    36,    37,    52,
      47,    51,    52,    53,    43,    44,    45,    46,    38,    39,
      40,     3,    47,    52,    47,    49,    52,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      45,    81,     3,     4,     5,     6,    46,    87,    13,    14,
      15,    91,     0,     1,    46,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    50,    36,    37,    27,    46,    26,
     120,    48,    43,    44,    45,    46,    47,    27,    36,    37,
      26,    46,   132,    26,    52,    43,    44,    45,    46,   139,
      47,    46,    50,    48,    52,   136,    52,    24,    48,    52,
     150,    47,    52,    48,    47,    49,     3,   148,    49,   159,
      27,     3,     4,     5,     6,    36,    37,    38,    39,    40,
      27,   171,     4,     1,   174,     3,     4,     5,     6,     3,
       8,     4,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    36,    37,   187,     5,    52,    52,
      48,    43,    44,    45,    46,     3,    49,     3,    36,    37,
       3,     5,     3,    47,    49,    43,    44,    45,    46,    52,
      47,    66,    50,    51,    52,     1,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    52,    -1,    -1,    50,    51,    52,     1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    36,    37,    -1,    -1,    -1,    47,    -1,    43,
      44,    45,    46,    22,    -1,    -1,    50,    -1,    52,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    52,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      52,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      52,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    26,
      47,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    26,
      47,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    36,    37,    43,    44,    45,    46,    50,
      52,    55,    57,    58,    59,    60,    61,    62,    52,    46,
      48,     3,     3,     3,     3,    59,    59,     3,    60,    60,
      60,    46,    46,    46,    52,    59,    52,    52,    52,    59,
      59,    59,     3,    59,    59,    56,    50,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      52,    27,    62,    47,    59,    59,    46,    27,    48,    52,
      46,    48,    52,    52,    52,    52,    52,    59,    59,    59,
      52,    47,    51,    62,    56,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    24,
      26,    47,    22,    49,     3,    47,    59,     5,    49,     3,
      47,    59,    52,    47,    47,    51,    65,    59,    49,    48,
      26,    47,    52,    49,    27,    26,    47,    59,    64,    62,
      26,    47,    27,    59,     3,    48,    52,     4,     3,    52,
      62,    59,     4,    49,    26,    47,     5,    52,    26,    47,
      59,    26,    47,    52,    48,     3,    49,     3,    47,    59,
      59,    26,    47,    48,    52,    26,    47,    63,    47,    49,
       3,     5,     3,    62,    47,    49,    47,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      60,    60,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    62,    64,    62,    62,    65,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     0,     2,     4,     5,
       7,     9,    11,     4,     5,     7,     9,    11,     4,     1,
       1,     1,     1,     3,     4,     6,     8,    10,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     3,     3,     3,     3,     2,     1,     4,     7,
      10,     2,     4,     1,     2,     2,     3,     3,     5,     7,
       6,     9,    12,     8,     0,    10,     0,     6,     2,     0,
       5,     3,     2,     3,     3,     3,     3,     3,     2,     2,
       2
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
        case 8:
#line 69 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-2].s), 0, "", "", "", "", 'i'); }
#line 1488 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-3].s), 1, (yyvsp[-1].s), "", "", "", 'i'); }
#line 1494 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-5].s), 2, (yyvsp[-3].s), (yyvsp[-1].s), "", "", 'i'); }
#line 1500 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 72 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-7].s), 3, (yyvsp[-5].s), (yyvsp[-3].s), (yyvsp[-1].s), "", 'i'); }
#line 1506 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 73 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-9].s), 4, (yyvsp[-7].s), (yyvsp[-5].s), (yyvsp[-3].s), (yyvsp[-1].s), 'i'); }
#line 1512 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-2].s), 0, "", "", "", "", 'c'); }
#line 1518 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-3].s), 1, (yyvsp[-1].s), "", "", "", 'c'); }
#line 1524 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 76 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-5].s), 2, (yyvsp[-3].s), (yyvsp[-1].s), "", "", 'c'); }
#line 1530 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 77 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-7].s), 3, (yyvsp[-5].s), (yyvsp[-3].s), (yyvsp[-1].s), "", 'c'); }
#line 1536 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 78 "h100.y" /* yacc.c:1646  */
    { beginfunction((yyvsp[-9].s), 4, (yyvsp[-7].s), (yyvsp[-5].s), (yyvsp[-3].s), (yyvsp[-1].s), 'c'); }
#line 1542 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "h100.y" /* yacc.c:1646  */
    { endfunction(); }
#line 1548 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_num, (yyvsp[0].v), NULL, NULL ); }
#line 1554 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 87 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_char, (yyvsp[0].v), NULL, NULL); }
#line 1560 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_str, (yyvsp[0].s), NULL, NULL); }
#line 1566 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = (yyvsp[0].a);}
#line 1572 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_call, (yyvsp[-2].s), NULL, NULL); }
#line 1578 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_call, (yyvsp[-3].s), newast(_dummy, NULL, (yyvsp[-1].a), NULL), NULL); }
#line 1584 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_call, (yyvsp[-5].s), newast(_dummy, NULL, (yyvsp[-3].a), (yyvsp[-1].a)), NULL); }
#line 1590 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_call, (yyvsp[-7].s), newast(_dummy, NULL, (yyvsp[-5].a), (yyvsp[-3].a)), newast(_dummy, NULL, (yyvsp[-1].a), NULL)); }
#line 1596 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_call, (yyvsp[-9].s), newast(_dummy, NULL, (yyvsp[-7].a), (yyvsp[-5].a)), newast(_dummy, NULL, (yyvsp[-3].a), (yyvsp[-1].a))); }
#line 1602 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_add, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1608 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_sub, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1614 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_mul, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1620 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_div, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1626 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 99 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_mod, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1632 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_lessThan, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1638 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_greaterThan, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1644 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 102 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_equal, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1650 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 103 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_notEqual, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1656 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 104 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_greaterEqual, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1662 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 105 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_lessEqual, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1668 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 106 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_not, NULL, (yyvsp[0].a), NULL); }
#line 1674 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast (_possgn, NULL, NULL, (yyvsp[0].a)); }
#line 1680 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast (_negsgn, NULL, NULL, (yyvsp[0].a)); }
#line 1686 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_and, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1692 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_or, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1698 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 111 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_varAssign, NULL, (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1704 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 112 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = (yyvsp[-1].a); }
#line 1710 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 113 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_addrOf, (yyvsp[0].s), NULL, NULL); }
#line 1716 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 117 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_addr, (yyvsp[0].s), NULL, NULL); }
#line 1722 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 118 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_array, (yyvsp[-3].s), (yyvsp[-1].a), NULL); }
#line 1728 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 119 "h100.y" /* yacc.c:1646  */
    { 
                int dim2 = lookup((yyvsp[-6].s))->dim[1];
                _ast* mulast = newast (_mul, NULL, newast(_num, dim2, NULL, NULL), (yyvsp[-4].a));
                _ast* addast = newast (_add, NULL, mulast, (yyvsp[-1].a));
                (yyval.a) = newast(_array, (yyvsp[-6].s), addast, NULL); }
#line 1738 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 124 "h100.y" /* yacc.c:1646  */
    {
                int dim2 = lookup((yyvsp[-9].s))->dim[1];
                int dim3 = lookup((yyvsp[-9].s))->dim[2];
                _ast* mulast1 = newast (_mul, NULL, newast(_num, dim2*dim3, NULL, NULL), (yyvsp[-7].a));
                _ast* mulast2 = newast (_mul, NULL, newast(_num, dim3, NULL, NULL), (yyvsp[-4].a));
                _ast* addast1 = newast (_add, NULL, mulast1, mulast2);
                _ast* addast2 = newast (_add, NULL, addast1, (yyvsp[-1].a));
                (yyval.a) = newast(_array, (yyvsp[-9].s), addast2, NULL); }
#line 1751 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 132 "h100.y" /* yacc.c:1646  */
    { (yyval.a) = newast(_contentOf, NULL, (yyvsp[0].a), NULL); }
#line 1757 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 136 "h100.y" /* yacc.c:1646  */
    { (yyval.label) = genIfBegin((yyvsp[-1].a)); }
#line 1763 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 141 "h100.y" /* yacc.c:1646  */
    { genStmt((yyvsp[-1].a)); }
#line 1769 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 142 "h100.y" /* yacc.c:1646  */
    { if (fatal) exit(-1); else { yyerrok; yyerror("Statement not valid"); yyclearin; }}
#line 1775 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "h100.y" /* yacc.c:1646  */
    { declare((yyvsp[-1].s), NULL); }
#line 1781 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "h100.y" /* yacc.c:1646  */
    { declare((yyvsp[-3].s), (yyvsp[-1].a)); }
#line 1787 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "h100.y" /* yacc.c:1646  */
    { genDeclareCharArray((yyvsp[-5].s), (yyvsp[-1].s)); }
#line 1793 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "h100.y" /* yacc.c:1646  */
    { declare((yyvsp[-4].s), NULL, (yyvsp[-2].v), 0, 0, 0); }
#line 1799 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "h100.y" /* yacc.c:1646  */
    { declare((yyvsp[-7].s), NULL, (yyvsp[-5].v), (yyvsp[-2].v), 0, 0); }
#line 1805 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 149 "h100.y" /* yacc.c:1646  */
    { declare((yyvsp[-10].s), NULL, (yyvsp[-8].v), (yyvsp[-5].v), (yyvsp[-2].v), 0); }
#line 1811 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 150 "h100.y" /* yacc.c:1646  */
    { genModifyCharArray((yyvsp[-7].s), (yyvsp[-5].a), (yyvsp[-1].s)); }
#line 1817 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 151 "h100.y" /* yacc.c:1646  */
    { genStmt((yyvsp[-5].a)); (yyval.label) = genForBegin((yyvsp[-3].a)); }
#line 1823 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 151 "h100.y" /* yacc.c:1646  */
    { genForEnd((yyvsp[-3].a), (yyvsp[-1].label)); }
#line 1829 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 152 "h100.y" /* yacc.c:1646  */
    { genWhileBegin((yyvsp[-1].a)); }
#line 1835 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "h100.y" /* yacc.c:1646  */
    { genWhileEnd(); }
#line 1841 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 153 "h100.y" /* yacc.c:1646  */
    { genIfEnd((yyvsp[-1].label)); }
#line 1847 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "h100.y" /* yacc.c:1646  */
    { (yyval.label) = genIfElse((yyvsp[-2].label)); }
#line 1853 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "h100.y" /* yacc.c:1646  */
    { genIfEnd((yyvsp[-1].label)); }
#line 1859 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "h100.y" /* yacc.c:1646  */
    { genReturn((yyvsp[-1].a)); }
#line 1865 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 156 "h100.y" /* yacc.c:1646  */
    { genReturn(NULL); }
#line 1871 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 157 "h100.y" /* yacc.c:1646  */
    { genPrint((yyvsp[-1].a), false); }
#line 1877 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 158 "h100.y" /* yacc.c:1646  */
    { genPrint((yyvsp[-1].a), true); }
#line 1883 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 159 "h100.y" /* yacc.c:1646  */
    { genGet((yyvsp[-1].a), 'i'); }
#line 1889 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 160 "h100.y" /* yacc.c:1646  */
    { genGet((yyvsp[-1].a), 'c'); }
#line 1895 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 161 "h100.y" /* yacc.c:1646  */
    { genGet((yyvsp[-1].a), 's'); }
#line 1901 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 162 "h100.y" /* yacc.c:1646  */
    { genContinue(); }
#line 1907 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 163 "h100.y" /* yacc.c:1646  */
    { genBreak(); }
#line 1913 "h100.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 164 "h100.y" /* yacc.c:1646  */
    { genExit(); }
#line 1919 "h100.tab.c" /* yacc.c:1646  */
    break;


#line 1923 "h100.tab.c" /* yacc.c:1646  */
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
#line 167 "h100.y" /* yacc.c:1906  */


int main(int argc, char **argv) {
        init ();
        yyparse();
        if (checkfunction() == ERROR_FUNCTION_NOT_DEFINED) {
                reporterrorline = false;
                fatal = true;
                yyerror ("There are calls to undefined functions.");
        }
        if (error_count != 0) 
            fprintf(stderr, "Build Failed: %d errors\n", error_count);
        return 0;
}

void yyerror(const char *s) {
        if (fatal) {
            fprintf(stderr, "Fatal Error ");
        }
        else {
            fprintf(stderr, "Error ");
        }
        if (reporterrorline)
            fprintf(stderr, "Line %d: %s\n", nlines + 1, s );
        else {
            fprintf(stderr, "%s\n", s );
        }
        error_count++;
        if (fatal) exit(-1);
}

