#include <stdio.h>
extern FILE *yyin;
int main()
{
        yyin = fopen("file.in", "r");
        printf("sql>");
        yyparse();
}

