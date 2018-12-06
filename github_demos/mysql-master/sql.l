%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
void yyerror(char *s, ...);
%}
var     [A-Za-z][A-Za-z0-9]*
digit   [0-9]+
%option noyywrap yylineno case-insensitive
%%

CREATE { return CREATE;}
DATABASE { return DATABASE; }
TABLE  { return TABLE; }

CHAR {return CHAR;}
INT  {return INT;}
AND  {return AND;}
OR   {return OR;}

SELECT { return SELECT;}
FROM   { return FROM;  }
WHERE  { return WHERE;}

DELETE  { return DELETE;}

DROP   {return DROP;}

USE    {return USE;}

UPDATE {return UPDATE;}
INSERT {return INSERT;}
INTO   {return INTO;}
VALUES {return VALUES;}
SET     {return SET;}
SHOW     {return SHOW;}
TABLES     {return TABLES;}

{var}  { yylval.sval = strdup(yytext);  return VAR; }
{digit} {yylval.ival = atoi(yytext); return NUMBER;}
[*,;{}()!=<>]  { return yytext[0]; }
[ \t\n] { }
.       { yyerror("mystery character '%c'", *yytext);}
%%

