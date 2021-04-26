#!/bin/bash
make clean
make
echo "compiling is over > have fun :o)"
echo ""
#./c7 test/scope.c 
valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./c7 test/AIOtest.c