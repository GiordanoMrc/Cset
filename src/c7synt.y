%debug
%define parse.error verbose
%locations
%{
    #include <stdio.h>
    extern int yylex();
    int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;
%}
%right "then" "else"
%token INT 
%token FLOAT
%token ELEM
%token SET
%token INTEGER_CONST
%token FLOAT_CONST
%token EMPTY_CONST
%token PLUS
%token MINUS
%token DIV
%token MULT
%token EQ
%token I_PLUS
%token D_MINUS
%token NOT
%token OR
%token AND
%token EQ_TO
%token NEQ_TO
%token GT
%token LT
%token GTE
%token LTE
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
%token OPENPARENT 
%token CLOSEPARENT
%token OPENBRACES 
%token CLOSEBRACES
%token SEMICOLON  
%token COMMA      
%token READ
%token WRITE
%token WRITELN
%token ID

%%
program: declaration-list {printf("program -> declaration-list\n");};

declaration-list: declaration-list declaration {printf("declaration-list -> declaration-list declaration \n");}
                | declaration {printf("declaration-list -> declaration\n");}
;
declaration: function-definition {printf("declaration -> function-definition\n");}
           | var-declaration {printf("declaration -> var-declaration\n");}
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
compound-stmt: '{' var-decls local-stmts'}' {printf("C-stmt -> '{' var-decls local-stmts'}'\n");}
;
var-decls: var-list {printf("var-decls -> var-declaration var-decls\n");}
         | %empty
;
var-list: var-list var-declaration {printf("var-");}
        | var-declaration
;

local-stmts: stmts  {printf("local-stmts -> stmts\n");}
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
    | is_set-stmt {printf("stmt -> IS_SET");}
    | set-stmt {printf("stmt -> SET");}
;

io-stmt: READ '(' ID ')' ';' {printf("io-stmt -> read ( <id> ) \n");}
       | WRITE '(' ID ')' ';' {printf("io-stmt -> write ( <id> ) \n");}
       | WRITELN '(' ID ')' ';' {printf("io-stmt -> writeln ( <id> )\n");}
;

if-stmt: IF '(' expression ')' "then" stmt    %prec "then"
       | IF '(' expression ')' stmt ELSE stmt
;

for-stmt: FOR '(' expression ';' expression ';' expression ')' stmt ';' {printf("for-stmt -> for\n");}
;

return-stmt: RETURN expression ';' {printf("return-stmt -> return exp ;\n");}
;

forall-stmt: FORALL '(' in-exp ')' set-stmt ';' {printf(" set-op -> FORALL (in-exp)\n");}
;

is_set-stmt: IS_SET '(' in-exp ')' ';'
;
set-stmt: ADD '(' in-exp ')'  ';'{printf(" set-op -> ADD (in-exp)\n");}   
       | REMOVE '(' in-exp ')' ';'{printf(" set-op -> REMOVE (in-exp)\n");}
       | EXISTS '(' in-exp ')' ';'{printf(" set-op -> EXISTS (in-exp)\n");}
;
expression-stmt: expression ';'     {printf("expression-stmt -> expression ;\n");}
               | ';'                {printf("expression-stmt -> ;\n");}
;
expression: ID EQ expression   {printf("expression-> ID = expression \n");}
          | basic-exp          {printf("expression -> basic-exp\n");}
          | set-exp             {printf("expression -> set-exp\n");}
;
set-exp: '[' element-list ']' {printf("set-exp -> {element-list}\n");}
       | in-exp {printf("set-exp -> in-exp\n");}
;
element-list: element-list ',' elem {printf("element-list -> element-list , elem\n");}
            | elem                  {printf("element-list -> elem\n");}
;
elem: ID {printf(" elem -> ID \n");}
    | INTEGER_CONST {printf(" elem -> INTEGER_CONST\n");}
    | FLOAT_CONST {printf(" elem -> FLOAT_CONST\n");}
    | '[' element-list ']' {printf(" elem ->  { element-list }\n");}
;

in-exp: basic-exp IN set-stmt {printf(" in-exp -> basic-exp IN set-stmt\n");}
      | basic-exp IN ID {printf(" in-exp -> basic-exp IN set-exp\n");}
;
basic-exp: add-exp {printf(" basic-exp -> add-exp\n");}
         | add-exp rel-op add-exp {printf(" basic-exp -> add-exp rel-op add-exp\n");}
;
rel-op: EQ_TO {printf(" rel-op -> EQ_TO\n");}
      | NEQ_TO {printf(" rel-op -> NEQ_TO\n");}
      | GT  {printf(" rel-op -> GT\n");}
      | LT {printf(" rel-op -> LT\n");}
      | GTE {printf(" rel-op -> GTE\n");}
      | LTE {printf(" rel-op -> LTE\n");}
;
add-exp: term {printf(" add-exp -> term\n");}
       | term add-op term {printf(" add-exp -> term add-op term\n");}
;
add-op: PLUS {printf(" add-op -> PLUS\n");}
      | MINUS {printf(" rel-op -> MINUS\n");}
;
term: factor {printf(" term -> factor\n");}
    | term mul-op factor {printf(" term -> term mul-op factor\n");}
;
mul-op: MULT {printf(" mul-op -> MULT\n");}
      | DIV {printf(" mul-op -> DIV\n");}
;
factor: '(' expression ')' {printf(" factor -> ( expression )\n");}
      | ID {printf(" factor -> ID\n");}
      | constant {printf(" factor -> constant\n");}
      | call {printf("factor -> call\n");}
;
constant: INTEGER_CONST {printf(" constant -> INTEGER_CONST\n");}
        | FLOAT_CONST {printf(" constant -> FLOAT_CONST\n");}
        | EMPTY_CONST {printf(" constant -> EMPTY_CONST\n");}
;
call: ID '('args')' {printf(" call -> ID (args)\n");}
;
args: arg-list {printf(" args -> arg-list\n");}
    | %empty {printf(" args -> empty\n");}
;
arg-list: expression {printf(" arg-list -> expression\n");}
        | arg-list ',' expression {printf(" arg-list -> arg-list , expression\n");}
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