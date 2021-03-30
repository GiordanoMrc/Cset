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
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    ELEM = 262,                    /* ELEM  */
    SET = 263,                     /* SET  */
    INTEGER_CONST = 264,           /* INTEGER_CONST  */
    FLOAT_CONST = 265,             /* FLOAT_CONST  */
    EMPTY_CONST = 266,             /* EMPTY_CONST  */
    PLUS = 267,                    /* PLUS  */
    MINUS = 268,                   /* MINUS  */
    DIV = 269,                     /* DIV  */
    MULT = 270,                    /* MULT  */
    EQ = 271,                      /* EQ  */
    I_PLUS = 272,                  /* I_PLUS  */
    D_MINUS = 273,                 /* D_MINUS  */
    NOT = 274,                     /* NOT  */
    OR = 275,                      /* OR  */
    AND = 276,                     /* AND  */
    EQ_TO = 277,                   /* EQ_TO  */
    NEQ_TO = 278,                  /* NEQ_TO  */
    GT = 279,                      /* GT  */
    LT = 280,                      /* LT  */
    GTE = 281,                     /* GTE  */
    LTE = 282,                     /* LTE  */
    IF = 283,                      /* IF  */
    ELSE = 284,                    /* ELSE  */
    FOR = 285,                     /* FOR  */
    FORALL = 286,                  /* FORALL  */
    IS_SET = 287,                  /* IS_SET  */
    ADD = 288,                     /* ADD  */
    IN = 289,                      /* IN  */
    REMOVE = 290,                  /* REMOVE  */
    RETURN = 291,                  /* RETURN  */
    EXISTS = 292,                  /* EXISTS  */
    OPENPARENT = 293,              /* OPENPARENT  */
    CLOSEPARENT = 294,             /* CLOSEPARENT  */
    OPENBRACES = 295,              /* OPENBRACES  */
    CLOSEBRACES = 296,             /* CLOSEBRACES  */
    SEMICOLON = 297,               /* SEMICOLON  */
    COMMA = 298,                   /* COMMA  */
    READ = 299,                    /* READ  */
    WRITE = 300,                   /* WRITE  */
    WRITELN = 301,                 /* WRITELN  */
    ID = 302                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
