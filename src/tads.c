#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tads.h"

vertex *createNode(int variable_name, char *node_type, char *value, vertex *l, vertex *r)
{
    vertex *node = (vertex *)malloc(sizeof(vertex));
    node->variable_name = variable_name;
    node->node_type = node_type;
    node->value = value;
    node->l = l;
    node->r = r;
    return node;
}

void freeVertex(vertex *root)
{
    if (!root)
        return;
    free(root->value);
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
        if (root->node_type != NULL)
            printf(": %s ", root->node_type);
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
    case FLOAT_TO_INT:
        printf(CYN " FLOAT_TO_INT" DFT);
        break;
    case INT_TO_FLOAT:
        printf(CYN " FLOAT_TO_INT" DFT);
        break;
    }
}

void addTypeToNode(vertex *nozes)
{
    char *left_node_type = NULL;
    char *right_node_type = NULL;
    if (nozes->l != NULL)
        left_node_type = nozes->l->node_type;
    if (nozes->r != NULL)
        right_node_type = nozes->r->node_type;

    if (left_node_type != NULL && right_node_type != NULL && strcmp(left_node_type, right_node_type) != 0)
    {
        if ((strcmp(left_node_type, "int") == 0 && strcmp(right_node_type, "float") == 0) || (strcmp(left_node_type, "float") == 0 && strcmp(right_node_type, "int") == 0))
        {
            addConversionNode(nozes);
            left_node_type = nozes->l->node_type;
        }
        else
            raiseTypeMismatch(left_node_type, right_node_type);
    }
    if (nozes->variable_name == REL_OP || nozes->variable_name == LOGICAL_EXP || nozes->variable_name == IS_SET_EXP)
        nozes->node_type = "int";
    else
        nozes->node_type = left_node_type;
}

void addConversionNode(vertex *node)
{
    vertex *convertex;
    if (strcmp(node->l->node_type, "int") == 0 && strcmp(node->r->node_type, "float") == 0)
    {
        if (node->variable_name == ASSIGN)
        {
            convertex = createNode(FLOAT_TO_INT, "int", NULL, node->r, NULL);
            node->r = convertex;
        }
        else
        {
            convertex = createNode(INT_TO_FLOAT, "float", NULL, node->l, NULL);
            node->l = convertex;
        }
    }
    else
    {
        convertex = createNode(INT_TO_FLOAT, "float", NULL, node->l, NULL);
        node->l = convertex;
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
    entry->paramC = NULL;
    return entry;
}

void addEntry(char *ID, char *type, int var_or_func, int recent_scope)
{
    Symbol *entry;

    for (entry = symbolTable; entry != NULL; entry = entry->hh.next)
    {
        if (!strcmp(entry->ID, ID) && recent_scope == entry->scope)
        {
            if (var_or_func == FUNC)
            {
                raiseRedecl(line, col, ID, var_or_func);
                skipScope = 1;
            }
            else if (var_or_func == PARAM)
            {
                raiseRedecl(line, col, ID, var_or_func);
            }
            else
            {
                raiseRedecl(line, col, ID, var_or_func);
            }
            return;
        }
    }
    if (var_or_func == PARAM) {
        addParamCounter();
    }
  

    entry = createSymbol(ID, type, var_or_func, recent_scope, line, col);
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

//PARAMs

void addFunctionParams(char *id)
{
    functionParams *params = (functionParams *) calloc (1,sizeof(functionParams));
    char *functionName = (char *)strdup(id);

    params->functionName = (char *)strdup(id);
    params->numberOfParams = 0;

    HASH_ADD_STR(functionTable, functionName, params);
    free(functionName);
}

void addParams(int type)
{
    Params *newParams = (Params *)calloc(1,sizeof(Params));
    //Params *params;
    functionParams *functionParams;
    newParams->type = type;

    Scope *h = STACK_TOP(head);

    HASH_FIND_INT(symbolTable, &h->scope_id, functionParams);
}

void printFunctionTable()
{
    printf(KMAG "\nFuncao   %11s | Number of Params  %5s\t\n" DFT, "", "");
    for (functionParams *s = functionTable; s != NULL; s = s->hh.next)
    {
        printf("%20s |  %5d\n\n", s->functionName, s->numberOfParams);
        if (s->first)
        {
            printParams(s->first, 1);
        }
    }
}

void printParams(Params *params, int count)
{
    printf("%d, %d\n", count, params->type);
    if (params->next) printParams(params->next, count + 1);
}

void freeFunctionTable()
{
    for (functionParams *s=functionTable; s != NULL; s = s->hh.next)
    {
        free(s->functionName);
        if (s->first) freeParams(s->first);
    }
}

void freeParams(Params *params)
{
    if (params != NULL)
    {
        freeParams(params->next);
        free(params);
    }
}

char* addParamCounter() {
  UT_string *str;
  utstring_new(str);
  utstring_printf(str, "#%d", param_counter);
  param_counter++;
  return utstring_body(str);
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
            if (!strcmp(entry->ID, id) && h->scope_id == entry->scope)
                return;
        }
    }
    raiseUndeclaredId(line, col);
}

vertex *root = NULL;
Scope *head = NULL;
Symbol *symbolTable = NULL;
functionParams * functionTable =NULL;
