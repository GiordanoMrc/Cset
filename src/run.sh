#!/bin/bash

bison -d -v -Wcounterexamples c7synt.y && 
flex -w c7lex.l  &&
cc lex.yy.c c7synt.tab.c -g -Wall -o c7 &&
rm -rf output.txt &&
touch output.txt &&
./c7 test.c >> output.txt