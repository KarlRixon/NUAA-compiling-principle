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
#line 16 "latex2html.y" /* yacc.c:1909  */

  char*	arr;
	int	val;

#line 179 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
