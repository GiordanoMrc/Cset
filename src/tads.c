#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tads.h"

vertex *createNode(int variable_name, char *op_or_type, char *value, vertex *n1, vertex *n2, vertex *n3)
{
    vertex *node = (vertex *)malloc(sizeof(vertex));
    node->variable_name = variable_name;
    node->op_or_type = op_or_type;
    node->value = value;
    node->n1 = n1;
    node->n2 = n2;
    node->n3 = n3;

    return node;
}

void freeVertex(vertex *root)
{
    if (root == NULL)
        return;
    if (root->n1 != NULL)
        freeVertex(root->n1);
    if (root->n2 != NULL)
        freeVertex(root->n2);
    if (root->n3 != NULL)
        freeVertex(root->n3);
    if (root->op_or_type != NULL)
        free(root->op_or_type);
    if (root->value != NULL)
        free(root->value);
    free(root);
}

void printTree(vertex *root, int dpt)
{
    if (root)
    {
        printf("\n");
        print_tabs(dpt);
        print_variable(root->variable_name);
        if (root->op_or_type != NULL)
            printf(" %s ", root->op_or_type);
        if (root->value != NULL)
            printf(" %s ", root->value);
        if (root != root->n1)
            printTree(root->n1, dpt + 1);
        if (root != root->n2)
            printTree(root->n2, dpt + 1);
        if (root != root->n3)
            printTree(root->n3, dpt + 1);
    }
}

void print_tabs(int tabs)
{
    for (int i = tabs; i != 0; i--)
    {
        printf(KGRN "_" DFT);
    }
}

void print_variable(int name)
{
    switch (name)
    {
    case PROGRAM:
        printf(CYN "\nPROGRAM:" DFT);
        break;
    case VAR_DECLARATION:
        printf(BLU "(DECLARACAO-VARIAVEL:>" DFT);
        break;
    case FUNCTION_DEFINITION:
        printf(BLU "(DEFINICAO-FUNCAO:>" DFT);
        break;
    case PARAMETER_DECL:
        printf(YEL "(DEFINICAO-PARAMETRO:>" DFT);
        break;
    case CONSTANT:
        printf(YEL "(CONSTANT:>" DFT);
        break;
    case CALL:
        printf(YEL "(CALL:>" DFT);
        break;
    case ARG_LIST:
        printf(YEL "(ARGUMENTOS:>" DFT);
        break;
    case SET_ADD:
        printf(YEL "(SET_ADD:>" DFT);
        break;
    case SET_REMOVE:
        printf(YEL "(SET_REMOVE:>" DFT);
        break;
    case SET_EXISTS:
        printf(YEL "(SET_EXISTS:>" DFT);
        break;
    case IS_SET_EXP:
        printf(YEL "(IS_SET:>" DFT);
        break;

    case RETURN_STMT:
        printf(YEL "(RETURN:>" DFT);
        break;
    case IN_OP:
        printf(YEL "(IN:>" DFT);
        break;
    case REL_OP:
        printf(YEL "(REL_OP:>" DFT);
        break;
    case LOGICAL_EXP:
        printf(YEL "(LOGICAL_OP:>" DFT);
        break;
    case ADD_OP:
        printf(YEL "(ADD_OP:>" DFT);
        break;
    case MUL_OP:
        printf(YEL "(MUL_OP:>" DFT);
        break;
    case DIV_OP:
        printf(YEL "(DIV_OP:>" DFT);
        break;
    case IO_STMT:
        printf(BLU "(IO:>" DFT);
        break;
    case FORALL_STMT:
        printf(BLU "(FORALL:>" DFT);
        break;
    case IDENT:
        printf(YEL "(ID:>" DFT);
        break;
    case BASIC_OP:
        printf(YEL "(BASIC OP:>" DFT);
        break;
    case CONST:
        printf(YEL "(CONST:>" DFT);
        break;
    case ASSIGN:
        printf(YEL "(ASSIGN:>" DFT);
        break;
    case IF_STMT:
        printf(BLU "(IF:>" DFT);
        break;
    case IF_ELSE_STMT:
        printf(BLU "(IF_ELSE:>" DFT);
        break;
    case FOR_STMT:
        printf(BLU "(FOR:>" DFT);
        break;
    case STMT:
        printf(CYN "(STATEMENT:>" DFT);
        break;
    }
}

Symbol *createSymbol(char *ID, char *type, int var_or_func, int scope_id ,int line ,int col)
{
    Symbol *entry = (Symbol *)malloc(sizeof(Symbol));
    entry->ID = ID;
    entry->type = type;
    entry->var_or_func = var_or_func;
    entry->scope = scope_id;
    entry->line = line;
    entry->col = col;

    return entry;
}

void addEntry(char *ID, char *type, int var_or_func, int line, int col)
{
    Symbol *entry;
    Scope * h = STACK_TOP(head);
    if(var_or_func !=PARAM) {
        HASH_FIND_STR(symbolTable, ID, entry);
        if (entry != NULL && entry->scope == h->scope_id && entry->type == type)
        {
            raiseRedecl(line,col);
        } else {
            entry = createSymbol(ID, type, var_or_func, (h->scope_id),line, col);
            HASH_ADD_STR(symbolTable, ID, entry);
        }
    } else {
        HASH_FIND_STR(symbolTable, ID, entry);
        if (entry != NULL && entry->scope == (h->scope_id+1) && entry->type == type)
        {
            raiseRedecl(line,col);
        } else {
            entry = createSymbol(ID, type, var_or_func, (h->scope_id+1),line, col);
            HASH_ADD_STR(symbolTable, ID, entry);
        }
    }
}

void printTable()
{   printf("\nID   %15s | %4s:%4s | type   %10s | scope  %4s | Declaration Type  %5s\t\n", "" ,"lin","col","" , "" , "");
    printf("_____________________________________________________________________________________________________________\n");
    for (Symbol *entry = symbolTable; entry != NULL; entry = entry->hh.next)
    {
        switch (entry->var_or_func)
        {
        case VAR:
            printf("ID:  %15s | %4d:%4d | type:  %10s | scope: %4d | Declaration Type: VARIABLE \n", entry->ID,entry->line,entry->col, entry->type, entry->scope);
            break;
        case FUNC:
            printf("ID:  %15s | %4d:%4d | type:  %10s | scope: %4d | Declaration Type: FUNCTION \n", entry->ID,entry->line,entry->col, entry->type, entry->scope);
            break;
        case PARAM:
            printf("ID:  %15s | %4d:%4d | type:  %10s | scope: %4d | Declaration Type: PARAMETER \n", entry->ID,entry->line,entry->col, entry->type, entry->scope);
            break;
        }
    }
}

void freeTable()
{
    Symbol *entry, *tmp;
    HASH_ITER(hh, symbolTable, entry, tmp)
    {
        HASH_DEL(symbolTable, entry);
        free(entry);
    }
}

// scope pile functions

void createScope()
{
    Scope *s = (Scope *)malloc(sizeof(Scope));
    s->scope_id = ++scope_counter;
    s->next = NULL;

    push(s);
}

void initGlobalScope()
{
    Scope *g = (Scope *)malloc(sizeof(Scope));
    g->scope_id = 0;
    g->next = NULL;
    push(g);
}

void push(Scope *scope)
{
    STACK_PUSH(head, scope);
}

void pop()
{
    Scope *res;
    STACK_POP(head, res);
    free(res);
}


//SEMANTIC CHECKS

void checkNoMain() {
    Symbol * entry;
    HASH_FIND_STR(symbolTable, "main", entry);
    if (entry == NULL) 
        raiseNoMain();
}



vertex *root = NULL;
Scope *head = NULL;
Symbol *symbolTable = NULL;