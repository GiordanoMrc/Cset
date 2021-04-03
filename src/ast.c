#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"

vertex *createNode(char *string)
{
    vertex *node = (vertex *)malloc(sizeof(vertex));
    node->terminal = strdup(string);
    node->nextNode = NULL;
    node->childNodes = NULL;
    return node;
}

void freeVertex(vertex *root)
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
}

void printVertex(vertex *root)
{

    if (root == NULL)
        return;
    printVertex(root->childNodes);
    printVertex(root->nextNode);
    printf("%s\n", root->terminal);
}
