#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tads.h"

vertex *createNode(int variable_name, char *op_or_type, char *value, vertex *l, vertex *r)
{
    vertex *node = (vertex *)malloc(sizeof(vertex));
    node->variable_name = variable_name;
    node->op_or_type = op_or_type;
    node->value = value;
    node->l = l;
    node->r = r;
    node->node_taipe = '\0';
    return node;
}

void freeVertex(vertex *root)
{
    if (!root)
        return;
    free(root->op_or_type);
    free(root->value);
    free(root->node_taipe);
    freeVertex(root->l);
    freeVertex(root->r);
    free(root);
}

void printTree(vertex *root, int dpt)
{
    if (root)
    {
        if (root->variable_name != 666)
        {
            printf("\n");
            print_tabs(dpt);
            print_variable(root->variable_name);
        }
        if (root->op_or_type != NULL)
            printf(": %s ", root->op_or_type);
        if (root->value != NULL)
            printf(": %s ", root->value);

        if (root != root->l)
            printTree(root->l, dpt + 1);
        if (root != root->r)
            printTree(root->r, dpt + 1);
    }
}

void print_tabs(int tabs)
{
    for (int i = tabs; i != 0; i--)
    {
        printf(" ");
    }
    printf("├");
}

void print_variable(int name)
{
    switch (name)
    {
    case PROGRAM:
        printf(" PROGRAM" DFT);
        break;
    case VAR_DECLARATION:
        printf(RED " DECLARACAO-VARIAVEL" DFT);
        break;
    case FUNCTION_DEFINITION:
        printf(KMAG " DEFINICAO-FUNCAO" DFT);
        break;
    case PARAMETER_DECL:
        printf(YEL " DEFINICAO-PARAMETRO" DFT);
        break;
    case CONSTANT:
        printf(YEL " CONSTANTE" DFT);
        break;
    case CALL:
        printf(BLU " CALL" DFT);
        break;
    case ARG_LIST:
        printf(YEL " ARGUMENTOS" DFT);
        break;
    case SET_ADD:
        printf(BLU " SET_ADD" DFT);
        break;
    case SET_REMOVE:
        printf(BLU " SET_REMOVE" DFT);
        break;
    case SET_EXISTS:
        printf(BLU " SET_EXISTS" DFT);
        break;
    case IS_SET_EXP:
        printf(BLU " IS_SET" DFT);
        break;
    case RETURN_STMT:
        printf(BLU " RETURN" DFT);
        break;
    case IN_OP:
        printf(BLU " IN" DFT);
        break;
    case REL_OP:
        printf(YEL " REL_OP" DFT);
        break;
    case REL_EQ:
        printf(YEL " REL_EQ" DFT);
        break;
    case LOGICAL_EXP:
        printf(YEL " LOGICAL_OP" DFT);
        break;
    case ADD_OP:
        printf(YEL " ADD_OP" DFT);
        break;
    case MUL_OP:
        printf(YEL " MUL_OP" DFT);
        break;
    case DIV_OP:
        printf(YEL " DIV_OP" DFT);
        break;
    case NOT_OP:
        printf(YEL " NOT_OP" DFT);
        break;
    case IO_STMT:
        printf(BLU " IO" DFT);
        break;
    case FORALL_STMT:
        printf(BLU " FORALL" DFT);
        break;
    case IDENT:
        printf(YEL " ID" DFT);
        break;
    case BASIC_OP:
        printf(YEL " BASIC OP" DFT);
        break;
    case CONST:
        printf(YEL " CONSTANT" DFT);
        break;
    case ASSIGN:
        printf(YEL " ASSIGN" DFT);
        break;
    case IF_STMT:
        printf(BLU " IF" DFT);
        break;
    case IF_COND:
        printf(BLU " IF_CONDITION" DFT);
        break;
    case FOR_STMT:
        printf(BLU " FOR" DFT);
        break;
    case FOR_INIT:
        printf(BLU " FOR_INIT" DFT);
        break;
    case FOR_COND:
        printf(BLU " FOR_CONDITION" DFT);
        break;
    case FOR_INCREMENT:
        printf(BLU " FOR_INCREMENT" DFT);
        break;
    case ELSE_STMT:
        printf(BLU " ELSE" DFT);
        break;
    case STMT:
        printf(CYN " STATEMENT" DFT);
        break;
    case VALUE_INT:
        printf(CYN " INT" DFT);
        break;
    case VALUE_FLOAT:
        printf(CYN " FLOAT" DFT);
        break;
    case VALUE_EMPTY:
        printf(CYN " EMPTY" DFT);
        break;
    case VALUE_STRING:
        printf(CYN " STRING" DFT);
        break;
    }
}

void addTypeToNode(vertex *nozes)
{
    char *type_left = NULL;
    char *type_right = NULL;
    if (nozes->l != NULL)
    {
        type_left = nozes->l->node_taipe;
    }
    if (nozes->r != NULL)
    {
        type_right = nozes->r->node_taipe;
    }
    if (type_left != NULL && type_right != NULL && strcmp(type_left, type_right) != 0)
    {
        if ( // type mismatch -- implicit conversion
            (strcmp(type_left, "int") == 0 && strcmp(type_right, "float") == 0) ||
            (strcmp(type_left, "float") == 0 && strcmp(type_right, "int") == 0))
        {
            //add_implicit_conversion(nozes, NULL);
            type_left = nozes->l->node_taipe;
        }
        else
        {
            //raiseTypeMismatch(type_left, type_right);
        }
    }
    if (nozes->variable_name == REL_OP || nozes->variable_name == LOGICAL_EXP)
    {
        nozes->node_taipe = "bool";
    }
    else
    {
        nozes->node_taipe = type_left;
    }
}

// Symbols

Symbol *createSymbol(char *ID, char *type, int var_or_func, int scope_id, int line, int col)
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

void addEntry(char *ID, char *type, int var_or_func, int recent_scope)
{
    Symbol * entry;

    for (entry=symbolTable; entry!= NULL; entry = entry->hh.next){
        if(!strcmp(entry->ID, ID) && recent_scope == entry->scope){
            if(var_or_func==FUNC){
                raiseRedecl(line,col,ID,var_or_func);
                skipScope =1;
            }
            else if(var_or_func==PARAM) {
                raiseRedecl(line,col,ID,var_or_func);
            } else {
                raiseRedecl(line,col,ID,var_or_func);
            }
            return;
        }
    }

    if (var_or_func == PARAM)
    {
        entry = createSymbol(ID, type, var_or_func, recent_scope,line, col);
    }
    else
    {
        entry = createSymbol(ID, type, var_or_func, recent_scope, line, col);
    }
    HASH_ADD_STR(symbolTable, ID, entry);
}

void printTable()
{
    printf(KMAG "\nID   %11s | %4s:%4s | type   %3s | scope | Declaration Type  %5s\t\n" DFT, "", "lin", "col", "", "");
    printf("____________________________________________________________________\n");
    for (Symbol *entry = symbolTable; entry != NULL; entry = entry->hh.next)
    {
        switch (entry->var_or_func)
        {
        case VAR:
            printf(" %15s | %4d:%4d | %10s | %5d | VARIABLE \n", entry->ID, entry->line, entry->col, entry->type, entry->scope);
            break;
        case FUNC:
            printf(" %15s | %4d:%4d | %10s | %5d | FUNCTION \n", entry->ID, entry->line, entry->col, entry->type, entry->scope);
            break;
        case PARAM:
            printf(" %15s | %4d:%4d | %10s | %5d | PARAMETER \n", entry->ID, entry->line, entry->col, entry->type, entry->scope);
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

void checkNoMain()
{
    int found = 0;
    for (Symbol *entry = symbolTable; entry != NULL; entry = entry->hh.next)
    {
        if (!strcmp(entry->ID, "main") && entry->var_or_func == FUNC)
        {
            found = 1;
        }
    }
    if (!found)
    {
        raiseNoMain();
    }
}

void checkUndeclaredID(char *id, int line, int col)
{
    for (Scope *h = STACK_TOP(head); h != NULL; h = h->next)
    {
        for (Symbol *entry = symbolTable; entry != NULL; entry = entry->hh.next)
        {
            if(!strcmp(entry->ID,id) && h->scope_id == entry->scope)
                return;
        }
    }
    raiseUndeclaredId(line,col);
}

vertex *root = NULL;
Scope *head = NULL;
Symbol *symbolTable = NULL;