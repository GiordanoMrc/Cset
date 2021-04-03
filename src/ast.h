#ifndef AST
#define AST

typedef struct vertex
{
    //char type;
    struct vertex *nodes[4];
    char* symbol;
    char* variable;
} vertex;


vertex* createNode(char *string);

void freeVertex(vertex *root);

void printVertex(vertex *root);

#endif