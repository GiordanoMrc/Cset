#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic_raises.h"


void raiseRedecl(int line,int col) {
    printf("semantic error: %s , line: %d , col: %d\n","Function or Variable already declared in this scope", line, col);
}

void raiseNoMain() {
    printf("semantic error: %s \n","No main() function in this program.");
}