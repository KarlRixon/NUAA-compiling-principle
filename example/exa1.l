%%

tom       printf("jerry");
jerry      printf("tom");

%%

int yywrap()
{
    return (1);
}
void main()
{
    yylex();
}
