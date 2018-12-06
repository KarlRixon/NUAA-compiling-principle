%{
/* a LEX program to convert uppercase to
   lowercase except inside comments
*/
#include <stdio.h>
#include <ctype.h> 
#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif
%}
%option noyywrap
%%

[A-Z] {
	putchar(tolower(yytext[0]));
	/* yytext[0] is the single uppercase char found */
}
"/*" {
	char c;
	int done = FALSE;
	ECHO; /* display comment opening delimeter */
	do
	{
		while ((c = input()) != '*')
			putchar(c);
		putchar(c); /* display '*' */
		while ((c = input()) == '*')
			putchar(c);
		putchar(c);
		if (c == '/') done = TRUE; 
	} while (!done);
}
%%


void main() { yylex(); }
