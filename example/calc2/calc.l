%{
    /*
     *  一个简单计算器的Lex词法文件
     */
    #include <stdlib.h>
    #include <math.h> 
    void yyerror(char*);
  /*  #include "calc.tab.h"  */
%}
 
%%
 
     /* a-z为变量 */   
[a-z]	{
            yylval = *yytext - 'a';
            return VARIABLE;
    	}
 
    /* 整数或浮点数 */
[0-9]+\.?|[0-9]*\.[0-9]+ {
                            yylval = atof(yytext);
                            return INTEGER;
    	                  } 
 
    /* 运算符 */
[-+()=/*^@&|~!\n]	{return *yytext;}
sin {
     return SIN;
    }
cos {
     return COS;
    }
    /* 空白被忽略 */
[ \t]    ;
 
    /* 其他字符都是非法的 */
.    yyerror("无效的输入字符");
 
%%
 
int yywrap(void)
{
  return 1;
}
