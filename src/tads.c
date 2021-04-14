#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tads.h"


vertex* createNode(int variable_name,char* op_or_type, char* value, vertex* n1, vertex* n2, vertex* n3)
{
    vertex *node = (vertex *) malloc (sizeof(vertex));
    
    node->variable_name = variable_name;
    node->op_or_type = op_or_type;
    node->value = value;
    node->n1 = n1;
    node->n2 = n2;
    node->n3 = n3;

    return node;
}

void freeVertex(vertex* root) {
    if(root == NULL) return;
    if(root->n1 != NULL) freeVertex(root->n1);
    if(root->n2 != NULL) freeVertex(root->n2);
    if(root->n3 != NULL) freeVertex(root->n3);
    if(root->op_or_type != NULL) free(root->op_or_type);
    if(root->value != NULL) free(root->value);  
    free(root);
}

void printTree(vertex *root,int dpt){

    if(root) {
        print_tabs(dpt);
        print_variable(root->variable_name);
        if(root->op_or_type != NULL) printf(" %s ", root->op_or_type);
        if(root->value != NULL) printf(" %s ",root->value);
        printf("\n");
        if(root != root->n1) printTree(root->n1, dpt+1);
        if(root != root->n2) printTree(root->n2, dpt+1);
        if(root != root->n3) printTree(root->n3, dpt+1);
    }
    
}

void print_tabs (int tabs){
    for(int i= tabs; i!= 0; i--){
        printf("_");
    }
}

void print_variable(int name) {
    switch(name){
        case PROGRAM:
            printf(CYN"\nPROGRAM:"DFT);
            break;
        case VAR_DECLARATION:
            printf(BLU"(DECLARACAO-VARIAVEL:>"DFT);
            break;
        case FUNCTION_DEFINITION:
            printf(BLU"(DEFINICAO-FUNCAO:>"DFT);
            break;
        case PARAMETER_DECL:
            printf(YEL"(DEFINICAO-PARAMETRO:>"DFT);
            break;
        case CONSTANT:
            printf(YEL"(CONSTANT:>"DFT);
            break;
        case CALL:
            printf(YEL"(CALL:>"DFT);
            break;
        case ARG_LIST:
            printf(YEL"(ARGUMENTOS:>"DFT);
            break;
        case SET_ADD:
            printf(YEL"(SET_ADD:>"DFT);
            break;
        case RETURN_STMT:
            printf(YEL"(RETURN:>"DFT);
            break;
        case IN_OP:
            printf(YEL"(IN:>"DFT);
            break;
        case IO_STMT:
            printf(BLU"(IO:>"DFT);
            break;
        case FORALL_STMT:
            printf(BLU"(FORALL:>"DFT);
            break;
        case IDENT:
            printf(YEL"(ID:>"DFT);
            break;
        case BASIC_OP:
            printf(YEL"(BASIC OP:>"DFT);
            break;
        case CONST:
            printf(YEL"(CONST:>"DFT);
            break;
        case ASSIGN:
            printf(YEL"(ASSIGN:>"DFT);
            break;
        case IF_STMT:
            printf(BLU"(IF:>"DFT);
            break;
        case IF_ELSE_STMT:
            printf(BLU"(IF_ELSE:>"DFT);
            break;
        case FOR_STMT:
            printf(BLU"(FOR:>"DFT);
            break;
        case STMT:
            printf(CYN"(STATEMENT:>"DFT);
            break;
    }
}


Symbol* create_symbol(char* ID, char* type, int var_or_func) {
    Symbol * entry = (Symbol *) malloc(sizeof(Symbol));
    entry->ID = ID;
    entry->type = type;
    entry->var_or_func = var_or_func;
    
    return entry;
}

void add_entry(char* ID , char* type , int var_or_func) {
    Symbol * entry;
    //Scope * S = get_stack_top();

    entry = create_symbol(ID, type, var_or_func);
    HASH_ADD_STR(symbolTable,ID,entry);
}

void printTable(){
    //printf("\n|  %15s |  %5s | Declaration Type |\n","ID", "TYPE");
    for(Symbol *entry = symbolTable; entry!= NULL;entry = entry->hh.next){
        switch(entry->var_or_func){
            case VAR:
                printf("ID:  %15s |type:  %5s | Declaration Type: VARIABLE \n", entry->ID, entry->type);
                break;
            case FUNC:
                printf("ID:  %15s | type:  %5s | Declaration Type: FUNCTION \n", entry->ID, entry->type);
                break;
            case PARAM:
                printf("ID:  %15s | type:  %5s | Declaration Type: PARAMETER \n", entry->ID, entry->type);
                break;
        }     
    }

}

void freeTable(){
    Symbol * entry, *tmp;
    HASH_ITER(hh, symbolTable, entry, tmp) {
        HASH_DEL(symbolTable, entry);
        free(entry);
    }
}


// scope pile functions

Scope* top() {
    Scope* head = stack;
    while(head->nxt != NULL) {
        head = head->nxt;
    }
    return head;
}

void push_global(){
    Scope* g = (Scope*) malloc (sizeof(Scope));
    g->scope_name = "global";
    stack = g;
}

void pop(){
    Scope* s = stack;
    if ((strcmp(s->scope_name, "global")==0) && s->nxt==NULL) return;
    while(s->nxt->nxt != NULL) 
        s = s->nxt;
    free(s->nxt);
    s->nxt = NULL;
}

void push(char * scope_name, char * type){
    Scope * s = (Scope *) malloc(sizeof(Scope));
    Scope * head;

    s->type = type;
    s->scope_name = scope_name;

    head = top();
    head->nxt = s;
}