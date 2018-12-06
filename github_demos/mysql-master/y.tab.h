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
#line 108 "sql.y" /* yacc.c:1909  */

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

#line 121 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
