#!/bin/bash

bison -d -v c7synt.y &&
flex c7lex.l  &&
cc lex.yy.c c7synt.tab.c -Wall -o c7 &&
./c7 test.c