/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_C7SYNT_TAB_H_INCLUDED
# define YY_YY_C7SYNT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    ELEM = 260,
    SET = 261,
    INTEGER_CONST = 262,
    FLOAT_CONST = 263,
    EMPTY_CONST = 264,
    PLUS = 265,
    MINUS = 266,
    DIV = 267,
    MULT = 268,
    EQ = 269,
    I_PLUS = 270,
    D_MINUS = 271,
    NOT = 272,
    OR = 273,
    AND = 274,
    EQ_TO = 275,
    NEQ_TO = 276,
    GT = 277,
    LT = 278,
    GTE = 279,
    LTE = 280,
    IF = 281,
    ELSE = 282,
    FOR = 283,
    FORALL = 284,
    IS_SET = 285,
    ADD = 286,
    IN = 287,
    REMOVE = 288,
    RETURN = 289,
    EXISTS = 290,
    READ = 291,
    WRITE = 292,
    WRITELN = 293,
    ID = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C7SYNT_TAB_H_INCLUDED  */
