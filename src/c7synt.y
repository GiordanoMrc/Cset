%{
    #include <stdio.h>
    extern int yylex();
    int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;
%}

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
parameters: parameter-list
          | %empty
;
parameter-list: parameter-declaration   {printf("parameter-list -> parameter-declaration\n");}
              | parameter-list ',' parameter-declaration {printf("parameter-list -> parameter-list ',' parameter-declaration\n");}
;
parameter-declaration: type ID {printf("parameter-declaration -> type ID\n");}
;
compound-stmt: '{' var-decls local-stmt'}' {printf("C-stmt -> '{' var-decls local-stmt'}'\n");}
;
var-decls: var-declaration var-decls {printf("var-decls -> var-declaration var-decls\n");}
         | %empty {printf("C-stmt -> empty\n");}
;
local-stmt: stmt local-stmt {printf("local-stmt -> stmt local-stmt\n");}
          | %empty {printf("local-stmt -> empty\n");}
;
stmt: io-stmt {printf("stmt -> io-stmt\n");}
    | return-stmt {printf("stmt -> return-stmt\n");}
    | compound-stmt {printf("stmt -> cp-stmt\n");}
    | if-stmt {printf("stmt -> if-stmt\n");}
    | for-stmt {printf("stmt -> for-stmt\n");}
    | set-stmt {printf("stmt -> set-stmt\n");}
    | expression-stmt {printf("stmt -> expression-stmt\n");}
;

io-stmt: READ '(' ID ')' ';' {printf("io-stmt -> read ( <id> ) \n");}
       | WRITE '(' ID ')' ';' {printf("io-stmt -> write ( <id> ) \n");}
       | WRITELN '(' ID ')' ';' {printf("io-stmt -> writeln ( <id> )\n");}
;

return-stmt: %empty
;
set-stmt: %empty
;
if-stmt: %empty
;
for-stmt: %empty
;
expression-stmt: expression ';'  {printf("expression-stmt -> expression ;\n");}
               | ';'{printf("expression-stmt -> ;\n");}
;
expression: ID EQ expression {printf("expression-> ID = expression \n");}
          | basic-exp {printf("expression -> basic-exp\n");}
;
set-exp: '{' element-list '}' {printf("set-exp -> element-list")}
;
set-op: ADD '(' in-exp ')' {printf(" set-op -> ADD (in-exp)\n");}
       | REMOVE '(' in-exp ')' {printf(" set-op -> REMOVE (in-exp)\n");}
       | EXISTS '(' in-exp ')' {printf(" set-op -> EXISTS (in-exp)\n");}
;
in-exp: basic-exp IN expression {printf(" in-exp -> basic-exp IN expression\n");}
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
      | call {printf(" factor -> call-exp\n");}
;
constant: INTEGER_CONST {printf(" constant -> INTEGER_CONST\n");}
        | FLOAT_CONST {printf(" constant -> FLOAT_CONST\n");}
        | EMPTY_CONST {printf(" constant -> EMPTY_CONST\n");}
;
call: ID '('args')'
;
args: arg-list
    | %empty
;
arg-list: expression
        | arg-list ',' expression
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