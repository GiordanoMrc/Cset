%option noinput 
%option nounput 
%option noyywrap

%{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "c7synt.tab.h"
#include "tads.h"

extern int col;
extern int line;
extern int error_count;
%}


LETTER                  [a-zA-Z]
DIGIT                   [0-9]
EOL                     \n        
WS                      [ \t]+
INLINE_COMMENT          [\/]{2}.*

INTEGER_CONST           "-"?{DIGIT}+
FLOAT_CONST             "-"?{DIGIT}+"."({DIGIT}*)?
EMPTY_CONST             "EMPTY"

PLUS                    "+"
MINUS                   "-"
DIV                     "/"
MULT                    "*"
EQ                      "="

NOT                     "!"
OR                      "||"
AND                     "&&"

EQ_TO                   "=="
NEQ_TO                  "!="
GT                      ">"
LT                      "<"
GTE                     ">="
LTE                     "<="

IF                      "if"
ELSE                    "else"     
FOR                     "for"
FORALL                  "forall"
IS_SET                  "is_set"

ADD                     "add"
IN                      "in"
REMOVE                  "remove"      
RETURN                  "return"
EXISTS                  "exists"

TYPE_INT                "int"
TYPE_FLOAT              "float"
TYPE_ELEM               "elem"
TYPE_SET                "set"

READ                    "read"
WRITE                   "write"
WRITELN                 "writeln"

ID                      [a-zA-Z_][_a-z0-9A-Z]*
STRING                  \"[^\"]*\"
CHAR                    '[^']?'|'\\[^']'

%x COMMENT


%%

{EOL}                   {line++;col=1;}
{INLINE_COMMENT}        {}
{WS}                    {col+= yyleng;}
"{"                     {col+= yyleng; return '{';}
"}"                     {col+= yyleng; return '}';} 
"("                     {col+= yyleng; return '(';}
")"                     {col+= yyleng; return ')';}   
","                     {col+= yyleng; return ',';}    
";"                     {col+= yyleng; return ';';}
{INTEGER_CONST}         {col+= yyleng;yylval.str =(char *) strdup(yytext); return INTEGER_CONST;}
{FLOAT_CONST}           {col+= yyleng;yylval.str =(char *) strdup(yytext); return FLOAT_CONST;}
{EMPTY_CONST}           {col+= yyleng;yylval.str =(char *) strdup(yytext); return EMPTY_CONST;}
{PLUS}                  {col+= yyleng;yylval.str =(char *) strdup(yytext); return PLUS;}
{MINUS}                 {col+= yyleng;yylval.str =(char *) strdup(yytext); return MINUS;}
{DIV}                   {col+= yyleng;yylval.str =(char *) strdup(yytext); return DIV;}
{MULT}                  {col+= yyleng;yylval.str =(char *) strdup(yytext); return MULT;}
{EQ_TO}                 {col+= yyleng;yylval.str =(char *) strdup(yytext); return EQ_TO;}
{NEQ_TO}                {col+= yyleng;yylval.str =(char *) strdup(yytext); return NEQ_TO;}
{GTE}                   {col+= yyleng;yylval.str =(char *) strdup(yytext); return GTE;}
{LTE}                   {col+= yyleng;yylval.str =(char *) strdup(yytext); return LTE;}
{GT}                    {col+= yyleng;yylval.str =(char *) strdup(yytext); return GT;}
{LT}                    {col+= yyleng;yylval.str =(char *) strdup(yytext); return LT;}
{EQ}                    {col+= yyleng;yylval.str =(char *) strdup(yytext); return EQ;}
{NOT}                   {col+= yyleng;yylval.str =(char *) strdup(yytext); return NOT;}
{OR}                    {col+= yyleng;yylval.str =(char *) strdup(yytext); return OR;}
{AND}                   {col+= yyleng;yylval.str =(char *) strdup(yytext); return AND;}
{IF}                    {col+= yyleng; return IF;}
{ELSE}                  {col+= yyleng; return ELSE;}
{FOR}                   {col+= yyleng; return FOR;}
{FORALL}                {col+= yyleng; return FORALL;}
{IS_SET}                {col+= yyleng; return IS_SET;}
{ADD}                   {col+= yyleng; return ADD;}
{EXISTS}                {col+= yyleng; return EXISTS;}
{IN}                    {yylval.str =(char *) strdup(yytext);col+= yyleng; return IN;}
{RETURN}                {col+= yyleng; return RETURN;}
{REMOVE}                {col+= yyleng; return REMOVE;}
{TYPE_INT}              {col+= yyleng; return TYPE_INT;}
{TYPE_FLOAT}            {col+= yyleng; return TYPE_FLOAT;}
{TYPE_ELEM}             {col+= yyleng; return TYPE_ELEM;}
{TYPE_SET}              {col+= yyleng; return TYPE_SET;}
{READ}                  {col+= yyleng; return READ;}
{WRITE}                 {col+= yyleng; return WRITE;}
{WRITELN}               {col+= yyleng; return WRITELN;}
{ID}                    {yylval.str =(char *) strdup(yytext);col+= yyleng; return ID;}
{STRING}                {yylval.str =(char *) strdup(yytext);col+= yyleng; return STRING;}
{CHAR}                  {yylval.str =(char *) strdup(yytext);col+= yyleng; return CHAR;}
.                       {   
                            printf("lexical error: line %d , col  %d , Unexpected: %s \n", line, col, yytext);
                            col+= yyleng;
                        }
"/*" {
    BEGIN(COMMENT);
}

<COMMENT>"*/" {
    BEGIN(INITIAL);
}

<COMMENT>\n {line++;}

<COMMENT>. { }
%%