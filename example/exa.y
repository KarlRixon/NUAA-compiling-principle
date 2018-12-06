%{  
    #include <stdio.h>  
    #include "exa.tab.h"  
%}  

%%

e:   'x'
  |  'y'
  | '(' e '+' e ')'
  | '(' e '*' e')'

%%

int yylex(){
    char c = getchar();
   if(c=='\n')   return 0; 
   else
      return c;
}
int yyerror(char * msg)  
{  
    printf("%s is error in line",msg);  
}  
void main(){
   printf("%i\n", yyparse());
}