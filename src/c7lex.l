%option noinput 
%option nounput 
%option noyywrap
%{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "c7synt.tab.h"
int col= 1;
int line= 1;
int error_count =0;
%}


LETTER                  [a-zA-Z]
DIGIT                   [0-9]
EOL                     \n        
WS                      [ \t]+
INLINE_COMMENT          [/]{2}.*


TYPE                    INT | FLOAT | ELEM | SET
INT                     "int"
FLOAT                   "float"
ELEM                    "elem"
SET                     "set"

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
{INT}                   {col+= yyleng; return INT;}
{FLOAT}                 {col+= yyleng; return FLOAT;}
{ELEM}                  {col+= yyleng; return ELEM;}
{SET}                   {col+= yyleng; return SET;}
{INTEGER_CONST}         {col+= yyleng; return INTEGER_CONST;}
{FLOAT_CONST}           {col+= yyleng; return FLOAT_CONST;}
{EMPTY_CONST}           {col+= yyleng; return EMPTY_CONST;}
{PLUS}                  {col+= yyleng; return PLUS;}
{MINUS}                 {col+= yyleng; return MINUS;}
{DIV}                   {col+= yyleng; return DIV;}
{MULT}                  {col+= yyleng; return MULT;}
{EQ_TO}                 {col+= yyleng; return EQ_TO;}
{NEQ_TO}                {col+= yyleng; return NEQ_TO;}
{GTE}                   {col+= yyleng; return GTE;}
{LTE}                   {col+= yyleng; return LTE;}
{GT}                    {col+= yyleng; return GT;}
{LT}                    {col+= yyleng; return LT;}
{EQ}                    {col+= yyleng; return EQ;}
{NOT}                   {col+= yyleng; return NOT;}
{OR}                    {col+= yyleng; return OR;}
{AND}                   {col+= yyleng; return AND;}
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
{READ}                  {col+= yyleng; return READ;}
{WRITE}                 {col+= yyleng; return WRITE;}
{WRITELN}               {col+= yyleng; return WRITELN;}
{ID}                    {col+= yyleng; return ID;}
{STRING}                {col += yyleng;strcpy(yylval.value, yytext);return STRING;}

.                       {col+= yyleng; error_count++;}

%%