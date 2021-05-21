#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic_raises.h"

void raiseRedecl(int line,int col,char * ID, int type) {
    if (type == 1) {
    printf("\nsemantic error: Already declared %s named %s in this scope, line: %d , col: %d",YEL"FUNCTION"DFT,ID, line, col);
    } else if(type == 0){
         printf("\nsemantic error: Already declared %s named %s in this scope, line: %d , col: %d",YEL"VARIABLE"DFT,ID, line, col);
    } else {
         printf("\nsemantic error: Already declared %s named %s in this scope, line: %d , col: %d",YEL"PARAMETER"DFT,ID, line, col);
    }
    semantic_error=1;
}

void raiseUndeclaredId(int line,int col) {
    printf("\nsemantic error: %s , line: %d , col: %d","Undeclared Variable in this scope", line, col);
    semantic_error=1;
}
void raiseTypeMismatch(char* left , char* right){
    printf("\nsemantic error: %s , left: %s , right: %s","Type Mismatch", left, right);
}


void raiseNoMain() {
    printf("\nsemantic error: %s \n","No main() function in this program.");
    semantic_error=1;
}

void raiseNoReturn(char* ID) {
    printf(YEL"\nWarning:"DFT"No return in function"BLU" %s"DFT".", ID);
}

void raiseUndeclaredFunc(char *ID) {
    printf("\nsemantic error: %s , Undeclared Function Call",ID);
}

void raiseNumberOfArgs(int l, int c,char * name) {
    printf("\nsemantic error: Call has different number of arguments for function"BLU" %s "DFT"on line/col: [%d:%d].",name,l,c);
}

void raiseCallTypeMismatch(int l, int c,char * name){
     printf("\nsemantic error: Call has different types of arguments for function"BLU" %s "DFT"on line/col: [%d:%d].",name,l,c);
}

void raiseVoidReturn(){
    printf("\nsemantic error: Wrong return of void type on one Function.");
}

void raiseWrongReturnType(char* lastFType,char *rt){
    printf("\nsemantic error: Wrong return on one Function. Expected %s got %s in function.", lastFType,rt);
}