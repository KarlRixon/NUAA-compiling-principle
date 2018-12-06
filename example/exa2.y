%token VAR

%%
e: VAR
  | '(' e '+' e')'
  | '(' e '*' e')'

%%

int yylex()
{
    int c = getchar();
   while(c==' ')   c = getchar();
   if(c=='\n') return 0;
   if(c>='a' && c<='z')
       return VAR;
   return c;
}

int yyerror(char * msg)  
{  
    printf("%s is error in line",msg);  
}  
void main()
{
   printf("%i\n", yyparse());
}