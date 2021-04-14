#ifndef TADS
#define TADS

#include "uthash/uthash.h"
#include "uthash/utstack.h"

#define DFT "\x1B[0m"
#define RED "\x1B[31m"
#define CYN "\x1B[36m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define KGRN "\x1B[32m"
#define KMAG "\x1B[35m"
#define KWHT "\x1B[37m"

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
    RETURN_STMT,
    FORALL_STMT,
    EXPRESSION_STMT,
    EXPRESSION,
    ASSIGN,
    BASIC_EXP,
    IN_EXP,
    LOGICAL_EXP,
    ADD_EXP,
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
    NOT_EXP,
    SET_ADD,
    SET_REMOVE,
    SET_EXISTS,
    SET_FORALL,
    SET_IS_SET,
    IN_OP,
    BASIC_OP,
    IDENT,
    CONST,
    FOR_COND,
    IF_ELSE_STMT

} variable_names;

enum table_type
{
    VAR,
    FUNC,
    PARAM
};

typedef struct Scope {
    char* scope_name;
    char* type;
    struct Scope * nxt;
} Scope;

typedef struct Symbol
{
    int var_or_func;
    char *key; // id#scope_name
    char *ID;
    char *type;
    char * scope_name;
    UT_hash_handle hh;
} Symbol;

typedef struct vertex
{
    int variable_name;
    char *op_or_type;
    char *value;
    struct vertex *n1;
    struct vertex *n2;
    struct vertex *n3;
} vertex;

vertex * root;
Scope * stack;
Symbol * symbolTable;

vertex *createNode(int variable_name, char *op_or_type, char *value, struct vertex *v1, vertex *v2, vertex *v3);
void print_tabs(int tabs);
void print_variable(int name);
void freeVertex(vertex *root);
void printTree(vertex *root, int dpt);

// tabela de simbolos

// ID , type , func or variable

Symbol * create_symbol(char *ID, char *type, int var_or_func);
void add_entry(char *ID, char *type, int var_or_func);
void printTable();
void freeTable();

// pilha de escopo
void push_global();
void push (char * scope_name ,char* type);
void pop();
Scope* top();


#endif