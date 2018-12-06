%{
  #include <stdlib.h>
  #include <stdio.h>
   typedef enum {END, NUM} Token;
  union {
 int number;
 char* string;
} yylval;

%}

%%

[^0-9]    /* Ignore*/
[0-9]+   {   yylval = atoi(yytext);
                 return NUM;
             }
<<EOF>>    {return END;}
%%
int yywrap()
{
    return 1;
}
void main(){
    while (yylex()!=END)
       printf("NUM(%i)\n",yylval);
}