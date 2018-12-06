/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 17 "glrmysql.y" /* glr.c:240  */

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(const char *s, ...);
void emit(char *s, ...);

#line 63 "glrmysql.tab.c" /* glr.c:240  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "glrmysql.tab.h"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

#line 91 "glrmysql.tab.c" /* glr.c:263  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
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


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1740

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  301
/* YYNRULES -- Number of states.  */
#define YYNSTATES  626
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 11
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   494

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     252,   253,    26,    24,   250,    25,   251,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   249,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   308,   308,   309,   314,   317,   319,   325,   326,   328,
     329,   333,   335,   339,   340,   341,   344,   345,   348,   348,
     350,   350,   353,   353,   354,   357,   358,   361,   362,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   376,   377,
     378,   381,   383,   384,   387,   388,   392,   393,   395,   396,
     399,   400,   403,   404,   405,   409,   411,   413,   415,   417,
     421,   422,   423,   426,   427,   430,   431,   434,   435,   436,
     439,   439,   442,   443,   447,   449,   451,   453,   456,   457,
     460,   461,   464,   469,   472,   477,   478,   479,   480,   483,
     488,   489,   493,   493,   495,   503,   506,   512,   513,   516,
     517,   518,   519,   520,   523,   523,   526,   527,   530,   531,
     534,   535,   536,   537,   540,   546,   552,   555,   558,   561,
     567,   570,   576,   582,   588,   591,   598,   599,   600,   604,
     607,   610,   613,   621,   625,   626,   629,   630,   634,   637,
     641,   646,   651,   655,   661,   666,   667,   670,   670,   673,
     674,   675,   676,   677,   680,   681,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   695,   696,   697,
     700,   701,   704,   705,   706,   709,   710,   711,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   741,   742,   743,   744,   747,   748,
     751,   755,   756,   757,   760,   761,   766,   769,   771,   771,
     774,   776,   781,   782,   783,   784,   785,   786,   787,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   814,   815,   816,   817,   820,   824,   825,   828,   829,
     832,   833,   834,   835,   836,   837,   840,   844,   845,   847,
     848,   849,   850,   851,   854,   855,   856,   859,   860,   863,
     864,   865,   866,   867,   868,   869,   870,   871,   874,   875,
     876,   877,   880,   881,   884,   885,   888,   889,   892,   893,
     894,   897
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "IN", "IS",
  "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'",
  "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "ENCLOSED", "END", "ENUM", "ESCAPED",
  "EXISTS", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN",
  "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY",
  "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF", "IGNORE",
  "INDEX", "INFILE", "INNER", "INOUT", "INSENSITIVE", "INSERT", "INT",
  "INTEGER", "INTERVAL", "INTO", "ITERATE", "JOIN", "KEY", "KEYS", "KILL",
  "LEADING", "LEAVE", "LEFT", "LIMIT", "LINES", "LOAD", "LOCALTIME",
  "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB", "LONGTEXT", "LOOP",
  "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT",
  "MINUTE_MICROSECOND", "MINUTE_SECOND", "MODIFIES", "NATURAL",
  "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON", "DUPLICATE", "OPTIMIZE",
  "OPTION", "OPTIONALLY", "ORDER", "OUT", "OUTER", "OUTFILE", "PRECISION",
  "PRIMARY", "PROCEDURE", "PURGE", "QUICK", "READ", "READS", "REAL",
  "REFERENCES", "RELEASE", "RENAME", "REPEAT", "REPLACE", "REQUIRE",
  "RESTRICT", "RETURN", "REVOKE", "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS",
  "SECOND_MICROSECOND", "SELECT", "SENSITIVE", "SEPARATOR", "SET", "SHOW",
  "SMALLINT", "SOME", "SONAME", "SPATIAL", "SPECIFIC", "SQL",
  "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", "SQL_BIG_RESULT",
  "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "STARTING",
  "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TEXT", "TERMINATED", "THEN",
  "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TRAILING",
  "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE",
  "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP",
  "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN", "WHERE", "WHILE",
  "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "','", "'.'", "'('", "')'",
  "$accept", "stmt_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "table_references",
  "table_reference", "table_factor", "opt_as", "opt_as_alias",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "create_col_list", "create_definition", "$@1", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace",
  "opt_temporary", "set_stmt", "set_list", "set_expr", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", YY_NULLPTR
};
#endif

#define YYPACT_NINF -385
#define YYTABLE_NINF -265

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     248,    -7,  -385,  -385,  -385,  -385,    31,     9,   160,  -166,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,   -21,   -21,
    -385,  -100,    44,   191,   191,   120,   225,   -93,  -385,   233,
      10,  -385,    -3,  -385,   243,   277,   285,   -21,    42,   297,
    -385,  -385,  -385,   -76,  -385,  -385,  -385,  -385,  -385,   299,
     312,   -54,  -385,  -385,  -385,  -385,   316,   833,   920,   920,
    -385,  -385,   920,   473,  -385,  -385,  -385,  -385,  -385,    78,
    -385,  -385,  -385,  -385,  -385,   124,   127,   131,   142,   148,
     -55,  -385,  1645,   920,   920,    31,    11,    12,    14,     0,
    -148,   181,  -385,  -385,   323,  -385,   304,  -385,  -385,   409,
     401,  -385,   -19,  -156,    10,   431,  -163,   -28,   433,   920,
     920,   185,  1350,  1350,  -385,  -385,   920,  1224,   -72,   252,
     920,   126,   920,   920,   554,    10,   920,  -385,   920,   920,
     920,   201,    24,   920,   920,   263,   920,     3,   920,   920,
     920,   920,   920,   920,   920,   920,   920,   920,   457,  -385,
    1710,  1710,  -385,   459,   -59,   211,  -172,   462,    10,  -385,
    -385,  -385,   -90,  -385,    10,   343,   308,  -385,   469,  -385,
     -41,  -385,   920,   321,    10,   -64,    42,   471,   480,  -162,
     471,  -136,  -385,  1094,  -385,   231,  1710,   252,  1273,   -37,
     920,  -385,   920,   234,  1073,   236,  -385,  -385,  -385,   239,
     920,  1115,  1160,   240,  1008,   -64,  -385,  1305,  1243,   952,
     560,  -385,    17,  -385,  1133,  1133,   242,   920,   920,  1683,
     245,   249,   256,   252,   863,  1044,   646,   417,   503,   503,
     456,   456,   456,   456,  -385,  -385,    68,   367,   372,   376,
    -385,  -385,  -385,   -18,   -30,   181,   308,   308,   382,   361,
      10,  -385,   398,  -385,  -385,  -385,   531,   100,  -385,   323,
    1710,   488,   405,   -64,  -385,  -385,   520,  -111,  -385,   -38,
     289,   386,  -111,   289,   386,   920,  -385,   290,   920,   920,
    -385,  1569,  1326,  -385,   920,  -385,  -385,  1548,   420,   420,
    -385,  -385,   437,   294,   295,  -385,  -385,   560,  1133,  1133,
     920,   252,   252,   252,   296,   -59,   449,   449,   449,   920,
     549,   550,   321,  -385,  -385,    10,   920,  -151,    10,   -91,
     -40,   302,   317,   428,   -11,  -385,   570,   252,   920,   920,
    -385,  -385,   660,   418,   571,  -385,   578,  -385,   687,   -94,
    -385,  -385,   -94,  -385,  -385,   394,  1710,  1590,  -385,   920,
     980,   920,   920,   329,   330,   551,   490,  -385,  -385,   348,
     349,   566,   353,   354,   355,  -385,  -385,   482,   359,   360,
     362,  1710,   593,   -16,   405,  -385,  1710,   920,   363,  -385,
    -385,   -87,   100,  -385,   364,   368,   480,   480,   369,   100,
     -67,  1316,  -385,   377,  1611,  1181,  -385,  1710,   494,   606,
    -385,  -385,    37,  1710,   380,  -385,  -385,  -385,  1710,   920,
    -385,   375,  1202,  -385,  -385,   920,   920,   321,  -385,  -385,
    -385,  -385,  -385,  -385,   626,   626,   626,   920,   920,   631,
    -385,  1710,   480,  -385,    79,   480,   480,    81,    86,   480,
    -385,  -385,   385,   385,   385,  -385,   385,  -385,  -385,   385,
     385,   387,   385,   385,   385,  -385,   595,  -385,   385,   595,
     385,   388,   385,   595,  -385,  -385,  -385,   385,   595,   389,
     390,  -385,  -385,   920,  -385,  -385,  -385,   920,   421,   768,
     817,  -385,   687,  1029,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,    19,  1710,   405,  -385,    92,    96,
     101,  1710,  1710,   625,   103,   -35,   107,   109,  -385,  -385,
     125,   643,  -385,  -385,  -385,  -385,  -385,  -385,   645,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,   645,  -385,  -385,
    -385,  -385,   647,   648,   227,  1611,  1710,   471,  -385,  1710,
    -385,  1710,   139,  -385,   467,  -385,   529,   652,  -385,  -385,
    -385,   920,  -385,  -385,  -385,  -385,  -385,   145,  -161,   286,
    -161,  -161,  -385,   146,  -161,  -161,  -161,   286,  -161,   286,
    -161,   176,  -161,   286,  -161,   286,   403,   406,   504,  -385,
     656,   313,  -385,  -385,   533,   -97,  -385,   412,  -385,  -385,
     480,  -385,  -385,  1710,   674,  -385,  -385,  -385,   491,   676,
     678,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,   480,   434,   430,   682,  -385,  -385,   286,
     286,   286,   178,  -385,  -385,  -385
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,   214,    88,    99,    99,    29,     0,    99,     0,     0,
       4,    83,    95,   120,   124,   133,   138,   216,   136,   136,
     215,     0,     0,   105,   105,     0,     0,   217,   218,     0,
       0,     1,     0,     2,     0,     0,     0,   136,    92,     0,
      87,    85,    86,     0,   101,   102,   103,   104,   100,     0,
       0,   222,   225,   226,   228,   227,   223,     0,     0,     0,
      40,    30,     0,     0,   299,   300,   298,    31,    32,     0,
      33,    36,    37,    35,    34,     0,     0,     0,     0,     0,
       5,    38,    54,     0,     0,     0,   103,   100,    54,     0,
       0,    42,    44,    45,    51,     3,     0,   134,   135,     0,
       0,    90,     7,     0,     0,     0,   106,   106,     0,   258,
       0,     0,   248,   249,   235,   301,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     221,   220,   219,     0,    77,     0,     0,     0,     0,    62,
      61,    65,    69,    66,     0,     0,    63,    50,     0,   137,
     211,    93,     0,    20,     0,     7,    92,     0,     0,     0,
       0,     0,   224,   256,   259,     0,   250,     0,     0,     0,
       0,   290,     0,     0,   256,     0,   276,   274,   275,     0,
       0,     0,     0,     0,     0,     7,    39,   237,   238,   236,
       0,   253,     0,   251,   294,   296,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   244,   245,   247,   229,   230,
     231,   232,   233,   234,   246,    52,    54,     0,     0,     0,
      46,    82,    49,     0,     7,    43,    63,    63,     0,    56,
       0,    64,     0,    48,   212,   213,     0,   147,   142,    51,
       8,     0,    22,     7,    89,    91,     0,    97,    27,     0,
       0,    97,    97,     0,    97,     0,   266,     0,     0,     0,
     288,     0,     0,   264,     0,   269,   272,     0,     0,     0,
     267,   268,     9,     0,     0,   254,   252,     0,   295,   297,
       0,     0,     0,     0,     0,    77,    79,    79,    79,     0,
       0,     0,    20,    67,    68,     0,     0,    71,     0,   211,
       0,     0,     0,     0,     0,   145,     0,     0,     0,     0,
      84,    94,     0,     0,     0,   114,     0,   107,     0,    97,
     115,   122,    97,   123,   257,   264,   292,     0,   291,     0,
       0,     0,     0,     0,     0,     0,    18,   262,   260,     0,
       0,   255,     0,     0,     0,   240,    47,     0,     0,     0,
       0,   129,     0,     0,    22,    59,    57,     0,     0,    55,
      70,     0,   147,   144,     0,     0,     0,     0,     0,   147,
     211,     0,   210,    21,    13,    23,   117,   116,     0,     0,
      28,   111,     0,   110,     0,    96,   121,   289,   293,     0,
     270,     0,     0,   277,   278,     0,     0,    20,   263,   261,
     243,   241,   242,    78,     0,     0,     0,     0,     0,     0,
     125,    72,     0,    58,     0,     0,     0,     0,     0,     0,
     146,   141,   167,   167,   167,   199,   167,   189,   192,   167,
     167,     0,   167,   167,   167,   201,   170,   200,   167,   170,
     167,     0,   167,   170,   190,   191,   198,   167,   170,     0,
       0,   193,   154,     0,    14,    15,    11,     0,     0,     0,
       0,   108,     0,     0,   273,   279,   280,   281,   282,   285,
     286,   287,   284,   283,    16,    19,    22,    80,     0,     0,
       0,   130,   131,     0,     0,   211,     0,     0,   151,   150,
       0,     0,   172,   196,   178,   175,   172,   172,     0,   172,
     172,   172,   171,   175,   172,   175,   172,     0,   172,   175,
     172,   175,     0,     0,   148,    13,    24,     0,   119,   118,
     113,   112,     0,   271,     0,    10,    25,     0,    76,    75,
      74,     0,    73,   143,   152,   153,   149,     0,   184,   194,
     188,   186,   208,     0,   187,   182,   183,   205,   181,   204,
     185,     0,   180,   203,   179,   202,     0,     0,     0,   161,
       0,     0,   165,   156,     0,     0,    12,    98,   109,    17,
       0,     6,    81,   132,     0,   168,   173,   174,     0,     0,
       0,   175,   175,   197,   175,   155,   166,   157,   158,   160,
     159,   164,   163,     0,    26,     0,     0,   177,   209,   206,
     207,   195,     0,   169,   176,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -385,  -385,   679,   -29,    33,  -385,   273,   154,  -385,  -385,
    -277,  -348,  -385,  -150,  -385,  -385,   572,   167,   538,  -115,
     438,   -70,  -385,  -385,    64,  -385,  -385,  -385,   318,   395,
    -128,    25,  -385,  -385,  -385,   662,   526,  -385,   -45,   218,
     683,   599,   435,   229,  -179,  -385,  -385,  -385,  -385,  -385,
      36,  -385,   331,   325,  -385,  -385,   497,  -384,    -6,  -143,
    -385,   188,  -303,  -385,  -385,  -385,  -385,   637,   -25,   -56,
    -385,  -385,   427,   609
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,   173,   356,   393,   476,   545,   417,
     262,   330,   591,   269,    25,    80,    81,    90,    91,    92,
     168,   149,    93,   165,   252,   166,   248,   379,   380,   240,
     368,   498,    94,    11,    22,    43,   101,    12,   335,    23,
      49,   179,   339,   402,   267,    13,    14,    30,   244,    15,
      35,    16,   324,   325,   326,   534,   512,   523,   558,   559,
     472,   563,   258,   259,    21,    17,    27,    28,   183,   184,
     185,   200,   353,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      82,   272,   309,    88,   428,   377,    51,    52,    53,    54,
      55,    56,  -126,    88,  -128,  -127,   383,   127,   154,   190,
      57,    58,   191,   295,   254,     5,   430,   177,    59,   104,
     211,   612,   112,   113,   114,   374,   220,   115,   117,    26,
     221,   212,   157,   246,   237,   333,    62,    38,   254,   249,
     125,     5,   148,    63,   279,    36,   238,   280,   150,   151,
     155,    18,   333,   596,   195,   199,    64,    65,    66,   377,
     270,   127,   174,    99,   254,   525,   384,   378,   158,   529,
     254,   242,   597,    33,   531,   186,   255,   441,   385,   178,
     193,   188,   247,    34,   105,   194,   273,   201,   202,   204,
      69,    82,   158,   207,   208,   209,   148,    37,   214,   215,
     255,   219,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,    51,    52,    53,    54,    55,    56,    51,
      52,    53,    54,    55,    56,   317,   255,    57,    58,   334,
     496,   378,   255,    57,    58,    59,    60,   260,   546,    39,
     271,    59,   274,    61,   294,   613,   404,    85,   277,    40,
      31,   382,   180,    62,   192,   281,   305,   282,   239,    62,
      63,   296,   196,   172,   105,   287,    63,    19,   213,   369,
     370,   293,  -139,    64,    65,    66,   158,     5,    41,    64,
      65,    66,   298,   299,   304,   126,   222,   108,   109,   192,
     375,    20,   553,   381,    67,    68,   320,   172,   264,   -92,
     256,   257,   336,    42,  -140,   337,   321,    69,   172,   344,
     311,     1,    24,    69,   178,    29,   340,   341,   322,   343,
      70,   -92,   100,   310,    83,   429,   437,   438,   292,   389,
       2,   360,   390,   159,   578,    84,    95,    75,    76,    77,
      78,    79,    89,   346,   347,   223,   156,   197,   544,   350,
      96,  -126,    89,  -128,  -127,   153,   323,   579,   359,   473,
      44,   175,   362,   363,   364,   361,   216,   312,   217,   218,
      97,     3,   504,   580,   371,   506,   507,   480,    98,   510,
     481,   376,   205,   100,   405,   411,   331,   406,   392,   160,
     102,    45,   106,   394,   395,   581,    46,   397,   -60,     1,
     313,   314,    44,   403,   161,   107,    47,   607,   608,   609,
     610,    71,    72,    73,   408,   110,    74,   412,     2,   389,
     119,   336,   505,   162,   508,    48,   336,     4,   598,   509,
     599,   263,   547,    45,   198,   548,   547,     5,    86,   549,
       6,   547,   431,   336,   550,   582,   552,   336,   587,   336,
     554,   167,   555,   163,    75,    76,    77,    78,    79,     3,
      75,    76,    77,    78,    79,   336,   120,    87,   556,   121,
     567,   583,   569,   122,   483,     7,   573,   164,   575,   480,
     394,   495,   588,   584,   123,   594,   600,  -264,   595,   601,
     124,   169,   501,   502,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,   170,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,     4,   600,   171,   336,   602,
    -264,   625,  -264,  -264,   176,     5,   182,   187,     6,     5,
     614,   141,   142,   143,   144,   145,   146,   147,   535,   585,
     499,   500,   536,   210,   539,   541,  -264,   403,   619,   620,
     235,   621,   236,   622,   241,   243,  -264,  -264,  -264,  -264,
     250,   251,   253,     7,   266,  -264,    51,    52,    53,    54,
      55,    56,   261,   268,   276,  -264,   147,   283,  -264,   285,
      57,    58,   286,   290,   297,   306,  -264,   301,    59,  -264,
     307,   302,  -264,  -264,   308,  -264,  -264,  -264,   303,   315,
     560,   561,  -264,   564,   565,   566,    62,   316,   568,  -264,
     570,  -264,   572,    63,   574,   318,   593,  -264,  -264,   143,
     144,   145,   146,   147,   319,   328,    64,    65,    66,   329,
     332,   338,   333,   345,   352,   355,  -264,   357,   358,   365,
    -264,   367,   372,   373,   386,  -264,   388,    51,    52,    53,
      54,    55,    56,    51,    52,    53,    54,    55,    56,   387,
      69,    57,    58,   391,   399,   398,  -264,    57,    58,    59,
     203,   400,   413,   414,  -264,    59,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    62,   415,   416,
    -264,   418,   419,    62,    63,  -264,   420,   421,   422,   423,
      63,   424,   425,   427,   426,   432,   435,    64,    65,    66,
     436,   439,   478,    64,    65,    66,   479,   473,   484,   497,
    -264,  -264,   482,  -264,   503,  -264,  -264,   511,   522,   518,
     527,   532,   533,  -264,  -264,   551,   537,  -264,   557,   562,
     589,    69,   576,   577,   590,   592,   603,    69,   605,   604,
     606,   611,   334,    51,    52,    53,    54,    55,    56,   140,
     141,   142,   143,   144,   145,   146,   147,    57,    58,   615,
     617,   616,   618,   623,   336,    59,   624,    32,   494,   586,
      51,    52,    53,    54,    55,    56,   245,   327,   206,   433,
     366,   103,   265,    62,    57,    58,   181,    50,   342,   116,
      63,   542,    59,   434,   440,   571,   354,    75,    76,    77,
      78,    79,   152,    64,    65,    66,   189,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,    63,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
      64,    65,    66,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,   401,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    69,    57,    58,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,    75,    76,
      77,    78,    79,     0,    75,    76,    77,    78,    79,     0,
       0,    62,     0,     0,     0,     0,     0,     0,    63,     0,
      51,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,    64,    65,    66,    57,    58,    51,    52,    53,    54,
      55,    56,    59,     0,     0,     0,   538,     0,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,    59,     0,
      62,     0,     0,     0,     0,    69,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,     0,     0,
      64,    65,    66,    63,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,   540,    64,    65,    66,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,    56,     0,
     111,    75,    76,    77,    78,    79,     0,    57,    58,     0,
     513,   514,     0,   515,     0,    59,   516,   517,     0,   519,
     520,   521,     0,     0,     0,   524,     0,   526,     0,   528,
       0,     0,     0,    62,   530,   131,   132,   133,   134,   135,
      63,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,    64,    65,    66,     0,     0,     0,     0,
     128,   129,   130,   131,   132,   133,   134,   135,     0,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,    75,    76,    77,    78,    79,    69,   128,   129,
     130,   131,   132,   133,   134,   135,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   128,
     129,   130,   131,   132,   133,   134,   135,     0,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,    75,    76,    77,    78,    79,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,    75,    76,    77,
      78,    79,   409,   128,   129,   130,   131,   132,   133,   134,
     135,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   128,   129,   130,   131,   132,   133,
     134,   135,     0,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   128,   129,   130,   131,   132,
     133,   134,   135,     0,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,  -265,  -265,  -265,  -265,
     135,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    75,    76,    77,    78,    79,     0,
     128,   129,   130,   131,   132,   133,   134,   135,   284,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   128,   129,   130,   131,   132,   133,   134,   135,     0,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   410,   128,   129,   130,   131,   132,   133,
     134,   135,     0,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   130,   131,   132,   133,   134,
     135,   291,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   485,   486,   487,   488,     0,     0,
       0,     0,   543,   128,   129,   130,   131,   132,   133,   134,
     135,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   489,   490,   491,   129,   130,   131,   132,
     133,   134,   135,   275,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   128,   129,   130,   131,
     132,   133,   134,   135,   275,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,   442,   443,
     444,   445,     0,     0,     0,   288,     0,     0,   446,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,     0,     0,     0,     0,   447,   448,     0,     0,
       0,     0,   449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   450,     0,     0,     0,     0,     0,     0,
     289,   451,     0,     0,     0,     0,     0,   452,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   477,     0,     0,     0,     0,     0,     0,   453,   454,
       0,     0,     0,   492,   493,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   455,   456,     0,
     116,     0,   457,   458,   459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278,     0,     0,     0,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   461,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   463,     0,     0,   464,   465,
     466,   467,   468,     0,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   469,
     470,     0,     0,     0,     0,     0,     0,   471,   128,   129,
     130,   131,   132,   133,   134,   135,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   128,
     129,   130,   131,   132,   133,   134,   135,     0,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     128,   129,   130,   131,   132,   133,   134,   135,     0,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   128,   129,   130,   131,   132,   133,   134,   135,     0,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,   127,     0,
     474,     0,     0,   351,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   348,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,     0,     0,
       0,     0,     0,   148,   407,     0,     0,     0,     0,     0,
       0,     0,   475,   128,   129,   130,   131,   132,   133,   134,
     135,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,     0,     0,     0,   300,
     128,   129,   130,   131,   132,   133,   134,   135,     0,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147
};

static const short int yycheck[] =
{
      25,   180,    20,     3,    20,   156,     3,     4,     5,     6,
       7,     8,     3,     3,     3,     3,   319,     3,    88,    91,
      17,    18,    94,     6,   115,   187,   374,   190,    25,   105,
       6,   128,    57,    58,    59,   312,    33,    62,    63,     8,
      37,    17,   190,   133,   103,   156,    43,     3,   115,   164,
     105,   187,    38,    50,    91,    19,   115,    94,    83,    84,
      89,    68,   156,   224,   120,   121,    63,    64,    65,   156,
     232,     3,   228,    37,   115,   459,   116,   228,   250,   463,
     115,   253,   243,   249,   468,   110,   177,   390,   128,   252,
     119,   116,   182,   114,   250,   120,   232,   122,   123,   124,
      97,   126,   250,   128,   129,   130,    38,   207,   133,   134,
     177,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     3,     4,     5,     6,     7,     8,     3,
       4,     5,     6,     7,     8,   250,   177,    17,    18,   250,
     417,   228,   177,    17,    18,    25,    26,   172,   496,   105,
     179,    25,   181,    33,   210,   252,   250,   250,   187,   115,
       0,   252,   190,    43,   236,   190,   236,   192,   227,    43,
      50,   154,    46,   237,   250,   200,    50,   184,   154,   307,
     308,   210,   249,    63,    64,    65,   250,   187,   144,    63,
      64,    65,   217,   218,   223,   250,   193,   251,   252,   236,
     315,   208,   505,   318,    84,    85,   106,   237,   175,   228,
     251,   252,   250,   169,   249,   253,   116,    97,   237,   275,
     250,    61,     4,    97,   252,     7,   271,   272,   128,   274,
     110,   250,   251,   251,     9,   251,   386,   387,   205,   250,
      80,   297,   253,    62,    17,    20,   249,   244,   245,   246,
     247,   248,   252,   278,   279,   252,    89,   131,   239,   284,
      17,   252,   252,   252,   252,   251,   166,    40,   297,   250,
      79,   104,   301,   302,   303,   300,    13,   244,    15,    16,
       3,   121,   432,    56,   309,   435,   436,   250,     3,   439,
     253,   316,   125,   251,   339,   351,   263,   342,   327,   118,
       3,   110,     3,   328,   329,    78,   115,   332,   127,    61,
     246,   247,    79,   338,   133,     3,   125,     4,     5,     6,
       7,   201,   202,   203,   349,     9,   206,   352,    80,   250,
     252,   250,   253,   152,   253,   144,   250,   177,    52,   253,
      54,   174,   250,   110,   218,   253,   250,   187,   115,   253,
     190,   250,   377,   250,   253,   128,   253,   250,   537,   250,
     253,    38,   253,   182,   244,   245,   246,   247,   248,   121,
     244,   245,   246,   247,   248,   250,   252,   144,   253,   252,
     523,   154,   525,   252,   409,   225,   529,   206,   531,   250,
     415,   416,   253,   166,   252,   250,   250,     3,   253,   253,
     252,    97,   427,   428,    10,    11,    12,    13,    14,    15,
      16,    17,     3,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   177,   250,    26,   250,   253,
      36,   253,    38,    39,     3,   187,     3,   252,   190,   187,
     590,    24,    25,    26,    27,    28,    29,    30,   473,   222,
     425,   426,   477,   252,   479,   480,    62,   482,   601,   602,
       3,   604,     3,   613,   253,     3,    72,    73,    74,    75,
     127,   163,     3,   225,     3,    81,     3,     4,     5,     6,
       7,     8,   161,     3,   253,    91,    30,   253,    94,   253,
      17,    18,   253,   253,   252,   128,   102,   252,    25,   105,
     128,   252,   108,   109,   128,   111,   112,   113,   252,   127,
     516,   517,   118,   519,   520,   521,    43,   156,   524,   125,
     526,   127,   528,    50,   530,   127,   551,   133,   134,    26,
      27,    28,    29,    30,     3,    47,    63,    64,    65,   134,
      20,   252,   156,   253,   124,   108,   152,   253,   253,   253,
     156,   102,     3,     3,   252,   161,   128,     3,     4,     5,
       6,     7,     8,     3,     4,     5,     6,     7,     8,   252,
      97,    17,    18,     3,     3,   157,   182,    17,    18,    25,
      26,     3,   253,   253,   190,    25,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    43,    47,   109,
     206,   253,   253,    43,    50,   211,   253,   253,   253,   127,
      50,   252,   252,    20,   252,   252,   252,    63,    64,    65,
     252,   252,   128,    63,    64,    65,    20,   250,   253,     3,
     236,   237,   252,   239,     3,   241,   242,   252,    43,   252,
     252,   252,   252,   249,   250,    20,   225,   253,     5,     4,
     183,    97,     5,     5,   125,     3,   253,    97,   154,   253,
       4,   128,   250,     3,     4,     5,     6,     7,     8,    23,
      24,    25,    26,    27,    28,    29,    30,    17,    18,     5,
       4,   190,     4,   253,   250,    25,     4,     8,   415,   535,
       3,     4,     5,     6,     7,     8,   158,   259,   126,   381,
     305,    39,   176,    43,    17,    18,   107,    24,   273,   236,
      50,   482,    25,   382,   389,   527,   289,   244,   245,   246,
     247,   248,    85,    63,    64,    65,   117,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      63,    64,    65,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,   244,   245,
     246,   247,   248,    -1,   244,   245,   246,   247,   248,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    17,    18,     3,     4,     5,     6,
       7,     8,    25,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      43,    -1,    -1,    -1,    -1,    97,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      63,    64,    65,    50,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    78,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      97,   244,   245,   246,   247,   248,    -1,    17,    18,    -1,
     443,   444,    -1,   446,    -1,    25,   449,   450,    -1,   452,
     453,   454,    -1,    -1,    -1,   458,    -1,   460,    -1,   462,
      -1,    -1,    -1,    43,   467,    13,    14,    15,    16,    17,
      50,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    63,    64,    65,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   244,   245,   246,   247,   248,    97,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   244,   245,   246,   247,   248,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,   244,   245,   246,
     247,   248,   102,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   244,   245,   246,   247,   248,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,   105,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   253,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    12,    13,    14,    15,    16,
      17,   253,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,   253,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,    11,    12,    13,    14,
      15,    16,    17,   250,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,   250,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    42,    43,
      44,    45,    -1,    -1,    -1,   250,    -1,    -1,    52,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
     250,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,   241,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
     236,    -1,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,    -1,    -1,    -1,    -1,    -1,    -1,   241,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      39,    -1,    -1,   105,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    94,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    61,    80,   121,   177,   187,   190,   225,   255,   256,
     257,   287,   291,   299,   300,   303,   305,   319,    68,   184,
     208,   318,   288,   293,   293,   268,     8,   320,   321,   293,
     301,     0,   256,   249,   114,   304,   304,   207,     3,   105,
     115,   144,   169,   289,    79,   110,   115,   125,   144,   294,
     294,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    33,    43,    50,    63,    64,    65,    84,    85,    97,
     110,   201,   202,   203,   206,   244,   245,   246,   247,   248,
     269,   270,   322,     9,    20,   250,   115,   144,     3,   252,
     271,   272,   273,   276,   286,   249,    17,     3,     3,   304,
     251,   290,     3,   289,   105,   250,     3,     3,   251,   252,
       9,    97,   322,   322,   322,   322,   236,   322,   327,   252,
     252,   252,   252,   252,   252,   105,   250,     3,    10,    11,
      12,    13,    14,    15,    16,    17,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    38,   275,
     322,   322,   321,   251,   275,   257,   271,   190,   250,    62,
     118,   133,   152,   182,   206,   277,   279,    38,   274,    97,
       3,    26,   237,   258,   228,   271,     3,   190,   252,   295,
     190,   295,     3,   322,   323,   324,   322,   252,   322,   327,
      91,    94,   236,   257,   322,   323,    46,   131,   218,   323,
     325,   322,   322,    26,   322,   271,   270,   322,   322,   322,
     252,     6,    17,   154,   322,   322,    13,    15,    16,   322,
      33,    37,   193,   252,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,     3,     3,   103,   115,   227,
     283,   253,   253,     3,   302,   272,   133,   182,   280,   273,
     127,   163,   278,     3,   115,   177,   251,   252,   316,   317,
     322,   161,   264,   271,   258,   290,     3,   298,     3,   267,
     232,   257,   298,   232,   257,   250,   253,   257,   211,    91,
      94,   322,   322,   253,   105,   253,   253,   322,   250,   250,
     253,   253,   258,   257,   323,     6,   154,   252,   322,   322,
      36,   252,   252,   252,   257,   275,   128,   128,   128,    20,
     251,   250,   258,   278,   278,   127,   156,   273,   127,     3,
     106,   116,   128,   166,   306,   307,   308,   274,    47,   134,
     265,   258,    20,   156,   250,   292,   250,   253,   252,   296,
     292,   292,   296,   292,   323,   253,   322,   322,    94,   211,
     322,   105,   124,   326,   326,   108,   259,   253,   253,   257,
     323,   322,   257,   257,   257,   253,   283,   102,   284,   284,
     284,   322,     3,     3,   264,   273,   322,   156,   228,   281,
     282,   273,   252,   316,   116,   128,   252,   252,   128,   250,
     253,     3,   257,   260,   322,   322,    78,   322,   157,     3,
       3,    78,   297,   322,   250,   292,   292,    94,   322,   102,
     253,   323,   322,   253,   253,    47,   109,   263,   253,   253,
     253,   253,   253,   127,   252,   252,   252,    20,    20,   251,
     265,   322,   252,   282,   306,   252,   252,   267,   267,   252,
     307,   316,    42,    43,    44,    45,    52,    70,    71,    76,
      87,    95,   101,   122,   123,   141,   142,   146,   147,   148,
     172,   190,   192,   209,   212,   213,   214,   215,   216,   233,
     234,   241,   314,   250,    39,    81,   261,   250,   128,    20,
     250,   253,   252,   322,   253,    72,    73,    74,    75,   111,
     112,   113,   241,   242,   260,   322,   264,     3,   285,   285,
     285,   322,   322,     3,   267,   253,   267,   267,   253,   253,
     267,   252,   310,   310,   310,   310,   310,   310,   252,   310,
     310,   310,    43,   311,   310,   311,   310,   252,   310,   311,
     310,   311,   252,   252,   309,   322,   322,   225,    78,   322,
      78,   322,   297,   253,   239,   262,   265,   250,   253,   253,
     253,    20,   253,   316,   253,   253,   253,     5,   312,   313,
     312,   312,     4,   315,   312,   312,   312,   313,   312,   313,
     312,   315,   312,   313,   312,   313,     5,     5,    17,    40,
      56,    78,   128,   154,   166,   222,   261,   298,   253,   183,
     125,   266,     3,   322,   250,   253,   224,   243,    52,    54,
     250,   253,   253,   253,   253,   154,     4,     4,     5,     6,
       7,   128,   128,   252,   267,     5,   190,     4,     4,   313,
     313,   313,   267,   253,     4,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   254,   255,   255,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   265,   265,   266,   266,   267,   267,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   269,   269,
     269,   270,   271,   271,   272,   272,   273,   273,   273,   273,
     274,   274,   275,   275,   275,   276,   276,   276,   276,   276,
     277,   277,   277,   278,   278,   279,   279,   280,   280,   280,
     281,   281,   282,   282,   283,   283,   283,   283,   284,   284,
     285,   285,   286,   256,   287,   288,   288,   288,   288,   287,
     289,   289,   290,   290,   287,   256,   291,   292,   292,   293,
     293,   293,   293,   293,   294,   294,   295,   295,   296,   296,
     297,   297,   297,   297,   291,   291,   298,   298,   298,   298,
     256,   299,   299,   299,   256,   300,   301,   301,   301,   302,
     302,   302,   302,   256,   303,   303,   304,   304,   256,   305,
     305,   305,   305,   305,   305,   306,   306,   308,   307,   307,
     307,   307,   307,   307,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   310,   310,   310,
     311,   311,   312,   312,   312,   313,   313,   313,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   315,   315,
     316,   317,   317,   317,   318,   318,   256,   319,   320,   320,
     321,   321,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   323,   323,   324,   324,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   325,   325,   325,   322,   322,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   322,   322,
     322,   322,   327,   327,   322,   322,   322,   322,   322,   322,
     322,   322
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     3,     1,     3,    11,     0,     2,     0,
       4,     2,     4,     0,     1,     1,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     2,     1,     3,     1,     1,     3,     5,     3,     3,
       1,     0,     2,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       1,     0,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     7,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     8,     0,     5,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     3,     5,
       1,     1,     3,     3,     7,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     1,     4,     4,     0,     3,     1,     8,
      10,     9,     6,    11,     8,     1,     3,     0,     4,     5,
       4,     4,     5,     5,     0,     3,     2,     3,     3,     3,
       3,     2,     5,     3,     3,     2,     3,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     3,
       3,     0,     1,     1,     0,     1,     1,     2,     1,     3,
       3,     3,     1,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       5,     6,     6,     6,     3,     3,     3,     3,     2,     2,
       3,     3,     4,     3,     4,     5,     1,     3,     0,     1,
       5,     6,     5,     6,     4,     5,     4,     4,     4,     4,
       6,     8,     4,     7,     1,     1,     1,     6,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       3,     5,     4,     5,     3,     4,     3,     4,     1,     1,
       1,     2
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     7,     9,    11,    13,    15,    17,
      19,    21,     0,    23,    25,    27,    29,    31,    33,    35,
      37,    39,    41,    43,    45,     0,     0,     0,     0,     0,
      47,     0,    49,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    57,    59,    61,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,    71,
       0,     0,    73,    75,     0,    77,    79,    81,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     1,     0,    85,
       0,    87,     0,     0,     0,     0,     0,    89,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
      95,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     0,     0,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   109,     0,   111,     0,   113,   115,     0,     0,     0,
       0,     0,     0,   117,   119,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,    56,     0,    71,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
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

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static _Noreturn void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static _Noreturn void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 4:
#line 314 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 1771 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 5:
#line 318 "glrmysql.y" /* glr.c:816  */
    { emit("SELECTNODATA %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 1777 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 6:
#line 322 "glrmysql.y" /* glr.c:816  */
    { emit("SELECT %d %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval)); }
#line 1783 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 8:
#line 326 "glrmysql.y" /* glr.c:816  */
    { emit("WHERE"); }
#line 1789 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 10:
#line 330 "glrmysql.y" /* glr.c:816  */
    { emit("GROUPBYLIST %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 1795 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 11:
#line 334 "glrmysql.y" /* glr.c:816  */
    { emit("GROUPBY %d",  (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = 1; }
#line 1801 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 12:
#line 336 "glrmysql.y" /* glr.c:816  */
    { emit("GROUPBY %d",  (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval) + 1; }
#line 1807 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 13:
#line 339 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 1813 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 14:
#line 340 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 1819 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 15:
#line 341 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 1825 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 16:
#line 344 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 1831 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 17:
#line 345 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 1837 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 19:
#line 348 "glrmysql.y" /* glr.c:816  */
    { emit("HAVING"); }
#line 1843 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 21:
#line 350 "glrmysql.y" /* glr.c:816  */
    { emit("ORDERBY %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 1849 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 23:
#line 353 "glrmysql.y" /* glr.c:816  */
    { emit("LIMIT 1"); }
#line 1855 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 24:
#line 354 "glrmysql.y" /* glr.c:816  */
    { emit("LIMIT 2"); }
#line 1861 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 26:
#line 358 "glrmysql.y" /* glr.c:816  */
    { emit("INTO %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 1867 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 27:
#line 361 "glrmysql.y" /* glr.c:816  */
    { emit("COLUMN %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 1873 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 28:
#line 362 "glrmysql.y" /* glr.c:816  */
    { emit("COLUMN %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 1879 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 29:
#line 365 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 1885 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 30:
#line 366 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 01) yyerror("duplicate ALL option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 01; }
#line 1891 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 31:
#line 367 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 02) yyerror("duplicate DISTINCT option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 02; }
#line 1897 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 32:
#line 368 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 04) yyerror("duplicate DISTINCTROW option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 04; }
#line 1903 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 33:
#line 369 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 010; }
#line 1909 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 34:
#line 370 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 020; }
#line 1915 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 35:
#line 371 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 040; }
#line 1921 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 36:
#line 372 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 0100; }
#line 1927 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 37:
#line 373 "glrmysql.y" /* glr.c:816  */
    { if(((*yyvalp).intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 0200; }
#line 1933 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 38:
#line 376 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 1939 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 39:
#line 377 "glrmysql.y" /* glr.c:816  */
    {((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 1945 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 40:
#line 378 "glrmysql.y" /* glr.c:816  */
    { emit("SELECTALL"); ((*yyvalp).intval) = 1; }
#line 1951 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 42:
#line 383 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 1957 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 43:
#line 384 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 1963 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 46:
#line 392 "glrmysql.y" /* glr.c:816  */
    { emit("TABLE %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 1969 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 47:
#line 393 "glrmysql.y" /* glr.c:816  */
    { emit("TABLE %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
                               free((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 1976 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 48:
#line 395 "glrmysql.y" /* glr.c:816  */
    { emit("SUBQUERYAS %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 1982 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 49:
#line 396 "glrmysql.y" /* glr.c:816  */
    { emit("TABLEREFERENCES %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 1988 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 52:
#line 403 "glrmysql.y" /* glr.c:816  */
    { emit ("ALIAS %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 1994 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 53:
#line 404 "glrmysql.y" /* glr.c:816  */
    { emit ("ALIAS %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2000 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 55:
#line 410 "glrmysql.y" /* glr.c:816  */
    { emit("JOIN %d", 0100+(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2006 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 56:
#line 412 "glrmysql.y" /* glr.c:816  */
    { emit("JOIN %d", 0200); }
#line 2012 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 57:
#line 414 "glrmysql.y" /* glr.c:816  */
    { emit("JOIN %d", 0200); }
#line 2018 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 58:
#line 416 "glrmysql.y" /* glr.c:816  */
    { emit("JOIN %d", 0300+(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval)+(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2024 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 59:
#line 418 "glrmysql.y" /* glr.c:816  */
    { emit("JOIN %d", 0400+(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval)); }
#line 2030 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 60:
#line 421 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2036 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 61:
#line 422 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 2042 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 62:
#line 423 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 2; }
#line 2048 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 63:
#line 426 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2054 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 64:
#line 427 "glrmysql.y" /* glr.c:816  */
    {((*yyvalp).intval) = 4; }
#line 2060 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 65:
#line 430 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 2066 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 66:
#line 431 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 2; }
#line 2072 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 67:
#line 434 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1 + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2078 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 68:
#line 435 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 2 + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2084 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 69:
#line 436 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2090 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 72:
#line 442 "glrmysql.y" /* glr.c:816  */
    { emit("ONEXPR"); }
#line 2096 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 73:
#line 443 "glrmysql.y" /* glr.c:816  */
    { emit("USING %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2102 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 74:
#line 448 "glrmysql.y" /* glr.c:816  */
    { emit("INDEXHINT %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), 010+(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2108 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 75:
#line 450 "glrmysql.y" /* glr.c:816  */
    { emit("INDEXHINT %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), 020+(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2114 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 76:
#line 452 "glrmysql.y" /* glr.c:816  */
    { emit("INDEXHINT %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), 030+(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2120 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 78:
#line 456 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 2126 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 79:
#line 457 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2132 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 80:
#line 460 "glrmysql.y" /* glr.c:816  */
    { emit("INDEX %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2138 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 81:
#line 461 "glrmysql.y" /* glr.c:816  */
    { emit("INDEX %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2144 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 82:
#line 464 "glrmysql.y" /* glr.c:816  */
    { emit("SUBQUERY"); }
#line 2150 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 83:
#line 469 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 2156 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 84:
#line 474 "glrmysql.y" /* glr.c:816  */
    { emit("DELETEONE %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2162 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 85:
#line 477 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 01; }
#line 2168 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 86:
#line 478 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 02; }
#line 2174 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 87:
#line 479 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 04; }
#line 2180 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 88:
#line 480 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2186 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 89:
#line 486 "glrmysql.y" /* glr.c:816  */
    { emit("DELETEMULTI %d %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2192 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 90:
#line 488 "glrmysql.y" /* glr.c:816  */
    { emit("TABLE %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2198 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 91:
#line 490 "glrmysql.y" /* glr.c:816  */
    { emit("TABLE %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval) + 1; }
#line 2204 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 94:
#line 498 "glrmysql.y" /* glr.c:816  */
    { emit("DELETEMULTI %d %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2210 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 95:
#line 503 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 2216 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 96:
#line 509 "glrmysql.y" /* glr.c:816  */
    { emit("INSERTVALS %d %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 2222 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 98:
#line 513 "glrmysql.y" /* glr.c:816  */
    { emit("DUPUPDATE %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2228 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 99:
#line 516 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2234 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 100:
#line 517 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 01 ; }
#line 2240 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 101:
#line 518 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 02 ; }
#line 2246 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 102:
#line 519 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 04 ; }
#line 2252 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 103:
#line 520 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 010 ; }
#line 2258 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 107:
#line 527 "glrmysql.y" /* glr.c:816  */
    { emit("INSERTCOLS %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2264 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 108:
#line 530 "glrmysql.y" /* glr.c:816  */
    { emit("VALUES %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = 1; }
#line 2270 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 109:
#line 531 "glrmysql.y" /* glr.c:816  */
    { emit("VALUES %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2276 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 110:
#line 534 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 2282 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 111:
#line 535 "glrmysql.y" /* glr.c:816  */
    { emit("DEFAULT"); ((*yyvalp).intval) = 1; }
#line 2288 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 112:
#line 536 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2294 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 113:
#line 537 "glrmysql.y" /* glr.c:816  */
    { emit("DEFAULT"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2300 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 114:
#line 543 "glrmysql.y" /* glr.c:816  */
    { emit("INSERTASGN %d %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2306 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 115:
#line 548 "glrmysql.y" /* glr.c:816  */
    { emit("INSERTSELECT %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2312 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 116:
#line 553 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
       emit("ASSIGN %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2319 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 117:
#line 556 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
                 emit("DEFAULT"); emit("ASSIGN %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2326 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 118:
#line 559 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval));
                 emit("ASSIGN %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2333 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 119:
#line 562 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval));
                 emit("DEFAULT"); emit("ASSIGN %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2340 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 120:
#line 567 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 2346 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 121:
#line 573 "glrmysql.y" /* glr.c:816  */
    { emit("REPLACEVALS %d %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 2352 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 122:
#line 579 "glrmysql.y" /* glr.c:816  */
    { emit("REPLACEASGN %d %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2358 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 123:
#line 584 "glrmysql.y" /* glr.c:816  */
    { emit("REPLACESELECT %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2364 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 124:
#line 588 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 2370 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 125:
#line 595 "glrmysql.y" /* glr.c:816  */
    { emit("UPDATE %d %d %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2376 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 126:
#line 598 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2382 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 127:
#line 599 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 01 ; }
#line 2388 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 128:
#line 600 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 010 ; }
#line 2394 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 129:
#line 605 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2401 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 130:
#line 608 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2408 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 131:
#line 611 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2415 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 132:
#line 614 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s.$s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2422 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 133:
#line 621 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 2428 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 134:
#line 625 "glrmysql.y" /* glr.c:816  */
    { emit("CREATEDATABASE %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2434 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 135:
#line 626 "glrmysql.y" /* glr.c:816  */
    { emit("CREATEDATABASE %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2440 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 136:
#line 629 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2446 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 137:
#line 630 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 2452 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 138:
#line 634 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 2458 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 139:
#line 638 "glrmysql.y" /* glr.c:816  */
    { emit("CREATE %d %d %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2464 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 140:
#line 642 "glrmysql.y" /* glr.c:816  */
    { emit("CREATE %d %d %d %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval));
                          free((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2471 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 141:
#line 648 "glrmysql.y" /* glr.c:816  */
    { emit("CREATESELECT %d %d %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 2477 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 142:
#line 652 "glrmysql.y" /* glr.c:816  */
    { emit("CREATESELECT %d %d 0 %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); }
#line 2483 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 143:
#line 657 "glrmysql.y" /* glr.c:816  */
    { emit("CREATESELECT %d %d 0 %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval));
                              free((((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 2490 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 144:
#line 662 "glrmysql.y" /* glr.c:816  */
    { emit("CREATESELECT %d %d 0 %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval));
                          free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); }
#line 2497 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 145:
#line 666 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 2503 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 146:
#line 667 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2509 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 147:
#line 670 "glrmysql.y" /* glr.c:816  */
    { emit("STARTCOL"); }
#line 2515 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 148:
#line 671 "glrmysql.y" /* glr.c:816  */
    { emit("COLUMNDEF %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 2521 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 149:
#line 673 "glrmysql.y" /* glr.c:816  */
    { emit("PRIKEY %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2527 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 150:
#line 674 "glrmysql.y" /* glr.c:816  */
    { emit("KEY %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2533 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 151:
#line 675 "glrmysql.y" /* glr.c:816  */
    { emit("KEY %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2539 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 152:
#line 676 "glrmysql.y" /* glr.c:816  */
    { emit("TEXTINDEX %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2545 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 153:
#line 677 "glrmysql.y" /* glr.c:816  */
    { emit("TEXTINDEX %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2551 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 154:
#line 680 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2557 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 155:
#line 681 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR NOTNULL"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2563 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 157:
#line 683 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR DEFAULT STRING %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2569 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 158:
#line 684 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR DEFAULT NUMBER %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2575 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 159:
#line 685 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR DEFAULT FLOAT %g", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.floatval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2581 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 160:
#line 686 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR DEFAULT BOOL %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2587 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 161:
#line 687 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR AUTOINC"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 1; }
#line 2593 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 162:
#line 688 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR UNIQUEKEY %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2599 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 163:
#line 689 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR UNIQUEKEY"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2605 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 164:
#line 690 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR PRIKEY"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2611 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 165:
#line 691 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR PRIKEY"); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 1; }
#line 2617 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 166:
#line 692 "glrmysql.y" /* glr.c:816  */
    { emit("ATTR COMMENT %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2623 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 167:
#line 695 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2629 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 168:
#line 696 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2635 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 169:
#line 697 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval) + 1000*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2641 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 170:
#line 700 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2647 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 171:
#line 701 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 4000; }
#line 2653 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 172:
#line 704 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2659 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 173:
#line 705 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 1000; }
#line 2665 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 174:
#line 706 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 2000; }
#line 2671 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 176:
#line 710 "glrmysql.y" /* glr.c:816  */
    { emit("COLCHARSET %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2677 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 177:
#line 711 "glrmysql.y" /* glr.c:816  */
    { emit("COLCOLLATE %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2683 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 178:
#line 715 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 10000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2689 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 179:
#line 716 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 10000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2695 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 180:
#line 717 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 20000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2701 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 181:
#line 718 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 30000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2707 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 182:
#line 719 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 40000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2713 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 183:
#line 720 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 50000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2719 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 184:
#line 721 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 60000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2725 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 185:
#line 722 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 70000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2731 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 186:
#line 723 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 80000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2737 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 187:
#line 724 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 90000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2743 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 188:
#line 725 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 110000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2749 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 189:
#line 726 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 100001; }
#line 2755 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 190:
#line 727 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 100002; }
#line 2761 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 191:
#line 728 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 100003; }
#line 2767 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 192:
#line 729 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 100004; }
#line 2773 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 193:
#line 730 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 100005; }
#line 2779 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 194:
#line 731 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 120000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2785 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 195:
#line 732 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 130000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval); }
#line 2791 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 196:
#line 733 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 140000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2797 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 197:
#line 734 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 150000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2803 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 198:
#line 735 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 160001; }
#line 2809 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 199:
#line 736 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 160002; }
#line 2815 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 200:
#line 737 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 160003; }
#line 2821 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 201:
#line 738 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 160004; }
#line 2827 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 202:
#line 739 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 170000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2833 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 203:
#line 740 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 171000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2839 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 204:
#line 741 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 172000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2845 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 205:
#line 742 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 173000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 2851 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 206:
#line 743 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 200000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval); }
#line 2857 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 207:
#line 744 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 210000 + (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval); }
#line 2863 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 208:
#line 747 "glrmysql.y" /* glr.c:816  */
    { emit("ENUMVAL %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2869 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 209:
#line 748 "glrmysql.y" /* glr.c:816  */
    { emit("ENUMVAL %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2875 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 210:
#line 751 "glrmysql.y" /* glr.c:816  */
    {
					   emit("CREATESELECT %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval)); }
#line 2882 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 211:
#line 755 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2888 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 212:
#line 756 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 2894 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 213:
#line 757 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 2; }
#line 2900 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 214:
#line 760 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 2906 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 215:
#line 761 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1;}
#line 2912 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 216:
#line 766 "glrmysql.y" /* glr.c:816  */
    { emit("STMT"); }
#line 2918 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 220:
#line 774 "glrmysql.y" /* glr.c:816  */
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad set to @%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
		 emit("SET %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 2925 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 221:
#line 776 "glrmysql.y" /* glr.c:816  */
    { emit("SET %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 2931 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 222:
#line 781 "glrmysql.y" /* glr.c:816  */
    { emit("NAME %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2937 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 223:
#line 782 "glrmysql.y" /* glr.c:816  */
    { emit("USERVAR %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2943 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 224:
#line 783 "glrmysql.y" /* glr.c:816  */
    { emit("FIELDNAME %s.%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2949 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 225:
#line 784 "glrmysql.y" /* glr.c:816  */
    { emit("STRING %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2955 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 226:
#line 785 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2961 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 227:
#line 786 "glrmysql.y" /* glr.c:816  */
    { emit("FLOAT %g", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.floatval)); }
#line 2967 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 228:
#line 787 "glrmysql.y" /* glr.c:816  */
    { emit("BOOL %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2973 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 229:
#line 790 "glrmysql.y" /* glr.c:816  */
    { emit("ADD"); }
#line 2979 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 230:
#line 791 "glrmysql.y" /* glr.c:816  */
    { emit("SUB"); }
#line 2985 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 231:
#line 792 "glrmysql.y" /* glr.c:816  */
    { emit("MUL"); }
#line 2991 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 232:
#line 793 "glrmysql.y" /* glr.c:816  */
    { emit("DIV"); }
#line 2997 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 233:
#line 794 "glrmysql.y" /* glr.c:816  */
    { emit("MOD"); }
#line 3003 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 234:
#line 795 "glrmysql.y" /* glr.c:816  */
    { emit("MOD"); }
#line 3009 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 235:
#line 796 "glrmysql.y" /* glr.c:816  */
    { emit("NEG"); }
#line 3015 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 236:
#line 797 "glrmysql.y" /* glr.c:816  */
    { emit("AND"); }
#line 3021 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 237:
#line 798 "glrmysql.y" /* glr.c:816  */
    { emit("OR"); }
#line 3027 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 238:
#line 799 "glrmysql.y" /* glr.c:816  */
    { emit("XOR"); }
#line 3033 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 239:
#line 800 "glrmysql.y" /* glr.c:816  */
    { emit("CMP %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok)); }
#line 3039 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 240:
#line 801 "glrmysql.y" /* glr.c:816  */
    { emit("CMPSELECT %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.subtok)); }
#line 3045 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 241:
#line 802 "glrmysql.y" /* glr.c:816  */
    { emit("CMPANYSELECT %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.subtok)); }
#line 3051 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 242:
#line 803 "glrmysql.y" /* glr.c:816  */
    { emit("CMPANYSELECT %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.subtok)); }
#line 3057 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 243:
#line 804 "glrmysql.y" /* glr.c:816  */
    { emit("CMPALLSELECT %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.subtok)); }
#line 3063 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 244:
#line 805 "glrmysql.y" /* glr.c:816  */
    { emit("BITOR"); }
#line 3069 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 245:
#line 806 "glrmysql.y" /* glr.c:816  */
    { emit("BITAND"); }
#line 3075 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 246:
#line 807 "glrmysql.y" /* glr.c:816  */
    { emit("BITXOR"); }
#line 3081 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 247:
#line 808 "glrmysql.y" /* glr.c:816  */
    { emit("SHIFT %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok)==1?"left":"right"); }
#line 3087 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 248:
#line 809 "glrmysql.y" /* glr.c:816  */
    { emit("NOT"); }
#line 3093 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 249:
#line 810 "glrmysql.y" /* glr.c:816  */
    { emit("NOT"); }
#line 3099 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 250:
#line 811 "glrmysql.y" /* glr.c:816  */
    { emit("ASSIGN @%s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 3105 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 251:
#line 814 "glrmysql.y" /* glr.c:816  */
    { emit("ISNULL"); }
#line 3111 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 252:
#line 815 "glrmysql.y" /* glr.c:816  */
    { emit("ISNULL"); emit("NOT"); }
#line 3117 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 253:
#line 816 "glrmysql.y" /* glr.c:816  */
    { emit("ISBOOL %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 3123 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 254:
#line 817 "glrmysql.y" /* glr.c:816  */
    { emit("ISBOOL %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); emit("NOT"); }
#line 3129 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 255:
#line 820 "glrmysql.y" /* glr.c:816  */
    { emit("BETWEEN"); }
#line 3135 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 256:
#line 824 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 3141 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 257:
#line 825 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1 + (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3147 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 258:
#line 828 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 0; }
#line 3153 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 260:
#line 832 "glrmysql.y" /* glr.c:816  */
    { emit("ISIN %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3159 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 261:
#line 833 "glrmysql.y" /* glr.c:816  */
    { emit("ISIN %d", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); emit("NOT"); }
#line 3165 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 262:
#line 834 "glrmysql.y" /* glr.c:816  */
    { emit("INSELECT"); }
#line 3171 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 263:
#line 835 "glrmysql.y" /* glr.c:816  */
    { emit("INSELECT"); emit("NOT"); }
#line 3177 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 264:
#line 836 "glrmysql.y" /* glr.c:816  */
    { emit("EXISTS 1"); }
#line 3183 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 265:
#line 837 "glrmysql.y" /* glr.c:816  */
    { emit("EXISTS 0"); }
#line 3189 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 266:
#line 840 "glrmysql.y" /* glr.c:816  */
    {  emit("CALL %d %s", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 3195 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 267:
#line 844 "glrmysql.y" /* glr.c:816  */
    { emit("COUNTALL"); }
#line 3201 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 268:
#line 845 "glrmysql.y" /* glr.c:816  */
    { emit(" CALL 1 COUNT"); }
#line 3207 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 269:
#line 847 "glrmysql.y" /* glr.c:816  */
    {  emit("CALL %d SUBSTR", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval));}
#line 3213 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 270:
#line 848 "glrmysql.y" /* glr.c:816  */
    {  emit("CALL 2 SUBSTR"); }
#line 3219 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 271:
#line 849 "glrmysql.y" /* glr.c:816  */
    {  emit("CALL 3 SUBSTR"); }
#line 3225 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 272:
#line 850 "glrmysql.y" /* glr.c:816  */
    { emit("CALL %d TRIM", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3231 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 273:
#line 851 "glrmysql.y" /* glr.c:816  */
    { emit("CALL 3 TRIM"); }
#line 3237 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 274:
#line 854 "glrmysql.y" /* glr.c:816  */
    { emit("INT 1"); }
#line 3243 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 275:
#line 855 "glrmysql.y" /* glr.c:816  */
    { emit("INT 2"); }
#line 3249 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 276:
#line 856 "glrmysql.y" /* glr.c:816  */
    { emit("INT 3"); }
#line 3255 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 277:
#line 859 "glrmysql.y" /* glr.c:816  */
    { emit("CALL 3 DATE_ADD"); }
#line 3261 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 278:
#line 860 "glrmysql.y" /* glr.c:816  */
    { emit("CALL 3 DATE_SUB"); }
#line 3267 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 279:
#line 863 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 1"); }
#line 3273 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 280:
#line 864 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 2"); }
#line 3279 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 281:
#line 865 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 3"); }
#line 3285 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 282:
#line 866 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 4"); }
#line 3291 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 283:
#line 867 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 5"); }
#line 3297 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 284:
#line 868 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 6"); }
#line 3303 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 285:
#line 869 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 7"); }
#line 3309 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 286:
#line 870 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 8"); }
#line 3315 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 287:
#line 871 "glrmysql.y" /* glr.c:816  */
    { emit("NUMBER 9"); }
#line 3321 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 288:
#line 874 "glrmysql.y" /* glr.c:816  */
    { emit("CASEVAL %d 0", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3327 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 289:
#line 875 "glrmysql.y" /* glr.c:816  */
    { emit("CASEVAL %d 1", (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 3333 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 290:
#line 876 "glrmysql.y" /* glr.c:816  */
    { emit("CASE %d 0", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3339 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 291:
#line 877 "glrmysql.y" /* glr.c:816  */
    { emit("CASE %d 1", (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 3345 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 292:
#line 880 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = 1; }
#line 3351 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 293:
#line 881 "glrmysql.y" /* glr.c:816  */
    { ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval)+1; }
#line 3357 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 294:
#line 884 "glrmysql.y" /* glr.c:816  */
    { emit("LIKE"); }
#line 3363 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 295:
#line 885 "glrmysql.y" /* glr.c:816  */
    { emit("LIKE"); emit("NOT"); }
#line 3369 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 296:
#line 888 "glrmysql.y" /* glr.c:816  */
    { emit("REGEXP"); }
#line 3375 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 297:
#line 889 "glrmysql.y" /* glr.c:816  */
    { emit("REGEXP"); emit("NOT"); }
#line 3381 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 298:
#line 892 "glrmysql.y" /* glr.c:816  */
    { emit("NOW"); }
#line 3387 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 299:
#line 893 "glrmysql.y" /* glr.c:816  */
    { emit("NOW"); }
#line 3393 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 300:
#line 894 "glrmysql.y" /* glr.c:816  */
    { emit("NOW"); }
#line 3399 "glrmysql.tab.c" /* glr.c:816  */
    break;

  case 301:
#line 897 "glrmysql.y" /* glr.c:816  */
    { emit("STRTOBIN"); }
#line 3405 "glrmysql.tab.c" /* glr.c:816  */
    break;


#line 3409 "glrmysql.tab.c" /* glr.c:816  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

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

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-385)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-265)))

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                                              );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULLPTR;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
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

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
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
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
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
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
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
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
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
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULLPTR);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
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

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 900 "glrmysql.y" /* glr.c:2584  */


void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(const char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
