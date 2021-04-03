#ifndef AST
#define AST

typedef struct vertex{
        struct vertex* nextNode;
        struct vertex* childNodes;
        char* terminal;
    } vertex;

vertex* createNode(char* string);

void freeVertex(vertex* root);

void printVertex(vertex* root);

#endif