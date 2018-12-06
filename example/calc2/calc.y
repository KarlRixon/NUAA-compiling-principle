%token    INTEGER VARIABLE SIN COS
%left    '+' '-'
%left    '*' '/'
%left    '&'
%left    '|'
%right    SIN COS
%left    '^' 
%right   '@' '~'
%left    '!'
%{
    #include <math.h>
    #include <stdio.h>
    #define pi 3.1415926
    #define  __STDC__   0 
    #define YYSTYPE double
    void yyerror(char*);
    int yylex(void);
    double sym[26];
%}
%%
program:
    program statement '\n'
    |
    ;
statement:
     expr    {printf("%f\n", $1);}
     |VARIABLE '=' expr    {sym[(int)$1] = $3;}
     ;
expr:
    INTEGER
    |VARIABLE         {$$ = sym[(int)$1];}
    |expr '+' expr    {$$ = $1 + $3;}
    |expr '-' expr    {$$ = $1 - $3;}
    |expr '*' expr    {$$ = $1 * $3;}
    |expr '/' expr    {$$ = $1 / $3;}
    |expr '^' expr    {$$ = pow($1,$3);}  
    |'@' expr         {$$ = sqrt($2);}
    |expr '&' expr    {$$ = (int)$1 & (int)$3;}
    |expr '|' expr    {$$ = (int)$1 | (int)$3;}
    |'~' expr         {$$ = ~ (int)$2;}
    |expr '!'         {int i=0;int s=1;for(i=1;i<=$1;i++){s=s*i;} $$ = s;}
    |SIN '('expr ')'  {$$ = sin($3*pi/180.0);}
    |COS '('expr ')'  {$$ = cos($3*pi/180.0);}
    |'('expr')'       {$$ = $2;}
    ;
%%
void yyerror(char* s){fprintf(stderr, "%s\n", s);}
#include "lex.yy.c"
int main(void)
{
    printf("A simple calculator.\n");
    yyparse();
    return 0;
}
