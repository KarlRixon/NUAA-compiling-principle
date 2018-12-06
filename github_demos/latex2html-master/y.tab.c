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
#line 1 "latex2html.y" /* yacc.c:339  */
 /* ISI@CAL */ 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yydebug = 1;
FILE *newHtml ;
int mathflag = 0;
int tablewidth = 0;
int inhtml=0,inbody=0;


#line 80 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    DBLBS = 258,
    BACKSL = 259,
    LCURLYB = 260,
    RCURLYB = 261,
    END = 262,
    PIPE = 263,
    HLINE = 264,
    AMPERSAND = 265,
    SPECCHAR = 266,
    LSQRB = 267,
    RSQRB = 268,
    LBEGIN = 269,
    SECTION = 270,
    TABLE = 271,
    SUPERSCRIPT = 272,
    LANGLE = 273,
    RANGLE = 274,
    TABULAR = 275,
    VSPACE = 276,
    B = 277,
    C = 278,
    H = 279,
    L = 280,
    BEGINTABULAR = 281,
    ENDTABULAR = 282,
    T = 283,
    R = 284,
    DOCUMENTCLASS = 285,
    SUBSCRIPT = 286,
    DOLLARMATH = 287,
    BEGINTABLE = 288,
    ENDTABLE = 289,
    ARTICLE = 290,
    PROC = 291,
    LETTER = 292,
    TITLE = 293,
    LBEGINDOCU = 294,
    LENDDOCU = 295,
    STARTBIB = 296,
    ENDBIB = 297,
    SQRT = 298,
    FRAC = 299,
    BOLDFACE = 300,
    ITALICS = 301,
    WS = 302,
    HSPACE = 303,
    SWORD = 304,
    STARTLIST = 305,
    ENDLIST = 306,
    ITEM = 307,
    BIBITEM = 308,
    DATE = 309,
    AUTHOR = 310,
    WORD = 311,
    GREEK = 312,
    LETTERS = 313,
    OPERATOR = 314,
    INTEGER = 315
  };
#endif
/* Tokens.  */
#define DBLBS 258
#define BACKSL 259
#define LCURLYB 260
#define RCURLYB 261
#define END 262
#define PIPE 263
#define HLINE 264
#define AMPERSAND 265
#define SPECCHAR 266
#define LSQRB 267
#define RSQRB 268
#define LBEGIN 269
#define SECTION 270
#define TABLE 271
#define SUPERSCRIPT 272
#define LANGLE 273
#define RANGLE 274
#define TABULAR 275
#define VSPACE 276
#define B 277
#define C 278
#define H 279
#define L 280
#define BEGINTABULAR 281
#define ENDTABULAR 282
#define T 283
#define R 284
#define DOCUMENTCLASS 285
#define SUBSCRIPT 286
#define DOLLARMATH 287
#define BEGINTABLE 288
#define ENDTABLE 289
#define ARTICLE 290
#define PROC 291
#define LETTER 292
#define TITLE 293
#define LBEGINDOCU 294
#define LENDDOCU 295
#define STARTBIB 296
#define ENDBIB 297
#define SQRT 298
#define FRAC 299
#define BOLDFACE 300
#define ITALICS 301
#define WS 302
#define HSPACE 303
#define SWORD 304
#define STARTLIST 305
#define ENDLIST 306
#define ITEM 307
#define BIBITEM 308
#define DATE 309
#define AUTHOR 310
#define WORD 311
#define GREEK 312
#define LETTERS 313
#define OPERATOR 314
#define INTEGER 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "latex2html.y" /* yacc.c:355  */

  char*	arr;
	int	val;

#line 245 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 262 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   313

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    40,    40,    40,    42,    42,    43,    45,
      45,    46,    48,    49,    50,    51,    52,    53,    54,    55,
      57,    57,    58,    60,    60,    60,    61,    64,    65,    66,
      67,    68,    69,    70,    71,    73,    73,    76,    76,    76,
      77,    80,    81,    84,    85,    86,    90,    91,    95,    96,
      99,   100,   101,   102,   103,   104,   107,   107,   107,   108,
     108,   108,   109,   111,   111,   116,   116,   116,   119,   119,
     120,   120,   123,   123,   124,   125,   126,   127,   128,   129,
     130,   130,   131,   132,   135,   135,   136,   137,   138,   139,
     142,   142,   145,   148,   148,   148,   151,   151,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   161,   162,   167,   168,   171,   174,   175,   176,   179,
     180,   183,   186,   189,   192,   192,   193,   196,   197,   200,
     200,   201,   204,   205,   208,   209,   210,   211,   215,   216,
     217,   218,   219,   222,   223,   224,   225,   226,   226,   227,
     228
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DBLBS", "BACKSL", "LCURLYB", "RCURLYB",
  "END", "PIPE", "HLINE", "AMPERSAND", "SPECCHAR", "LSQRB", "RSQRB",
  "LBEGIN", "SECTION", "TABLE", "SUPERSCRIPT", "LANGLE", "RANGLE",
  "TABULAR", "VSPACE", "B", "C", "H", "L", "BEGINTABULAR", "ENDTABULAR",
  "T", "R", "DOCUMENTCLASS", "SUBSCRIPT", "DOLLARMATH", "BEGINTABLE",
  "ENDTABLE", "ARTICLE", "PROC", "LETTER", "TITLE", "LBEGINDOCU",
  "LENDDOCU", "STARTBIB", "ENDBIB", "SQRT", "FRAC", "BOLDFACE", "ITALICS",
  "WS", "HSPACE", "SWORD", "STARTLIST", "ENDLIST", "ITEM", "BIBITEM",
  "DATE", "AUTHOR", "WORD", "GREEK", "LETTERS", "OPERATOR", "INTEGER",
  "$accept", "latexstatement", "$@1", "$@2", "$@3", "author", "$@4",
  "date", "$@5", "ignore", "listoption", "$@6", "listitem", "$@7", "$@8",
  "bword", "bibliography", "$@9", "biblist", "$@10", "$@11",
  "documenttype", "type", "titletype", "mainbody", "mainoption",
  "formattedtextoption", "$@12", "$@13", "$@14", "$@15", "section", "$@16",
  "mathoption", "$@17", "$@18", "set", "$@19", "$@20", "mathstatement",
  "$@21", "$@22", "setmath", "$@23", "fractional", "$@24", "fracbody",
  "fracpart", "$@25", "$@26", "squareroot", "$@27", "operand", "$@28",
  "$@29", "$@30", "$@31", "$@32", "$@33", "tableoption", "starttable",
  "position", "tablebody", "starttabular", "endtabular", "endtable",
  "tabularbody", "$@34", "hline", "row", "$@35", "tablespec", "colspec",
  "tabletextoption", "textoption", "$@36", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -136

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define YYTABLE_NINF -127

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    19,    32,  -136,    94,    50,  -136,    12,  -136,  -136,
    -136,    37,  -136,  -136,  -136,   147,    56,    84,    21,    50,
      98,  -136,     9,  -136,  -136,  -136,  -136,    43,   100,    57,
    -136,   129,    94,   110,    50,    50,  -136,   113,   135,    39,
     144,  -136,   136,   112,    21,   156,   150,   110,  -136,  -136,
    -136,   110,     5,    18,    69,  -136,  -136,  -136,  -136,    89,
     131,   169,  -136,  -136,  -136,  -136,     6,  -136,    43,  -136,
    -136,  -136,    21,  -136,   151,    63,   164,   167,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,   143,  -136,  -136,    48,   171,
      43,    43,  -136,  -136,  -136,  -136,  -136,   175,    43,   263,
    -136,    63,  -136,    63,   165,    67,   110,  -136,  -136,   167,
     140,   140,   140,   140,   140,   140,  -136,   110,    16,    50,
    -136,    50,   177,   182,    39,  -136,   184,   190,   194,   192,
     200,  -136,  -136,  -136,   234,  -136,  -136,  -136,  -136,  -136,
     185,  -136,   206,   208,  -136,  -136,  -136,  -136,   204,   110,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,   181,
     187,  -136,  -136,    34,  -136,  -136,    15,   149,    39,   168,
     176,  -136,   183,   206,   196,   197,   220,    63,  -136,  -136,
      21,    21,    43,    43,    43,  -136,  -136,  -136,  -136,    90,
    -136,  -136,  -136,  -136,   219,    27,  -136,   189,  -136,  -136,
    -136,  -136,  -136,   185,    -4,  -136,  -136,   228,  -136,  -136,
    -136,  -136,   232,  -136,  -136,  -136,  -136,   195,  -136,  -136,
    -136,  -136,  -136,   206,     3,  -136,  -136,   191,    43,  -136,
    -136,  -136,  -136,  -136,   230,   209,  -136,    -4,    50,  -136,
     168,  -136,   201,  -136,   241,    50,   203,  -136,    43,  -136,
     191,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,    34,     1,    47,    43,    44,
      45,     0,    30,    32,    31,     0,     0,     8,    19,    34,
       0,    65,    19,    27,    28,    29,    33,    19,     0,    11,
      41,     0,     0,     0,    34,    34,    18,     0,     0,   150,
       0,     6,     0,     0,    17,     0,     0,     0,    70,    96,
      90,    83,   111,   110,   112,    79,    66,    77,    76,    82,
       0,     0,    56,    59,   145,   146,    19,    46,    19,     9,
       3,    15,    19,    68,     0,     0,     0,     0,    74,   106,
     108,    98,   102,   100,   104,     0,    72,    78,    16,     0,
      19,    19,   147,   149,   143,   144,    62,     0,    19,    19,
      42,     0,    75,    89,     0,    88,     0,    93,    91,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,    34,
      14,    34,     0,     0,   150,     7,     0,     0,     0,     0,
       0,    20,    53,    54,    19,    49,    50,    55,    52,    51,
       0,   114,   128,     0,    86,    71,    84,    87,     0,     0,
      92,   107,   109,    99,   103,   101,   105,    73,    81,     0,
       0,    57,    60,   148,    10,    63,     0,     0,   150,    26,
       0,    48,     0,   128,     0,   124,     0,     0,    97,    94,
      19,    19,    19,    19,    19,   137,   135,   134,   136,     0,
     133,   118,   117,   116,     0,     0,    23,     0,     5,   123,
     113,   127,   122,   120,     0,    69,    85,     0,    12,    13,
      58,    61,     0,   121,   132,   115,    35,    22,    21,   119,
     140,   141,   142,   128,     0,    95,    64,    40,    19,   125,
     131,   129,   138,   139,     0,     0,    24,     0,    34,    36,
      26,   130,     0,    25,     0,    34,     0,    37,    19,    38,
      40,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,   -15,
      31,  -136,    13,  -136,  -136,   -17,  -136,  -136,     4,  -136,
    -136,  -136,   223,  -136,  -136,   122,   -26,  -136,  -136,  -136,
    -136,  -136,  -136,   -95,  -136,  -136,   146,  -136,  -136,   -32,
    -136,  -136,   -93,  -136,  -136,  -136,  -136,   153,  -136,  -136,
    -136,  -136,   -34,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -135,  -136,  -136,  -136,    35,  -136,    92,    33,
    -136,  -136,    80,  -136,   -77,  -136
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    99,   170,    29,    68,    43,    98,    39,
     132,   169,   197,   217,   240,    15,   133,   227,   235,   248,
     250,     3,    11,    17,   134,   135,   136,    90,   182,    91,
     183,   137,   184,    26,    33,    85,    55,   101,    75,    56,
     117,   118,   104,   177,    57,    77,   108,   109,   149,   207,
      58,    76,    59,   112,   114,   113,   115,   110,   111,   139,
     140,   194,   141,   142,   203,   200,   174,   204,   175,   223,
     237,   189,   190,   224,    66,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    40,    31,    30,   138,   172,   230,    36,   143,    92,
     144,    19,   147,   231,    34,    74,    25,    60,    61,    78,
      46,    35,    79,   185,     4,     1,    19,    87,    21,    71,
      92,     5,     6,   216,    48,    81,    80,    92,   186,   138,
     187,   105,    97,    18,   188,    25,    25,   163,    19,    82,
      16,    96,   220,    19,    93,    22,   221,   100,    22,   232,
     119,    27,    94,   233,   122,   123,    95,   105,   219,   105,
      22,   105,   126,   120,   148,    93,   151,   152,   153,   154,
     155,   156,    93,    94,   206,   157,    83,    95,    37,    38,
      94,   195,    22,    46,    95,    64,   213,    22,   185,    65,
      84,    47,   159,    32,   160,    41,    12,    48,    13,   222,
      14,    42,   103,   186,    46,   187,   103,   179,    62,   188,
      52,    53,    47,    54,    52,    53,   146,    54,    48,     8,
       9,    10,    49,    50,    19,    44,    19,    88,    51,    28,
      63,    69,   222,   105,    25,    25,    52,    53,    86,    54,
      67,    70,    19,    49,    50,    73,   210,   211,   212,    51,
      20,    21,    72,    21,   102,   208,   209,    52,    53,   106,
      54,   191,   107,   192,    19,   116,   121,   193,    22,    21,
      22,   125,    89,   161,   145,    23,    19,    23,   162,    24,
     164,    24,    19,   181,   180,   165,    22,    52,    53,   166,
      54,    21,   236,    23,   167,   168,    19,    24,    19,   247,
     178,   128,   176,    21,   244,   173,   198,   199,    22,    21,
     196,   242,   249,   202,  -126,    23,   205,    25,   246,    24,
      22,    25,   215,    21,   225,    21,    22,    23,   226,    19,
     218,    24,   238,    23,   234,   131,   245,    24,   228,   127,
      22,   239,    22,   243,   251,    45,   171,    23,   229,    23,
     128,    24,   150,    24,   158,   201,    21,   129,    19,   214,
     241,     0,     0,     0,    -4,   130,     0,     0,   127,    37,
      38,     0,     0,    22,   131,     0,     0,     0,     0,   128,
       0,     0,     0,     0,     0,    21,   129,     0,     0,     0,
       0,     0,     0,     0,   130,     0,     0,     0,    37,    38,
       0,     0,    22,   131
};

static const yytype_int16 yycheck[] =
{
      15,    27,    19,    18,    99,   140,     3,    22,   101,     3,
     103,     5,   105,    10,     5,    47,    31,    34,    35,    51,
       4,    12,    17,     8,     5,    30,     5,    59,    32,    44,
       3,    12,     0,     6,    18,    17,    31,     3,    23,   134,
      25,    75,    68,     6,    29,    60,    61,   124,     5,    31,
      38,    66,    56,     5,    48,    49,    60,    72,    49,    56,
      12,     5,    56,    60,    90,    91,    60,   101,   203,   103,
      49,   105,    98,    88,   106,    48,   110,   111,   112,   113,
     114,   115,    48,    56,   177,   117,    17,    60,    45,    46,
      56,   168,    49,     4,    60,    56,     6,    49,     8,    60,
      31,    12,   119,     5,   121,     5,    56,    18,    58,   204,
      60,    54,    49,    23,     4,    25,    49,   149,     5,    29,
      57,    58,    12,    60,    57,    58,    59,    60,    18,    35,
      36,    37,    43,    44,     5,     6,     5,     6,    49,    55,
       5,     5,   237,   177,   159,   160,    57,    58,    59,    60,
       6,    39,     5,    43,    44,     5,   182,   183,   184,    49,
      13,    32,     6,    32,    13,   180,   181,    57,    58,     5,
      60,    22,     5,    24,     5,    32,     5,    28,    49,    32,
      49,     6,    13,     6,    19,    56,     5,    56,     6,    60,
       6,    60,     5,     6,    13,     5,    49,    57,    58,     5,
      60,    32,   228,    56,    12,     5,     5,    60,     5,     6,
       6,    26,     4,    32,    13,     9,    40,    34,    49,    32,
      52,   238,   248,    27,    27,    56,     6,   242,   245,    60,
      49,   246,    13,    32,     6,    32,    49,    56,     6,     5,
      51,    60,    12,    56,    53,    50,     5,    60,   217,    15,
      49,    42,    49,   240,   250,    32,   134,    56,   223,    56,
      26,    60,   109,    60,   118,   173,    32,    33,     5,   189,
     237,    -1,    -1,    -1,    40,    41,    -1,    -1,    15,    45,
      46,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    62,    82,     5,    12,     0,    63,    35,    36,
      37,    83,    56,    58,    60,    76,    38,    84,     6,     5,
      13,    32,    49,    56,    60,    70,    94,     5,    55,    66,
      70,    76,     5,    95,     5,    12,    70,    45,    46,    70,
      87,     5,    54,    68,     6,    83,     4,    12,    18,    43,
      44,    49,    57,    58,    60,    97,   100,   105,   111,   113,
      76,    76,     5,     5,    56,    60,   135,     6,    67,     5,
      39,    70,     6,     5,   100,    99,   112,   106,   100,    17,
      31,    17,    31,    17,    31,    96,    59,   100,     6,    13,
      88,    90,     3,    48,    56,    60,    70,    87,    69,    64,
      70,    98,    13,    49,   103,   113,     5,     5,   107,   108,
     118,   119,   114,   116,   115,   117,    32,   101,   102,    12,
      70,     5,    87,    87,   136,     6,    87,    15,    26,    33,
      41,    50,    71,    77,    85,    86,    87,    92,    94,   120,
     121,   123,   124,   103,   103,    19,    59,   103,   100,   109,
     108,   113,   113,   113,   113,   113,   113,   100,    97,    76,
      76,     6,     6,   135,     6,     5,     5,    12,     5,    72,
      65,    86,   123,     9,   127,   129,     4,   104,     6,   100,
      13,     6,    89,    91,    93,     8,    23,    25,    29,   132,
     133,    22,    24,    28,   122,   135,    52,    73,    40,    34,
     126,   129,    27,   125,   128,     6,   103,   110,    70,    70,
      87,    87,    87,     6,   133,    13,     6,    74,    51,   123,
      56,    60,    94,   130,   134,     6,     6,    78,    71,   127,
       3,    10,    56,    60,    53,    79,    87,   131,    12,    42,
      75,   130,    76,    73,    13,     5,    76,     6,    80,    87,
      81,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    63,    64,    65,    62,    67,    66,    66,    69,
      68,    68,    70,    70,    70,    70,    70,    70,    70,    70,
      72,    71,    71,    74,    75,    73,    73,    76,    76,    76,
      76,    76,    76,    76,    76,    78,    77,    80,    81,    79,
      79,    82,    82,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    88,    89,    87,    90,
      91,    87,    87,    93,    92,    95,    96,    94,    98,    97,
      99,    97,   101,   100,   100,   100,   100,   100,   100,   100,
     102,   100,   100,   100,   104,   103,   103,   103,   103,   103,
     106,   105,   107,   109,   110,   108,   112,   111,   114,   113,
     115,   113,   116,   113,   117,   113,   118,   113,   119,   113,
     113,   113,   113,   120,   120,   121,   122,   122,   122,   123,
     123,   124,   125,   126,   128,   127,   127,   129,   129,   131,
     130,   130,   132,   132,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   136,   135,   135,
     135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,    10,     0,     5,     0,     0,
       5,     0,     8,     8,     5,     4,     4,     3,     2,     0,
       0,     4,     0,     0,     0,     6,     0,     2,     2,     2,
       1,     1,     1,     2,     0,     0,     7,     0,     0,    11,
       0,     5,     8,     1,     1,     1,     4,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     7,     0,
       0,     7,     3,     0,     5,     0,     0,     5,     0,     6,
       0,     4,     0,     4,     2,     3,     1,     1,     2,     1,
       0,     4,     1,     1,     0,     4,     2,     2,     1,     1,
       0,     3,     2,     0,     0,     5,     0,     5,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       1,     1,     1,     3,     1,     4,     1,     1,     1,     4,
       3,     4,     1,     1,     0,     4,     1,     2,     0,     0,
       4,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     1,     1,     0,     4,     2,
       0
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
#line 40 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<html><head> <title>  \n"); inhtml=1;}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<body>\n");inbody=1; }
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 40 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</body>\n"); }
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</html> \n"); }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 42 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<i> Author:: "); }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</i></br> "); }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 45 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<i> Date:: "); }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 45 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</i></br><hr> "); }
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 57 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<ol> "); }
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 57 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</ol> "); }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 60 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<li> "); }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 60 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</li> "); }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 73 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<hr> <b>The References</b></br><ol> "); }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 73 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</ol> "); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 76 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<li> "); }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 76 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</li> "); }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 90 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</title>\n"); }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 91 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</title>\n");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 107 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<b>\n");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 107 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</b>\n");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 108 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<i>\n");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 108 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</i>\n");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 111 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<hr><b>\n");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 111 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</b></br>\n");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 116 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"&nbsp;<math>\n");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 116 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</mrow>\n"); }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 116 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</math>\n");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 119 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mi>{</mi>"); }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 119 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mi>}</mi>"); }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 120 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mi> [ </mi>"); }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 120 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mi> ] </mi>"); }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 123 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"\n<mo>%s</mo>\n",(yyvsp[0].arr)); }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 130 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"\n<mo>%s</mo>\n",(yyvsp[0].arr)); }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 135 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"\n<mo>%s</mo>\n",(yyvsp[0].arr)); }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 142 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow><mfrac>\n");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 142 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</mfrac></mrow>\n");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 148 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow>\n"); }
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 148 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</mrow>\n"); }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 151 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<msqrt>\n"); }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 151 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</msqrt>\n"); }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 154 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow><msup>\n<mi>%s</mi>",(yyvsp[-1].arr)); }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 154 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</msup></mrow>");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 155 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow><msup>\n<mn>%d</mn>",(yyvsp[-1].val)); }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 155 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</msup></mrow>");}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 156 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow><msub>\n<mi>%s</mi>",(yyvsp[-1].arr)); }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 156 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</msub></mrow>");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 157 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow><msub>\n<mn>%d</mn>",(yyvsp[-1].val)); }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 157 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</msub></mrow>");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 158 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow><msup>\n<mi>%s;</mi>",(yyvsp[-1].arr)); }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 158 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</msup></mrow>");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 159 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mrow><msub>\n<mi>%s;</mi>",(yyvsp[-1].arr)); }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 159 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</msub></mrow>");}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 160 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mi>%s</mi>",(yyvsp[0].arr)); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 161 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mi>%s;</mi>",(yyvsp[0].arr)); }
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 162 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<mn>%d</mn>",(yyvsp[0].val)); }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 183 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<table border=\"%d\">\n",tablewidth); }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 186 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"</table>\n"); tablewidth = 0; }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 192 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<tr>\n<td> "); }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 200 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml," </td> <td>"); }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 201 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml," </td>\n</tr>\n"); }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 211 "latex2html.y" /* yacc.c:1646  */
    {tablewidth = 1;}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 215 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml," %s",(yyvsp[0].arr));}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 216 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml," %d",(yyvsp[0].val));}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 217 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"%s",(yyvsp[0].arr)); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 218 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"%d",(yyvsp[0].val)); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 222 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml," %s",(yyvsp[0].arr));}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 223 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml," %d",(yyvsp[0].val));}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 224 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"%s",(yyvsp[0].arr)); }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 225 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"%d",(yyvsp[0].val)); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 226 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"<br/>"); }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 227 "latex2html.y" /* yacc.c:1646  */
    {fprintf(newHtml,"&nbsp;"); }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1978 "y.tab.c" /* yacc.c:1646  */
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
#line 232 "latex2html.y" /* yacc.c:1906  */


int main(int argc, char *argv[]){
    char fname[100];
    strcpy(fname,argv[1]);
    newHtml = fopen(fname,"w+");
	return yyparse();
	}

int yyerror (char *msg) {
    if((inhtml==1)&&(inbody==0))
       fprintf(newHtml,"ERROR in TITLE</title></html>");
    
    if((inbody==1)&&(inbody==1))fprintf(newHtml," ERROR in BODY</body></html>");
    
	return fprintf (stderr, "YACC: %s\n ", msg);
	}
