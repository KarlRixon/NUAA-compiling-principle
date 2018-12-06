all:
	bison -dy transf.y
	flex transf.l
	gcc -g y.tab.c lex.yy.c -o transf

run:
	./transf

clean:
	rm lex.yy.c y.tab.c y.tab.h
	rm transf
