mysql: lex.yy.c y.tab.c main.c
	gcc -o mysql lex.yy.c y.tab.c main.c 
y.tab.c:
	bison -yd sql.y
lex.yy.c:
	flex sql.l
clean:
	rm -f lex.yy.c y.tab.h y.tab.c sql_parse mysql
