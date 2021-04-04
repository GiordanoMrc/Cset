#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tads.h"


vertex* createNode(int variable_name,char* op_sign, char* value, vertex* n1, vertex* n2, vertex* n3, vertex* n4)
{
    vertex *node = (vertex *) malloc (sizeof(vertex));
    
    node->variable_name = variable_name;
    node->op_sign = op_sign;
    node->value = value;
    node->n1 = n1;
    node->n2 = n2;
    node->n3 = n3;
    node->n4 = n4;
    return node;
}

void freeVertex(vertex* root) {
    if(root == NULL) return;
    if(root->n1 != NULL) freeVertex(root->n1);
    if(root->n2 != NULL) freeVertex(root->n2);
    if(root->n3 != NULL) freeVertex(root->n3);
    if(root->n4 != NULL) freeVertex(root->n4);
    if(root->op_sign != NULL) free(root->op_sign);
    if(root->value != NULL) free(root->value);  
    free(root);
}

void printTree(vertex *root,int dpt){

    if(root) {
        //print_tabs(dpt);
        print_variable(root->variable_name);
        if(root->op_sign != NULL) printf("Op: %s ", root->op_sign);
        if(root->value != NULL) printf("Value: %s  \n",root->value);

        printTree(root->n1, dpt+1);
        printTree(root->n2, dpt+1);
        printTree(root->n3, dpt+1);
        printTree(root->n4, dpt+1);
    }
    
}

void print_tabs (int tabs){
    for(int i= tabs; i!= 0; i--){
        printf("\t");
    }
}
void print_variable(int name) {
    switch(name){
        case 0:
            printf(RED"<PROGRAM>DFT");
            printf("\n\t");
            break;
        case 3:
            printf(RED"<VAR_DECLARATION>"DFT);
            printf("\n\t");
            break;
        case 4:
            printf(RED"<FUNCTION-DEFINITION>"DFT);
            printf("\n\t");
            break;
        case 12:
            printf(RED"<STATEMENT>"DFT);
            printf("\n\t");
            break;
        case 13:
            printf(RED"<IO_STMT>"DFT);
            printf("\n\t");
            break;
        case 14:
            printf(RED"<IF_STMT>"DFT);
            printf("\n\t");
            break;
        case 15:
            printf(RED"<FOR_STMT>"DFT);
            printf("\n\t");
            break;
        case 16:
            printf(RED"<RETURN_STMT>"DFT);
            printf("\n\t");
            break;
        case 17:
            printf(RED"<FORALL_STMT>"DFT);
            printf("\n\t");
            break;
        case 18:
            printf(RED"<EXPRESSION_STMT>"DFT);
            printf("\n\t");
            break;
        case 20:
            printf(RED"<ASSIGN>"DFT);
            printf("\n\t");
            break;
        case 21:
            printf(RED"<BASIC_EXP>"DFT);
            printf("\n\t");
            break;
        case 22:
            printf(RED"<IN_EXP>"DFT);
            printf("\n\t");
            break;
        case 23:
            printf(RED"<LOGICAL_EXP>"DFT);
            printf("\n\t");
            break;
        case 24:
            printf(RED"<ADD_EXP>"DFT);
            printf("\n\t");
            break;
        case 27:
            printf(RED"<SET_EXP>"DFT);
            printf("\n\t");
            break;
        case 28:
            printf(RED"<CONSTANT>"DFT);
            printf("\n\t");
            break;
        case 29:
            printf(RED"<CALL>"DFT);
            printf("\n\t");
            break;
    }
}