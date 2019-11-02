LEX = flex
YYAC = bison
CC = gcc

all: cyacc

cyacc: parser.tab.o lexer.o
	$(CC) -o $@ parser.tab.o lexer.o

parser.tab.c parser.tab.h: parser.y
	$(YYAC) -vd parser.y

lexer.c: lexer.l
	$(LEX) -o $@ $<

lexer.o: lexer.c parser.tab.h

.PYHONY: clean

clean:
	-@ rm parser.tab.c parser.tab.h lexer.c parser.output *.o cyacc