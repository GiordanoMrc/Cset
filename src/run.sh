#!/bin/bash
rm -rf output.txt &&
touch output.txt &&
./c7 test/AIOtest.c >> output.txt 
valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./c7 test/AIOtest.c