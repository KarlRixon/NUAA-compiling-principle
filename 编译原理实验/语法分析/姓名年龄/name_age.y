/* define type of YYSTYLE */
%union{
    int ival;
    char *sval;
}

/* define token with their tyoes */
%token <ival> NUMBER
%token <sval> STRING
%token <ival> EXIT

%{
#include<stdio.h>
#include<stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
%}

%%

statement:  name_age statement
         |  EXIT                        {printf("%d people in all\n", $1);exit(0);}
         |  /* empty */
         ;

name_age:   STRING NUMBER               {printf("%s is %d years old\n", $1, $2);}
        ;

%%

yyerror(char *msg){
    printf("error: %s\n", msg);
}

void main(int argc, char **argv){
    printf("type a person's name and age.\n");
    yyin = stdin;
    do{
        yyparse();
    } while(!feof(yyin));
}
