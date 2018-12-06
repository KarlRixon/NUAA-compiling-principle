lex scan.l
yacc -vd gram.y
cc y.tab.c lex.yy.c -ly -ll

