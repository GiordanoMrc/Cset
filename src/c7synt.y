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

    int line= 1;
    int col= 1;
    int error_count=0;
    

%}

%union {
    char* str;
    struct vertex* node;
}

%token <str> ID STRING INTEGER_CONST FLOAT_CONST EMPTY_CONST 
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
%type <node> term
%type <node> factor
%type <node> set-exp
%type <node> constant
%type <node> call
%type <node> arg-list
%type <node> condition
%type <node> for-conditions

%start begin

%%
begin:program {
    $$ = createNode(PROGRAM,NULL,NULL,$1,NULL,NULL);
    root = $$;
    }
;

program: declaration-list {
        $$ = createNode(DECLARATION_LIST,NULL,NULL,$1,NULL,NULL);
        if(PARSETREE) printf("begin ->program\n\n\n - end of parse tree - \n");
    }
;

declaration-list: declaration-list declaration {
                        if (PARSETREE) printf("declaration-list -> declaration-list declaration \n");
                        $$ = createNode(DECLARATION_LIST,NULL,NULL,$1,$2,NULL);
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
        $$ = createNode(VAR_DECLARATION, $1 , $2, NULL , NULL , NULL);
        add_entry($2,$1,VAR);
    }
; 

function-definition: TYPE ID '(' parameters ')'  compound-stmt {
        if(PARSETREE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        $$ = createNode(FUNCTION_DEFINITION ,$1, $2,  $4 , $6, NULL);   
        add_entry($2,$1,FUNC);
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
        $$ = createNode(PARAMETER_LIST , NULL, NULL ,$1, $3 , NULL);

    }
;
parameter-declaration: TYPE ID {
        if(PARSETREE) printf("parameter-declaration -> type ID\n");
        $$ = createNode(PARAMETER_DECL, $1,$2, NULL, NULL,NULL);
        add_entry($2,$1,PARAM);
    }
;
compound-stmt: '{' local-decls-stmts'}' {
        if(PARSETREE) printf("C-stmt -> '{' local-decls-stmts'}'\n");
        $$ = $2;
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
        $$ = createNode(STMTS , NULL ,NULL,$1, $2,NULL);
    }
    | stmt {
        if(PARSETREE) printf("stmts -> stmts stmt\n");
        $1 = createNode(STMT , NULL ,NULL,$1, NULL,NULL);
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
            $$ = createNode(IO_STMT , NULL ,NULL,$3, NULL,NULL);
            
        }
        | WRITE '(' expression ')' ';' {
           if(PARSETREE) printf("io-stmt -> write ( exp ) \n");
           $$ = createNode(IO_STMT , NULL ,NULL,$3, NULL,NULL);

        }
       | WRITELN '(' expression ')' ';' {
           if(PARSETREE) printf("io-stmt -> writeln ( exp )\n");
           $$ = createNode(IO_STMT , NULL ,NULL,$3, NULL,NULL);
        }
;

if-stmt: IF condition   stmt        %prec THEN {
            if(PARSETREE) printf("if-stmt\n");
            $$ = createNode(IF_STMT , NULL ,NULL,$2,$3,NULL);
        }
        | IF condition  stmt ELSE stmt {
           if(PARSETREE) printf("if-stmt\n");
           $$ = createNode(IF_STMT , NULL ,NULL,$2,$3,$5);
       }
;

condition: '(' expression ')'{
        $$ = $2;
    }
;

for-stmt: FOR for-conditions stmt  {
        if(PARSETREE) printf("for-stmt -> for\n");
        $$ = createNode(FOR_STMT , NULL ,NULL,$2,$3,NULL);
    }
;

for-conditions: '(' expression ';' expression ';' expression ')'{
        $$ = createNode(FOR_COND,NULL,NULL,$2,$4,$6);
    }

;

return-stmt: RETURN expression ';' {
        if(PARSETREE) printf("return-stmt -> return exp ;\n");
        $$ = createNode(RETURN_STMT , NULL,NULL,$2, NULL,NULL);
    }
;

forall-stmt: FORALL '(' in-exp ')' compound-stmt {
        if(PARSETREE) printf("forall-stmt ->FORALL (in-exp) compound\n");
        $$ = createNode(FORALL_STMT, NULL,NULL,$3, $5,NULL);
    }
    | FORALL '(' in-exp ')' expression-stmt {
        if(PARSETREE) printf("forall-stmt -> FORALL ( in-exp )\n");
       $$ = createNode(FORALL_STMT , NULL,NULL,$3, $5,NULL);
    }
;

expression-stmt: expression ';'     {
        if(PARSETREE) printf("expression-stmt -> expression ;\n");
        $$ =$1;
    }
    | ';' { $$ =NULL;}
;
expression: assign-exp  {
        if(PARSETREE) printf("expression-> assign \n");
        $$ = $1;
        
    }
    | expression  ',' assign-exp {
        if(PARSETREE) printf("expression -> exp , assign\n");
        $$ = createNode(EXPRESSION , NULL,NULL,$1, $3,NULL);
    }      
;
assign-exp: basic-exp {
        if(PARSETREE) printf("assign-exp -> basic-exp\n");
        $$ = $1;
        
    }
    | basic-exp EQ assign-exp {
        if (PARSETREE) printf("assign -> ID EQ assign\n");
        $$ = createNode(ASSIGN , $2 ,NULL,$1, $3,NULL);
       
    }
;

in-exp: expression IN in-exp {
        if(PARSETREE) printf("in-exp -> expression IN in-exp\n");
        $$ = createNode(IN_OP,NULL,NULL,$1, $3,NULL);

    }
    | expression {
        if(PARSETREE) printf("in-exp -> expression\n");
        $$ = $1;

    }
;
basic-exp: logical-exp {
        if(PARSETREE) printf("basic-exp -> logical\n");
        $$ = $1;
 
    }
    | basic-exp OR logical-exp {
        if(PARSETREE) printf("basic-exp -> logical OR logical\n");
        $$ = createNode(BASIC_OP , $2 ,NULL,$1, $3,NULL);
    }
    | basic-exp AND logical-exp {
        if(PARSETREE) printf("basic-exp -> logical AND logical\n");
        $$ = createNode(BASIC_OP , $2 ,NULL,$1, $3,NULL);

    }
    | NOT logical-exp {
        if(PARSETREE) printf("basic-exp -> NOT logical\n");
        $$ = createNode(BASIC_OP,$1,NULL,$2, NULL,NULL);
    }
;

logical-exp: add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp\n");
        $$ = $1;
    }
    | logical-exp EQ_TO add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(BASIC_OP, $2,NULL,$1, $3,NULL);

    }
    | logical-exp NEQ_TO add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(BASIC_OP, $2,NULL,$1, $3,NULL);
    }
    | logical-exp GT add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(BASIC_OP, $2,NULL,$1, $3,NULL);
    }
    | logical-exp LT add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
       $$ = createNode(BASIC_OP, $2,NULL,$1, $3,NULL);
    }
    | logical-exp GTE add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(BASIC_OP, $2,NULL,$1, $3,NULL);
    }
    | logical-exp LTE add-exp {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        $$ = createNode(BASIC_OP , NULL,$2,$1, $3,NULL);
    }
;

add-exp: term {
            if(PARSETREE)printf(" add-exp -> term\n");
            $$ = $1;
        }
        | add-exp PLUS term {
            if(PARSETREE)printf(" add-exp -> term PLUS term\n");
            $$ = createNode(BASIC_OP , $2,NULL,$1, $3,NULL);
        }
        | add-exp MINUS term {
            if(PARSETREE) printf(" add-exp -> term MINUS term\n");
            $$ = createNode(BASIC_OP , NULL,$2,$1, $3,NULL);
 
        }
;
term: factor {
        if(PARSETREE) printf(" term -> factor\n");
        $$ = $1;
    }
    | term MULT factor {
        if(PARSETREE) printf(" term -> term mul-op factor\n");
        $$ = createNode(BASIC_OP ,$2,NULL,$1, $3,NULL);
    }
    | term DIV factor {
        if(PARSETREE) printf(" term -> term mul-op factor\n");
        $$ = createNode(BASIC_OP ,$2,NULL,$1, $3,NULL);

    }
;

factor: '(' expression ')' {
        if(PARSETREE) printf(" factor -> ( expression )\n");
        $$ = $2;

    }
    | ID {
        if(PARSETREE) printf(" factor -> ID\n");
        $$ = createNode(IDENT , NULL,$1,NULL, NULL,NULL);

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
        $$ = $3;
    
    }   
    | REMOVE '(' in-exp ')' {
        if(PARSETREE) printf(" set-op -> REMOVE (in-exp)\n");
        $$ = $3;
        
    }
    | EXISTS '(' in-exp ')' {
        if(PARSETREE) printf(" set-op -> EXISTS (in-exp)\n");
        $$ = $3;
    }
    | IS_SET '(' in-exp ')' {
        if(PARSETREE) printf(" set-op -> IS_SET (in-exp)\n");
        $$ = $3;
    }
;

constant: INTEGER_CONST {
            if(PARSETREE)printf(" constant -> INTEGER_CONST\n");
            $$ = createNode(CONST , NULL,$1,NULL, NULL,NULL);
             
        }
        | FLOAT_CONST {
            if(PARSETREE) printf(" constant -> FLOAT_CONST\n");
            $$ = createNode(CONST , NULL,$1,NULL, NULL,NULL);
             
        }
        | EMPTY_CONST {
            if(PARSETREE) printf(" constant -> EMPTY_CONST\n");
            $$ = createNode(CONST , NULL,$1,NULL, NULL,NULL);
             
        }
        | STRING {
            if(PARSETREE) printf(" constant -> STRING\n");
            $$ = createNode(CONST , NULL,$1,NULL, NULL,NULL);   
        }
;
call: ID '(' arg-list ')' {
        if(PARSETREE)printf(" call -> ID (args)\n");
        $$ = createNode(CALL , NULL,$1,$3, NULL,NULL);
         
         
    }
    | ID '('')' {
        if(PARSETREE)printf(" call -> ID (args)\n");
        $$ = createNode(CALL , NULL,$1,NULL, NULL,NULL);
    }
;
arg-list: factor {
            if(PARSETREE) printf("arg-list");
            $$=$1;
        }
        | arg-list ',' factor {
            if(PARSETREE) printf("arg-list");
            $$ = createNode(ARG_LIST , NULL,NULL,$1, $3,NULL);
        }
;


%%


int yyerror(const char *s){
    printf("yyerror: %s , line: %d , col: %d, Error count %d\n",s, line, col, error_count);
    return 10;
}

int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    
    yyparse();

    if(error_count==0) {
        printf(YEL"\n\n___________________________ARVORE SINTATICA ABSTRATA_______________________________\t\n"DFT);
        printTree(root,0);
        printf(BLU"\n\n___________________________TABELA DE SIMBOLOS______________________________________\t\n"DFT);
        printTable();
    }
    if (!root) freeVertex(root);
    fclose(yyin);
    yylex_destroy();
    return 0;

}