#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"

vertex* createNode(char* string)
{
    vertex *node = (vertex *)malloc(sizeof(vertex));
    
    node->nodes[0] = NULL;
    node->nodes[1] = NULL;
    node->nodes[2] = NULL;
    node->nodes[3] = NULL;

    node->variable = string;
    //node->type = 'x';
    node->symbol = NULL;
    return node;
}

/*void freeVertex(vertex *root)
{
    struct vertex *node = root;
    struct vertex *up = NULL;

    while (node != NULL)
    {
        if (node->childNodes != NULL)
        {
            struct vertex *left = node->childNodes;
            node->childNodes = up;
            up = node;
            node = left;
        }
        else if (node->nextNode != NULL)
        {
            struct vertex *right = node->nextNode;
            node->childNodes = up;
            node->nextNode = NULL;
            up = node;
            node = right;
        }
        else
        {
            if (up == NULL)
            {
                free(node);
                node = NULL;
            }
            while (up != NULL)
            {
                free(node);
                if (up->nextNode != NULL)
                {
                    node = up->nextNode;
                    up->nextNode = NULL;
                    break;
                }
                else
                {
                    node = up;
                    up = up->childNodes;
                }
            }
        }
    }
} */
void freeVertex(vertex * root){
    if(root == NULL) return;
    
    if (root->nodes[0] !=NULL) freeVertex(root->nodes[0]);
    if (root->nodes[1] !=NULL) freeVertex(root->nodes[1]);
    if (root->nodes[2] !=NULL) freeVertex(root->nodes[2]);
    if (root->nodes[3] !=NULL) freeVertex(root->nodes[3]);

    //if (root->variable!=NULL) free(root->variable);
    //if (root->symbol!=NULL) free(root->symbol);
    free(root);
    
}

void printVertex(vertex *root)
{
    if (root != NULL) {
        if(root->nodes[0] != NULL) printVertex(root->nodes[0]);
        if(root->nodes[1] != NULL) printVertex(root->nodes[1]);
        if(root->nodes[2] != NULL) printVertex(root->nodes[2]);
        if(root->nodes[3] != NULL) printVertex(root->nodes[3]);

        if(root->variable != NULL) printf("%s\n", root->variable);
        if(root->symbol != NULL) printf("%s\n", root->symbol);
    }
}
