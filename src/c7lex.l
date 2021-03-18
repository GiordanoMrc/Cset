%option noinput 
%option nounput 
%option noyywrap
%{
#include "c7synt.tab.h"

int col = 1;
int line = 1;
int error_count = 0;
int strLen = 0;

%}

LETTER                  [a-zA-Z]
DIGIT                   [0-9]
EOL                     \n        
WS                      [ \t]+
INLINE_COMMENT          [/]{2}.*
INT                     "int"
FLOAT                   "float"
ELEM                    "elem"
SET                     "set"
INTEGER_CONST           {DIGIT}+
FLOAT_CONST             {DIGIT}+"."{DIGIT}+
EMPTY_CONST             "EMPTY"
PLUS                    "+"
MINUS                   "-"
DIV                     "/"
MULT                    "*"
EQ                      "="
I_PLUS                  "++"
D_MINUS                 "--"

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

OPENPARENT              "("
CLOSEPARENT             ")"
OPENBRACES              "{"
CLOSEBRACES             "}"
SEMICOLON               ";"
COMMA                   ","

READ                    "read"
WRITE                   "write"
WRITELN                 "writeln"
ID                      [a-zA-Z_][_a-z0-9A-Z]*

%x STRING

%%
\'                     {
                        strLen += 1;
                        col++;
                        BEGIN(STRING);
                        }

<STRING>\'              {
                        strLen += 1;
                        col++;
                        strLen = 0;
                        BEGIN(INITIAL);
                        }
\"                      {
                        
                        strLen += 1;
                        col++;
                        BEGIN(STRING);
                        }

<STRING>\"              {
                        strLen += 1;
                        strLen = 0;
                        col++;
                        BEGIN(INITIAL);
                        }

<STRING>\n              {
                        strLen += 1;
                        line++;
                        col++;
                        }

<STRING>.               {
                        strLen += 1;
                        col++;
                        }
{EOL}                   {line++;col=1;}
{INLINE_COMMENT}        {col++;}
{WS}                    {col++;}
{OPENBRACES}            {col++; return '{';}
{CLOSEBRACES}           {col++; return '}';} 
{OPENPARENT}            {col++; return '(';}
{CLOSEPARENT}           {col++; return ')';}   
{COMMA}                 {col++; return ',';}    
{SEMICOLON}             {col++; return ';';}
{INT}                   {col++; return INT;}
{FLOAT}                 {col++; return FLOAT;}
{ELEM}                  {col++; return ELEM;}
{SET}                   {col++; return SET;}
{INTEGER_CONST}         {col++; return INTEGER_CONST;}
{FLOAT_CONST}           {col++; return FLOAT_CONST;}
{EMPTY_CONST}           {col++; return EMPTY_CONST;}
{PLUS}                  {col++; return PLUS;}
{MINUS}                 {col++; return MINUS;}
{DIV}                   {col++; return DIV;}
{MULT}                  {col++; return MULT;}
{EQ}                    {col++; return EQ;}
{I_PLUS}                {col++; return I_PLUS;}
{D_MINUS}               {col++; return D_MINUS;}
{NOT}                   {col++; return NOT;}
{OR}                    {col++; return OR;}
{AND}                   {col++; return AND;}
{IF}                    {col++; return IF;}
{ELSE}                  {col++; return ELSE;}
{FOR}                   {col++; return  FOR;}
{FORALL}                {col++; return FORALL;}
{IS_SET}                {col++; return IS_SET;}
{ADD}                   {col++; return ADD;}
{EXISTS}                {col++; return EXISTS;}
{IN}                    {col++; return IN;}
{RETURN}                {col++; return RETURN;}
{REMOVE}                {col++; return REMOVE;}
{READ}                  {col++; return READ;}
{WRITE}                 {col++; return WRITE;}
{WRITELN}               {col++; return WRITELN;}
{ID}                    {col++; return ID;}
.                       {error_count++;col++;}

%%
