/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_C7SYNT_TAB_H_INCLUDED
# define YY_YY_C7SYNT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    THEN = 258,                    /* THEN  */
    ID = 259,                      /* ID  */
    STRING = 260,                  /* STRING  */
    INTEGER_CONST = 261,           /* INTEGER_CONST  */
    FLOAT_CONST = 262,             /* FLOAT_CONST  */
    EMPTY_CONST = 263,             /* EMPTY_CONST  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    DIV = 266,                     /* DIV  */
    MULT = 267,                    /* MULT  */
    EQ = 268,                      /* EQ  */
    NOT = 269,                     /* NOT  */
    OR = 270,                      /* OR  */
    AND = 271,                     /* AND  */
    EQ_TO = 272,                   /* EQ_TO  */
    NEQ_TO = 273,                  /* NEQ_TO  */
    GT = 274,                      /* GT  */
    LT = 275,                      /* LT  */
    GTE = 276,                     /* GTE  */
    LTE = 277,                     /* LTE  */
    INT = 278,                     /* INT  */
    FLOAT = 279,                   /* FLOAT  */
    ELEM = 280,                    /* ELEM  */
    SET = 281,                     /* SET  */
    IF = 282,                      /* IF  */
    ELSE = 283,                    /* ELSE  */
    FOR = 284,                     /* FOR  */
    FORALL = 285,                  /* FORALL  */
    IS_SET = 286,                  /* IS_SET  */
    ADD = 287,                     /* ADD  */
    IN = 288,                      /* IN  */
    REMOVE = 289,                  /* REMOVE  */
    RETURN = 290,                  /* RETURN  */
    EXISTS = 291,                  /* EXISTS  */
    READ = 292,                    /* READ  */
    WRITE = 293,                   /* WRITE  */
    WRITELN = 294                  /* WRITELN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "c7synt.y"

    char* str;
    struct vertex* node;

#line 108 "c7synt.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_C7SYNT_TAB_H_INCLUDED  */
