
CC = gcc
CFLAGS = -g -Wall
DEPS = ast.h
LEX = flex
LFLAGS= -w     
YACC= bison 
YFLAGS= -vdt -Wconflicts-sr -Wcounterexamples

RM = /bin/rm -f

c7: c7synt.tab.o lex.yy.o ast.o
	${CC} ${CFLAGS}  lex.yy.o c7synt.tab.o ast.o -o c7

c7synt.tab.o: c7synt.y
	${YACC} ${YFLAGS} c7synt.y
	${CC} ${CFLAGS} c7synt.tab.c -c
lex.yy.o: c7lex.l
	${LEX} ${LFLAGS} c7lex.l
	${CC} ${CFLAGS} lex.yy.c -c

clean:
	rm -f lex.yy.* c7synt.tab.* *.o 