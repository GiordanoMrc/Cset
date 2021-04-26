#ifndef TADS
#define TADS

#include "uthash/uthash.h"
#include "uthash/utstack.h"
#include "uthash/utstring.h"
#include "semantic_raises.h"

typedef enum variable_names
{
    PROGRAM,
    DECLARATION_LIST,
    DECLARATION,
    VAR_DECLARATION,
    FUNCTION_DEFINITION,
    PARAMATERS,
    PARAMETER_LIST,
    PARAMETER_DECL,
    COMPOUND_STMT,
    LOCAL_STMT,
    STMTS,
    STMT,
    IO_STMT,
    IF_STMT,
    FOR_STMT,
    FOR_COND,
    RETURN_STMT,
    FORALL_STMT,
    EXPRESSION_STMT,
    EXPRESSION,
    ASSIGN,
    BASIC_EXP,
    IN_EXP,
    LOGICAL_EXP,
    ADD_EXP,
    ADD_OP,
    MUL_OP,
    DIV_OP,
    TERM,
    FACTOR,
    SET_EXP,
    CONSTANT,
    CALL,
    ARG_LIST,
    VALUE_INT,
    VALUE_FLOAT,
    VALUE_EMPTY,
    VALUE_STRING,
    READ_IO,
    WRITE_IO,
    WRITELN_IO,
    OR_EXP,
    AND_EXP,
    NOT_OP,
    SET_ADD,
    SET_REMOVE,
    SET_EXISTS,
    SET_FORALL,
    SET_IS_SET,
    IN_OP,
    BASIC_OP,
    IDENT,
    CONST,
    IF_ELSE_STMT,
    REL_OP,
    IS_SET_EXP,
    FOR_LAST_ARG,
    ELSE_STMT,
    IF_COND,
    FOR_INIT,
    FOR_INCREMENT,
    REL_EQ,
    FLOAT_TO_INT,
    INT_TO_FLOAT

} variable_names;

enum table_type
{
    VAR,
    FUNC,
    PARAM
};

enum type
{
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_SET,
    TYPE_ELEM
};
typedef struct Params
{
    int type;
    struct Params *next; // Próximo parametro
} Params;

typedef struct functionParams
{
    char *functionName;
    int numberOfParams;
    struct Params *first;
    UT_hash_handle hh;
} functionParams;

functionParams * functionTable;

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
    char * paramC;
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
void printTable();
void freeTable();

// pilha de escopo
void initGlobalScope();
void createScope();
void push(Scope *scope);
void pop();

// parameters
void addFunctionParams(char * id);
void addParams(int type);
void printFunctionTable();
void printParams(Params *params, int count);
void freeFunctionTable();
void freeParams(Params *params);
char* addParamCounter();

//SEMANTIC CHECKS

void checkNoMain();
void checkUndeclaredID(char *id, int line, int col);
void checkReturnType();

#endif

/*
TO DO: 
Params and Args.
*/