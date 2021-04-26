#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic_raises.h"

void raiseRedecl(int line,int col,char * ID, int type) {
    if (type == 1) {
    printf("semantic error: Already declared %s named %s in this scope, line: %d , col: %d\n",YEL"FUNCTION"DFT,ID, line, col);
    } else if(type == 0){
         printf("semantic error: Already declared %s named %s in this scope, line: %d , col: %d\n",YEL"VARIABLE"DFT,ID, line, col);
    } else {
         printf("semantic error: Already declared %s named %s in this scope, line: %d , col: %d\n",YEL"PARAMETER"DFT,ID, line, col);
    }
    semantic_error=1;
}

void raiseUndeclaredId(int line,int col) {
    printf("semantic error: %s , line: %d , col: %d\n","Undeclared Function or Variable in this scope", line, col);
    semantic_error=1;
}
void raiseTypeMismatch(char* left , char* right){
    printf("semantic error: %s , left: %s , right: %s\n","Type Mismatch", left, right);
}


void raiseNoMain() {
    printf("semantic error: %s \n","No main() function in this program.");
    semantic_error=1;
}