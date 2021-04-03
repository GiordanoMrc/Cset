%option noinput 
%option nounput 
%option noyywrap
%{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "c7synt.tab.h"
#include "ast.h"

#define VERBOSE 0

 int col;
 int line;
 int error_count;
%}


LETTER                  [a-zA-Z]
DIGIT                   [0-9]
EOL                     \n        
WS                      [ \t]+
INLINE_COMMENT          [/]{2}.*

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

INT                     "int"
FLOAT                   "float"
ELEM                    "elem"
SET                     "set"


READ                    "read"
WRITE                   "write"
WRITELN                 "writeln"

ID                      [a-zA-Z_][_a-z0-9A-Z]*
STRING                   \"[^\"]*\"|'[^']*'

%%

{EOL}                   {line++;col=1;}
{INLINE_COMMENT}        {col++;}
{WS}                    {col++;}
"{"                     {col++; return '{';}
"}"                     {col++; return '}';} 
"("                     {col++; return '(';}
")"                     {col++; return ')';}   
","                     {col++; return ',';}    
";"                     {col++; return ';';}
{INTEGER_CONST}         {col+= yyleng; strcpy(yylval.str, yytext);return INTEGER_CONST;}
{FLOAT_CONST}           {col+= yyleng; strcpy(yylval.str, yytext);return FLOAT_CONST;}
{EMPTY_CONST}           {col+= yyleng; strcpy(yylval.str, yytext);return EMPTY_CONST;}
{PLUS}                  {col+= yyleng; strcpy(yylval.str, yytext);return PLUS;}
{MINUS}                 {col+= yyleng; strcpy(yylval.str, yytext);return MINUS;}
{DIV}                   {col+= yyleng; strcpy(yylval.str, yytext);return DIV;}
{MULT}                  {col+= yyleng; strcpy(yylval.str, yytext);return MULT;}
{EQ_TO}                 {col+= yyleng; strcpy(yylval.str, yytext);return EQ_TO;}
{NEQ_TO}                {col+= yyleng; strcpy(yylval.str, yytext);return NEQ_TO;}
{GTE}                   {col+= yyleng; strcpy(yylval.str, yytext);return GTE;}
{LTE}                   {col+= yyleng; strcpy(yylval.str, yytext);return LTE;}
{GT}                    {col+= yyleng; strcpy(yylval.str, yytext);return GT;}
{LT}                    {col+= yyleng; strcpy(yylval.str, yytext);return LT;}
{EQ}                    {col+= yyleng; strcpy(yylval.str, yytext);return EQ;}
{NOT}                   {col+= yyleng; strcpy(yylval.str, yytext);return NOT;}
{OR}                    {col+= yyleng; strcpy(yylval.str, yytext);return OR;}
{AND}                   {col+= yyleng; strcpy(yylval.str, yytext);return AND;}
{IF}                    {col+= yyleng; return IF;}
{ELSE}                  {col+= yyleng; return ELSE;}
{FOR}                   {col+= yyleng; return FOR;}
{FORALL}                {col+= yyleng; return FORALL;}
{IS_SET}                {col+= yyleng; return IS_SET;}
{ADD}                   {col+= yyleng; return ADD;}
{EXISTS}                {col+= yyleng; return EXISTS;}
{IN}                    {col+= yyleng; return IN;}
{RETURN}                {col+= yyleng; return RETURN;}
{REMOVE}                {col+= yyleng; return REMOVE;}
{INT}                   {col+= yyleng; return INT;}
{FLOAT}                 {col+= yyleng; return FLOAT;}
{ELEM}                  {col+= yyleng; return ELEM;}
{SET}                   {col+= yyleng; return SET;}
{READ}                  {col+= yyleng; return READ;}
{WRITE}                 {col+= yyleng; return WRITE;}
{WRITELN}               {col+= yyleng; return WRITELN;}
{ID}                    {col+= yyleng; strcpy(yylval.str, yytext);return ID;}
{STRING}                {col+= yyleng; strcpy(yylval.str, yytext);return STRING;}
.                       {col+= yyleng; error_count++;}

%%