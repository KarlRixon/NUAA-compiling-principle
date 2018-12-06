COMMA (",")
LEFT_BRACKET ("(")
RIGHT_BRACKET (")")
NUM [0-9]
LETTER [a-zA-Z]
NUMBER [-]?({NUM}*)
PUNCTIATION ("."|"?"|"!"|{COMMA})
SYMBOL {LETTER}|{NUM}|{PUNCTIATION}
STRING ["]{SYMBOL}*["]
IDENT ({LETTER}|_)({LETTER}|_|{NUMBER})*
COMPARISON "="|"<>"|"<"|">"|"<="|">="
NOT (?i:("NOT"))
SELECT (?i:("SELECT"))
DISTINCTALL (?i:("DISTINCT"|"ALL"))
FROM (?i:("FROM"))
WHERE (?i:("WHERE"))
OR (?:or)
AND (?:and)
ALL "*"
END_QUERY ";"
%{
  #include <stdlib.h>
  #include <stdio.h>
  #include "y.tab.h"
  void yyerror(char*);
  int position = 1;
  int line = 1;
%}
%%
{END_QUERY}     { position += yyleng; printf("END_QUERY ");     return(END_QUERY); }
{OR}            { position += yyleng; printf("OR ");            return(OR); }
{AND}           { position += yyleng; printf("AND ");           return(AND); }
{ALL}           { position += yyleng; printf("ALL ");           return(ALL); }
{STRING}        { position += yyleng; printf("STRING ");        return(STRING); }
{NOT}           { position += yyleng; printf("NOT ");           return(NOT); }
{LEFT_BRACKET}  { position += yyleng; printf("LEFT_BRACKET ");  return(LEFT_BRACKET); }
{RIGHT_BRACKET} { position += yyleng; printf("RIGHT_BRACKET "); return(RIGHT_BRACKET); }
{COMMA}         { position += yyleng; printf("COMMA ");         return(COMMA); }
{COMPARISON}    { position += yyleng; printf("COMPARISON ");    return(COMPARISON); }
{NUMBER}        { position += yyleng; printf("NUMBER ");        return(NUMBER); }
{SELECT}        { position += yyleng; printf("SELECT ");        return(SELECT); }
{DISTINCTALL}   { position += yyleng; printf("DISTINCTALL ");   return(DISTINCTALL); }
{FROM}          { position += yyleng; printf("FROM ");          return(FROM); }
{WHERE}         { position += yyleng; printf("WHERE ");         return(WHERE); }
{IDENT}         { position += yyleng; printf("IDENT ");         return(IDENT); }
[ \t] ;
[\r\n]          { line++; position=0; printf("\n");}
%%
int yywrap(void)
{
  return 1;
}
