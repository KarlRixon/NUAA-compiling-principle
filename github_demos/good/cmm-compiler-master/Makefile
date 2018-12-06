CC=gcc
LEX=flex
BISON=bison
ifeq ($(shell uname), Linux)
	FLAGS := -lfl -ly
else ifeq ($(shell uname), Darwin)
	FLAGS := -ll -ly
endif

SRC_FILES := $(shell ls src)
SRC := $(foreach name, $(SRC_FILES), src/$(name))
OBJS := $(SRC_FILES:%.c=%.o)

TEST_FILES := $(shell find test -name "*.cmm")
TEST_RESULT := $(shell find test -name "*.out")

TARGET := parser

$(TARGET):$(SRC) syntax.tab.c
	$(CC) $(SRC) syntax.tab.c $(FLAGS) -o parser
syntax.tab.c:syntax.y lexical.l
	$(BISON) -d syntax.y
	$(LEX) lexical.l
	
test:
	bash test.sh $(TEST_FILES)
		
clean:
	rm -f syntax.tab.h syntax.tab.c lex.yy.c $(TARGET) $(TEST_RESULT)
.PHONY:test
