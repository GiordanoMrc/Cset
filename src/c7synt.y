%right THEN ELSE
%debug
%define parse.error verbose
%locations
%{
    //includes
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "tads.h"
    
    // define
    #define PARSETREE 0

    // extern vars
    extern int yylex();
    extern int yyparse();
    extern int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;

    int error_count=0;
%}

%union {
    char* str;
    struct vertex* node;
}

%token <str> ID STRING INTEGER_CONST FLOAT_CONST EMPTY_CONST CHAR 
%token <str> PLUS MINUS DIV MULT EQ 
%token <str> NOT OR AND 
%token <str> EQ_TO NEQ_TO GT LT GTE LTE
%token <str> TYPE

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

%type <node> begin 
%type <node> program 
%type <node> declaration-list
%type <node> declaration
%type <node> var-declaration
%type <node> function-definition
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
%type <node> not
%type <node> term
%type <node> factor
%type <node> set-exp
%type <node> constant
%type <node> call
%type <node> arg-list
%type <node> condition
%type <node> for-conditions
%type <node> logical-eq

%start begin

%%
begin:program {
    $$ = createNode(PROGRAM,NULL,NULL,$1,NULL);
    root = $$;
    checkNoMain();
    }
;

program: declaration-list {
        $$ = createNode(666,NULL,NULL,$1,NULL);
        if(PARSETREE) printf("begin ->program\n\n\n - end of parse tree - \n");
    }
;

declaration-list: declaration-list declaration {
                    if (PARSETREE) printf("declaration-list -> declaration-list declaration \n");
                    $$ = createNode(666,NULL,NULL,$1,$2);
                }
                | declaration {
                    if(PARSETREE) printf("declaration-list -> declaration\n");
                    $$ = $1; 
                }
;
declaration: function-definition {
                if(PARSETREE) printf("declaration -> function-definition\n");
                $$ = $1;
            }
            | var-declaration {
                if(PARSETREE) printf("declaration -> var-declaration\n");
                $$ = $1;
            }
;

var-declaration: TYPE ID ';' {
        if(PARSETREE) printf("var-declaration -> type ID\n");
        $$ = createNode(VAR_DECLARATION, $1 , $2, NULL , NULL );
        if(!skipScope)
            addEntry($2,$1,VAR,STACK_TOP(head)->scope_id);
    }
; 

function-definition: TYPE ID {
        if(!skipScope)
            addEntry($2,$1,FUNC,STACK_TOP(head)->scope_id);
    }'(' parameters ')' compound-stmt {
        if(PARSETREE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        $$ = createNode(FUNCTION_DEFINITION ,$1, $2,  $5 , $7);
    }
;


parameters: parameter-list {
        if(PARSETREE) printf("parameters -> param-list\n");
            $$ = $1;
        }
        | %empty { 
            if(PARSETREE) printf("empty\n");
            $$ = NULL;
        }
;
parameter-list: parameter-declaration {
        if(PARSETREE) printf("parameter-list -> parameter-declaration\n");
        $$ = $1;
        
    }
    | parameter-list ',' parameter-declaration {
        if(PARSETREE) printf("parameter-list -> parameter-list ',' parameter-declaration\n");
        $$ = createNode(666 , NULL, NULL ,$1, $3 );

    }
;
parameter-declaration: TYPE ID {
        if(PARSETREE) printf("parameter-declaration -> type ID\n");
        $$ = createNode(PARAMETER_DECL, $1,$2, NULL, NULL);
        if(!skipScope)
            addEntry($2,$1,PARAM,(scope_counter +1));
    }
;
compound-stmt: '{' {
                    if(!skipScope)
                        createScope();
            } local-decls-stmts '}' {
                if(PARSETREE) printf("C-stmt -> '{' local-decls-stmts'}'\n");
                $$ = $3;
                if(!skipScope){
                    pop();
                    skipScope = 0;
                }
            }
;

local-decls-stmts: stmts  {
        if (PARSETREE) printf("local-stmts -> stmts\n");
        $$ = $1;
    }
    | %empty {
        if(PARSETREE) printf("empty\n");
        $$ = NULL;
    }
;
stmts: stmts stmt {
        if(PARSETREE) printf("stmts -> stmts stmt\n");
        $$ = createNode(666 , NULL ,NULL,$1, $2);
    }
    | stmt {
        if(PARSETREE) printf("stmts -> stmts stmt\n");
        $$ = $1;
        
    }
    | error {
        $$= NULL;
        error_count++;
    }
;
stmt: io-stmt {
        if(PARSETREE) printf("stmt -> io-stmt\n");
        $$ = $1;
    }
    | return-stmt {
        if(PARSETREE) printf("stmt -> return-stmt\n");
        $$ = $1;
    }
    | compound-stmt {
        if(PARSETREE) printf("stmt -> cp-stmt\n");
        $$ = $1;
        
    }
    | if-stmt {
        if(PARSETREE) printf("stmt -> if-stmt\n");
        $$ = $1;
    }
    | for-stmt {
        if(PARSETREE) printf("stmt -> for-stmt\n");
        $$ = $1;
        
    }
    | expression-stmt {
        if(PARSETREE) printf("stmt -> expression-stmt\n");
        $$ = $1;
        
    }
    | forall-stmt {
        if(PARSETREE) printf("stmt -> forall-stmt\n");
        $$ = $1;
    }
    | var-declaration {
        if(PARSETREE) printf("stmt -> var-decl\n");
        $$ = $1;
    }
;

io-stmt: READ '(' expression ')' ';' {
            if(PARSETREE) printf("io-stmt -> read ( exp ) \n");
            $$ = createNode(IO_STMT , NULL ,NULL,$3, NULL);
            
        }
        | WRITE '(' expression ')' ';' {
           if(PARSETREE) printf("io-stmt -> write ( exp ) \n");
           $$ = createNode(IO_STMT , NULL ,NULL,$3, NULL);

        }
       | WRITELN '(' expression ')' ';' {
           if(PARSETREE) printf("io-stmt -> writeln ( exp )\n");
           $$ = createNode(IO_STMT , NULL ,NULL,$3, NULL);
        }
;

if-stmt: IF condition stmt        %prec THEN {
            if(PARSETREE) printf("if-stmt\n");
            $$ = createNode(IF_STMT , NULL ,NULL,$2,$3);
        }
        | IF condition stmt ELSE stmt {
           if(PARSETREE) printf("if-stmt\n");
           $$ = createNode(IF_COND , NULL ,NULL,$2,NULL);
           vertex * aux = createNode(IF_STMT,NULL,NULL,$3,NULL);
           vertex * else_node = createNode(ELSE_STMT,NULL,NULL,$5,NULL);
           $$->r = aux;
           aux->r = else_node;
       }
;


condition: '(' expression ')'{
        if(PARSETREE) printf("condition -> (exp)\n");
        $$ = $2;
    }
;

for-stmt: FOR for-conditions stmt  {
        if(PARSETREE) printf("for-stmt -> for\n");
        $$ = createNode(FOR_STMT , NULL ,NULL,$2,$3);
    }
;

for-conditions: '(' expression ';' expression ';' expression ')'{
        if(PARSETREE) printf("for-stmt ->for-cond\n");
        $$ = createNode(FOR_INIT,NULL,NULL,$2,NULL);
        vertex * aux = createNode(FOR_COND,NULL,NULL,$4,NULL);
        vertex * aux2 = createNode(FOR_INCREMENT,NULL,NULL,$6,NULL);
        $$-> r = aux;
        aux->r = aux2;
    }

;

return-stmt: RETURN expression ';' {
        if(PARSETREE) printf("return-stmt -> return exp ;\n");
        $$ = createNode(RETURN_STMT , NULL,NULL,$2, NULL);

    }
;

forall-stmt: FORALL '(' in-exp ')' compound-stmt {
        if(PARSETREE) printf("forall-stmt ->FORALL (in-exp) compound\n");
        $$ = createNode(FORALL_STMT, NULL,NULL,$3, $5);
    }
    | FORALL '(' in-exp ')' expression-stmt {
        if(PARSETREE) printf("forall-stmt -> FORALL ( in-exp )\n");
       $$ = createNode(FORALL_STMT , NULL,NULL,$3, $5);
    }
;

expression-stmt: expression ';'     {
        if(PARSETREE) printf("expression-stmt -> expression ;\n");
        $$ =$1;
    }
    | ';' { $$ = NULL;}
;
expression: assign-exp  {
        if(PARSETREE) printf("expression-> assign \n");
        $$ = $1;
        
    }
    | expression  ',' assign-exp {
        if(PARSETREE) printf("expression -> exp , assign\n");
        $$ = createNode(EXPRESSION , NULL,NULL,$1, $3);
    }      
;
assign-exp: basic-exp {
        if(PARSETREE) printf("assign-exp -> basic-exp\n");
        $$ = $1;
        
    }
    | basic-exp EQ assign-exp {
        if (PARSETREE) printf("assign -> ID EQ assign\n");
        $$ = createNode(ASSIGN , $2 ,NULL,$1, $3);
        addTypeToNode($$);
    }
;

in-exp: expression IN in-exp {
        if(PARSETREE) printf("in-exp -> expression IN in-exp\n");
        $$ = createNode(IN_OP,NULL,NULL,$1, $3);

    }
    | expression {
        if(PARSETREE) printf("in-exp -> expression\n");
        $$ = $1;
    }
;
basic-exp: logical-eq {
        if(PARSETREE) printf("basic-exp -> logical\n");
        $$ = $1;
    }
    | basic-exp OR logical-eq {
        if(PARSETREE) printf("basic-exp -> logical OR logical\n");
        $$ = createNode(LOGICAL_EXP , $2 ,NULL,$1, $3);
    }
    | basic-exp AND logical-eq {
        if(PARSETREE) printf("basic-exp -> logical AND logical\n");
        $$ = createNode(LOGICAL_EXP , $2 ,NULL,$1, $3);

    }
;

logical-eq: logical-exp {
        $$=$1;
    }
    | logical-eq NEQ_TO logical-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(REL_EQ, $2,NULL,$1, $3);
    }
    | logical-eq EQ_TO logical-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(REL_EQ, $2,NULL,$1, $3);

    }
;

logical-exp: add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp\n");
        $$ = $1;
    }
    | logical-exp GT add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(REL_OP, $2,NULL,$1, $3);
    }
    | logical-exp GTE add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(REL_OP, $2,NULL,$1, $3);
    }
    | logical-exp LT add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
       $$ = createNode(REL_OP, $2,NULL,$1, $3);
    }
    | logical-exp LTE add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(REL_OP , NULL,$2,$1, $3);
    }
;

add-exp: term {
            if(PARSETREE)printf(" add-exp -> term\n");
            $$ = $1;
        }
        | add-exp MINUS term {
            if(PARSETREE) printf(" add-exp -> term MINUS term\n");
            $$ = createNode(ADD_OP , NULL,$2,$1, $3);
        }
        | add-exp PLUS term {
            if(PARSETREE)printf(" add-exp -> term PLUS term\n");
            $$ = createNode(ADD_OP , $2,NULL,$1, $3);
        }
;
term: not { 
        if(PARSETREE) printf(" term -> not\n");
        $$ = $1;
    }
    | term DIV not {
        if(PARSETREE) printf(" term -> term mul-op not\n");
        $$ = createNode(DIV_OP ,$2,NULL,$1, $3);

    }
    | term MULT not {
        if(PARSETREE) printf(" term -> term mul-op not\n");
        $$ = createNode(MUL_OP ,$2,NULL,$1, $3);
    }
;

not: factor{
        if(PARSETREE) printf(" not -> factor\n");
        $$ = $1;
    }
    | NOT factor {
        if(PARSETREE) printf(" not -> factor\n");
        $$ = createNode(NOT_OP ,NULL,$1,$2, NULL);
    }
;

factor: '(' expression ')' {
        if(PARSETREE) printf(" factor -> ( expression )\n");
        $$ = $2;
        
    }
    | ID {
        if(PARSETREE) printf(" factor -> ID\n");
        $$ = createNode(IDENT , NULL,$1,NULL, NULL);
        checkUndeclaredID($1,line,col);
    }
    | constant {
        if(PARSETREE) printf(" factor -> constant\n");
        $$ = $1;
        
    }
    | call {
        if(PARSETREE) printf("factor -> call\n");
        $$ = $1;
        
    }
    | set-exp {
        if(PARSETREE) printf(" factor -> set-exp\n");
        $$ = $1;
        
    }
;
set-exp: ADD '(' in-exp ')'  {
        if(PARSETREE) printf(" set-op -> ADD (in-exp)\n");
        $3 = createNode(SET_ADD , NULL,NULL,$3, NULL);
        $$ = $3;
    }   
    | REMOVE '(' in-exp ')' {
        if(PARSETREE) printf(" set-op -> REMOVE (in-exp)\n");
        $3 = createNode(SET_REMOVE, NULL,NULL,$3, NULL);
        $$ = $3;
        
    }
    | EXISTS '(' in-exp ')' {
        if(PARSETREE) printf(" set-op -> EXISTS (in-exp)\n");
        $3 = createNode(SET_EXISTS , NULL,NULL,$3, NULL);
        $$ = $3;
    }
    | IS_SET '(' in-exp ')' {
        if(PARSETREE) printf(" set-op -> IS_SET (in-exp)\n");
        $3 = createNode(IS_SET_EXP , NULL,NULL,$3, NULL);
        $$ = $3;
    }
;

constant: INTEGER_CONST {
            if(PARSETREE)printf(" constant -> INTEGER_CONST\n");
            $$ = createNode(VALUE_INT , NULL,$1,NULL, NULL);
             
        }
        | FLOAT_CONST {
            if(PARSETREE) printf(" constant -> FLOAT_CONST\n");
            $$ = createNode(VALUE_FLOAT , NULL,$1,NULL, NULL);
             
        }
        | EMPTY_CONST {
            if(PARSETREE) printf(" constant -> EMPTY_CONST\n");
            $$ = createNode(VALUE_EMPTY , NULL,$1,NULL, NULL);
             
        }
        | STRING {
            if(PARSETREE) printf(" constant -> STRING\n");
            $$ = createNode(VALUE_STRING , NULL,$1,NULL, NULL);   
        }
        | CHAR {
            if(PARSETREE) printf(" constant -> CHAR\n");
            $$ = createNode(CONST , NULL,$1,NULL, NULL);   
        }
;
call: ID '(' arg-list ')' {
        if(PARSETREE)printf(" call -> ID (args)\n");
        $$ = createNode(CALL , NULL,$1,$3, NULL);
         
         
    }
    | ID '('')' {
        if(PARSETREE)printf(" call -> ID (args)\n");
        $$ = createNode(CALL , NULL,$1,NULL, NULL);
    }
;
arg-list: assign-exp {
            if(PARSETREE) printf("arg-list");
            $$=$1;
        }
        | arg-list ',' assign-exp {
            if(PARSETREE) printf("arg-list");
            $$ = createNode(ARG_LIST , NULL,NULL,$1, $3);
        }
;


%%


int yyerror(const char *s){
    printf("syntax error: %s , line: %d , col: %d, Error count %d\n",s, line, col, error_count);
    return 666;
}

int main( int argc, char **argv ) {
    ++argv, --argc;
    line= 1;
    col= 1;
    skipScope=0;
    semantic_error = 0;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;

    initGlobalScope();

    // fix this
    if (semantic_error==1) {
        printf(KMAG"\n::>ERROS SEMANTICOS<::\t\n"DFT);
    }

    yyparse();
    if(error_count==0) {
        printf(KMAG"\n\n::>ARVORE SINTATICA ABSTRATA<::\t\n"DFT);
        printTree(root,0);
    } else {
        printf(KMAG"\n\n::>ARVORE SINTATICA ABSTRATA<::\t\n"DFT);
        printf("\n\n Not showed due to Lexical or Syntactical errors. \t\n");
    }

    printf(KMAG"\n\n::>TABELA DE SIMBOLOS<::\t\n"DFT);
    printTable();

    fclose(yyin);
    yylex_destroy();

    freeVertex(root);
    freeTable();
    pop();

    //the number of the beast
    return 666;

}