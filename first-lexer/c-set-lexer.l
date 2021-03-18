%option noinput 
%option nounput 
%option noyywrap
%{

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int col = 1;
int line = 1;
int error_count = 0;
int strLen = 0;
char oP[] = "(";
char cP[] = ")";

%}

LETTER                  [a-zA-Z]
DIGIT                   [0-9]
UNDERSCORE              "_"
EOL                     \n        
WS                      [ \t]+
OPENBRACKET             "{"
CLOSEBRACKET            "}"
OPENPARENT              "("
CLOSEPARENT             ")"
COMMA                   ","
SEMICOLON               ";"
INLINE_COMMENT          [/]{2}.*
TYPE                    "int"|"float"|"elem"|"set"
INTEGER                 {DIGIT}+
FLOAT                   {DIGIT}+"."{DIGIT}+
EMPTY                   EMPTY
PLUS                    "+"
MINUS                   "-"
DIV                     "/"
MULT                    "*"
EQ                      "="
I_PLUS                  "++"
D_MINUS                 "--"
ARIT_OP                 {PLUS}|{MINUS}|{DIV}|{MULT}|{EQ}|{I_PLUS}|{D_MINUS}
NOT                     "!"
OR                      "||"
AND                     "&&"
LOGIC_OP                {NOT}|{OR}|{AND}
EQ_TO                   "=="
NEQ_TO                  "!="
GT                      ">"
LT                      "<"
GTE                     ">="
LTE                     "<="
REL_OP                  {EQ_TO}|{NEQ_TO}|{GT}|{LT}|{GTE}|{LTE}
KEYWORD                 "if"|"else"|"for"|"forall"|"is_set"|"add"|"exists"|"in"|"return"|"remove"
READ                    "read"
WRITE                   "write"|"writeln"
ID                      [a-zA-Z_][_a-z0-9A-Z]*

%x STRING

%%
\'                     {
                        printf("-> STRING:%s%s", oP, yytext);
                        strLen += 1;
                        col++;
                        BEGIN(STRING);
                        }

<STRING>\'              {
                        strLen += 1;
                        col++;
                        printf("%s%s LENGTH %d\n", yytext, cP, strLen);
                        strLen = 0;
                        BEGIN(INITIAL);
                        }
\"                      {
                        printf("-> STRING:%s%s", oP, yytext);
                        strLen += 1;
                        col++;
                        BEGIN(STRING);
                        }

<STRING>\"              {
                        strLen += 1;
                        printf("%s%s LENGTH %d\n\n", yytext, cP, strLen);
                        strLen = 0;
                        col++;
                        BEGIN(INITIAL);
                        }

<STRING>\n              {
                        printf("%s", yytext);
                        strLen += 1;
                        line++;
                        col++;
                        }

<STRING>.               {
                        printf("%s", yytext);
                        strLen += 1;
                        col++;
                        }
{EOL}                   {line++;col=1;}
{INLINE_COMMENT}        {printf( "[INLINE-COMMENT: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;}
{WS}                    {printf( "[WHITE-SPACE: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;} 
"{"                     {printf( "[OPENBRACKET: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;}    
"}"                     {printf( "[CLOSEBRACKET: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;} 
"("                     {printf( "[OPENPARENT: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;}    
")"                     {printf( "[CLOSEPARENT: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;}    
","                     {printf( "[COMMA: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;}    
";"                     {printf( "[SEMICOLON: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;}
{TYPE}                  {printf( "[TYPE: %s | LINE: %d | COLUMN: %d]\n", yytext,line,col);col++;}
{INTEGER}               {printf( "[INTEGER: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{FLOAT}                 {printf( "[FLOAT: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{EMPTY}                 {printf( "[EMPTY: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{ARIT_OP}               {printf( "[ARIT_OP: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{LOGIC_OP}              {printf( "[LOGIC_OP: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{REL_OP}                {printf( "[REL_OP:  %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}                       
{KEYWORD}               {printf( "[KEYWORD: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{READ}                  {printf( "[READ: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{WRITE}                 {printf( "[WRITE: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
{ID}                    {printf( "[ID: %s | LINE: %d | COLUMN: %d]\n",yytext,line,col);col++;}
.                       {printf( "[ERROR: %s | LINE: %d | COLUMN: %d]\n", yytext,line, col);error_count++;col++;}
%%


int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yylex();
    fclose(yyin);
    yylex_destroy();


    printf("\n>> Foram encontrados %d erros pelo lexer.\n", error_count);
}