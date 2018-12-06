%{
/* control information */
#include <stdio.h>
#define YY_DECL extern int yylex()

/* include token types from yy.tab.h */
#include "klang.tab.h"
int line_no = 1;
%}

%%
 /* grammar definitions */
[ \t]  ;
kLang          { return KLANG; }
type           { return TYPE; }
end            { return END; }
[0-9]+\.[0-9]+ { yylval.fval = atof(yytext); return FLOAT;}
[0-9]+         { yylval.ival = atoi(yytext); return INT; }
[a-zA-Z0-9]+   { yylval.sval = strdup(yytext); return STRING; } /* copy yytext bcoz it may change later */
\n             { ++line_no; return ENDL; }
.              /* handle unknown characters */;
%%

/*
main() is now declared in klang.y

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
   // lex through the input
   yylex();

   return 0;
}
*/
