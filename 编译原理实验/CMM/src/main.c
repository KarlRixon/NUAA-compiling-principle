#include "../head/tree.h"
#include <stdio.h>
extern FILE* yyin;
extern int yydebug;
extern int yylex(void);
extern int yyparse(void);
extern void yyrestart(FILE* f);

int main(int argc, char** argv){
    if(argc<=1) return 1;
    FILE* f = fopen(argv[1],"r");
    if(!f){
        perror(argv[1]);
        return 1;
    }
    yyrestart(f);
    //yydebug = 1;
    yyparse();
    if(!error){
        print_tree(root, 0);
    }
    return 0;
}
