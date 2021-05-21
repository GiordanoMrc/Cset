#ifndef TADS
#define TADS

#include "uthash/uthash.h"
#include "uthash/utstack.h"
#include "uthash/utstring.h"
#include "uthash/utlist.h"
#include "semantic_raises.h"

typedef enum variable_names
{
    PROGRAM,
    VAR_DECLARATION,
    FUNCTION_DEFINITION,
    PARAMETER_DECL,
    STMT,
    IO_STMT,
    IF_STMT,
    FOR_STMT,
    FOR_COND,
    RETURN_STMT,
    FORALL_STMT,
    EXPRESSION,
    ASSIGN,
    LOGICAL_EXP,
    ADD_OP,
    MUL_OP,
    DIV_OP,
    CONSTANT,
    CALL,
    ARG_LIST,
    VALUE_INT,
    VALUE_FLOAT,
    VALUE_EMPTY,
    VALUE_STRING,
    NOT_OP,
    SET_ADD,
    SET_REMOVE,
    SET_EXISTS,
    IN_OP,
    BASIC_OP,
    IDENT,
    CONST,
    REL_OP,
    IS_SET_EXP,
    ELSE_STMT,
    IF_COND,
    FOR_INIT,
    FOR_INCREMENT,
    REL_EQ,
    FLOAT_TO_INT,
    INT_TO_FLOAT,
    ARG

} variable_names;

enum table_type
{
    VAR,
    FUNC,
    PARAM
};

enum type
{
    INT_T,
    FLOAT_T,
    SET_T,
    ELEM_T
};

typedef struct codeLine {
  UT_string *line;
  struct codeLine *next;
} CodeLine;

CodeLine * newCode;
typedef struct Param
{
    char* type;
    struct Param *next; // Próximo parametro
} Param;

Param * paramList;
Param * argCalls;

typedef struct functionParams
{
    char* name;
    char* returnType;
    int numberOfParams;
    struct Param *first;
    UT_hash_handle hh;
} functionParams;

functionParams * funcTable;

typedef struct Scope
{
    int scope_id;
    struct Scope *next;
} Scope;

Scope *head;

typedef struct Symbol
{
    char *ID;
    char *type;
    int line;
    int col;
    int var_or_func;
    int scope;
    int nParams;
    UT_hash_handle hh;
} Symbol;

Symbol *symbolTable;

typedef struct vertex
{
    int variable_name;
    char * node_type;
    char * value;
    struct vertex * l;
    struct vertex * r;
} vertex;

vertex *root;

int line, col, scope_counter, skipScope, param_counter;
char* ret;
vertex *createNode(int variable_name, char *node_type, char *value, struct vertex *v1, vertex *v2);
void print_tabs(int tabs);
void print_variable(int name);
void freeVertex(vertex *root);
void printTree(vertex *root, int dpt);
void addConversionNode(vertex *node);
void addTypeToNode(vertex *nozes);

// tabela de simbolos

Symbol *createSymbol(char *ID, char *type, int var_or_func, int scope_id, int line, int col);
void addEntry(char *ID, char *type, int var_or_func, int recent_scope);
Symbol * findS(char*name);
void printTable();
void freeTable();

// pilha de escopo
void initGlobalScope();
void createScope();
void push(Scope *scope);
void pop();

// parameters
void addFunctionParams(char * name, char* returnType);
void addParam(char* type);
void printFunctionTable();
void printParams(Param *params);
void freeFunctionTable();
void freeParamList(Param* head);
void freePList();
void freeAList();
char* addParamCounter();
void checkArgs(char * name, vertex* node,int line,int col);
void createArgList(vertex* node);
functionParams *findF(char * name);

//SEMANTIC CHECKS

void checkReturnType(char* lastFType, vertex* retType);
void getReturnType(vertex* retType);
void checkNoMain();
void checkUndeclaredID(char *id, int line, int col);

#endif

/*
TO DO: 
Params and Args.
*/