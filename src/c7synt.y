%right THEN ELSE
%debug
%define parse.error verbose
%locations
%{
    //includes
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "ast.h"
    
    // define
    #define VERBOSE 0

    // extern vars
    extern int yylex();
    extern int yyparse();
    extern int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;

    // root
    vertex* root;

%}

%union {
    char* str;
    struct vertex* node;
}

%token <str> ID STRING INTEGER_CONST FLOAT_CONST EMPTY_CONST 
%token <str> PLUS MINUS DIV MULT EQ 
%token <str> NOT OR AND 
%token <str> EQ_TO NEQ_TO GT LT GTE LTE
%token INT FLOAT ELEM SET

%token '(' 
%token ')'
%token '{'
%token '}'
%token ';' 
%token ','
%token IF
%token ELSE
%token FOR
%token FORALL
%token IS_SET
%token ADD
%token IN
%token REMOVE
%token RETURN
%token EXISTS
%token READ
%token WRITE
%token WRITELN

%type <node> program 
%type <node> declaration-list
%type <node> declaration
%type <node> var-declaration
%type <node> function-definition
%type <node> type
%type <node> parameters
%type <node> parameter-list
%type <node> parameter-declaration
%type <node> compound-stmt
%type <node> local-decls-stmts
%type <node> stmts
%type <node> stmt
%type <node> io-stmt
%type <node> if-stmt
%type <node> for-stmt
%type <node> return-stmt
%type <node> forall-stmt
%type <node> expression-stmt
%type <node> expression
%type <node> assign-exp
%type <node> basic-exp
%type <node> in-exp
%type <node> logical-exp
%type <node> add-exp
%type <node> term
%type <node> factor
%type <node> set-exp
%type <node> constant
%type <node> call
%type <node> arg-list


%%
program: declaration-list {
        if(VERBOSE) printf("tree-root ->program\n");
        $$ = createNode("program");
        $$->nodes[0] = $1;
        root = $$;
    }
;

declaration-list: declaration-list declaration {
                        if (VERBOSE) printf("declaration-list -> declaration-list declaration \n");
                        $$ = createNode("declaration-list");
                        $$->nodes[0] = $1;
                        $$->nodes[1] = $2;    
                    }
                | declaration {
                        if(VERBOSE) printf("declaration-list -> declaration\n");
                        $$ = createNode("declaration-list");
                        $$->nodes[0] = $1;
                    }
;
declaration: function-definition {
                if(VERBOSE) printf("declaration -> function-definition\n");
                $$ = createNode("declaration");
                $$->nodes[0] = $1;
            }
           | var-declaration {
                if(VERBOSE) printf("declaration -> var-declaration\n");
                $$ = createNode("declaration");
                $$->nodes[0] = $1;
            }
;

var-declaration: type ID ';' {
        if(VERBOSE) printf("var-declaration -> type ID\n");
        $$ = createNode("var-declaration");
        $$->nodes[0] = $1;
        $$->symbol = $2;
    }
; 

function-definition: type ID '(' parameters ')'  compound-stmt {
        if(VERBOSE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        $$ = createNode("declaration");
        $$-> nodes[0] = $1;
        $$-> nodes[1] = $4;
        $$-> nodes[2] = $6;
    }
;

type: INT {
        if(VERBOSE) printf("type -> INT\n");
        $$ = createNode("type");
        //$$->symbol = $1;
    }
    | FLOAT {
        if(VERBOSE) printf("type -> FLOAT\n");
        $$ = createNode("type");
        //$$->symbol = $1;
    }
    | SET {
        if(VERBOSE) printf("type -> SET\n");
        $$ = createNode("type");
        //$$->symbol = $1;
    }
    | ELEM {
        if(VERBOSE) printf("type ->ELEM\n");
        $$ = createNode("type");
        //$$->symbol = $1;
    }
;

parameters: parameter-list {
        if(VERBOSE) printf("parameters -> param-list\n");
        $$ = createNode("parameters");
        $$-> nodes[0] = $1;
        }
        | %empty { 
            if(VERBOSE) printf("empty\n");
            $$ = NULL;
        }
;
parameter-list: parameter-declaration {
        if(VERBOSE) printf("parameter-list -> parameter-declaration\n");
        $$ = createNode("parameter-list");
        $$-> nodes[0] = $1;
    }
    | parameter-list ',' parameter-declaration {
        if(VERBOSE) printf("parameter-list -> parameter-list ',' parameter-declaration\n");
        $$ = createNode("parameter-list");
        $$-> nodes[0] = $1;
        $$-> nodes[1] = $3;
    }
;
parameter-declaration: type ID {
        if(VERBOSE) printf("parameter-declaration -> type ID\n");
        //$$ = createNode("parameter-declaration");
        //$$->nodes[0] = $1;
        //$$->symbol = $2;

    }
;
compound-stmt: '{' local-decls-stmts'}' {
        if(VERBOSE) printf("C-stmt -> '{' local-decls-stmts'}'\n");
        //$$ = createNode("compound-stmt");
        //$$-> nodes[0] = $2;
    }
;

local-decls-stmts: stmts  {
        if (VERBOSE) printf("local-stmts -> stmts\n");
        //$$ = createNode("local-decls-stmts");
        //$$-> nodes[0] = $1;
    }
    | %empty {
        if(VERBOSE) printf("empty\n");
        //$$ = NULL;
    }
;
stmts: stmts stmt {
        if(VERBOSE) printf("stmts -> stmts stmt\n");
        //$$ = createNode("stmts");
        //$$-> nodes[0] = $2;
        //$$-> nodes[1] = $1;
    }
    | stmt {
        if(VERBOSE) printf("stmts -> stmts stmt\n");
        //$$ = createNode("stmts");
        //$$->nodes[0] = $1;
    }
;
stmt: io-stmt {
        if(VERBOSE) printf("stmt -> io-stmt\n");
        //$$ = createNode("stmt");
        //$$->nodes[0] = $1;

    }
    | return-stmt {
        if(VERBOSE) printf("stmt -> return-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
    | compound-stmt {
        if(VERBOSE) printf("stmt -> cp-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
    | if-stmt {
        if(VERBOSE) printf("stmt -> if-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
    | for-stmt {
        if(VERBOSE) printf("stmt -> for-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
    | expression-stmt {
        if(VERBOSE) printf("stmt -> expression-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
    | forall-stmt {
        if(VERBOSE) printf("stmt -> forall-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
    | var-declaration {
        if(VERBOSE) printf("stmt -> var-decl\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
;

io-stmt: READ '(' expression ')' ';' {
            if(VERBOSE) printf("io-stmt -> read ( exp ) \n");
            //$$ = createNode("io-stmt");
            //$$-> nodes[0] = $3;
        }
        | WRITE '(' expression ')' ';' {
           if(VERBOSE) printf("io-stmt -> write ( exp ) \n");
           //$$ = createNode("io-stmt");
           //$$-> nodes[0] = $3;

        }
       | WRITELN '(' expression ')' ';' {
           if(VERBOSE) printf("io-stmt -> writeln ( exp )\n");
           //$$ = createNode("io-stmt");
           //$$-> nodes[0] = $3;
        }
;

if-stmt: IF '(' expression ')'   stmt        %prec THEN {
            if(VERBOSE) printf("if-stmt\n");
            //$$ = createNode("if-stmt");
            //$$-> nodes[0] = $3;
            //$$-> nodes[1] = $5;
        }
        | IF '(' expression ')'   stmt ELSE stmt {
           if(VERBOSE) printf("if-stmt\n");
           //$$ = createNode("if-stmt");
           //$$-> nodes[0] = $3;
           //$$-> nodes[1] = $5;
           //$$-> nodes[2] = $7;
       }
       | IF '(' expression IN expression')' expression-stmt ELSE expression-stmt {
           if(VERBOSE) printf("if-stmt\n");
           //$$ = createNode("if-stmt");
           //$$-> nodes[0] = $3;
           //$$-> nodes[1] = $5;
           //$$-> nodes[2] = $7;
           //$$-> nodes[3] = $9;
       }
;

for-stmt: FOR '(' expression ';' expression ';' expression ')' stmt ';' {
        if(VERBOSE) printf("for-stmt -> for\n");
        //$$ = createNode("for-stmt");
        //$$-> nodes[0] = $3;
        //$$-> nodes[1] = $5;
        //$$-> nodes[2] = $7;
        //$$-> nodes[3] = $9;
    }
;

return-stmt: RETURN expression ';' {
        if(VERBOSE) printf("return-stmt -> return exp ;\n");
        //$$ = createNode("return-stmt");
        //$$-> nodes[0] = $2;
    }
;

forall-stmt: FORALL '(' in-exp ')' compound-stmt {
        if(VERBOSE) printf("forall-stmt ->FORALL (in-exp) compound\n");
        //$$ = createNode("forall-stmt");
        //$$-> nodes[0] = $3;
        //$$-> nodes[1] = $5;
    }
    | FORALL '(' in-exp ')' expression-stmt {
        if(VERBOSE) printf("forall-stmt -> FORALL ( in-exp )\n");
        //$$ = createNode("forall-stmt");
        //$$-> nodes[0] = $3;
        //$$-> nodes[1] = $5;
    }
;

expression-stmt: expression ';'     {
        if(VERBOSE) printf("expression-stmt -> expression ;\n");
        //$$ = createNode("expression-stmt");
        //$$-> nodes[0] = $1;
    }
    | ';' {}
;
expression: assign-exp  {
        if(VERBOSE) printf("expression-> assign \n");
        //$$ = createNode("expression");
        //$$-> nodes[0] = $1;
    }
    | expression  ',' assign-exp {
        if(VERBOSE) printf("expression -> exp , assign\n");
        //$$ = createNode("expression");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
    }      
;
assign-exp: basic-exp {
        if(VERBOSE) printf("assign-exp -> basic-exp\n");
        //$$ = createNode("assign-exp");
        //$$-> nodes[0] = $1;
    }
    | ID EQ assign-exp {
        if (VERBOSE) printf("assign -> ID EQ assign\n");
        //$$ = createNode("assign-exp");
        //$$-> nodes[0] = $3;
    }
;

in-exp: expression IN in-exp {
        if(VERBOSE) printf("in-exp -> expression IN in-exp\n");
        //$$ = createNode("in-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
    }
    | expression {
        if(VERBOSE) printf("in-exp -> expression\n");
        //$$ = createNode("in-exp");
        //$$ -> nodes[0] = $1;
    }
;
basic-exp: logical-exp {
        if(VERBOSE) printf("basic-exp -> logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $1;
    }
    | logical-exp OR logical-exp {
        if(VERBOSE) printf("basic-exp -> logical OR logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | logical-exp AND logical-exp {
        if(VERBOSE) printf("basic-exp -> logical AND logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | NOT logical-exp {
        if(VERBOSE) printf("basic-exp -> NOT logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $2;
        //$$->symbol = $1;
    }
;

logical-exp: add-exp {
        if(VERBOSE) printf(" basic-exp -> add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
    }
    | add-exp EQ_TO add-exp {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | add-exp NEQ_TO add-exp {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | add-exp GT add-exp {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | add-exp LT add-exp {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | add-exp GTE add-exp {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | add-exp LTE add-exp {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
;

add-exp: term {
            if(VERBOSE)printf(" add-exp -> term\n");
            //$$ = createNode("add-exp");
            //$$-> nodes[0] = $1;
        }
        | term PLUS term {
            if(VERBOSE)printf(" add-exp -> term PLUS term\n");
            //$$ = createNode("logical-exp");
            //$$-> nodes[0] = $1;
            //$$-> nodes[1] = $3;
            //$$->symbol = $2;
        }
        | term MINUS term {
            if(VERBOSE) printf(" add-exp -> term MINUS term\n");
            //$$ = createNode("logical-exp");
            //$$-> nodes[0] = $1;
            //$$-> nodes[1] = $3;
            //$$->symbol = $2;
        }
;
term: factor {
        if(VERBOSE) printf(" term -> factor\n");
        //$$ = createNode("term");
        //$$-> nodes[0] = $1;
    }
    | term MULT factor {
        if(VERBOSE) printf(" term -> term mul-op factor\n");
        //$$ = createNode("term");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
    | term DIV factor {
        if(VERBOSE) printf(" term -> term mul-op factor\n");
        //$$ = createNode("term");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
;

factor: '(' expression ')' {
        if(VERBOSE) printf(" factor -> ( expression )\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $2;
    }
    | ID {
        if(VERBOSE) printf(" factor -> ID\n");
        //$$ = createNode("factor");
        //$$-> symbol = $1;
    }
    | constant {
        if(VERBOSE) printf(" factor -> constant\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $1;
    }
    | call {
        if(VERBOSE) printf("factor -> call\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $1;
    }
    | set-exp {
        if(VERBOSE) printf(" factor -> set-exp\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $1;
    }
;
set-exp: ADD '(' in-exp ')'  {
        if(VERBOSE) printf(" set-op -> ADD (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }   
    | REMOVE '(' in-exp ')' {
        if(VERBOSE) printf(" set-op -> REMOVE (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }
    | EXISTS '(' in-exp ')' {
        if(VERBOSE) printf(" set-op -> EXISTS (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }
    | IS_SET '(' in-exp ')' {
        if(VERBOSE) printf(" set-op -> IS_SET (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }
;

constant: INTEGER_CONST {
            if(VERBOSE)printf(" constant -> INTEGER_CONST\n");
            //$$ = createNode("INTEGER_CONST");
            //$$->symbol = $1;
        }
        | FLOAT_CONST {
            if(VERBOSE) printf(" constant -> FLOAT_CONST\n");
            //$$ = createNode("constant");
            //$$->symbol = $1;
        }
        | EMPTY_CONST {
            if(VERBOSE) printf(" constant -> EMPTY_CONST\n");
            //$$ = createNode("constant");
            //$$->symbol = $1;
        }
        | STRING {
            if(VERBOSE) printf(" constant -> STRING\n");
            //$$ = createNode("constant");
            //$$->symbol = $1;
        }
;
call: ID '(' arg-list ')' {
        if(VERBOSE)printf(" call -> ID (args)\n");
        //$$ = createNode("call");
        //$$->symbol = $1;
        //$$-> nodes[0] = $3;
    }
    | ID '('')' {
        if(VERBOSE)printf(" call -> ID (args)\n");
        //$$->symbol = $1;
    }
;
arg-list: factor {
            if(VERBOSE) printf("arg-list");
            //$$ = createNode("arg-list");
            //$$-> nodes[0] = $1;
        }
        | arg-list ',' factor {
            if(VERBOSE) printf("arg-list");
            //$$ = createNode("arg-list");
            //$$-> nodes[0] = $1;
            //$$-> nodes[1] = $3;
        }
;


%%


int yyerror(const char *s){
    printf("yyerror: %s\n",s);
    return 10;
}

int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    
    yyparse();

    
    printVertex(root);
    freeVertex(root);
    fclose(yyin);
    yylex_destroy();
    return 0;

}