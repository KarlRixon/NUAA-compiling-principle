%{
  #include <stdio.h>
  void yyerror(char *);
  int yylex(void);
%}

%token VAR

%%
e: VAR
  | '(' e '+' e')'
  | '(' e '*' e')'

%%



void yyerror(char * msg)  
{  
    printf("%s is error in line",msg);  
}  
int main()
{
   yyparse();
}