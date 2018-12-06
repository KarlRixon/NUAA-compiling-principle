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
#line 1 "sql.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>

#define N 20
bool numberflag=false;
int i=0;
int fieldnum=0;
void yyerror(char *s, ...);
void emit(char *s, ...);
//char *database;

//字段信息
struct tableField {
    char *field;  //字段
    int type;    // 0 int ;1 char
    int length;
    char *value;
    struct tableField *nextfield;
};
//表名
struct createStruct {
    char *table;
    struct tableField * tfield;
};
//运行时存储的数据库和表的相关信息
typedef struct dbs {
    char *dbname;
    struct createStruct *table;
    struct dbs *nextdb;
    }DBS;
DBS *head=NULL;
typedef struct tableContent {
    char *tablename;
    struct tableField *field[10];
}Tables;
Tables *tHead=NULL;
//select struct
struct selectTable {
    char *table;
    struct selectTable *next;
};
struct selectFields {
    char *table;
    char *field;
    struct selectFields *next;
};
struct selectConditions {
    struct selectConditions *left;
    struct selectConditions *right;
    char *comp_op;
    int type;
    char *value;
    char *table;
};
struct selectStruct {
    struct selectTable  *table;
    struct selectFields *fields;
    struct selectConditions *cons;
};

//update insert struct
struct insertStruct {
    char *table;
    struct selectConditions *setop;
};

//delete struct 
struct deleteStruct {
    char *table;
    struct selectConditions *cons;
};

//update sql
struct updateStruct {
    char *table;
    struct selectConditions *set_cons;
    struct selectConditions *find_cons;
};

//functions
bool createdb (char *dbname);
bool createtable(struct createStruct *table);
void showtable();
void showinfo();
void select_results(struct selectStruct *ss); 
void inserttable(struct insertStruct *);
void inserttable1(struct selectConditions *);
void insert(struct tableContent *,int ,struct selectConditions *);
void insertfield(Tables *tc,int i);
void showtablecontent(Tables *tc);
void printf_i(const int i);
//int get_field_i (int *select,struct selectConditions *cons,int flag);
bool is_right (int j,struct selectConditions *cons);
bool search_depend_on_cons( int *select,struct selectConditions *cons,int j);
void print_select_info(int j,struct selectFields* fields,int flag);
void delete_select(struct deleteStruct*);
void free_select_cons_sql(struct selectConditions* tmp); 
void update_select(struct updateStruct *us);
void update (int j,struct selectConditions *cons);
void drop_table();

#line 174 "y.tab.c" /* yacc.c:339  */

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
    NUMBER = 258,
    TABLE = 259,
    CHAR = 260,
    INT = 261,
    CREATE = 262,
    DATABASE = 263,
    SELECT = 264,
    FROM = 265,
    VAR = 266,
    WHERE = 267,
    AND = 268,
    OR = 269,
    DELETE = 270,
    USE = 271,
    DROP = 272,
    UPDATE = 273,
    INSERT = 274,
    SET = 275,
    INTO = 276,
    VALUES = 277,
    SHOW = 278,
    TABLES = 279
  };
#endif
/* Tokens.  */
#define NUMBER 258
#define TABLE 259
#define CHAR 260
#define INT 261
#define CREATE 262
#define DATABASE 263
#define SELECT 264
#define FROM 265
#define VAR 266
#define WHERE 267
#define AND 268
#define OR 269
#define DELETE 270
#define USE 271
#define DROP 272
#define UPDATE 273
#define INSERT 274
#define SET 275
#define INTO 276
#define VALUES 277
#define SHOW 278
#define TABLES 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 108 "sql.y" /* yacc.c:355  */

        int ival;
        char *sval;

        struct tableField *tf;
        struct createStruct *cs;

        struct selectConditions *sc;
        struct selectFields  *sf;
        struct selectTable *st;
        struct selectStruct  *ss;

        struct insertStruct *is;

        struct deleteStruct *ds;

        struct updateStruct *us;

#line 281 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 298 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   87

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,     2,     2,     2,
      26,    27,    29,     2,    28,     2,    30,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    25,
      31,    33,    32,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   183,   183,   184,   187,   196,   209,   218,   228,   229,
     230,   231,   236,   251,   254,   255,   260,   267,   270,   276,
     282,   288,   293,   298,   300,   308,   315,   319,   323,   328,
     334,   337,   339,   344,   351,   354,   355,   359,   366,   373,
     393,   394,   395,   396,   397,   398,   399,   402,   407,   413,
     416,   419,   435,   445,   452,   453,   456,   465
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "TABLE", "CHAR", "INT",
  "CREATE", "DATABASE", "SELECT", "FROM", "VAR", "WHERE", "AND", "OR",
  "DELETE", "USE", "DROP", "UPDATE", "INSERT", "SET", "INTO", "VALUES",
  "SHOW", "TABLES", "';'", "'('", "')'", "','", "'*'", "'.'", "'<'", "'>'",
  "'='", "'!'", "$accept", "sqls", "sql", "create_database_sql", "dbs",
  "create_tables_sql", "table_name", "fieldsdefinition", "field_type",
  "fieldtype", "type", "select_sql", "select_fields", "fields", "field",
  "tables", "table", "select_conditions", "select_condition", "comp_left",
  "comp_right", "comp_op", "delete_sql", "delete_conditions",
  "use_database_sql", "drop_table_sql", "drop_database_sql", "update_sql",
  "set_opt", "find_opt", "insert_sql", "show_table_sql", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    59,    40,    41,    44,    42,
      46,    60,    62,    61,    33
};
# endif

#define YYPACT_NINF -58

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-58)))

#define YYTABLE_NINF -35

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      28,     3,    -1,     7,    23,    45,    25,    13,    36,     6,
      27,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,    25,    53,    35,   -58,    56,    39,   -58,    38,    25,
      53,    25,    53,   -58,    49,    25,   -58,   -58,    46,   -58,
      44,   -58,   -58,    61,    62,    63,    64,   -58,   -58,   -58,
       1,    55,   -58,    66,   -58,     4,   -58,   -58,   -58,     1,
       1,   -58,    -5,   -58,    24,    67,     1,   -58,    11,   -58,
      57,     1,    61,    -5,   -58,    -9,     1,     1,   -58,   -58,
     -58,    48,    30,     1,   -58,   -58,    66,    52,   -58,   -58,
      -5,   -58,   -58,   -58,    69,   -58,   -58,   -58,   -58,    -5,
     -58,   -58,    80,    58,   -58
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,    30,    27,     0,    26,    28,     0,     0,
       0,     0,     0,    17,     0,     0,    57,     1,     0,     2,
       0,    15,    14,     0,     0,     0,    47,    50,    51,    52,
       0,     0,     3,     0,    34,    24,    32,    29,    31,     0,
       0,    40,    54,    35,     0,     0,     0,    21,     0,    18,
       0,     0,     0,    49,    48,     0,     0,     0,    43,    44,
      45,     0,     0,     0,    56,    16,     0,     0,    23,    20,
      25,    33,    36,    37,    38,    46,    42,    41,    39,    55,
      53,    19,     0,     0,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,    75,   -58,    29,   -58,    19,   -58,     0,   -58,
     -58,   -58,   -58,   -58,    -2,   -58,   -42,   -57,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,    21,   -58,
     -58,   -58
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    42,    12,    34,    68,    69,    70,
      89,    13,    25,    26,    61,    55,    28,    62,    63,    64,
      98,    82,    14,    74,    15,    16,    17,    18,    65,   100,
      19,    20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      27,    56,    73,    75,    76,    77,    37,    21,    76,    77,
      23,    22,    23,     1,    90,     2,    71,    29,    92,    93,
      94,     3,     4,     5,     6,     7,    99,    60,    24,     8,
      91,    30,    72,    96,    35,     1,    33,     2,    85,    86,
      40,    23,    57,     3,     4,     5,     6,     7,    46,    31,
      48,     8,    39,    32,    51,    78,    79,    80,    81,    47,
      36,    49,    87,    88,    41,   -34,    43,    44,    45,    50,
      53,    52,    54,    23,    58,    66,    59,    67,   102,    83,
      97,    95,    76,   103,    38,   104,   101,    84
};

static const yytype_uint8 yycheck[] =
{
       2,    43,    59,    60,    13,    14,     0,     4,    13,    14,
      11,     8,    11,     7,    71,     9,    12,    10,    27,    76,
      77,    15,    16,    17,    18,    19,    83,    26,    29,    23,
      72,     8,    28,     3,    21,     7,    11,     9,    27,    28,
      21,    11,    44,    15,    16,    17,    18,    19,    29,     4,
      31,    23,    25,     8,    35,    31,    32,    33,    34,    30,
      24,    32,     5,     6,    11,    30,    10,    28,    30,    20,
      26,    25,    11,    11,    11,    20,    12,    11,    26,    12,
      82,    33,    13,     3,     9,    27,    86,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     9,    15,    16,    17,    18,    19,    23,    36,
      37,    38,    40,    46,    57,    59,    60,    61,    62,    65,
      66,     4,     8,    11,    29,    47,    48,    49,    51,    10,
       8,     4,     8,    11,    41,    21,    24,     0,    37,    25,
      41,    11,    39,    10,    28,    30,    41,    39,    41,    39,
      20,    41,    25,    26,    11,    50,    51,    49,    11,    12,
      26,    49,    52,    53,    54,    63,    20,    11,    42,    43,
      44,    12,    28,    52,    58,    52,    13,    14,    31,    32,
      33,    34,    56,    12,    63,    27,    28,     5,     6,    45,
      52,    51,    27,    52,    52,    33,     3,    49,    55,    52,
      64,    43,    26,     3,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    38,    39,    40,    41,    42,    42,
      43,    44,    45,    45,    46,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    52,    52,    52,    52,    53,
      54,    55,    55,    56,    56,    56,    56,    57,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     6,     1,     1,     3,
       2,     1,     4,     1,     4,     6,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     2,     3,     5,     1,
       3,     3,     3,     6,     1,     1,     5,     2
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
        case 4:
#line 188 "sql.y" /* yacc.c:1646  */
    {
           if(createdb(yylval.sval))
            printf("create db %s succeed!\n",yylval.sval);
            else
            printf("create db %s failed!\n",yylval.sval);
            printf("sql>");
            //printf("%s",head->dbname);
        }
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 197 "sql.y" /* yacc.c:1646  */
    {
        if(createtable((yyvsp[0].cs)))
            printf("create table %s succeed!\n",(yyvsp[0].cs)->table);
        else 
            printf("create table %s failed!\n",(yyvsp[0].cs)->table);
 //           showinfo();
            //fieldnum=0;
            printf("sql>");
        //printf("table %s type %d filed %s length %d\n",$1->table,$1->tfield->type,$1->tfield,$1->tfield->length);
        //printf(" type %d filed %s length %d\n",$1->tfield->type,$1->tfield,$1->tfield->length);
        //printf("field %s ",$1->tfield->nextfield);
        }
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 210 "sql.y" /* yacc.c:1646  */
    {
            select_results((yyvsp[0].ss)); 
            printf("sql>"); 
            struct selectConditions *tmp= (yyvsp[0].ss)->cons;
            //free($1);
            (yyvsp[0].ss)=NULL;
            //free_select_cons_sql(tmp); 
        }
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 219 "sql.y" /* yacc.c:1646  */
    {
            delete_select((yyvsp[0].ds));
            printf("delete succeed!\nsql>");
            struct selectConditions *tmp= (yyvsp[0].ds)->cons ;
            //free($1);
            (yyvsp[0].ds)=NULL;
            //free_select_cons_sql(tmp); 
       
       }
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 228 "sql.y" /* yacc.c:1646  */
    {}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 232 "sql.y" /* yacc.c:1646  */
    {
            update_select((yyvsp[0].us));
            //printf("update table %s succeed!\nsql>",$1->table);
       }
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 237 "sql.y" /* yacc.c:1646  */
    {
       if(i>0)
         insertfield(tHead,i);  //第i次插入,新建field[i]
 
         inserttable1((yyvsp[0].is)->setop);
         printf("insert succeed!\n");
         //printf_i(i);
         i++;
         //insertfield(tHead,i);  //第i次插入,新建field[i]
         //showtablecontent(tHead);
         printf("sql>");


       }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 254 "sql.y" /* yacc.c:1646  */
    {}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 255 "sql.y" /* yacc.c:1646  */
    {
      //  emit("create database %s succeed!",$1);
       // printf("sql>");
        }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 261 "sql.y" /* yacc.c:1646  */
    {
                 (yyval.cs)=(struct createStruct*)malloc(sizeof(struct createStruct));
                 (yyval.cs)->table=(yyvsp[-3].sval);
                 (yyval.cs)->tfield=(yyvsp[-1].tf);
                 //printf("%s",$$->tfield->length);
                 }
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 268 "sql.y" /* yacc.c:1646  */
    {
          }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 271 "sql.y" /* yacc.c:1646  */
    {
                    (yyval.tf)=(struct tableField*)malloc(sizeof(struct tableField));
                    (yyval.tf)=(yyvsp[0].tf);
                    (yyval.tf)->nextfield=NULL;
                 }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 277 "sql.y" /* yacc.c:1646  */
    {
                    (yyval.tf)=(struct tableField*)malloc(sizeof(struct tableField));
                    (yyval.tf)=(yyvsp[0].tf);
                    (yyval.tf)->nextfield=(yyvsp[-2].tf);
                }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 283 "sql.y" /* yacc.c:1646  */
    {
           //fieldnum++;  //字段数量
            //$$->field=(char*)malloc(10*sizeof(char));
            //strcpy($$->field,$1);
           }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 289 "sql.y" /* yacc.c:1646  */
    {
            //printf("aa %s\n",yylval.sval);
            (yyvsp[0].sval)=yylval.sval;
         }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 294 "sql.y" /* yacc.c:1646  */
    {
        (yyval.tf)->type=1; 
        (yyval.tf)->length=(yyvsp[-1].ival); 
      }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 298 "sql.y" /* yacc.c:1646  */
    {(yyval.tf)->type=0;}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 301 "sql.y" /* yacc.c:1646  */
    {
             //emit("SELECT %s field FROM %d table", $2, $4);
             (yyval.ss)=(struct selectStruct*)malloc(sizeof(struct selectStruct));
             (yyval.ss)->fields=(yyvsp[-2].sf);
             (yyval.ss)->table=(yyvsp[0].st);
             (yyval.ss)->cons=NULL;
          }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 309 "sql.y" /* yacc.c:1646  */
    {
             (yyval.ss)=(struct selectStruct*)malloc(sizeof(struct selectStruct));
             (yyval.ss)->fields=(yyvsp[-4].sf);
             (yyval.ss)->table=(yyvsp[-2].st);
             (yyval.ss)->cons=(yyvsp[0].sc);
        }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 316 "sql.y" /* yacc.c:1646  */
    {
                (yyval.sf)=(yyvsp[0].sf);
             }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 320 "sql.y" /* yacc.c:1646  */
    {
                (yyval.sf)->field="*";
             }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 324 "sql.y" /* yacc.c:1646  */
    {
                (yyval.sf)=(struct selectFields*)malloc(sizeof(struct selectFields));
                (yyval.sf)->field=(yyvsp[0].sval);
      }
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 329 "sql.y" /* yacc.c:1646  */
    {
                (yyval.sf)=(struct selectFields*)malloc(sizeof(struct selectFields));
                (yyval.sf)->field=(yyvsp[0].sval);
                (yyval.sf)->next=(yyvsp[-2].sf); 
        }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 334 "sql.y" /* yacc.c:1646  */
    {
//        emit("filed %s", $1);
}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 340 "sql.y" /* yacc.c:1646  */
    {
            (yyval.st)=(struct selectTable*)malloc(sizeof(struct selectTable));
            (yyval.st)->table=(yyvsp[0].sval);
      }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 345 "sql.y" /* yacc.c:1646  */
    { 
            (yyval.st)=(struct selectTable*)malloc(sizeof(struct selectTable));
            (yyval.st)->table=(yyvsp[0].sval);
            //$$->next=(struct selectTable*)malloc(sizeof(struct selectTable));      
            (yyval.st)->next=(yyvsp[-2].st);
      }
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 351 "sql.y" /* yacc.c:1646  */
    {
        //emit("table %s", $1);
}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 354 "sql.y" /* yacc.c:1646  */
    { (yyval.sc)=(yyvsp[0].sc); fieldnum++;}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 356 "sql.y" /* yacc.c:1646  */
    {
                    (yyval.sc)=(yyvsp[-1].sc);
                }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 360 "sql.y" /* yacc.c:1646  */
    {
                    (yyval.sc)=(struct selectConditions*)malloc(sizeof(struct selectConditions));
                    (yyval.sc)->comp_op="a";
                    (yyval.sc)->left=(yyvsp[-2].sc);
                    (yyval.sc)->right=(yyvsp[0].sc);
                 }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 367 "sql.y" /* yacc.c:1646  */
    {
                    (yyval.sc)=(struct selectConditions*)malloc(sizeof(struct selectConditions));
                    (yyval.sc)->comp_op="o";
                    (yyval.sc)->left=(yyvsp[-2].sc);
                    (yyval.sc)->right=(yyvsp[0].sc);
                 }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 374 "sql.y" /* yacc.c:1646  */
    {
                    (yyval.sc)=(struct selectConditions*)malloc(sizeof(struct selectConditions));         
                    (yyval.sc)->comp_op=(yyvsp[-1].sval);    
                    (yyval.sc)->left=(struct selectConditions*)malloc(sizeof(struct selectConditions));         
                    (yyval.sc)->left->value=(yyvsp[-2].sval);
                    (yyval.sc)->left->left=NULL;
                    (yyval.sc)->right=(struct selectConditions*)malloc(sizeof(struct selectConditions));         
                    if(numberflag)
                     {
                       char *b=(char*)malloc(sizeof(char)*6);
                       sprintf(b,"%d",(yyvsp[0].sval));
                       (yyval.sc)->right->value=b;
                       numberflag=false;
                       //printf("$3 is %s\n",$3);
                     }
                     else 
                       (yyval.sc)->right->value=(yyvsp[0].sval);
                    (yyval.sc)->right->right=NULL;
                }
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 395 "sql.y" /* yacc.c:1646  */
    { numberflag=true;}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 396 "sql.y" /* yacc.c:1646  */
    {(yyval.sval)="<";}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 397 "sql.y" /* yacc.c:1646  */
    {(yyval.sval)=">";}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 398 "sql.y" /* yacc.c:1646  */
    {(yyval.sval)="=";}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 399 "sql.y" /* yacc.c:1646  */
    {(yyval.sval)="!=";}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 403 "sql.y" /* yacc.c:1646  */
    {
                (yyval.ds)=(struct deleteStruct*)malloc(sizeof(struct deleteStruct)); 
                (yyval.ds)->table=(yyvsp[0].sval);
            }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 408 "sql.y" /* yacc.c:1646  */
    {
                (yyval.ds)=(struct deleteStruct*)malloc(sizeof(struct deleteStruct)); 
                (yyval.ds)->table=(yyvsp[-2].sval);
                (yyval.ds)->cons=(yyvsp[0].sc);
            }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 416 "sql.y" /* yacc.c:1646  */
    {printf("use database succeed\nsql>");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 420 "sql.y" /* yacc.c:1646  */
    {
                    int j;
                    //free(tHead->tablename);
                    /*
                    for( j=0;j<i;++j)
                      {
                       //free(tHead->field[j]);
                       tHead->field[j]=NULL;
                      }
                      tHead=NULL;
                      printf("drop table %s succeed!\nsql>",$3);
                      */
                      drop_table();
                      printf("drop table %s succeed!\nsql>",(yyvsp[0].sval));
               }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 436 "sql.y" /* yacc.c:1646  */
    {
                   free(head);
                   head=NULL;
                   //free(tHead->tablename);
                   drop_table();
                   printf("drop database %s succeed!\nsql>",(yyvsp[0].sval));
                 }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 446 "sql.y" /* yacc.c:1646  */
    {
            (yyval.us)=(struct updateStruct*)malloc(sizeof(struct updateStruct));
            (yyval.us)->table=(yyvsp[-4].sval);
            (yyval.us)->set_cons=(yyvsp[-2].sc);
            (yyval.us)->find_cons=(yyvsp[0].sc);
          }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 457 "sql.y" /* yacc.c:1646  */
    {
                //if(tHead->field[0]->value && i >0) printf("field is %s\n",tHead->field[0]->value);
               (yyval.is)=(struct insertStruct*)malloc(sizeof(struct insertStruct));
               (yyval.is)->table=(yyvsp[-2].sval);
               (yyval.is)->setop=(yyvsp[0].sc);
          }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 466 "sql.y" /* yacc.c:1646  */
    {
                showtable();
              }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1891 "y.tab.c" /* yacc.c:1646  */
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
#line 469 "sql.y" /* yacc.c:1906  */

void yyerror(char *s, ...)
{
        extern yylineno;

        va_list ap;
        va_start(ap, s);

        fprintf(stderr, "line %d, error: ", yylineno);
        vfprintf(stderr, s, ap);
        fprintf(stderr, "\n");
}
void emit(char *s, ...)
{
        extern yylineno;

        va_list ap;
        va_start(ap, s);

        fprintf(stdout, "line %d, sql_parse: ", yylineno);
        vfprintf(stdout, s, ap);
        fprintf(stdout, "\n");
}

bool createdb(char *dbname)
{
    head=(DBS*)malloc(sizeof(DBS));
    if( NULL == head )
    return false;
    else 
    {
        head->dbname=dbname;
        return true;
    }
}
bool createtable(struct createStruct *table)
{
    if(head!=NULL)
    {
      head->table=table;
      tHead=(struct tableContent*)malloc(sizeof(struct tableContent));
      tHead->tablename=table->table;
      //tHead->field[i]=(struct tableField*)malloc(sizeof(struct tableField));
      tHead->field[i]=table->tfield;
      tHead->field[i]->value=NULL;
      /*
      while(table->tfield)
       {
       printf("a %s\n",table->tfield);
       table->tfield=table->tfield->nextfield;
       }
       */
      //printf("test %s\n",tHead->field[i]->nextfield->nextfield);
      //printf("%s\n",table->table->type);
      //printf("table %s type %d filed %s length %d\n",table->table,table->tfield->type,table->tfield,table->tfield->length);
      /*
      while(tHead->field[i])
     {
     printf("table %s type %d filed %s length %d\n",head->table->table,tHead->field[i]->type,tHead->field[i],tHead->field[i]->length);
     tHead->field[i]=tHead->field[i]->nextfield;
     }
     */
      return true;
    }
    else
    {
      printf("please create db first\n");
      return false;
    }
 showinfo();
}
void showinfo()
{
    printf("dbname is %s,",head->dbname);
    printf("tablename is %s,",head->table->table);
 /*
 printf("dbname is %s,",head->dbname);
    printf("dbname is %s,",head->dbname);
    printf("dbname is %s,",head->dbname);
    */
    }


void showtable()
{
    printf("table in db %s\n",head->dbname);
    printf("%s\nsql>",head->table->table);
}

/// @name 输出查找结果
/// @{ 首先判断是否有条件,在select中根据条件将相应的field[i]的i记录,
///    接下来根据select数组中的记录,通过field查询,若select没有记录,则没有条件,全部查询
///  @} 
/*
*
* ss->cons  ss->field需要free
*/
void select_results(struct selectStruct *ss) 
{
    int select[N];
    memset(select,0,sizeof(select));
    /*
    printf("%s\n",ss->table->table);
    while(ss->fields)
    {
    printf("%s\n",ss->fields->field);
    ss->fields=ss->fields->next; 
    }
    */
    if(!tHead)
      {
        printf("no info\n");
        return ;
      }
    if(ss->cons)    //如果有条件,选出符合条件的信息
     {
     int j;
       for( j=0;j<i;++j)  //对每条信息进行处理
        search_depend_on_cons(select,ss->cons,j);
     }
    int j=0;
        struct  selectFields *tmp=ss->fields;
        if(strcmp(tmp->field,"*")!=0)   //按字段打印信息
          {
            while(tmp)
              {
                printf("%s   ",tmp->field);
                tmp=tmp->next;
              }
            printf("\n");
           if(ss->cons)      //有条件
           {
             for(j=0;j<i;j++)
               if(select[j]) 
                {
                  print_select_info(j,ss->fields,0);
                  printf("\n");
                }
           }
           else              //无条件
           {
             for(j=0;j<i;++j)
                {
                  print_select_info(j,ss->fields,0);
                  printf("\n");
                }
           
           }
         }
        else //全部输出 *
        {
          for(j=0;j<i;j++)
          {
            struct tableField *tmp=tHead->field[j] ;
            int flag=0;
            while(tmp)
            {
              printf("%s  ",tmp);
              tmp=tmp->nextfield;
              flag=1;
            }
            if(flag) break;
          }
            printf("\n");
          if(ss->cons)           //有where语句条件,按条件输出
          {
  //        printf("有条件\n");
            for(j=0;j<i;j++)
              if(select[j])
                {
                  print_select_info(j,ss->fields,1);
                  printf("\n");
                }
          }
          else                   //没有where 语句
          {
   //       printf("无条件\n");
             for (j=0; j<i; ++j)
             {
             print_select_info(j,ss->fields,1);
                  printf("\n");
             }
             
          }
       }
}


/// @name 根据条件查询,设置select[i],i表示结果需要输出的tHead->field[i]
/// @{ 
///  @} 
bool search_depend_on_cons( int *select,struct selectConditions *cons,int j)
{
    bool yes=false;
    if(strcmp(cons->comp_op,"a")!=0 && strcmp(cons->comp_op,"o")!=0)
      {
        yes=is_right(j,cons); //查看是否此条信息满足要求
        select[j]=yes ? 1 : 0 ;//judge yes
        return yes;

      }
    else if(strcmp(cons->comp_op,"o")==0)
      {
        bool a=search_depend_on_cons(select,cons->left,j);
        bool b=search_depend_on_cons(select,cons->right,j);
        if(a || b)
           select[j]=1;
      }
    else if(strcmp(cons->comp_op,"a")==0)
     {
        bool a=search_depend_on_cons(select,cons->right,j);
        bool b=search_depend_on_cons(select,cons->left,j);
        if(a && b)
        {
            yes=true;
        }
            select[j]= yes ? 1 : 0;//judge yes
     }
}

/// @name 查找,返回field[i] 的i
/// @{ 
///  @} 
bool is_right (int j,struct selectConditions *cons)
{
       struct tableField *tmp=tHead->field[j] ;
       while(tmp)
         {
            if((strcmp(tmp,cons->left->value)==0) ) //找到要查询的字段,判断字段内容是否满足
              {
                      if(tmp->value  ) 
                       {
                           if(strcmp(cons->comp_op,"=")==0)//条件是"="
                           {
                             if(strcmp(tmp->value,cons->right->value)==0) 
                               return true ;
                              else 
                               return false;
                           }
                           else if(strcmp(cons->comp_op,"!=")==0)//条件是"!="
                           {
                             if(strcmp(tmp->value,cons->right->value)!=0) 
                               return true ;
                              else 
                               return false;
                           }
                           //*
                           //如果以上两种情况没有出现,说明是< 或 > ,那么肯定是int,否则错
                           else if(tmp->type==0)//判断 type是否为int,type=0
                           {
                             int tablevalue=atoi(tmp->value);
                             int selectvalue=atoi(cons->right->value);
                             if(strcmp(cons->comp_op,">")==0)   // " > "
                             {
                                if(tablevalue > selectvalue) 
                                return true;
                                else
                                return false;

                             }
                             else if(strcmp(cons->comp_op,"<")==0) //" < "
                             {
                             
                                if(tablevalue < selectvalue) 
                                return true;
                                else
                                return false;
                             }
                             else
                                return false;
                           }
                           else 
                            return false;
                       }
                       else return false;

             }
            tmp=tmp->nextfield;
            if(!tmp) return false;
         }

}


/// @name 
/// @{ 根据给出的i和输出的字段,输出相应字段的内容
///  @} 
void print_select_info(int j,struct selectFields* fields,int flag)
{
   //struct selectFields *stmp=fields;
     //int flag=1;
   if(!flag)                      //按照字段打印
     while(fields)
      { 
        struct tableField *tmp=tHead->field[j];
        while(tmp)
           {
             if(strcmp(tmp,fields->field)==0)
             {
         //       flag=0; //说明 selectfield存在,
                if(tmp->value)
                {
                    printf("%s  ",tmp->value);
                }
                else
                    printf("null  ");
            }
             tmp=tmp->nextfield;
           }
        //   if(!flag) flag=1;
        fields=fields->next; 
      } 
   else                    //字段为*
    {
        struct tableField *tmp=tHead->field[j];
        while(tmp)
        {
        if(tmp->value)
          printf("%s ",tmp->value);
        else
          printf("null  ");
          tmp=tmp->nextfield;
        }

    }
 //     if(flag) printf("无");
}


/// @name 这个函数没用了
/// @{  inserttable1 代替 
///  @} 
void inserttable(struct insertStruct *tableinfo)
{
    if(i>0)
      insertfield(tHead,i);  //第i次插入,新建field[i]
   if(strcmp(tHead->tablename,tableinfo->table)==0)  //插入表名正确 寻找字段,插入信息
    {
    struct selectConditions *left,*right,*comp_op;
    comp_op=tableinfo->setop;
    int j=0;
        for(j=0;j<fieldnum;++j)
          {
            if(( strcmp(comp_op->comp_op,"=")==0 ) && ( j==0 ) ) // 一个field设置值
               { 
                  //printf("yes\n"); 
                 insert(tHead,i,comp_op);
               //找到field,赋值
               }
            if((strcmp(comp_op->comp_op,"a")==0) && (j==0)) //有多个field
              {
                left=comp_op->left; 
                right=comp_op->right; 
              }
              //判断left和right
              if(j>0)
              {
                if((strcmp(left->comp_op,"a")==0) && left!=NULL)
                   left=left->left;                 
                else if(strcmp(left->comp_op,"=")==0)
                {
                  printf("left\n"); 
                 insert(tHead,i,left);
                  left=NULL;
                }
                if((strcmp(right->comp_op,"a")==0) && right!=NULL)
                   right=right->right;                 
                else if(strcmp(right->comp_op,"=")==0)
                {
                  printf("right\n"); 
                 insert(tHead,i,right);
                  right=NULL;
                }


              }
          }
          ++i;

    }
    else printf("tablename wrong\nsql>");
}
void inserttable1(struct selectConditions *cons)
{
  if(!tHead) return ;
/*
printf("%s\n",cons->comp_op);
printf("%s\n",cons->left->comp_op);
printf("%s\n",cons->right->comp_op);
*/
  if(strcmp(cons->comp_op,"=")==0) 
  {
    //printf("addr %x\n",cons->right->value);
    //printf("insert field %s value %s\n",cons->left->value,cons->right->value);
    insert(tHead,i,cons);
    //printf("insert succeed\n");
  }
  else if(strcmp(cons->comp_op,"a")==0)
  {
   // cons=cons->left;
    inserttable1(cons->left);
   // cons=cons->right;
    inserttable1(cons->right);
    }
    //free(cons);
}
void insert( struct tableContent  *tc,int i,struct selectConditions *cons)
{

//找到相应字段,插入信息,判断 type和length,目前还没判断
    struct tableField *tftmp=tc->field[i];
   // printf("table %s type %d filed %s,%s length %d\n",tHead->tablename,tHead->field[i]->type,tHead->field[i],tHead->field[i]->nextfield,tHead->field[i]->length);
    while(tftmp!=NULL)
    {
       if(strcmp(tftmp,cons->left->value)==0) //get it
         {
         if(tftmp->type==1)  //char type
            if(strlen(cons->right->value) > tftmp->length)
               {
                 printf("value %s is too long\n",cons->right->value);
                 exit(0);
               }
          tftmp->value=cons->right->value;
          //printf("get its value\n");
          //printf("field is tf %s value is %s\n",tftmp,cons->right->value);
          //free(cons->left);
         // free(cons->right);
          //printf("field is %s\n",tftmp);
          //sleep(2);
          }
          tftmp=tftmp->nextfield;
     //   printf("%s\n",tctmp->field[i]);
          //printf("get its value\n");
    }
    //free(cons);
}
/// @name insertfield
/// @{ 每次插入新内容,构造field[i]
///  @} 
void insertfield(Tables *tc,int i)
{
//printf("i is %d\n",i);
  //Tables * tmp=tc;
  if(!tHead) return ;
  struct tableField *p,*q;
  struct tableField *f=tc->field[0];
  tc->field[i]=(struct tableField*)malloc(sizeof(struct tableField));
  q=tc->field[i];
  q->field=f->field;
  q->type=f->type;
  q->length=f->length;
  q->value=NULL;
  f=f->nextfield;
  while(f)
  {
   p=(struct tableField*)malloc(sizeof(struct tableField));    
   p->field=f->field;
   p->type=f->type;
   p->length=f->length;
   p->value=NULL;
   //赋值
   q->nextfield=p;
   q=p;
    f=f->nextfield;
  }
  q->nextfield=NULL;
//printf("type is %d\n",tc->field[i]->type);
   //if(tHead->field[0]->value) printf("yes\n\n\n");
}
void printf_i(const int i)
{
  printf("current i is %d\n",i);
}
void showtablecontent(Tables *tc)
{
  //Tables *tmp=tc;
  struct tableField *f;
  printf("table name is %s\n",tc->tablename);
  int j=0;
  //printf("i is %d\n",i);
  for(j=0;j<i;++j)
   {
    f=tc->field[j];
    printf("j is %d\n",j);
    while(f!=NULL)
     {
        if(f->value )
        {
          printf("field  %s,",f);
          printf("value  %s,",f->value);
          printf("type %d,",f->type);
          printf("length %d\n",f->length);
        }
        f=f->nextfield;
        //printf("field 0 is field is %s,value %s type %d length %s\n",tc->field[0],tc->field[0]->value,tc->field[0]->type,tc->field[0]->length);
     }
     //free(f);
   }
  //struct tableField *f=tc->field[i];
    //    printf("field is %s,value %s type %d length %s\n",f,f->value,f->type,f->length);
}

/// @name 删除所选表或信息
/// @{  此时需要free 
///  @} 
void delete_select(struct deleteStruct* ds)
{
    if(!ds->cons)   //delete from table 没有where条件
      {
 //       free(tHead);        //每个malloc都要删除
            //free(tHead->tablename);
            int j=0;
            struct tableField *tmp=NULL;
            for(j=0;j<i;j++)
            {
                tmp=tHead->field[j];
            while(tHead->field[j])
            {
                tmp=tHead->field[j]->nextfield;
                //free(tHead->field[j]->field);
                free(tHead->field[j]->value);
                tHead->field[j]=tmp;
            }
            }
            tHead=NULL;
        printf("delete \n");
      }
    else           // where 
      {
      int select[N];
      int j;
      memset(select,0,sizeof(select));
      if(ds->cons)    //如果有条件,选出符合条件的信息
       {
         for( j=0;j<i;++j)  //对每条信息进行处理
          search_depend_on_cons(select,ds->cons,j);
       }
      for(j=0;j<i;j++)
       if(select[j])
       {
            struct tableField *tmp=tHead->field[j];
            //tHead->field[j]=NULL;  // free
            while(tHead->field[j])
            {
                tmp=tHead->field[j]->nextfield;
                free(tHead->field[j]);
                free(tHead->field[j]->value);
                tHead->field[j]=tmp;
            }
      }
      }
}


/// @name 释放内存
/// @{ 
///  @} 
void free_select_cons_sql(struct selectConditions* tmp) 
{
   if(!tmp) return;
   if(strcmp(tmp->comp_op,"a")!=0 && strcmp(tmp->comp_op,"o")!=0)
   {
         free(tmp->left);
         tmp->left=NULL;
         free(tmp->right);
         tmp->right=NULL;
         free(tmp);
         tmp=NULL;
   //printf("yes\n");
   }
   else 
   {
   free_select_cons_sql(tmp->left);
   free_select_cons_sql(tmp->right);
   }

}


//
void update_select(struct updateStruct *us)
{
    int select[N];
    int j;
    memset(select,0,sizeof(select));
    if(!tHead) 
    {
        printf("update error! no info!\n");
        return ;
    }
    for( j=0;j<i;++j)  //找到要update的field[i]
    {
        search_depend_on_cons(select,us->find_cons,j);
        if(select[j])
        {
        //printf("%d\n",j);
            update (j,us->set_cons);
        }
    }
}
void update (int j,struct selectConditions *cons)
{
    if(cons)
    {
        if(strcmp(cons->comp_op,"=")==0)  
            {
            struct tableField *tmp=tHead->field[j];
            while(tmp)
            {
                if(strcmp(tmp,cons->left->value)==0)
                    tmp->value=cons->right->value;
                tmp=tmp->nextfield;
            }
            return;
            }
        else 
            {
                update(j,cons->left);
                update(j,cons->right);
            
            }
    }
    else 
    {
        printf("update failed!\nsql>");
        return ;
    }
}
void drop_table ()
{
    struct tableField *tmp;
    free(tHead->tablename);
    int j;
    for( j=0; j< i;++j)
    {
        while(tHead->field[j])
        {
            tmp=tHead->field[j]->nextfield;
        //    free(tHead->field[j]);
            free(tHead->field[j]->value);
            tHead->field[j]=tmp;
        }
    }
}
