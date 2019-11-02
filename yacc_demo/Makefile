LEX = flex
YYAC = bison
CC = gcc

all: yacc

yacc: parser.tab.o scanner.o
	$(CC) -o $@ parser.tab.o scanner.o

parser.tab.c parser.tab.h: parser.y
	$(YYAC) -vd parser.y

scanner.c: scanner.l
	$(LEX) -o $@ $<

scanner.o: scanner.c parser.tab.h

.PYHONY: clean

clean:
	-@ rm parser.tab.c parser.tab.h scanner.c parser.output *.o yacc