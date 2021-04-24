#ifndef TADS
#define TADS

#include "uthash/uthash.h"
#include "uthash/utstack.h"
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
    REL_EQ

} variable_names;

enum table_type
{
    VAR,
    FUNC,
    PARAM
};

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
    UT_hash_handle hh;
} Symbol;

Symbol *symbolTable;

typedef struct vertex
{
    int variable_name;
    char *op_or_type;
    char *value;
    char *node_taipe;
    struct vertex *l;
    struct vertex *r;
} vertex;

vertex *root;

int line, col, scope_counter,skipScope;
vertex *createNode(int variable_name, char *op_or_type, char *value, struct vertex *v1, vertex *v2);
void print_tabs(int tabs);
void print_variable(int name);
void freeVertex(vertex *root);
void printTree(vertex *root, int dpt);

// tabela de simbolos

// ID , type , func or variable

Symbol *createSymbol(char *ID, char *type, int var_or_func, int scope_id, int line, int col);
void addEntry(char *ID, char *type, int var_or_func, int recent_scope);
void printTable();
void freeTable();
void addTypeToNode(vertex *nozes);

// pilha de escopo
void initGlobalScope();
void createScope();
void push(Scope *scope);
void pop();

//SEMANTIC CHECKS

void checkNoMain();
void checkUndeclaredID(char * id, int line, int col);

#endif