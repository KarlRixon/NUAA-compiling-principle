klang.tab.c klang.tab.h: klang.y
	bison -d klang.y

lex.yy.c: klang.l klang.tab.h
	flex klang.l

klang: lex.yy.c klang.tab.c klang.tab.h
	gcc klang.tab.c lex.yy.c -ll -o klang
