#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "tads.h"

vertex *createNode(int variable_name, char *node_type, char *value, vertex *l, vertex *r)
{
    vertex *node = (vertex *) calloc (1,sizeof(vertex));
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
    freeVertex(root->l);
    freeVertex(root->r);
    free(root->value);
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
    case ARG:
        printf(YEL " ARG" DFT);
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
            } else {
                raiseRedecl(line, col, ID, var_or_func);
            }
            return;
        }
    }

    
    entry = createSymbol(ID, type, var_or_func, recent_scope, line, col);
    HASH_ADD_STR(symbolTable, ID, entry);
    
}

void printTable()
{   
    printf(KMAG"\nID   %11s | %4s:%4s | type   %3s | scope | Declaration Type \t\n"DFT, "", "lin", "col", "");
    printf("____________________________________________________________________\n");
    for (Symbol *entry = symbolTable; entry != NULL; entry = entry->hh.next)
    {
        switch (entry->var_or_func)
        {
        case VAR:
            printf(" %15s | %4d:%4d | %10s | %5d | VARIABLE \t\n", entry->ID, entry->line, entry->col, entry->type, entry->scope);
            break;
        case FUNC:
            printf(" %15s | %4d:%4d | %10s | %5d | FUNCTION \t\n", entry->ID, entry->line, entry->col, entry->type, entry->scope);
            break;
        case PARAM:
            printf(" %15s | %4d:%4d | %10s | %5d | PARAMETER \t\n", entry->ID, entry->line, entry->col, entry->type, entry->scope);
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

Symbol *findS(char * name){
    Symbol *tmp;
    HASH_FIND_STR(symbolTable,name,tmp);
    return tmp;
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

void addFunctionParams(char * name, char* returnType)
{
    functionParams *params = (functionParams *) malloc(sizeof(functionParams));
    Param * el;
    int count=0;

    LL_COUNT(paramList,el, count);
    params->name = name;
    params->numberOfParams = count;
    params->returnType =returnType;
    params->first = paramList;  

    HASH_ADD_STR(funcTable,name,params); 
}

void addParam(char * type)
{
    Param *newParam = (Param *) calloc(1,sizeof(Param));
    newParam->type = type;

    LL_APPEND(paramList,newParam);
}

void freePList(){
    Param * el;
    LL_FOREACH(paramList,el) {
        LL_DELETE(paramList,el);
        //free(el);
    }
}

void freeFunctionTable(){
    functionParams *entry, *tmp;
    HASH_ITER(hh, funcTable, entry, tmp)
    {
        HASH_DEL(funcTable, entry);
        if(entry->first!= NULL) freeParamList(entry->first);
        free(entry);
    }
}

void freeParamList(Param* head){
    Param *p;
    for (p = head; p!= NULL; p=p->next)
    {
        free(p);
    }
    
}

void printFunctionTable() {
  functionParams *s;
  for(s=funcTable; s != NULL; s=s->hh.next) {
    printf("Func: %s | numero de parametros: %d | tipo de retorno: %s\n", s->name, s->numberOfParams,s->returnType);
    if (s->first) {
      printParams(s->first);
    }
  }
}

void printParams(Param *params) {
  printf("├ Tipo: %s\n", params->type);
  if (params->next) {
    printParams(params->next);
  }
}

void checkArgs(char*name, vertex* node,int l,int c){
    Symbol *entry = findS(name); 
    Param *el;
    int count = 0;

    if(!entry){
        raiseUndeclaredFunc(name);
    } else {
        createArgList(node);
        LL_COUNT(argCalls,el,count);
        functionParams *f = findF(name);
        if(f->numberOfParams != count){
            raiseNumberOfArgs(line, col,name);
        } else {
            Param * p = f->first;
            LL_FOREACH(argCalls,el){
                if(p->type !=el->type){
                    raiseCallTypeMismatch(line, col,name);
                    break;
                } else {
                    p = p->next;
                }
            }

        }
        freeAList();
    }

}

 void createArgList(vertex* node){

    if(!node)
        return;
    createArgList(node->l);
    createArgList(node->r);
    if(node->node_type != NULL) {
        Param *tmp = (Param*) calloc(1, sizeof(Param));
        tmp->type = node->node_type;
        LL_APPEND(argCalls,tmp);
    }
}

functionParams *findF(char * name){
    functionParams *tmp;
    HASH_FIND_STR(funcTable,name,tmp);
    return tmp;
}

void freeAList(){
    Param * el;
    LL_FOREACH(argCalls,el) {
        LL_DELETE(argCalls,el);
        //free(el);
    }
}

//SEMANTIC CHECKS

void checkReturnType(char* lastFType, vertex* retType){
    ret = NULL;
    getReturnType(retType);
    if(ret==NULL){
        raiseVoidReturn();
    } else if(strcmp(ret,lastFType)==0) {
        //raiseWrongReturnType(lastFType,ret);
    }
}

void getReturnType(vertex* retType){
    if(!retType) 
        return;
    getReturnType(retType->l);
    getReturnType(retType->r);
    if(retType->node_type!=NULL) ret = retType->node_type;
}

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


//TAC

void printNewCode() {
  struct codeLine* cl;
  FILE *fp;
  fp = fopen("./arq.tac", "w");
  printf(".table\n");
  printf(".code\n");
  fprintf(fp, ".table\n");
  fprintf(fp, ".code\n");
  if (newCode != NULL) {
    cl = newCode;
    while(cl != NULL) {
      printf("%s", utstring_body(cl->line));
      fprintf(fp, "%s", utstring_body(cl->line));
      cl = cl->next;
    }
  }
  printf("nop\n\n");
  fprintf(fp, "nop\n\n");
  fclose(fp);
}

vertex *root = NULL;
Scope *head = NULL;
Symbol *symbolTable = NULL;
functionParams *funcTable = NULL;
Param * argCalls = NULL;
Param * paramList = NULL;
CodeLine * newCode= NULL;