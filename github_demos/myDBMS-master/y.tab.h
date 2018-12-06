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
    SELECT = 258,
    FROM = 259,
    WHERE = 260,
    AND = 261,
    OR = 262,
    DROP = 263,
    DELETE = 264,
    TABLE = 265,
    CREATE = 266,
    INTO = 267,
    VALUES = 268,
    INSERT = 269,
    UPDATE = 270,
    SET = 271,
    SHOW = 272,
    DATABASE = 273,
    DATABASES = 274,
    TABLES = 275,
    EXIT = 276,
    USE = 277,
    NUMBER = 278,
    STRING = 279,
    ID = 280,
    INT = 281,
    CHAR = 282
  };
#endif
/* Tokens.  */
#define SELECT 258
#define FROM 259
#define WHERE 260
#define AND 261
#define OR 262
#define DROP 263
#define DELETE 264
#define TABLE 265
#define CREATE 266
#define INTO 267
#define VALUES 268
#define INSERT 269
#define UPDATE 270
#define SET 271
#define SHOW 272
#define DATABASE 273
#define DATABASES 274
#define TABLES 275
#define EXIT 276
#define USE 277
#define NUMBER 278
#define STRING 279
#define ID 280
#define INT 281
#define CHAR 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "sql.y" /* yacc.c:1909  */
  
	int intval;   
  	char *strval;
  	struct hyper_items_def *Citemsval;
  	struct value_def *valueval;
  	struct item_def *itemval;
  	struct conditions_def *conval;
  	struct table_def *tbval;
  	struct upcon_def *updateval;

#line 119 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
