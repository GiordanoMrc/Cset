#ifndef SEMANTIC
#define SEMANTIC
#define DFT "\x1B[0m"
#define RED "\x1B[31m"
#define CYN "\x1B[36m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define KGRN "\x1B[32m"
#define KMAG "\x1B[35m"
#define KWHT "\x1B[37m"

int semantic_error;
void raiseRedecl(int line,int col, char *ID, int type);
void raiseUndeclaredId(int line,int col);
void raiseTypeMismatch(char* left , char* right);
void raiseNoMain();
void raiseNoReturn();
void raiseUndeclaredFunc(char *name);
void raiseNumberOfArgs(int nParams, int nArgs, char * name);
void raiseCallTypeMismatch(int nParams, int nArgs, char * name);
void raiseVoidReturn();
void raiseWrongReturnType(char* lastFType,char *rt);
#endif