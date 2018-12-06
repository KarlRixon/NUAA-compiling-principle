%{
#include<stdio.h>
#include<stdlib.h>
extern int yylineno;
extern int yylex();
extern int yyparse();
extern FILE *yyin;
%}

%union{
    int val;
}

%token <val> HEXADECIMAL 
%token <val> DECIMAL

%%

statement: DECIMAL {printf("%d = 0x%x\n", $1, $1);}
	  | HEXADECIMAL {printf("0x%x = %d\n", $1, $1);}
      | /* empty */
          ;

%%

yyerror(char *msg){
    printf("error: %s\n", msg);
}

int main(){
    printf("输入十进制数或十六进制数(如0xa)进行转换\n");
    yyin = stdin;
    do{
        yyparse();
    }while(!feof(yyin));
    return 0;
}
