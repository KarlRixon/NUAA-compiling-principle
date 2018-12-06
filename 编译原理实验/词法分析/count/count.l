DIGIT		[0-9]
CHARACTER	[a-zA-Z]
STRING		[a-zA-Z][a-zA-Z]+
EQ		[=]

%{
#include<stdio.h>
int wordCount = 0;
int numCount = 0;
int charCount = 0;
//void yyerror(char*);
%}

%%
" "		{}
"exit"		{
			printf("\nword: %d\nnumber: %d\ncharacter: %d\n",wordCount,numCount,charCount);
			return 0;
}
{DIGIT}+        {
                        int i =atoi(yytext);
                        printf("\tnumber:%i",i);
			numCount++;
                }
{CHARACTER}	{
			char *ch = yytext;
			printf("\tcharacter:%s",ch);
			charCount++;
		}
{STRING}	{
			char *str = yytext;
			printf("\tword:%s",str);
			wordCount++;
		}
{EQ}		{
			printf("\tequal");
		}
.		//yyerror("无效输入字符");

%%

int yywrap()
{
    printf("word: %d\nnumber: %d\ncharacter: %d\n",wordCount,numCount,charCount);
    return (1);
}

void main(){
    yylex();
}
