/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "c7synt.y"

    //includes
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "tads.h"
    
    // define
    #define PARSETREE 0

    // extern vars
    extern int yylex();
    extern int yyparse();
    extern int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;

    int error_count=0;
    int hasReturn=0;
    char* lastFType = NULL;

#line 93 "c7synt.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "c7synt.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_THEN = 3,                       /* THEN  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_INTEGER_CONST = 6,              /* INTEGER_CONST  */
  YYSYMBOL_FLOAT_CONST = 7,                /* FLOAT_CONST  */
  YYSYMBOL_EMPTY_CONST = 8,                /* EMPTY_CONST  */
  YYSYMBOL_CHAR = 9,                       /* CHAR  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_DIV = 12,                       /* DIV  */
  YYSYMBOL_MULT = 13,                      /* MULT  */
  YYSYMBOL_EQ = 14,                        /* EQ  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_EQ_TO = 18,                     /* EQ_TO  */
  YYSYMBOL_NEQ_TO = 19,                    /* NEQ_TO  */
  YYSYMBOL_GT = 20,                        /* GT  */
  YYSYMBOL_LT = 21,                        /* LT  */
  YYSYMBOL_GTE = 22,                       /* GTE  */
  YYSYMBOL_LTE = 23,                       /* LTE  */
  YYSYMBOL_IN = 24,                        /* IN  */
  YYSYMBOL_TYPE_INT = 25,                  /* TYPE_INT  */
  YYSYMBOL_TYPE_FLOAT = 26,                /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_ELEM = 27,                 /* TYPE_ELEM  */
  YYSYMBOL_TYPE_SET = 28,                  /* TYPE_SET  */
  YYSYMBOL_29_ = 29,                       /* '('  */
  YYSYMBOL_30_ = 30,                       /* ')'  */
  YYSYMBOL_31_ = 31,                       /* '{'  */
  YYSYMBOL_32_ = 32,                       /* '}'  */
  YYSYMBOL_33_ = 33,                       /* ';'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_ELSE = 36,                      /* ELSE  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_FORALL = 38,                    /* FORALL  */
  YYSYMBOL_IS_SET = 39,                    /* IS_SET  */
  YYSYMBOL_ADD = 40,                       /* ADD  */
  YYSYMBOL_REMOVE = 41,                    /* REMOVE  */
  YYSYMBOL_RETURN = 42,                    /* RETURN  */
  YYSYMBOL_EXISTS = 43,                    /* EXISTS  */
  YYSYMBOL_READ = 44,                      /* READ  */
  YYSYMBOL_WRITE = 45,                     /* WRITE  */
  YYSYMBOL_WRITELN = 46,                   /* WRITELN  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_begin = 48,                     /* begin  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_50_declaration_list = 50,       /* declaration-list  */
  YYSYMBOL_declaration = 51,               /* declaration  */
  YYSYMBOL_52_var_declaration = 52,        /* var-declaration  */
  YYSYMBOL_53_function_definition = 53,    /* function-definition  */
  YYSYMBOL_54_1 = 54,                      /* $@1  */
  YYSYMBOL_55_2 = 55,                      /* $@2  */
  YYSYMBOL_56_3 = 56,                      /* $@3  */
  YYSYMBOL_57_4 = 57,                      /* $@4  */
  YYSYMBOL_58_5 = 58,                      /* $@5  */
  YYSYMBOL_59_6 = 59,                      /* $@6  */
  YYSYMBOL_60_7 = 60,                      /* $@7  */
  YYSYMBOL_61_8 = 61,                      /* $@8  */
  YYSYMBOL_parameters = 62,                /* parameters  */
  YYSYMBOL_63_parameter_list = 63,         /* parameter-list  */
  YYSYMBOL_64_parameter_declaration = 64,  /* parameter-declaration  */
  YYSYMBOL_65_compound_stmt = 65,          /* compound-stmt  */
  YYSYMBOL_66_9 = 66,                      /* $@9  */
  YYSYMBOL_67_local_decls_stmts = 67,      /* local-decls-stmts  */
  YYSYMBOL_stmts = 68,                     /* stmts  */
  YYSYMBOL_stmt = 69,                      /* stmt  */
  YYSYMBOL_70_io_stmt = 70,                /* io-stmt  */
  YYSYMBOL_71_if_stmt = 71,                /* if-stmt  */
  YYSYMBOL_condition = 72,                 /* condition  */
  YYSYMBOL_73_for_stmt = 73,               /* for-stmt  */
  YYSYMBOL_74_for_conditions = 74,         /* for-conditions  */
  YYSYMBOL_75_return_stmt = 75,            /* return-stmt  */
  YYSYMBOL_76_forall_stmt = 76,            /* forall-stmt  */
  YYSYMBOL_77_expression_stmt = 77,        /* expression-stmt  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_79_assign_exp = 79,             /* assign-exp  */
  YYSYMBOL_80_in_exp = 80,                 /* in-exp  */
  YYSYMBOL_81_basic_exp = 81,              /* basic-exp  */
  YYSYMBOL_82_logical_eq = 82,             /* logical-eq  */
  YYSYMBOL_83_logical_exp = 83,            /* logical-exp  */
  YYSYMBOL_84_add_exp = 84,                /* add-exp  */
  YYSYMBOL_term = 85,                      /* term  */
  YYSYMBOL_not = 86,                       /* not  */
  YYSYMBOL_factor = 87,                    /* factor  */
  YYSYMBOL_88_set_exp = 88,                /* set-exp  */
  YYSYMBOL_constant = 89,                  /* constant  */
  YYSYMBOL_call = 90,                      /* call  */
  YYSYMBOL_91_arg_list = 91                /* arg-list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,     2,     2,    34,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    97,    97,   104,   110,   114,   119,   123,   129,   135,
     141,   147,   157,   164,   156,   178,   185,   177,   199,   206,
     198,   220,   227,   219,   242,   246,   251,   256,   262,   270,
     278,   286,   295,   295,   308,   312,   317,   321,   326,   331,
     335,   340,   345,   349,   354,   359,   363,   369,   374,   379,
     385,   389,   399,   405,   411,   422,   429,   438,   442,   448,
     452,   454,   459,   464,   469,   476,   481,   486,   490,   495,
     502,   505,   510,   517,   521,   526,   531,   536,   543,   547,
     553,   559,   563,   568,   575,   579,   585,   590,   595,   600,
     605,   611,   616,   622,   627,   635,   639,   644,   648,   652,
     657,   665,   669,   673
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "THEN", "ID", "STRING",
  "INTEGER_CONST", "FLOAT_CONST", "EMPTY_CONST", "CHAR", "PLUS", "MINUS",
  "DIV", "MULT", "EQ", "NOT", "OR", "AND", "EQ_TO", "NEQ_TO", "GT", "LT",
  "GTE", "LTE", "IN", "TYPE_INT", "TYPE_FLOAT", "TYPE_ELEM", "TYPE_SET",
  "'('", "')'", "'{'", "'}'", "';'", "','", "IF", "ELSE", "FOR", "FORALL",
  "IS_SET", "ADD", "REMOVE", "RETURN", "EXISTS", "READ", "WRITE",
  "WRITELN", "$accept", "begin", "program", "declaration-list",
  "declaration", "var-declaration", "function-definition", "$@1", "$@2",
  "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "parameters", "parameter-list",
  "parameter-declaration", "compound-stmt", "$@9", "local-decls-stmts",
  "stmts", "stmt", "io-stmt", "if-stmt", "condition", "for-stmt",
  "for-conditions", "return-stmt", "forall-stmt", "expression-stmt",
  "expression", "assign-exp", "in-exp", "basic-exp", "logical-eq",
  "logical-exp", "add-exp", "term", "not", "factor", "set-exp", "constant",
  "call", "arg-list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    40,
      41,   123,   125,    59,    44,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295
};
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-36)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,     4,    12,    25,    28,    47,  -110,    11,  -110,  -110,
    -110,    36,    42,    48,    52,  -110,  -110,  -110,    16,  -110,
      29,  -110,    58,  -110,    74,    15,    15,    15,    15,   121,
     128,   129,   131,   115,   107,  -110,   117,   134,   135,  -110,
    -110,  -110,  -110,  -110,    15,  -110,  -110,  -110,   136,  -110,
     136,   136,   136,  -110,  -110,  -110,  -110,  -110,   111,  -110,
     137,  -110,  -110,  -110,  -110,  -110,   237,   164,   166,   167,
     168,   210,  -110,   144,   145,   146,   147,   148,   149,   197,
     155,   157,   159,   161,  -110,  -110,   175,   154,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,    19,  -110,    57,    64,    45,
      82,    87,  -110,  -110,  -110,  -110,  -110,   210,  -110,    36,
      42,    48,    52,   -16,   210,   154,   210,   154,   210,   210,
     210,   210,  -110,    68,   210,   210,   210,   210,  -110,  -110,
    -110,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,    88,   -11,  -110,    -9,   172,
      73,  -110,   -17,   179,   180,   181,   183,  -110,   190,    -8,
      -6,    -3,  -110,  -110,    64,    64,    45,    45,    82,    82,
      82,    82,    87,    87,  -110,  -110,  -110,   210,  -110,   154,
     210,   210,    55,  -110,  -110,  -110,  -110,   188,   189,   191,
      88,  -110,    75,  -110,  -110,  -110,  -110,  -110,  -110,   210,
       0,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     3,     5,     7,
       6,    12,    15,    21,    18,     1,     4,     8,     0,     9,
       0,    11,     0,    10,     0,    25,    25,    25,    25,     0,
       0,     0,     0,     0,    24,    26,     0,     0,     0,    28,
      29,    31,    30,    13,     0,    16,    22,    19,     0,    27,
       0,     0,     0,    32,    14,    17,    23,    20,     0,    38,
      87,    98,    95,    96,    97,    99,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    41,     0,    34,    37,    39,
      42,    43,    40,    45,    44,     0,    61,    63,    67,    70,
      73,    78,    81,    84,    90,    88,    89,   103,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,     0,     0,     0,     0,    33,    36,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,    86,     0,    50,
       0,    53,    66,     0,     0,     0,     0,    55,     0,     0,
       0,     0,    62,    64,    68,    69,    72,    71,    74,    76,
      75,    77,    80,    79,    82,    83,   100,     0,    52,     0,
       0,     0,     0,    94,    91,    92,    93,     0,     0,     0,
     102,    51,     0,    65,    57,    58,    47,    48,    49,     0,
       0,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,   216,    13,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,    63,  -110,   184,   -48,  -110,
    -110,  -110,   -82,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
      49,   -70,   -18,  -109,  -101,   -12,    -5,   -60,   -14,   -20,
     163,  -110,  -110,  -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    84,    10,    18,    48,    20,
      50,    24,    52,    22,    51,    33,    34,    35,    85,    58,
      86,    87,    88,    89,    90,   115,    91,   117,    92,    93,
      94,    95,    96,   153,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,   113,    55,    56,    57,   129,   145,   181,    11,   123,
     154,   155,   156,     9,   147,   158,    12,   131,   131,   176,
       9,   178,   187,   177,   188,   131,   131,   189,   131,    13,
     201,   131,    14,   149,   131,   151,     1,     2,     3,     4,
      29,    30,    31,    32,   148,    25,   150,    15,   152,   152,
     152,   152,   130,   131,   152,   159,   160,   161,    26,    60,
      61,    62,    63,    64,    65,   137,   138,   139,   140,    17,
      66,   132,   193,   133,   134,    19,   190,   168,   169,   170,
     171,    21,   135,   136,    71,    23,    53,    27,    72,    36,
      37,    38,   141,   142,    76,    77,    78,   191,    80,   143,
     144,   157,   131,    28,   133,   134,   180,   131,   199,   131,
     192,   152,    59,   162,   163,    60,    61,    62,    63,    64,
      65,   164,   165,   174,   175,    39,    66,   172,   173,   200,
     166,   167,    40,    41,   194,    42,    67,    68,    69,    70,
      71,    44,    53,   -35,    72,    43,    73,    45,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    60,    61,
      62,    63,    64,    65,    46,    47,   107,    53,   109,    66,
     110,   111,   112,   114,   116,   118,   119,   120,   121,    67,
      68,    69,    70,    71,   124,    53,   125,    72,   126,    73,
     127,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    60,    61,    62,    63,    64,    65,   128,   179,   182,
     183,   184,    66,   185,    60,    61,    62,    63,    64,    65,
     186,   196,   197,    16,   198,    66,    71,     0,    49,   108,
     122,   195,     0,     0,     0,     0,    76,    77,    78,    71,
      80,    60,    61,    62,    63,    64,    65,     0,     0,    76,
      77,    78,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,    78,     0,
      80
};

static const yytype_int16 yycheck[] =
{
      48,    71,    50,    51,    52,    87,   107,    24,     4,    79,
     119,   120,   121,     0,    30,   124,     4,    34,    34,    30,
       7,    30,    30,    34,    30,    34,    34,    30,    34,     4,
      30,    34,     4,   115,    34,   117,    25,    26,    27,    28,
      25,    26,    27,    28,   114,    29,   116,     0,   118,   119,
     120,   121,    33,    34,   124,   125,   126,   127,    29,     4,
       5,     6,     7,     8,     9,    20,    21,    22,    23,    33,
      15,    14,   181,    16,    17,    33,   177,   137,   138,   139,
     140,    33,    18,    19,    29,    33,    31,    29,    33,    26,
      27,    28,    10,    11,    39,    40,    41,   179,    43,    12,
      13,    33,    34,    29,    16,    17,    33,    34,    33,    34,
     180,   181,     1,   131,   132,     4,     5,     6,     7,     8,
       9,   133,   134,   143,   144,     4,    15,   141,   142,   199,
     135,   136,     4,     4,   182,     4,    25,    26,    27,    28,
      29,    34,    31,    32,    33,    30,    35,    30,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     4,     5,
       6,     7,     8,     9,    30,    30,    29,    31,     4,    15,
       4,     4,     4,    29,    29,    29,    29,    29,    29,    25,
      26,    27,    28,    29,    29,    31,    29,    33,    29,    35,
      29,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     4,     5,     6,     7,     8,     9,    32,    36,    30,
      30,    30,    15,    30,     4,     5,     6,     7,     8,     9,
      30,    33,    33,     7,    33,    15,    29,    -1,    44,    66,
      33,   182,    -1,    -1,    -1,    -1,    39,    40,    41,    29,
      43,     4,     5,     6,     7,     8,     9,    -1,    -1,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    26,    27,    28,    48,    49,    50,    51,    52,
      53,     4,     4,     4,     4,     0,    51,    33,    54,    33,
      56,    33,    60,    33,    58,    29,    29,    29,    29,    25,
      26,    27,    28,    62,    63,    64,    62,    62,    62,     4,
       4,     4,     4,    30,    34,    30,    30,    30,    55,    64,
      57,    61,    59,    31,    65,    65,    65,    65,    66,     1,
       4,     5,     6,     7,     8,     9,    15,    25,    26,    27,
      28,    29,    33,    35,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    52,    65,    67,    68,    69,    70,
      71,    73,    75,    76,    77,    78,    79,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    29,    87,     4,
       4,     4,     4,    78,    29,    72,    29,    74,    29,    29,
      29,    29,    33,    78,    29,    29,    29,    29,    32,    69,
      33,    34,    14,    16,    17,    18,    19,    20,    21,    22,
      23,    10,    11,    12,    13,    81,    91,    30,    78,    69,
      78,    69,    78,    80,    80,    80,    80,    33,    80,    78,
      78,    78,    79,    79,    82,    82,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    86,    30,    34,    30,    36,
      33,    24,    30,    30,    30,    30,    30,    30,    30,    30,
      81,    69,    78,    80,    65,    77,    33,    33,    33,    33,
      78,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    50,    50,    51,    51,    52,    52,
      52,    52,    54,    55,    53,    56,    57,    53,    58,    59,
      53,    60,    61,    53,    62,    62,    63,    63,    64,    64,
      64,    64,    66,    65,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      82,    82,    82,    83,    83,    83,    83,    83,    84,    84,
      84,    85,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      90,    91,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     3,
       3,     3,     0,     0,     8,     0,     0,     8,     0,     0,
       8,     0,     0,     8,     1,     0,     1,     3,     2,     2,
       2,     2,     0,     4,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     5,
       3,     5,     3,     3,     7,     3,     2,     5,     5,     2,
       1,     1,     3,     1,     3,     3,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     2,     3,     1,     1,     1,
       1,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       4,     1,     3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* begin: program  */
#line 97 "c7synt.y"
              {
    (yyval.node) = createNode(PROGRAM,NULL,NULL,(yyvsp[0].node),NULL);
    root = (yyval.node);
    checkNoMain();
    }
#line 1712 "c7synt.tab.c"
    break;

  case 3: /* program: declaration-list  */
#line 104 "c7synt.y"
                          {
        (yyval.node) = createNode(666,NULL,NULL,(yyvsp[0].node),NULL);
        if(PARSETREE) printf("begin ->program\n\n\n - end of parse tree - \n");
    }
#line 1721 "c7synt.tab.c"
    break;

  case 4: /* declaration-list: declaration-list declaration  */
#line 110 "c7synt.y"
                                               {
                    if (PARSETREE) printf("declaration-list -> declaration-list declaration \n");
                    (yyval.node) = createNode(666,NULL,NULL,(yyvsp[-1].node),(yyvsp[0].node));
                }
#line 1730 "c7synt.tab.c"
    break;

  case 5: /* declaration-list: declaration  */
#line 114 "c7synt.y"
                              {
                    if(PARSETREE) printf("declaration-list -> declaration\n");
                    (yyval.node) = (yyvsp[0].node); 
                }
#line 1739 "c7synt.tab.c"
    break;

  case 6: /* declaration: function-definition  */
#line 119 "c7synt.y"
                                 {
                if(PARSETREE) printf("declaration -> function-definition\n");
                (yyval.node) = (yyvsp[0].node);
            }
#line 1748 "c7synt.tab.c"
    break;

  case 7: /* declaration: var-declaration  */
#line 123 "c7synt.y"
                              {
                if(PARSETREE) printf("declaration -> var-declaration\n");
                (yyval.node) = (yyvsp[0].node);
            }
#line 1757 "c7synt.tab.c"
    break;

  case 8: /* var-declaration: TYPE_INT ID ';'  */
#line 129 "c7synt.y"
                                 {
        if(PARSETREE) printf("var-declaration -> type ID\n");
        (yyval.node) = createNode(VAR_DECLARATION, "int" , (yyvsp[-1].str), NULL , NULL);
        if(!skipScope)
            addEntry((yyvsp[-1].str),"int",VAR,STACK_TOP(head)->scope_id);
    }
#line 1768 "c7synt.tab.c"
    break;

  case 9: /* var-declaration: TYPE_FLOAT ID ';'  */
#line 135 "c7synt.y"
                         {
        if(PARSETREE) printf("var-declaration -> type ID\n");
        (yyval.node) = createNode(VAR_DECLARATION, "float" , (yyvsp[-1].str), NULL , NULL);
        if(!skipScope)
            addEntry((yyvsp[-1].str),"float",VAR,STACK_TOP(head)->scope_id);
    }
#line 1779 "c7synt.tab.c"
    break;

  case 10: /* var-declaration: TYPE_SET ID ';'  */
#line 141 "c7synt.y"
                       {
        if(PARSETREE) printf("var-declaration -> type ID\n");
        (yyval.node) = createNode(VAR_DECLARATION, "set" , (yyvsp[-1].str), NULL , NULL);
        if(!skipScope)
            addEntry((yyvsp[-1].str),"set",VAR,STACK_TOP(head)->scope_id);
    }
#line 1790 "c7synt.tab.c"
    break;

  case 11: /* var-declaration: TYPE_ELEM ID ';'  */
#line 147 "c7synt.y"
                        {
        if(PARSETREE) printf("var-declaration -> type ID\n");
        (yyval.node) = createNode(VAR_DECLARATION, "elem" , (yyvsp[-1].str), NULL , NULL);
        if(!skipScope)
            addEntry((yyvsp[-1].str),"elem",VAR,STACK_TOP(head)->scope_id);
    }
#line 1801 "c7synt.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 157 "c7synt.y"
    {
        if(!skipScope) {
            hasReturn=0;
            addEntry((yyvsp[0].str),"int",FUNC,STACK_TOP(head)->scope_id);
            freePList();
            lastFType= NULL;
        }
    }
#line 1814 "c7synt.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 164 "c7synt.y"
                       {
        if(!skipScope)
            addFunctionParams((yyvsp[-4].str),"int");
    }
#line 1823 "c7synt.tab.c"
    break;

  case 14: /* function-definition: TYPE_INT ID $@1 '(' parameters ')' $@2 compound-stmt  */
#line 167 "c7synt.y"
                    {
        if(PARSETREE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        (yyval.node) = createNode(FUNCTION_DEFINITION ,"int", (yyvsp[-6].str),  (yyvsp[-3].node) , (yyvsp[0].node));
        if (!skipScope){
        if(hasReturn ==0){
            raiseNoReturn((yyvsp[-6].str));
            }
            lastFType= "int";
        }
    }
#line 1838 "c7synt.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 178 "c7synt.y"
    {
        if(!skipScope) {
            hasReturn=0;
            addEntry((yyvsp[0].str),"float",FUNC,STACK_TOP(head)->scope_id);
            freePList();
            lastFType= NULL;
        }
    }
#line 1851 "c7synt.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 185 "c7synt.y"
                       {
        addFunctionParams((yyvsp[-4].str),"float");

    }
#line 1860 "c7synt.tab.c"
    break;

  case 17: /* function-definition: TYPE_FLOAT ID $@3 '(' parameters ')' $@4 compound-stmt  */
#line 188 "c7synt.y"
                    {
        if(PARSETREE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        (yyval.node) = createNode(FUNCTION_DEFINITION ,"float", (yyvsp[-6].str),  (yyvsp[-3].node) , (yyvsp[0].node));
        if (!skipScope){
            if(hasReturn ==0){
                raiseNoReturn((yyvsp[-6].str));
                lastFType= "float";
            }
        }
    }
#line 1875 "c7synt.tab.c"
    break;

  case 18: /* $@5: %empty  */
#line 199 "c7synt.y"
    {
        if(!skipScope) {
            hasReturn=0;
            addEntry((yyvsp[0].str),"set",FUNC,STACK_TOP(head)->scope_id);
            freePList();
            lastFType= NULL;
        }
    }
#line 1888 "c7synt.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 206 "c7synt.y"
                       {
        addFunctionParams((yyvsp[-4].str),"set");

    }
#line 1897 "c7synt.tab.c"
    break;

  case 20: /* function-definition: TYPE_SET ID $@5 '(' parameters ')' $@6 compound-stmt  */
#line 209 "c7synt.y"
                    {
        if(PARSETREE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        (yyval.node) = createNode(FUNCTION_DEFINITION ,"set", (yyvsp[-6].str),  (yyvsp[-3].node) , (yyvsp[0].node));
        if (!skipScope){
        if(hasReturn ==0){
            raiseNoReturn((yyvsp[-6].str));
            lastFType= "set";
        }
        }
    }
#line 1912 "c7synt.tab.c"
    break;

  case 21: /* $@7: %empty  */
#line 220 "c7synt.y"
    {
        if(!skipScope) {
            hasReturn=0;
            addEntry((yyvsp[0].str),"set",FUNC,STACK_TOP(head)->scope_id);
            freePList();
            lastFType= NULL;
        }
    }
#line 1925 "c7synt.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 227 "c7synt.y"
                       {
        addFunctionParams((yyvsp[-4].str),"elem");

    }
#line 1934 "c7synt.tab.c"
    break;

  case 23: /* function-definition: TYPE_ELEM ID $@7 '(' parameters ')' $@8 compound-stmt  */
#line 230 "c7synt.y"
                    {
        if(PARSETREE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        (yyval.node) = createNode(FUNCTION_DEFINITION ,"elem", (yyvsp[-6].str),  (yyvsp[-3].node) , (yyvsp[0].node));
        if (!skipScope){
            if(hasReturn ==0){
                raiseNoReturn((yyvsp[-6].str));
                lastFType= "elem";
            }
        }
    }
#line 1949 "c7synt.tab.c"
    break;

  case 24: /* parameters: parameter-list  */
#line 242 "c7synt.y"
                           {
        if(PARSETREE) printf("parameters -> param-list\n");
            (yyval.node) = (yyvsp[0].node);
        }
#line 1958 "c7synt.tab.c"
    break;

  case 25: /* parameters: %empty  */
#line 246 "c7synt.y"
                 { 
            if(PARSETREE) printf("empty\n");
            (yyval.node) = NULL;
        }
#line 1967 "c7synt.tab.c"
    break;

  case 26: /* parameter-list: parameter-declaration  */
#line 251 "c7synt.y"
                                      {
        if(PARSETREE) printf("parameter-list -> parameter-declaration\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 1977 "c7synt.tab.c"
    break;

  case 27: /* parameter-list: parameter-list ',' parameter-declaration  */
#line 256 "c7synt.y"
                                               {
        if(PARSETREE) printf("parameter-list -> parameter-list ',' parameter-declaration\n");
        (yyval.node) = createNode(666 , NULL, NULL ,(yyvsp[-2].node), (yyvsp[0].node) );

    }
#line 1987 "c7synt.tab.c"
    break;

  case 28: /* parameter-declaration: TYPE_INT ID  */
#line 262 "c7synt.y"
                                   {
        if(PARSETREE) printf("parameter-declaration -> type ID\n");
        (yyval.node) = createNode(PARAMETER_DECL, "int",(yyvsp[0].str), NULL, NULL);
        if(!skipScope) {
            addEntry((yyvsp[0].str),"int",PARAM,(scope_counter +1));
            addParam("int");
        }
    }
#line 2000 "c7synt.tab.c"
    break;

  case 29: /* parameter-declaration: TYPE_FLOAT ID  */
#line 270 "c7synt.y"
                    {
        if(PARSETREE) printf("parameter-declaration -> type ID\n");
        (yyval.node) = createNode(PARAMETER_DECL, "float",(yyvsp[0].str), NULL, NULL);
        if(!skipScope) {
            addEntry((yyvsp[0].str),"float",PARAM,(scope_counter +1));
            addParam("float");
        }
    }
#line 2013 "c7synt.tab.c"
    break;

  case 30: /* parameter-declaration: TYPE_SET ID  */
#line 278 "c7synt.y"
                 {
        if(PARSETREE) printf("parameter-declaration -> type ID\n");
        (yyval.node) = createNode(PARAMETER_DECL, "set",(yyvsp[0].str), NULL, NULL);
        if(!skipScope) {
            addEntry((yyvsp[0].str),"set",PARAM,(scope_counter +1));
            addParam("set");
        }
    }
#line 2026 "c7synt.tab.c"
    break;

  case 31: /* parameter-declaration: TYPE_ELEM ID  */
#line 286 "c7synt.y"
                  {
        if(PARSETREE) printf("parameter-declaration -> type ID\n");
        (yyval.node) = createNode(PARAMETER_DECL, "elem", (yyvsp[0].str), NULL, NULL);
        if(!skipScope) {
            addEntry((yyvsp[0].str),"elem",PARAM,(scope_counter +1));
            addParam("elem");
        }
    }
#line 2039 "c7synt.tab.c"
    break;

  case 32: /* $@9: %empty  */
#line 295 "c7synt.y"
                   {
                    if(!skipScope)
                        createScope();
            }
#line 2048 "c7synt.tab.c"
    break;

  case 33: /* compound-stmt: '{' $@9 local-decls-stmts '}'  */
#line 298 "c7synt.y"
                                    {
                if(PARSETREE) printf("C-stmt -> '{' local-decls-stmts'}'\n");
                (yyval.node) = (yyvsp[-1].node);
                if(!skipScope){
                    pop();
                    skipScope = 0;
                }
            }
#line 2061 "c7synt.tab.c"
    break;

  case 34: /* local-decls-stmts: stmts  */
#line 308 "c7synt.y"
                          {
        if (PARSETREE) printf("local-stmts -> stmts\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2070 "c7synt.tab.c"
    break;

  case 35: /* local-decls-stmts: %empty  */
#line 312 "c7synt.y"
             {
        if(PARSETREE) printf("empty\n");
        (yyval.node) = NULL;
    }
#line 2079 "c7synt.tab.c"
    break;

  case 36: /* stmts: stmts stmt  */
#line 317 "c7synt.y"
                  {
        if(PARSETREE) printf("stmts -> stmts stmt\n");
        (yyval.node) = createNode(666 , NULL ,NULL,(yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2088 "c7synt.tab.c"
    break;

  case 37: /* stmts: stmt  */
#line 321 "c7synt.y"
           {
        if(PARSETREE) printf("stmts -> stmts stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2098 "c7synt.tab.c"
    break;

  case 38: /* stmts: error  */
#line 326 "c7synt.y"
            {
        (yyval.node)= NULL;
        error_count++;
    }
#line 2107 "c7synt.tab.c"
    break;

  case 39: /* stmt: io-stmt  */
#line 331 "c7synt.y"
              {
        if(PARSETREE) printf("stmt -> io-stmt\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2116 "c7synt.tab.c"
    break;

  case 40: /* stmt: return-stmt  */
#line 335 "c7synt.y"
                  {
        if(PARSETREE) printf("stmt -> return-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        hasReturn =1;
    }
#line 2126 "c7synt.tab.c"
    break;

  case 41: /* stmt: compound-stmt  */
#line 340 "c7synt.y"
                    {
        if(PARSETREE) printf("stmt -> cp-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2136 "c7synt.tab.c"
    break;

  case 42: /* stmt: if-stmt  */
#line 345 "c7synt.y"
              {
        if(PARSETREE) printf("stmt -> if-stmt\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2145 "c7synt.tab.c"
    break;

  case 43: /* stmt: for-stmt  */
#line 349 "c7synt.y"
               {
        if(PARSETREE) printf("stmt -> for-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2155 "c7synt.tab.c"
    break;

  case 44: /* stmt: expression-stmt  */
#line 354 "c7synt.y"
                      {
        if(PARSETREE) printf("stmt -> expression-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2165 "c7synt.tab.c"
    break;

  case 45: /* stmt: forall-stmt  */
#line 359 "c7synt.y"
                  {
        if(PARSETREE) printf("stmt -> forall-stmt\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2174 "c7synt.tab.c"
    break;

  case 46: /* stmt: var-declaration  */
#line 363 "c7synt.y"
                      {
        if(PARSETREE) printf("stmt -> var-decl\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2183 "c7synt.tab.c"
    break;

  case 47: /* io-stmt: READ '(' expression ')' ';'  */
#line 369 "c7synt.y"
                                     {
            if(PARSETREE) printf("io-stmt -> read ( exp ) \n");
            (yyval.node) = createNode(IO_STMT , NULL ,NULL,(yyvsp[-2].node), NULL);
            
        }
#line 2193 "c7synt.tab.c"
    break;

  case 48: /* io-stmt: WRITE '(' expression ')' ';'  */
#line 374 "c7synt.y"
                                       {
           if(PARSETREE) printf("io-stmt -> write ( exp ) \n");
           (yyval.node) = createNode(IO_STMT , NULL ,NULL,(yyvsp[-2].node), NULL);

        }
#line 2203 "c7synt.tab.c"
    break;

  case 49: /* io-stmt: WRITELN '(' expression ')' ';'  */
#line 379 "c7synt.y"
                                        {
           if(PARSETREE) printf("io-stmt -> writeln ( exp )\n");
           (yyval.node) = createNode(IO_STMT , NULL ,NULL,(yyvsp[-2].node), NULL);
        }
#line 2212 "c7synt.tab.c"
    break;

  case 50: /* if-stmt: IF condition stmt  */
#line 385 "c7synt.y"
                                             {
            if(PARSETREE) printf("if-stmt\n");
            (yyval.node) = createNode(IF_STMT , NULL ,NULL,(yyvsp[-1].node),(yyvsp[0].node));
        }
#line 2221 "c7synt.tab.c"
    break;

  case 51: /* if-stmt: IF condition stmt ELSE stmt  */
#line 389 "c7synt.y"
                                      {
           if(PARSETREE) printf("if-stmt\n");
           (yyval.node) = createNode(IF_COND , NULL ,NULL,(yyvsp[-3].node),NULL);
           vertex * aux = createNode(IF_STMT,NULL,NULL,(yyvsp[-2].node),NULL);
           vertex * else_node = createNode(ELSE_STMT,NULL,NULL,(yyvsp[0].node),NULL);
           (yyval.node)->r = aux;
           aux->r = else_node;
       }
#line 2234 "c7synt.tab.c"
    break;

  case 52: /* condition: '(' expression ')'  */
#line 399 "c7synt.y"
                             {
        if(PARSETREE) printf("condition -> (exp)\n");
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2243 "c7synt.tab.c"
    break;

  case 53: /* for-stmt: FOR for-conditions stmt  */
#line 405 "c7synt.y"
                                   {
        if(PARSETREE) printf("for-stmt -> for\n");
        (yyval.node) = createNode(FOR_STMT , NULL ,NULL,(yyvsp[-1].node),(yyvsp[0].node));
    }
#line 2252 "c7synt.tab.c"
    break;

  case 54: /* for-conditions: '(' expression ';' expression ';' expression ')'  */
#line 411 "c7synt.y"
                                                                {
        if(PARSETREE) printf("for-stmt ->for-cond\n");
        (yyval.node) = createNode(FOR_INIT,NULL,NULL,(yyvsp[-5].node),NULL);
        vertex * aux = createNode(FOR_COND,NULL,NULL,(yyvsp[-3].node),NULL);
        vertex * aux2 = createNode(FOR_INCREMENT,NULL,NULL,(yyvsp[-1].node),NULL);
        (yyval.node)-> r = aux;
        aux->r = aux2;
    }
#line 2265 "c7synt.tab.c"
    break;

  case 55: /* return-stmt: RETURN expression ';'  */
#line 422 "c7synt.y"
                                   {
        if(PARSETREE) printf("return-stmt -> return exp ;\n");
        (yyval.node) = createNode(RETURN_STMT , NULL,NULL,(yyvsp[-1].node), NULL);
        if(!skipScope){
            checkReturnType(lastFType,(yyvsp[-1].node));
        }
    }
#line 2277 "c7synt.tab.c"
    break;

  case 56: /* return-stmt: RETURN ';'  */
#line 429 "c7synt.y"
                 {
        if(PARSETREE) printf("return-stmt -> return exp ;\n");
        (yyval.node) = createNode(RETURN_STMT , "void",NULL,NULL, NULL);
        if(!skipScope){
            raiseVoidReturn();
        }
    }
#line 2289 "c7synt.tab.c"
    break;

  case 57: /* forall-stmt: FORALL '(' in-exp ')' compound-stmt  */
#line 438 "c7synt.y"
                                                 {
        if(PARSETREE) printf("forall-stmt ->FORALL (in-exp) compound\n");
        (yyval.node) = createNode(FORALL_STMT, NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2298 "c7synt.tab.c"
    break;

  case 58: /* forall-stmt: FORALL '(' in-exp ')' expression-stmt  */
#line 442 "c7synt.y"
                                            {
        if(PARSETREE) printf("forall-stmt -> FORALL ( in-exp )\n");
        (yyval.node) = createNode(FORALL_STMT , NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2307 "c7synt.tab.c"
    break;

  case 59: /* expression-stmt: expression ';'  */
#line 448 "c7synt.y"
                                {
        if(PARSETREE) printf("expression-stmt -> expression ;\n");
        (yyval.node) =(yyvsp[-1].node);
    }
#line 2316 "c7synt.tab.c"
    break;

  case 60: /* expression-stmt: ';'  */
#line 452 "c7synt.y"
          { (yyval.node) = NULL;}
#line 2322 "c7synt.tab.c"
    break;

  case 61: /* expression: assign-exp  */
#line 454 "c7synt.y"
                       {
        if(PARSETREE) printf("expression-> assign \n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2332 "c7synt.tab.c"
    break;

  case 62: /* expression: expression ',' assign-exp  */
#line 459 "c7synt.y"
                                 {
        if(PARSETREE) printf("expression -> exp , assign\n");
        (yyval.node) = createNode(EXPRESSION , NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2341 "c7synt.tab.c"
    break;

  case 63: /* assign-exp: basic-exp  */
#line 464 "c7synt.y"
                      {
        if(PARSETREE) printf("assign-exp -> basic-exp\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2351 "c7synt.tab.c"
    break;

  case 64: /* assign-exp: basic-exp EQ assign-exp  */
#line 469 "c7synt.y"
                              {
        if (PARSETREE) printf("assign -> ID EQ assign\n");
        (yyval.node) = createNode(ASSIGN ,NULL, (yyvsp[-1].str) ,(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2361 "c7synt.tab.c"
    break;

  case 65: /* in-exp: expression IN in-exp  */
#line 476 "c7synt.y"
                             {
        if(PARSETREE) printf("in-exp -> expression IN in-exp\n");
        (yyval.node) = createNode(IN_OP,NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        
    }
#line 2371 "c7synt.tab.c"
    break;

  case 66: /* in-exp: expression  */
#line 481 "c7synt.y"
                 {
        if(PARSETREE) printf("in-exp -> expression\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2380 "c7synt.tab.c"
    break;

  case 67: /* basic-exp: logical-eq  */
#line 486 "c7synt.y"
                      {
        if(PARSETREE) printf("basic-exp -> logical\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2389 "c7synt.tab.c"
    break;

  case 68: /* basic-exp: basic-exp OR logical-eq  */
#line 490 "c7synt.y"
                              {
        if(PARSETREE) printf("basic-exp -> logical OR logical\n");
        (yyval.node) = createNode(LOGICAL_EXP , NULL ,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2399 "c7synt.tab.c"
    break;

  case 69: /* basic-exp: basic-exp AND logical-eq  */
#line 495 "c7synt.y"
                               {
        if(PARSETREE) printf("basic-exp -> logical AND logical\n");
        (yyval.node) = createNode(LOGICAL_EXP , NULL,(yyvsp[-1].str), (yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2409 "c7synt.tab.c"
    break;

  case 70: /* logical-eq: logical-exp  */
#line 502 "c7synt.y"
                        {
        (yyval.node)=(yyvsp[0].node);
    }
#line 2417 "c7synt.tab.c"
    break;

  case 71: /* logical-eq: logical-eq NEQ_TO logical-exp  */
#line 505 "c7synt.y"
                                    {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(REL_EQ, NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2427 "c7synt.tab.c"
    break;

  case 72: /* logical-eq: logical-eq EQ_TO logical-exp  */
#line 510 "c7synt.y"
                                   {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(REL_EQ,NULL, (yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2437 "c7synt.tab.c"
    break;

  case 73: /* logical-exp: add-exp  */
#line 517 "c7synt.y"
                     {
        if(PARSETREE) printf(" basic-exp -> add-exp\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2446 "c7synt.tab.c"
    break;

  case 74: /* logical-exp: logical-exp GT add-exp  */
#line 521 "c7synt.y"
                             {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(REL_OP, NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2456 "c7synt.tab.c"
    break;

  case 75: /* logical-exp: logical-exp GTE add-exp  */
#line 526 "c7synt.y"
                              {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(REL_OP,NULL, (yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2466 "c7synt.tab.c"
    break;

  case 76: /* logical-exp: logical-exp LT add-exp  */
#line 531 "c7synt.y"
                             {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
       (yyval.node) = createNode(REL_OP,NULL, (yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
       addTypeToNode((yyval.node));
    }
#line 2476 "c7synt.tab.c"
    break;

  case 77: /* logical-exp: logical-exp LTE add-exp  */
#line 536 "c7synt.y"
                              {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(REL_OP , NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2486 "c7synt.tab.c"
    break;

  case 78: /* add-exp: term  */
#line 543 "c7synt.y"
              {
            if(PARSETREE)printf(" add-exp -> term\n");
            (yyval.node) = (yyvsp[0].node);
        }
#line 2495 "c7synt.tab.c"
    break;

  case 79: /* add-exp: add-exp MINUS term  */
#line 547 "c7synt.y"
                             {
            if(PARSETREE) printf(" add-exp -> term MINUS term\n");
            addTypeToNode((yyval.node));
            (yyval.node) = createNode(ADD_OP , NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));

        }
#line 2506 "c7synt.tab.c"
    break;

  case 80: /* add-exp: add-exp PLUS term  */
#line 553 "c7synt.y"
                            {
            if(PARSETREE)printf(" add-exp -> term PLUS term\n");
            (yyval.node) = createNode(ADD_OP ,NULL, (yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
            addTypeToNode((yyval.node));
        }
#line 2516 "c7synt.tab.c"
    break;

  case 81: /* term: not  */
#line 559 "c7synt.y"
          { 
        if(PARSETREE) printf(" term -> not\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2525 "c7synt.tab.c"
    break;

  case 82: /* term: term DIV not  */
#line 563 "c7synt.y"
                   {
        if(PARSETREE) printf(" term -> term mul-op not\n");
        (yyval.node) = createNode(DIV_OP ,NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2535 "c7synt.tab.c"
    break;

  case 83: /* term: term MULT not  */
#line 568 "c7synt.y"
                    {
        if(PARSETREE) printf(" term -> term mul-op not\n");
        (yyval.node) = createNode(MUL_OP ,NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node));
        addTypeToNode((yyval.node));
    }
#line 2545 "c7synt.tab.c"
    break;

  case 84: /* not: factor  */
#line 575 "c7synt.y"
           {
        if(PARSETREE) printf(" not -> factor\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2554 "c7synt.tab.c"
    break;

  case 85: /* not: NOT factor  */
#line 579 "c7synt.y"
                 {
        if(PARSETREE) printf(" not -> factor\n");
        (yyval.node) = createNode(NOT_OP ,NULL,(yyvsp[-1].str),(yyvsp[0].node), NULL);
    }
#line 2563 "c7synt.tab.c"
    break;

  case 86: /* factor: '(' expression ')'  */
#line 585 "c7synt.y"
                           {
        if(PARSETREE) printf(" factor -> ( expression )\n");
        (yyval.node) = (yyvsp[-1].node);
        
    }
#line 2573 "c7synt.tab.c"
    break;

  case 87: /* factor: ID  */
#line 590 "c7synt.y"
         {
        if(PARSETREE) printf(" factor -> ID\n");
        (yyval.node) = createNode(IDENT , NULL,(yyvsp[0].str),NULL, NULL);
        checkUndeclaredID((yyvsp[0].str),line,col);
    }
#line 2583 "c7synt.tab.c"
    break;

  case 88: /* factor: constant  */
#line 595 "c7synt.y"
               {
        if(PARSETREE) printf(" factor -> constant\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2593 "c7synt.tab.c"
    break;

  case 89: /* factor: call  */
#line 600 "c7synt.y"
           {
        if(PARSETREE) printf("factor -> call\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2603 "c7synt.tab.c"
    break;

  case 90: /* factor: set-exp  */
#line 605 "c7synt.y"
              {
        if(PARSETREE) printf(" factor -> set-exp\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2613 "c7synt.tab.c"
    break;

  case 91: /* set-exp: ADD '(' in-exp ')'  */
#line 611 "c7synt.y"
                             {
        if(PARSETREE) printf(" set-op -> ADD (in-exp)\n");
        (yyvsp[-1].node) = createNode(SET_ADD , NULL,NULL,(yyvsp[-1].node), NULL);
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2623 "c7synt.tab.c"
    break;

  case 92: /* set-exp: REMOVE '(' in-exp ')'  */
#line 616 "c7synt.y"
                            {
        if(PARSETREE) printf(" set-op -> REMOVE (in-exp)\n");
        (yyvsp[-1].node) = createNode(SET_REMOVE, NULL,NULL,(yyvsp[-1].node), NULL);
        (yyval.node) = (yyvsp[-1].node);
        
    }
#line 2634 "c7synt.tab.c"
    break;

  case 93: /* set-exp: EXISTS '(' in-exp ')'  */
#line 622 "c7synt.y"
                            {
        if(PARSETREE) printf(" set-op -> EXISTS (in-exp)\n");
        (yyvsp[-1].node) = createNode(SET_EXISTS , NULL,NULL,(yyvsp[-1].node), NULL);
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2644 "c7synt.tab.c"
    break;

  case 94: /* set-exp: IS_SET '(' in-exp ')'  */
#line 627 "c7synt.y"
                            {
        if(PARSETREE) printf(" set-op -> IS_SET (in-exp)\n");
        (yyvsp[-1].node) = createNode(IS_SET_EXP , NULL,NULL,(yyvsp[-1].node), NULL);
        (yyval.node) = (yyvsp[-1].node);
        addTypeToNode((yyval.node));
    }
#line 2655 "c7synt.tab.c"
    break;

  case 95: /* constant: INTEGER_CONST  */
#line 635 "c7synt.y"
                        {
            if(PARSETREE)printf(" constant -> INTEGER_CONST\n");
            (yyval.node) = createNode(CONST,"int",(yyvsp[0].str),NULL, NULL);
        }
#line 2664 "c7synt.tab.c"
    break;

  case 96: /* constant: FLOAT_CONST  */
#line 639 "c7synt.y"
                      {
            if(PARSETREE) printf(" constant -> FLOAT_CONST\n");
            (yyval.node) = createNode(CONST,"float",(yyvsp[0].str),NULL, NULL);
            
        }
#line 2674 "c7synt.tab.c"
    break;

  case 97: /* constant: EMPTY_CONST  */
#line 644 "c7synt.y"
                      {
            if(PARSETREE) printf(" constant -> EMPTY_CONST\n");
            (yyval.node) = createNode(EMPTY_CONST, "EMPTY",(yyvsp[0].str),NULL, NULL);
        }
#line 2683 "c7synt.tab.c"
    break;

  case 98: /* constant: STRING  */
#line 648 "c7synt.y"
                 {
            if(PARSETREE) printf(" constant -> STRING\n");
            (yyval.node) = createNode(STRING , "STRING",(yyvsp[0].str),NULL, NULL);
        }
#line 2692 "c7synt.tab.c"
    break;

  case 99: /* constant: CHAR  */
#line 652 "c7synt.y"
               {
            if(PARSETREE) printf(" constant -> CHAR\n");
            (yyval.node) = createNode(CHAR , "CHAR",(yyvsp[0].str),NULL, NULL);
        }
#line 2701 "c7synt.tab.c"
    break;

  case 100: /* call: ID '(' arg-list ')'  */
#line 657 "c7synt.y"
                          {
        if(PARSETREE)printf(" call -> ID (args)\n");
        (yyval.node) = createNode(CALL , NULL,(yyvsp[-3].str),(yyvsp[-1].node), NULL);
        if(!skipScope){
            checkArgs((yyvsp[-3].str),(yyvsp[-1].node),line,col);
        }
    }
#line 2713 "c7synt.tab.c"
    break;

  case 101: /* arg-list: basic-exp  */
#line 665 "c7synt.y"
                    {
            if(PARSETREE) printf("arg-list");
            (yyval.node)=(yyvsp[0].node);
        }
#line 2722 "c7synt.tab.c"
    break;

  case 102: /* arg-list: arg-list ',' basic-exp  */
#line 669 "c7synt.y"
                                 {
            if(PARSETREE) printf("arg-list");
            (yyval.node) = createNode(ARG_LIST , NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node));
        }
#line 2731 "c7synt.tab.c"
    break;

  case 103: /* arg-list: %empty  */
#line 673 "c7synt.y"
                 {;}
#line 2737 "c7synt.tab.c"
    break;


#line 2741 "c7synt.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 677 "c7synt.y"



int yyerror(const char *s){
    printf("syntax error: %s , line: %d , col: %d, Error count %d\n",s, line, col, error_count);
    return 666;
}

int main( int argc, char **argv ) {
    ++argv, --argc;
    line= 1;
    col= 1;
    skipScope=0;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;

    initGlobalScope();

    yyparse();
    if(error_count==0) {
        printf(KMAG"\n\n::>ARVORE SINTATICA ABSTRATA<::\t\n"DFT);
        printTree(root,0);
    } else {
        printf(KMAG"\n\n::>ARVORE SINTATICA ABSTRATA<::\t\n"DFT);
        printf("\n\n Not showed due to Lexical or Syntactical errors. \t\n");
    }

    printf(KMAG"\n\n::>TABELA DE SIMBOLOS<::\t\n"DFT);
    printTable();

    printf(KMAG"\n\n::>TABELA DE PARAMETROS DE FUNCOES<::\t\n"DFT);
    printFunctionTable();

    printf(KMAG"\n\n::>CODIGO INTERMEDIARIO<::\t\n"DFT);
    printNewCode();

    fclose(yyin);
    yylex_destroy();

    freeVertex(root);
    freeTable();
    freeFunctionTable();
    pop();

    //the number of the beast
    return 666;

}
