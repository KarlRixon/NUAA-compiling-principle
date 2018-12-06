%{
#include <stdio.h>
#include <stdlib.h>

/* stuff from lex that bison needs */
extern int yylex();
extern FILE *yyin;
extern int line_no;

void yyerror(const char *);
%}

/* define type of YYSTYPE */
%union {
   int ival;
   float fval;
   char *sval;
}

/* define constant string tokens */
%token KLANG
%token TYPE END
%token ENDL

/* define token with their types */
%token <ival> INT
%token <fval> FLOAT
%token <sval> STRING

%%
/* define grammar rules */
/* using left recursion (SEE README for more) */

/* first rule defined is the start symbol of our grammar */
klang:
      header template body_section footer { printf("Done reading kLang file\n"); }
      ;
header:
      KLANG FLOAT ENDLS {printf("kLang version: %.1f\n",$2); }
      ;
template:
      typelines
      ;
typelines:
      typelines typeline
      | typeline
      ;
typeline:
      TYPE STRING ENDLS { printf("defined new type: %s\n",$2); }
      ;
body_section:
      body_lines
      ;
body_lines:
      body_lines body_line
      | body_line
      ;
body_line:
      STRING INT ENDLS { printf("new kLang object: %s %d\n", $1, $2); }
      ;
footer:
      END ENDLS
      ;
ENDLS :
      ENDLS ENDL
      | ENDL
      ;
%%

int main(int argc, char **argv)
{
   FILE *fp;
   if(argc == 2) {
      fp = fopen(argv[1],"r");
      if(fp == NULL) {
         printf("Cannot open file!\n");
         return -1;
      }
      else {
         yyin = fp;
      }
   }

   /* parse until end of file */
   do {
      yyparse();
   }
   while(!feof(yyin));

   return 0;
}

void yyerror(const char *s)
{
   printf("klang: %s on line %d\n",s,line_no);
   exit(-1);
}
