%{

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
INLINE_COMMENT          [/]{2}.*


TYPE                    "int"|"float"|"elem"|"set"
INTEGER                 {DIGIT}+
FLOAT                   {DIGIT}+"."{DIGIT}+
EMPTY                   EMPTY
/*Arit*/
PLUS                    "+"
MINUS                   "-"
DIV                     "/"
MULT                    "*"
EQ                      "="
I_PLUS                  "++"
D_MINUS                 "--"

ARIT_OP                 {PLUS}|{MINUS}|{DIV}|{MULT}|{EQ}|{I_PLUS}|{D_MINUS}
/*Logic*/

NOT                     "!"
OR                      "||"
AND                     "&&"

LOGIC_OP                {NOT}|{OR}|{AND}

/*Relational*/

EQ_TO                   "=="
NEQ_TO                  "!="
GT                      ">"
LT                      "<"
GTE                     ">="
LTE                     "<="

REL_OP                  {EQ_TO}|{NEQ_TO}|{GT}|{LT}|{GTE}|{LTE}


KEYWORD                 "if"|"else"|"for"|"forall"|"return"
READ                    "read"
WRITE                   "write"|"writeln"
ID                      {LETTER}({LETTER}|{DIGIT}|{UNDERSCORE})*

%x STRING

%%
\'                     {
                        printf("-> STRING:%s%s", oP, yytext);
                        strLen += 1;
                        BEGIN(STRING);
                        }

<STRING>\'              {
                        strLen += 1;
                        printf("%s%s LENGTH %d\n", yytext, cP, strLen);
                        strLen = 0;
                        BEGIN(INITIAL);
                        }
\"                      {
                        printf("-> STRING:%s%s", oP, yytext);
                        strLen += 1;
                        BEGIN(STRING);
                        }

<STRING>\"              {
                        strLen += 1;
                        printf("%s%s LENGTH %d\n\n", yytext, cP, strLen);
                        strLen = 0;
                        BEGIN(INITIAL);
                        }

<STRING>\n              {
                        printf("%s", yytext);
                        strLen += 1;
                        line++;
                        }

<STRING>.               {
                        printf("%s", yytext);
                        strLen += 1;
                        }
{EOL}                   {line++;}
{INLINE_COMMENT}        {;}
{WS}                    {;} 
"{"                     {;}    
"}"                     {;} 
"("                     {;}    
")"                     {;}    
","                     {;}    
";"                     {;}
{TYPE}                  {
                        printf( "[TYPE: %s | LINE: %d]\n", yytext,line);
                        }
{INTEGER}               {
                        printf( "[INTEGER: %s | LINE: %d]\n",yytext,line);
                        }
{FLOAT}                 {
                        printf( "[FLOAT: %s | LINE: %d]\n",yytext,line);
                        }
{EMPTY}                 {
                        printf( "[EMPTY: %s | LINE: %d]\n",yytext,line);
                        }
{ARIT_OP}               {
                        printf( "[ARIT_OP: %s | LINE: %d]\n",yytext,line);
                        }
{LOGIC_OP}                 {
                        printf( "[LOGIC_OP: %s | LINE: %d]\n",yytext,line);
                        }
{REL_OP}                 {
                        printf( "[REL_OP:  %s | LINE: %d]\n",yytext,line);
                        }
{KEYWORD}               {
                        printf( "[RE_OP: %s | LINE: %d]\n",yytext,line);
                        }
{READ}                  {
                        printf( "[READ: %s | LINE: %d]\n",yytext,line);
                        }
{WRITE}                 {
                        printf( "[WRITE: %s | LINE: %d]\n",yytext,line);
                        }
{ID}                    {
                        printf( "[ID: %s | LINE: %d]\n",yytext,line);
                        }
.                       { 
                        printf(">> Simbolo nao reconhecido pelo lexer:%s\n", yytext);
                        error_count++;
                        }

%%


int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yylex();


    printf("Foram encontrados %d erros pelo lexer.", error_count);
}