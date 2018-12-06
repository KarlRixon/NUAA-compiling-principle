%{
/* a LEX program that changes all numbers
   from decimal to hexadecimal notation,
   printing a summery statistics to stderr
*/
#include <stdlib.h>
#include <stdio.h>
int count = 0;
%}
digit [0-9]
number {digit}+
%%
{number} {
	int n = atoi(yytext);
	printf("%x", n);
	if (n > 9) count++;
}
%%
int main()
{
	yylex();
	printf("number of replacements = %d", count);
	return 0;
}
