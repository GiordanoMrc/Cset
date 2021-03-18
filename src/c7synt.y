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
%token READ
%token WRITE
%token WRITELN
%token ID



%%
program: declaration-list {printf("program\n");};

declaration-list: declaration-list declaration {printf("declaration-list: \n");}
                | declaration {printf("declaration\n");}
;
declaration: function-definition {printf("function-definition\n");}
           | var-declaration {printf("declaration\n");}
;
var-declaration: type ID ';' {printf("var-declaration\n");}
;
function-definition: type ID '(' parameter-list ')' {printf("function-definition\n");}
;
type: INT       {printf("INT\n");}
    | FLOAT     {printf("FLOAT\n");}
    | SET       {printf("SET\n");}
    | ELEM      {printf("ELEM\n");}
;
parameter-list: parameter-declaration   {printf("declaration\n");}
            | parameter-list ',' parameter-declaration {printf("declaration\n");}
;
parameter-declaration: type ID {printf("declaration\n");}
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