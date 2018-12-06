EXIT        exit
CHARACTER   [a-zA-Z]
STRING      {CHARACTER}*
DIGIT       [0-9]
NUMBER      {DIGIT}*

%{
#include<stdlib.h>
#include<stdio.h>
#include"y.tab.h"

int people = 0;
%}

%%

" "         {}
{EXIT}      {
                printf("bye\n");
                yylval.ival = people;
                return EXIT;
            }
{CHARACTER} {
                //printf("char\n");
            }
{STRING}    {
                //printf("string\n");
                people ++;
                yylval.sval = strdup(yytext);
                return STRING;
            }
{NUMBER}    {
                //printf("number\n");
                yylval.ival = atoi(yytext);
                return NUMBER;
            }
.           {
                printf("error\n");
            }

%%

int yywrap(){
    printf("bye!\n");
}
