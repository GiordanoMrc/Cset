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
    INTEGER_CONST = 259,           /* INTEGER_CONST  */
    FLOAT_CONST = 260,             /* FLOAT_CONST  */
    STRING = 261,                  /* STRING  */
    ID = 262,                      /* ID  */
    PLUS = 263,                    /* PLUS  */
    MINUS = 264,                   /* MINUS  */
    DIV = 265,                     /* DIV  */
    MULT = 266,                    /* MULT  */
    EQ = 267,                      /* EQ  */
    I_PLUS = 268,                  /* I_PLUS  */
    D_MINUS = 269,                 /* D_MINUS  */
    NOT = 270,                     /* NOT  */
    OR = 271,                      /* OR  */
    AND = 272,                     /* AND  */
    EQ_TO = 273,                   /* EQ_TO  */
    NEQ_TO = 274,                  /* NEQ_TO  */
    GT = 275,                      /* GT  */
    LT = 276,                      /* LT  */
    GTE = 277,                     /* GTE  */
    LTE = 278,                     /* LTE  */
    INT = 279,                     /* INT  */
    FLOAT = 280,                   /* FLOAT  */
    ELEM = 281,                    /* ELEM  */
    SET = 282,                     /* SET  */
    EMPTY_CONST = 283,             /* EMPTY_CONST  */
    IF = 284,                      /* IF  */
    ELSE = 285,                    /* ELSE  */
    FOR = 286,                     /* FOR  */
    FORALL = 287,                  /* FORALL  */
    IS_SET = 288,                  /* IS_SET  */
    ADD = 289,                     /* ADD  */
    IN = 290,                      /* IN  */
    REMOVE = 291,                  /* REMOVE  */
    RETURN = 292,                  /* RETURN  */
    EXISTS = 293,                  /* EXISTS  */
    READ = 294,                    /* READ  */
    WRITE = 295,                   /* WRITE  */
    WRITELN = 296                  /* WRITELN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "c7synt.y"

    char value[100];

#line 109 "c7synt.tab.h"

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
