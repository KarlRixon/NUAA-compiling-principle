%{
    /*
     *  һ���򵥼�������Lex�ʷ��ļ�
     */
    #include <stdlib.h>
    #include <math.h> 
    void yyerror(char*);
  /*  #include "calc.tab.h"  */
%}
 
%%
 
     /* a-zΪ���� */   
[a-z]	{
            yylval = *yytext - 'a';
            return VARIABLE;
    	}
 
    /* �����򸡵��� */
[0-9]+\.?|[0-9]*\.[0-9]+ {
                            yylval = atof(yytext);
                            return INTEGER;
    	                  } 
 
    /* ����� */
[-+()=/*^@&|~!\n]	{return *yytext;}
sin {
     return SIN;
    }
cos {
     return COS;
    }
    /* �հױ����� */
[ \t]    ;
 
    /* �����ַ����ǷǷ��� */
.    yyerror("��Ч�������ַ�");
 
%%
 
int yywrap(void)
{
  return 1;
}