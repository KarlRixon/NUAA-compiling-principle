DIGIT  [0-9]
%%

{DIGIT}+      {
                         int i =atoi(yytext);
                         printf("%i",i+1);
                       }
%%

int yywrap()
{
    return (1);
}

void main()
{
    yylex();

}