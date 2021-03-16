%{
    #include <stdio.h>
    extern int yylex();
    int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;
%}

%token INT 
%token ID


%%
program: INT ID{printf("program\n");};
%%

int yyerror(const char *s){
    printf("yyerror: %s\n",s);
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

    //printf("\n>> Foram encontrados %d erros pelo lexer.\n", error_count);

    return 0;
}