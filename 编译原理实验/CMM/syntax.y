%{
#define YYDEBUG 0
#include"lex.yy.c"
#include "head/tree.h"
extern void yyerror(char* msg);
%}
%locations
%union {
    struct tree_node *type_node;
}
%token <type_node> INT FLOAT ID
%token <type_node> SEMI COMMA
%token <type_node> TYPE
%token <type_node> LC RC LP RP LB RB
%token <type_node> STRUCT
%token <type_node> RETURN
%token <type_node> IF ELSE
%token <type_node> WHILE
%token <type_node> DOT
%token <type_node> ASSIGNOP
%token <type_node> AND OR NOT
%token <type_node> PLUS MINUS STAR DIV
%token <type_node> RELOP

%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT
%left DOT LP RP LB RB
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%type <type_node> Program ExtDefList ExtDef ExtDecList
%type <type_node> Specifier StructSpecifier OptTag Tag
%type <type_node> VarDec FunDec VarList ParamDec
%type <type_node> CompSt StmtList Stmt
%type <type_node> DefList Def DecList Dec
%type <type_node> Exp Args

%%
Program : ExtDefList {$$ = new_tree_node(PROGRAM_T, @$.first_line, NULL);root = $$;add_children($$, 1, $1);};
ExtDefList : ExtDef ExtDefList {$$ = new_tree_node(EXTDEFLIST_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 | {$$ = NULL;}
 ;
ExtDef : Specifier ExtDecList SEMI {$$ = new_tree_node(EXTDEF_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Specifier SEMI {$$ = new_tree_node(EXTDEF_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 | Specifier FunDec CompSt {$$ = new_tree_node(EXTDEF_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | SEMI {error = 1;}
 ;
ExtDecList : VarDec {$$ = new_tree_node(EXTDECLIST_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | VarDec COMMA ExtDecList {$$ = new_tree_node(EXTDECLIST_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 ;
Specifier : TYPE {$$ = new_tree_node(SPECIFIER_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | StructSpecifier {$$ = new_tree_node(SPECIFIER_T, @$.first_line, NULL);add_children($$, 1, $1);}
 ;
StructSpecifier : STRUCT OptTag LC DefList RC {$$ = new_tree_node(STRUCTSPECIFIER_T, @$.first_line, NULL);add_children($$, 5, $1, $2, $3, $4, $5);}
 | STRUCT Tag {$$ = new_tree_node(STRUCTSPECIFIER_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 ;
OptTag : ID {$$ = new_tree_node(OPTTAG_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | {$$ = NULL;}
 ;
Tag : ID {$$ = new_tree_node(TAG_T, @$.first_line, NULL);add_children($$, 1, $1);};
VarDec : ID {$$ = new_tree_node(VARDEC_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | VarDec LB INT RB {$$ = new_tree_node(VARDEC_T, @$.first_line, NULL);add_children($$, 4, $1, $2, $3, $4);}
 ;
FunDec : ID LP VarList RP {$$ = new_tree_node(FUNDEC_T, @$.first_line, NULL);add_children($$, 4, $1, $2, $3, $4);}
 | ID LP RP {$$ = new_tree_node(FUNDEC_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | error RP {error = 1;}
 ;
VarList : ParamDec COMMA VarList {$$ = new_tree_node(VARLIST_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | ParamDec {$$ = new_tree_node(VARLIST_T, @$.first_line, NULL);add_children($$, 1, $1);}
 ;
ParamDec : Specifier VarDec {$$ = new_tree_node(PARAMDEC_T, @$.first_line, NULL);add_children($$, 2, $1, $2);};
CompSt : LC DefList StmtList RC {$$ = new_tree_node(COMPST_T, @$.first_line, NULL);add_children($$, 4, $1, $2, $3, $4);};
 | error RC {error = 1;}
StmtList : Stmt StmtList {$$ = new_tree_node(STMTLIST_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 | {$$ = NULL;}
 ;
Stmt : Exp SEMI {$$ = new_tree_node(STMT_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 | CompSt {$$ = new_tree_node(STMT_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | RETURN Exp SEMI {$$ = new_tree_node(STMT_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | IF LP Exp RP Stmt %prec LOWER_THAN_ELSE {$$ = new_tree_node(STMT_T, @$.first_line, NULL);add_children($$, 5, $1, $2, $3, $4, $5);}
 | IF LP Exp RP Stmt ELSE Stmt {$$ = new_tree_node(STMT_T, @$.first_line, NULL);add_children($$, 7, $1, $2, $3, $4, $5, $6, $7);}
 | WHILE LP Exp RP Stmt {$$ = new_tree_node(STMT_T, @$.first_line, NULL);add_children($$, 5, $1, $2, $3, $4, $5);}
 | error SEMI {error = 1;}
 ;
DefList : Def DefList {$$ = new_tree_node(DEFLIST_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 | {$$ = NULL;}
 ;
Def : Specifier DecList SEMI {$$ = new_tree_node(DEF_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);};
 | Specifier error SEMI {error = 1;}
DecList : Dec {$$ = new_tree_node(DECLIST_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | Dec COMMA DecList {$$ = new_tree_node(DECLIST_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 ;
Dec : VarDec {$$ = new_tree_node(DEC_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | VarDec ASSIGNOP Exp {$$ = new_tree_node(DEC_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 ;
Exp : Exp ASSIGNOP Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp AND Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp OR Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp RELOP Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp PLUS Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp MINUS Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp STAR Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp DIV Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | LP Exp RP {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | MINUS Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 | NOT Exp {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 2, $1, $2);}
 | ID LP Args RP {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 4, $1, $2, $3, $4);}
 | ID LP RP {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp LB Exp RB {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 4, $1, $2, $3, $4);}
 | Exp DOT ID {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | ID {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | INT {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | FLOAT {$$ = new_tree_node(EXP_T, @$.first_line, NULL);add_children($$, 1, $1);}
 | LP error RP {error = 1;}
 | Exp LB error RB {error = 1;}
 ;
Args : Exp COMMA Args {$$ = new_tree_node(ARGS_T, @$.first_line, NULL);add_children($$, 3, $1, $2, $3);}
 | Exp {$$ = new_tree_node(ARGS_T, @$.first_line, NULL);add_children($$, 1, $1);}
 ;
%%
void yyerror(char* msg){
	printf("Error type B at Line %d: %s\n", yylineno, msg);
}
