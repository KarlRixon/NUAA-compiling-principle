%{
#include"y.tab.h"
extern YYSTYPE yylval;
%}

DIGIT        [0-9]
HEXADECIMAL  0x[0-9a-f]+
DECIMAL      [0-9]+

%%
{HEXADECIMAL}       {
                        //yylval.val = atoi(yytext);
			sscanf(yytext, "%x", &yylval.val);                        
			return HEXADECIMAL;
                    }
{DECIMAL}           {
                        yylval.val = atoi(yytext);
                        return DECIMAL;
                    }
.	            {
                        yyerror("输入错误：%s",*yytext);
                    }

%%

int yywrap(){
    return 1;
}
