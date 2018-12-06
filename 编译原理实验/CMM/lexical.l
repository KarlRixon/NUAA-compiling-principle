%{
#include<stdio.h>
#include"syntax.tab.h"
#include "head/tree.h"

int yycolumn=1;

extern YYSTYPE yylval;

#define YY_USER_ACTION \
	yylloc.first_line = yylloc.last_line = yylineno; \
	yylloc.first_column = yycolumn; \
	yylloc.last_column = yycolumn + yyleng - 1; \
	yycolumn += yyleng;
%}
%option yylineno
decimal_digital [1-9]
octal_digital [1-7]
hex_digital [1-9a-fA-F]
letter [a-zA-Z]
decimal_int (0|({decimal_digital}(0|{decimal_digital})*))
octal_int 0(0|{octal_digital})+
hex_int (0x|0X)(0|{hex_digital})+
int ({hex_int}|{octal_int}|{decimal_int})
float_without_exp (0|({decimal_digital}(0|{decimal_digital})*))(\.(0|{decimal_digital})+)?
float_with_exp {float_without_exp}(e|E)[\+-]?[0-9]+
float ({float_with_exp}|{float_without_exp})
id (_|{letter})(_|{letter}|[0-9])*
%%
(\t|" ") {}
\/\/[^\n]* {}
\/\* {
	while(1){
		char c;
		while((c=input()) != '*' && c != EOF){}
		if( c == EOF) break;
		if((c=input()) == '/' || c == EOF) break;
		else unput(c);
	}
}
{int} {yylval.type_node = new_tree_node(INT_T, yylineno, yytext);return INT;}
{float} {yylval.type_node = new_tree_node(FLOAT_T, yylineno, yytext);return FLOAT;}
struct {yylval.type_node = new_tree_node(STRUCT_T, yylineno, NULL);return STRUCT;}
return {yylval.type_node = new_tree_node(RETURN_T, yylineno, NULL);return RETURN;}
if {yylval.type_node = new_tree_node(IF_T, yylineno, NULL);return IF;}
else {yylval.type_node = new_tree_node(ELSE_T, yylineno, NULL);return ELSE;}
while {yylval.type_node = new_tree_node(WHILE_T, yylineno, NULL);return WHILE;}
(int|float) {yylval.type_node = new_tree_node(TYPE_T, yylineno, yytext);return TYPE;}
{id} {yylval.type_node = new_tree_node(ID_T, yylineno, yytext);return ID;}
; {yylval.type_node = new_tree_node(SEMI_T, yylineno, NULL);return SEMI;}
, {yylval.type_node = new_tree_node(COMMA_T, yylineno, NULL);return COMMA;}
= {yylval.type_node = new_tree_node(ASSIGNOP_T, yylineno, NULL);return ASSIGNOP;}
>|<|(>=)|(<=)|(==)|(!=) {yylval.type_node = new_tree_node(RELOP_T, yylineno, NULL);return RELOP;}
"+" {yylval.type_node = new_tree_node(PLUS_T, yylineno, NULL);return PLUS;}
- {yylval.type_node = new_tree_node(MINUS_T, yylineno, NULL);return MINUS;}
"*" {yylval.type_node = new_tree_node(STAR_T, yylineno, NULL);return STAR;}
"/" {yylval.type_node = new_tree_node(DIV_T, yylineno, NULL);return DIV;}
&& {yylval.type_node = new_tree_node(AND_T, yylineno, NULL);return AND;}
"||" {yylval.type_node = new_tree_node(OR_T, yylineno, NULL);return OR;}
"." {yylval.type_node = new_tree_node(DOT_T, yylineno, NULL);return DOT;}
! {yylval.type_node = new_tree_node(NOT_T, yylineno, NULL);return NOT;}
"(" {yylval.type_node = new_tree_node(LP_T, yylineno, NULL);return LP;}
")" {yylval.type_node = new_tree_node(RP_T, yylineno, NULL);return RP;}
"[" {yylval.type_node = new_tree_node(LB_T, yylineno, NULL);return LB;}
"]" {yylval.type_node = new_tree_node(RB_T, yylineno, NULL);return RB;}
"{" {yylval.type_node = new_tree_node(LC_T, yylineno, NULL);return LC;}
"}" {yylval.type_node = new_tree_node(RC_T, yylineno, NULL);return RC;}
\n {yycolumn = 1;}
. {printf("Error type A at Line %d: Mysterious characters \'%s\'\n",yylineno,yytext);error = 1;}
%%
