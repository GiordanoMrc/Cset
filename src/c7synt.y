%right THEN ELSE
%debug
%define parse.error verbose
%locations
%{
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    extern int yylex();
    extern int yyparse();
    extern int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;
%}

%union {
    char value[100];
}

%token INTEGER_CONST FLOAT_CONST STRING ID
%token PLUS MINUS DIV MULT EQ I_PLUS D_MINUS
%token NOT OR AND 
%token EQ_TO NEQ_TO GT LT GTE LTE


%token '(' 
%token ')'
%token '{'
%token '}'
%token ';' 
%token ','
%token INT FLOAT ELEM SET
%token EMPTY_CONST
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

%%
program: declaration-list {printf("program -> declaration-list\n");};

declaration-list: declaration-list declaration {printf("declaration-list -> declaration-list declaration \n");}
                | declaration {printf("declaration-list -> declaration\n");}
;
declaration: function-definition {printf("declaration -> function-definition\n");}
           | var-declaration {printf("var-definition ->");}
;

var-declaration: type ID ';' {printf("var-declaration -> type ID\n");}
; 

function-definition: type ID '(' parameters ')'  compound-stmt {printf("function-definition -> type ID '(' parameter-list ')'\n");}
;

type: INT       {printf("INT\n");}
    | FLOAT     {printf("FLOAT\n");}
    | SET       {printf("SET\n");}
    | ELEM      {printf("ELEM\n");}
;
parameters: parameter-list {printf("parameters -> parameter-list\n");}
          | %empty {printf("empty\n");}
;
parameter-list: parameter-declaration   {printf("parameter-list -> parameter-declaration\n");}
              | parameter-list ',' parameter-declaration {printf("parameter-list -> parameter-list ',' parameter-declaration\n");}
;
parameter-declaration: type ID {printf("parameter-declaration -> type ID\n");}
;
compound-stmt: '{' local-decls-stmts'}' {printf("C-stmt -> '{' var-decls local-stmts'}'\n");}
;

local-decls-stmts: stmts  {printf("local-stmts -> stmts\n");}
          | %empty
;
stmts: stmts stmt {printf("stmts -> stmts stmt");}
     | stmt
;
stmt: io-stmt {printf("stmt -> io-stmt\n");}
    | return-stmt {printf("stmt -> return-stmt\n");}
    | compound-stmt {printf("stmt -> cp-stmt\n");}
    | if-stmt {printf("stmt -> if-stmt\n");}
    | for-stmt {printf("stmt -> for-stmt\n");}
    | expression-stmt {printf("stmt -> expression-stmt\n");}
    | forall-stmt {printf("stmt -> forall");}
    | var-declaration {printf("stmt -> var-decl");}
;

io-stmt: READ '(' expression ')' ';' {printf("io-stmt -> read ( exp ) \n");}
       | WRITE '(' expression ')' ';' {printf("io-stmt -> write ( exp ) \n");}
       | WRITELN '(' expression ')' ';' {printf("io-stmt -> writeln ( exp )\n");}
;

if-stmt: IF '(' expression ')'   stmt        %prec THEN
       | IF '(' expression ')'   stmt ELSE stmt
       | IF '(' expression IN expression')' expression-stmt ELSE expression-stmt
;

for-stmt: FOR '(' expression ';' expression ';' expression ')' stmt ';' {printf("for-stmt -> for\n");}
;

return-stmt: RETURN expression ';' {printf("return-stmt -> return exp ;\n");}
;

forall-stmt: FORALL '(' in-exp ')' compound-stmt  {printf(" set-op -> FORALL (in-exp)\n");}
           | FORALL '(' in-exp ')' expression-stmt
;

expression-stmt: expression ';'     {printf("expression-stmt -> expression ;\n");}
               | ';'                {printf("expression-stmt -> ;\n");}
;
expression: assign-exp  {printf("expression-> assign \n");}
          | expression  ',' assign-exp {printf("expression -> exp , assign\n");}      
;
assign-exp: basic-exp
          | ID EQ assign-exp
;

in-exp: expression IN in-exp
      | expression
;
basic-exp: logical-exp
         | logical-exp OR logical-exp
         | logical-exp AND logical-exp
         | NOT logical-exp
;


logical-exp: add-exp {printf(" basic-exp -> add-exp\n");}
            | add-exp EQ_TO add-exp {printf(" basic-exp -> add-exp rel-op add-exp\n");}
            | add-exp NEQ_TO add-exp {printf(" basic-exp -> add-exp rel-op add-exp\n");}
            | add-exp GT add-exp {printf(" basic-exp -> add-exp rel-op add-exp\n");}
            | add-exp LT add-exp {printf(" basic-exp -> add-exp rel-op add-exp\n");}
            | add-exp GTE add-exp {printf(" basic-exp -> add-exp rel-op add-exp\n");}
            | add-exp LTE add-exp {printf(" basic-exp -> add-exp rel-op add-exp\n");}
;

add-exp: term {printf(" add-exp -> term\n");}
       | term PLUS term {printf(" add-exp -> term add-op term\n");}
       | term MINUS term {printf(" add-exp -> term add-op term\n");}
;
term: factor {printf(" term -> factor\n");}
    | term MULT factor {printf(" term -> term mul-op factor\n");}
    | term DIV factor {printf(" term -> term mul-op factor\n");}
;

factor: '(' expression ')' {printf(" factor -> ( expression )\n");}
      | ID {printf(" factor -> ID\n");}
      | constant {printf(" factor -> constant\n");}
      | call {printf("factor -> call\n");}
      | set-exp {printf(" factor -> set-exp\n");}
;
set-exp: ADD '(' in-exp ')'  {printf(" set-op -> ADD (in-exp)\n");}   
       | REMOVE '(' in-exp ')' {printf(" set-op -> REMOVE (in-exp)\n");}
       | EXISTS '(' in-exp ')' {printf(" set-op -> EXISTS (in-exp)\n");}
       | IS_SET '(' in-exp ')' {printf(" set-op -> IS_SET (in-exp)\n");}
;

constant: INTEGER_CONST {printf(" constant -> INTEGER_CONST\n");}
        | FLOAT_CONST {printf(" constant -> FLOAT_CONST\n");}
        | EMPTY_CONST {printf(" constant -> EMPTY_CONST\n");}
        | STRING      {printf(" constant -> STRING\n");}
;
call: ID '('args')' {printf(" call -> ID (args)\n");}
;
args: expression {printf(" args -> arg-list\n");}
    | %empty {printf(" args -> empty\n");}
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

    fclose(yyin);
    yylex_destroy();
    return 0;
}