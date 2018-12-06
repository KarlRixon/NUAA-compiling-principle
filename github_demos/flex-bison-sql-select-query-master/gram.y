%token STRING
%token NOT
%token LEFT_BRACKET
%token RIGHT_BRACKET
%token COMMA
%token COMPARISON
%token NUMBER
%token SELECT
%token DISTINCTALL
%token FROM
%token WHERE
%token IDENT
%token OR
%token AND
%token ALL
%token END_QUERY
%{
  #include <stdio.h>
  int yylex(void);
  void yyerror(char*);
  extern int line;
  extern int position;
%}
%%
select_statement:
  SELECT fields_list from_clause END_QUERY
  | SELECT fields_list from_clause where_clause END_QUERY
  | error fields_list from_clause where_clause END_QUERY { yyerror("missed SELECT");};

where_clause:
  WHERE condition
  |error condition { yyerror("missed WHERE"); };

from_clause:
  FROM list
  | FROM error { yyerror("missed ident"); };

condition:
  condition1
  | condition1 OR condition
  | condition1 AND condition;

fields_list:
  ALL
  | list;

list:
  IDENT
  | list COMMA IDENT;

condition1:
  condition2
  | NOT condition2;

condition2:
  IDENT COMPARISON value_field
  | IDENT error value_field { yyerror("no comparison operation "); }
  | IDENT COMPARISON error { yyerror("no value on the right in comparison");}
  | error COMPARISON value_field { yyerror("no identifier on the left in comparison"); }
  | error { yyerror("missed condition"); };
value_field:
  STRING
  | NUMBER;
%%
void yyerror(char*s)
{
  fprintf(stderr,"error %s at line %d position %d \n", s, line, position);
}
