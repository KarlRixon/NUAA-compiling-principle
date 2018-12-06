%{
   #include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
%}
%%

" "  
\n  return 0;
[a-z]    return VAR;
.         return yytext[0];

%%
int yywrap(void){
    return 1;
}