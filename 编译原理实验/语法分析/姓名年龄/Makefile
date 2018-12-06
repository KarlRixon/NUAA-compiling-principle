all:
	bison -dy name_age.y
	flex name_age.l
	gcc -g lex.yy.c y.tab.c -o name_age

run:
	./name_age

clean:
	rm lex.yy.c
	rm y.tab.c y.tab.h
	rm name_age
