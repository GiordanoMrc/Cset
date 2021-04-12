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

    extern int line;
    extern int col;
    int error_count=0;
    


#line 95 "c7synt.tab.c"

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
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_DIV = 11,                       /* DIV  */
  YYSYMBOL_MULT = 12,                      /* MULT  */
  YYSYMBOL_EQ = 13,                        /* EQ  */
  YYSYMBOL_NOT = 14,                       /* NOT  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_EQ_TO = 17,                     /* EQ_TO  */
  YYSYMBOL_NEQ_TO = 18,                    /* NEQ_TO  */
  YYSYMBOL_GT = 19,                        /* GT  */
  YYSYMBOL_LT = 20,                        /* LT  */
  YYSYMBOL_GTE = 21,                       /* GTE  */
  YYSYMBOL_LTE = 22,                       /* LTE  */
  YYSYMBOL_TYPE = 23,                      /* TYPE  */
  YYSYMBOL_24_ = 24,                       /* '('  */
  YYSYMBOL_25_ = 25,                       /* ')'  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '}'  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* ','  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_FORALL = 33,                    /* FORALL  */
  YYSYMBOL_IS_SET = 34,                    /* IS_SET  */
  YYSYMBOL_ADD = 35,                       /* ADD  */
  YYSYMBOL_IN = 36,                        /* IN  */
  YYSYMBOL_REMOVE = 37,                    /* REMOVE  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_EXISTS = 39,                    /* EXISTS  */
  YYSYMBOL_READ = 40,                      /* READ  */
  YYSYMBOL_WRITE = 41,                     /* WRITE  */
  YYSYMBOL_WRITELN = 42,                   /* WRITELN  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_begin = 44,                     /* begin  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_46_declaration_list = 46,       /* declaration-list  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_48_var_declaration = 48,        /* var-declaration  */
  YYSYMBOL_49_function_definition = 49,    /* function-definition  */
  YYSYMBOL_parameters = 50,                /* parameters  */
  YYSYMBOL_51_parameter_list = 51,         /* parameter-list  */
  YYSYMBOL_52_parameter_declaration = 52,  /* parameter-declaration  */
  YYSYMBOL_53_compound_stmt = 53,          /* compound-stmt  */
  YYSYMBOL_54_local_decls_stmts = 54,      /* local-decls-stmts  */
  YYSYMBOL_stmts = 55,                     /* stmts  */
  YYSYMBOL_stmt = 56,                      /* stmt  */
  YYSYMBOL_57_io_stmt = 57,                /* io-stmt  */
  YYSYMBOL_58_if_stmt = 58,                /* if-stmt  */
  YYSYMBOL_59_for_stmt = 59,               /* for-stmt  */
  YYSYMBOL_60_return_stmt = 60,            /* return-stmt  */
  YYSYMBOL_61_forall_stmt = 61,            /* forall-stmt  */
  YYSYMBOL_62_expression_stmt = 62,        /* expression-stmt  */
  YYSYMBOL_expression = 63,                /* expression  */
  YYSYMBOL_64_assign_exp = 64,             /* assign-exp  */
  YYSYMBOL_65_in_exp = 65,                 /* in-exp  */
  YYSYMBOL_66_basic_exp = 66,              /* basic-exp  */
  YYSYMBOL_67_logical_exp = 67,            /* logical-exp  */
  YYSYMBOL_68_add_exp = 68,                /* add-exp  */
  YYSYMBOL_term = 69,                      /* term  */
  YYSYMBOL_factor = 70,                    /* factor  */
  YYSYMBOL_71_set_exp = 71,                /* set-exp  */
  YYSYMBOL_constant = 72,                  /* constant  */
  YYSYMBOL_call = 73,                      /* call  */
  YYSYMBOL_74_arg_list = 74                /* arg-list  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      24,    25,     2,     2,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,   101,   107,   111,   116,   120,   126,   133,
     141,   145,   150,   155,   161,   167,   173,   177,   182,   186,
     192,   197,   201,   205,   210,   215,   220,   225,   229,   235,
     240,   245,   251,   255,   259,   265,   271,   277,   281,   287,
     291,   293,   298,   303,   308,   315,   320,   326,   331,   335,
     340,   346,   350,   355,   359,   363,   367,   371,   377,   381,
     385,   391,   395,   399,   406,   411,   416,   421,   426,   432,
     437,   442,   446,   452,   457,   462,   467,   472,   478,   483,
     487
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
  "INTEGER_CONST", "FLOAT_CONST", "EMPTY_CONST", "PLUS", "MINUS", "DIV",
  "MULT", "EQ", "NOT", "OR", "AND", "EQ_TO", "NEQ_TO", "GT", "LT", "GTE",
  "LTE", "TYPE", "'('", "')'", "'{'", "'}'", "';'", "','", "IF", "ELSE",
  "FOR", "FORALL", "IS_SET", "ADD", "IN", "REMOVE", "RETURN", "EXISTS",
  "READ", "WRITE", "WRITELN", "$accept", "begin", "program",
  "declaration-list", "declaration", "var-declaration",
  "function-definition", "parameters", "parameter-list",
  "parameter-declaration", "compound-stmt", "local-decls-stmts", "stmts",
  "stmt", "io-stmt", "if-stmt", "for-stmt", "return-stmt", "forall-stmt",
  "expression-stmt", "expression", "assign-exp", "in-exp", "basic-exp",
  "logical-exp", "add-exp", "term", "factor", "set-exp", "constant",
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
     275,   276,   277,   278,    40,    41,   123,   125,    59,    44,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291
};
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-18)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    27,    67,  -123,     6,  -123,  -123,  -123,   -12,  -123,
    -123,    47,  -123,    40,    52,    50,  -123,  -123,    71,    47,
      48,  -123,  -123,  -123,    81,  -123,  -123,  -123,  -123,   154,
     108,   190,  -123,   101,   104,   106,   110,   127,   133,   190,
     141,   145,   147,   148,  -123,  -123,   105,   103,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,   -11,  -123,   126,    21,     5,
     143,  -123,  -123,  -123,  -123,   214,  -123,   139,   -10,   190,
     190,   190,   190,   190,   190,    22,   190,   190,   190,   190,
    -123,  -123,  -123,   190,   190,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,  -123,  -123,     3,
    -123,   -15,    29,   -16,   149,   150,   155,   162,  -123,   165,
      34,    39,    44,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,    92,    92,  -123,  -123,  -123,   154,   103,
     190,   190,   190,   142,  -123,  -123,  -123,  -123,   171,   172,
     173,  -123,   174,    73,    95,  -123,  -123,  -123,  -123,  -123,
    -123,   103,   178,   190,  -123,   176,    89,   178,   103,  -123,
     175,  -123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     5,     7,     6,     0,     1,
       4,    11,     8,     0,     0,    10,    12,    14,     0,     0,
       0,     9,    13,    20,    65,    76,    73,    74,    75,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    23,     0,    16,    19,    21,
      24,    25,    22,    27,    26,     0,    41,    43,    47,    51,
      58,    61,    68,    66,    67,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    18,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,     0,
      64,     0,     0,    46,     0,     0,     0,     0,    36,     0,
       0,     0,     0,    42,    44,    48,    49,    52,    53,    54,
      55,    56,    57,    59,    60,    63,    62,    77,     0,     0,
       0,     0,     0,     0,    72,    69,    70,    71,     0,     0,
       0,    80,    32,     0,     0,    45,    37,    38,    29,    30,
      31,     0,     0,     0,    33,     0,     0,     0,     0,    34,
       0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,  -123,  -123,  -123,   169,   115,  -123,  -123,  -123,   189,
     -17,  -123,  -123,   -45,  -123,  -123,  -123,  -123,  -123,  -122,
     -31,    37,   -67,  -123,   -25,     4,    70,   -62,  -123,  -123,
    -123,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    44,     7,    14,    15,    16,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,   104,    57,    58,    59,    60,    61,    62,    63,
      64,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    21,    81,    98,    66,   105,   106,   107,    75,   109,
     129,   147,    11,    83,    83,   100,    12,    82,    83,    83,
     132,   130,    87,    88,    89,    90,    91,    92,   127,     1,
     155,     8,   128,   125,   126,   159,    85,    86,   101,   102,
     103,   103,   103,   103,    17,   103,   110,   111,   112,    23,
     108,    83,    24,    25,    26,    27,    28,   131,    83,   138,
     115,   116,    29,    83,   139,   145,   141,     9,    83,   140,
      13,    30,    31,    83,    20,   -17,    32,    18,    33,    19,
      34,    35,    36,    37,   142,    38,    39,    40,    41,    42,
      43,   117,   118,   119,   120,   121,   122,    20,   152,   143,
     144,   103,    83,    95,    96,    65,   154,    24,    25,    26,
      27,    28,    67,   160,   158,     6,   146,    29,    83,     6,
     113,   114,   156,   153,    83,    69,    30,    31,    70,    20,
      71,    32,    80,    33,    72,    34,    35,    36,    37,    84,
      38,    39,    40,    41,    42,    43,    24,    25,    26,    27,
      28,    73,    93,    94,    95,    96,    29,    74,    24,    25,
      26,    27,    28,   123,   124,    76,    31,    12,    20,    77,
      32,    78,    79,    10,   133,   134,    36,    37,    31,    38,
     135,    40,    24,    25,    26,    27,    28,   136,    36,    37,
     137,    38,    29,    40,    24,    25,    26,    27,    28,   148,
     149,   150,    31,   161,    29,   151,    32,   157,    22,     0,
       0,     0,    36,    37,    31,    38,     0,    40,    24,    25,
      26,    27,    28,     0,    36,    37,     0,    38,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    97,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
       0,    38,     0,    40
};

static const yytype_int16 yycheck[] =
{
      31,    18,    47,    65,    29,    72,    73,    74,    39,    76,
      25,   133,    24,    29,    29,    25,    28,    28,    29,    29,
      36,    36,    17,    18,    19,    20,    21,    22,    25,    23,
     152,     4,    29,    95,    96,   157,    15,    16,    69,    70,
      71,    72,    73,    74,     4,    76,    77,    78,    79,     1,
      28,    29,     4,     5,     6,     7,     8,    28,    29,    25,
      85,    86,    14,    29,    25,   132,   128,     0,    29,    25,
      23,    23,    24,    29,    26,    27,    28,    25,    30,    29,
      32,    33,    34,    35,   129,    37,    38,    39,    40,    41,
      42,    87,    88,    89,    90,    91,    92,    26,    25,   130,
     131,   132,    29,    11,    12,    24,   151,     4,     5,     6,
       7,     8,     4,   158,    25,     0,   133,    14,    29,     4,
      83,    84,   153,    28,    29,    24,    23,    24,    24,    26,
      24,    28,    27,    30,    24,    32,    33,    34,    35,    13,
      37,    38,    39,    40,    41,    42,     4,     5,     6,     7,
       8,    24,     9,    10,    11,    12,    14,    24,     4,     5,
       6,     7,     8,    93,    94,    24,    24,    28,    26,    24,
      28,    24,    24,     4,    25,    25,    34,    35,    24,    37,
      25,    39,     4,     5,     6,     7,     8,    25,    34,    35,
      25,    37,    14,    39,     4,     5,     6,     7,     8,    28,
      28,    28,    24,    28,    14,    31,    28,    31,    19,    -1,
      -1,    -1,    34,    35,    24,    37,    -1,    39,     4,     5,
       6,     7,     8,    -1,    34,    35,    -1,    37,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    44,    45,    46,    47,    48,    49,     4,     0,
      47,    24,    28,    23,    50,    51,    52,     4,    25,    29,
      26,    53,    52,     1,     4,     5,     6,     7,     8,    14,
      23,    24,    28,    30,    32,    33,    34,    35,    37,    38,
      39,    40,    41,    42,    48,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    66,    67,    68,
      69,    70,    71,    72,    73,    24,    67,     4,    63,    24,
      24,    24,    24,    24,    24,    63,    24,    24,    24,    24,
      27,    56,    28,    29,    13,    15,    16,    17,    18,    19,
      20,    21,    22,     9,    10,    11,    12,    25,    70,    74,
      25,    63,    63,    63,    65,    65,    65,    65,    28,    65,
      63,    63,    63,    64,    64,    67,    67,    68,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    25,    29,    25,
      36,    28,    36,    25,    25,    25,    25,    25,    25,    25,
      25,    70,    56,    63,    63,    65,    53,    62,    28,    28,
      28,    31,    25,    28,    56,    62,    63,    31,    25,    62,
      56,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    46,    46,    47,    47,    48,    49,
      50,    50,    51,    51,    52,    53,    54,    54,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      57,    57,    58,    58,    58,    59,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    69,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    74,
      74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     6,
       1,     0,     1,     3,     2,     3,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     5,     5,     7,     9,    10,     3,     5,     5,     2,
       1,     1,     3,     1,     3,     3,     1,     1,     3,     3,
       2,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     1,     1,     4,
       4,     4,     4,     1,     1,     1,     1,     4,     3,     1,
       3
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
#line 95 "c7synt.y"
              {
    (yyval.node) = createNode(PROGRAM,NULL,NULL,(yyvsp[0].node),NULL,NULL,NULL);
    root = (yyval.node);
    }
#line 1668 "c7synt.tab.c"
    break;

  case 3: /* program: declaration-list  */
#line 101 "c7synt.y"
                          {
        (yyval.node) = createNode(DECLARATION_LIST,NULL,NULL,(yyvsp[0].node),NULL,NULL,NULL);
        if(PARSETREE) printf("begin ->program\n\n\n - end of parse tree - \n");
    }
#line 1677 "c7synt.tab.c"
    break;

  case 4: /* declaration-list: declaration-list declaration  */
#line 107 "c7synt.y"
                                               {
                        if (PARSETREE) printf("declaration-list -> declaration-list declaration \n");
                        (yyval.node) = createNode(DECLARATION_LIST,NULL,NULL,(yyvsp[-1].node),(yyvsp[0].node),NULL,NULL);
                    }
#line 1686 "c7synt.tab.c"
    break;

  case 5: /* declaration-list: declaration  */
#line 111 "c7synt.y"
                              {
                        if(PARSETREE) printf("declaration-list -> declaration\n");
                        (yyval.node) = (yyvsp[0].node);   
                    }
#line 1695 "c7synt.tab.c"
    break;

  case 6: /* declaration: function-definition  */
#line 116 "c7synt.y"
                                 {
                if(PARSETREE) printf("declaration -> function-definition\n");
                (yyval.node) = (yyvsp[0].node);
            }
#line 1704 "c7synt.tab.c"
    break;

  case 7: /* declaration: var-declaration  */
#line 120 "c7synt.y"
                             {
                if(PARSETREE) printf("declaration -> var-declaration\n");
                (yyval.node) = (yyvsp[0].node);
            }
#line 1713 "c7synt.tab.c"
    break;

  case 8: /* var-declaration: TYPE ID ';'  */
#line 126 "c7synt.y"
                             {
        if(PARSETREE) printf("var-declaration -> type ID\n");
        (yyval.node) = createNode(VAR_DECLARATION, (yyvsp[-2].str) , (yyvsp[-1].str), NULL , NULL , NULL, NULL);
        add_entry((yyvsp[-1].str),(yyvsp[-2].str),VAR);
    }
#line 1723 "c7synt.tab.c"
    break;

  case 9: /* function-definition: TYPE ID '(' parameters ')' compound-stmt  */
#line 133 "c7synt.y"
                                                               {
        if(PARSETREE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        (yyval.node) = createNode(FUNCTION_DEFINITION ,(yyvsp[-5].str), (yyvsp[-4].str),  (yyvsp[-2].node) , (yyvsp[0].node), NULL, NULL);   
        add_entry((yyvsp[-4].str),(yyvsp[-5].str),FUNC);
    }
#line 1733 "c7synt.tab.c"
    break;

  case 10: /* parameters: parameter-list  */
#line 141 "c7synt.y"
                           {
        if(PARSETREE) printf("parameters -> param-list\n");
            (yyval.node) = (yyvsp[0].node);
        }
#line 1742 "c7synt.tab.c"
    break;

  case 11: /* parameters: %empty  */
#line 145 "c7synt.y"
                 { 
            if(PARSETREE) printf("empty\n");
            (yyval.node) = NULL;
        }
#line 1751 "c7synt.tab.c"
    break;

  case 12: /* parameter-list: parameter-declaration  */
#line 150 "c7synt.y"
                                      {
        if(PARSETREE) printf("parameter-list -> parameter-declaration\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 1761 "c7synt.tab.c"
    break;

  case 13: /* parameter-list: parameter-list ',' parameter-declaration  */
#line 155 "c7synt.y"
                                               {
        if(PARSETREE) printf("parameter-list -> parameter-list ',' parameter-declaration\n");
        (yyval.node) = createNode(PARAMETER_LIST , NULL, NULL ,(yyvsp[-2].node), (yyvsp[0].node) , NULL , NULL);

    }
#line 1771 "c7synt.tab.c"
    break;

  case 14: /* parameter-declaration: TYPE ID  */
#line 161 "c7synt.y"
                               {
        if(PARSETREE) printf("parameter-declaration -> type ID\n");
        (yyval.node) = createNode(PARAMETER_DECL, (yyvsp[-1].str),(yyvsp[0].str), NULL, NULL,NULL,NULL);
        add_entry((yyvsp[0].str),(yyvsp[-1].str),PARAM);
    }
#line 1781 "c7synt.tab.c"
    break;

  case 15: /* compound-stmt: '{' local-decls-stmts '}'  */
#line 167 "c7synt.y"
                                        {
        if(PARSETREE) printf("C-stmt -> '{' local-decls-stmts'}'\n");
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1790 "c7synt.tab.c"
    break;

  case 16: /* local-decls-stmts: stmts  */
#line 173 "c7synt.y"
                          {
        if (PARSETREE) printf("local-stmts -> stmts\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 1799 "c7synt.tab.c"
    break;

  case 17: /* local-decls-stmts: %empty  */
#line 177 "c7synt.y"
             {
        if(PARSETREE) printf("empty\n");
        (yyval.node) = NULL;
    }
#line 1808 "c7synt.tab.c"
    break;

  case 18: /* stmts: stmts stmt  */
#line 182 "c7synt.y"
                  {
        if(PARSETREE) printf("stmts -> stmts stmt\n");
        (yyval.node) = createNode(STMTS , NULL ,NULL,(yyvsp[-1].node), (yyvsp[0].node),NULL,NULL);
    }
#line 1817 "c7synt.tab.c"
    break;

  case 19: /* stmts: stmt  */
#line 186 "c7synt.y"
           {
        if(PARSETREE) printf("stmts -> stmts stmt\n");
        (yyvsp[0].node) = createNode(STMT , NULL ,NULL,(yyvsp[0].node), NULL,NULL,NULL);
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 1828 "c7synt.tab.c"
    break;

  case 20: /* stmts: error  */
#line 192 "c7synt.y"
            {
        (yyval.node)= NULL;
        error_count++;
    }
#line 1837 "c7synt.tab.c"
    break;

  case 21: /* stmt: io-stmt  */
#line 197 "c7synt.y"
              {
        if(PARSETREE) printf("stmt -> io-stmt\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 1846 "c7synt.tab.c"
    break;

  case 22: /* stmt: return-stmt  */
#line 201 "c7synt.y"
                  {
        if(PARSETREE) printf("stmt -> return-stmt\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 1855 "c7synt.tab.c"
    break;

  case 23: /* stmt: compound-stmt  */
#line 205 "c7synt.y"
                    {
        if(PARSETREE) printf("stmt -> cp-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 1865 "c7synt.tab.c"
    break;

  case 24: /* stmt: if-stmt  */
#line 210 "c7synt.y"
              {
        if(PARSETREE) printf("stmt -> if-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 1875 "c7synt.tab.c"
    break;

  case 25: /* stmt: for-stmt  */
#line 215 "c7synt.y"
               {
        if(PARSETREE) printf("stmt -> for-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 1885 "c7synt.tab.c"
    break;

  case 26: /* stmt: expression-stmt  */
#line 220 "c7synt.y"
                      {
        if(PARSETREE) printf("stmt -> expression-stmt\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 1895 "c7synt.tab.c"
    break;

  case 27: /* stmt: forall-stmt  */
#line 225 "c7synt.y"
                  {
        if(PARSETREE) printf("stmt -> forall-stmt\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 1904 "c7synt.tab.c"
    break;

  case 28: /* stmt: var-declaration  */
#line 229 "c7synt.y"
                      {
        if(PARSETREE) printf("stmt -> var-decl\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 1913 "c7synt.tab.c"
    break;

  case 29: /* io-stmt: READ '(' expression ')' ';'  */
#line 235 "c7synt.y"
                                     {
            if(PARSETREE) printf("io-stmt -> read ( exp ) \n");
            (yyval.node) = createNode(IO_STMT , NULL ,NULL,(yyvsp[-2].node), NULL,NULL,NULL);
            
        }
#line 1923 "c7synt.tab.c"
    break;

  case 30: /* io-stmt: WRITE '(' expression ')' ';'  */
#line 240 "c7synt.y"
                                       {
           if(PARSETREE) printf("io-stmt -> write ( exp ) \n");
           (yyval.node) = createNode(IO_STMT , NULL ,NULL,(yyvsp[-2].node), NULL,NULL,NULL);

        }
#line 1933 "c7synt.tab.c"
    break;

  case 31: /* io-stmt: WRITELN '(' expression ')' ';'  */
#line 245 "c7synt.y"
                                        {
           if(PARSETREE) printf("io-stmt -> writeln ( exp )\n");
           (yyval.node) = createNode(IO_STMT , NULL ,NULL,(yyvsp[-2].node), NULL,NULL,NULL);
        }
#line 1942 "c7synt.tab.c"
    break;

  case 32: /* if-stmt: IF '(' expression ')' stmt  */
#line 251 "c7synt.y"
                                                        {
            if(PARSETREE) printf("if-stmt\n");
            (yyval.node) = createNode(IF_STMT , NULL ,NULL,(yyvsp[-2].node),(yyvsp[0].node),NULL,NULL);
        }
#line 1951 "c7synt.tab.c"
    break;

  case 33: /* if-stmt: IF '(' expression ')' stmt ELSE stmt  */
#line 255 "c7synt.y"
                                                 {
           if(PARSETREE) printf("if-stmt\n");
           (yyval.node) = createNode(IF_STMT , NULL ,NULL,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),NULL);
       }
#line 1960 "c7synt.tab.c"
    break;

  case 34: /* if-stmt: IF '(' expression IN expression ')' expression-stmt ELSE expression-stmt  */
#line 259 "c7synt.y"
                                                                                 {
            if(PARSETREE) printf("if-stmt\n");
            (yyval.node) = createNode(IF_STMT , NULL ,NULL,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));
       }
#line 1969 "c7synt.tab.c"
    break;

  case 35: /* for-stmt: FOR '(' expression ';' expression ';' expression ')' stmt ';'  */
#line 265 "c7synt.y"
                                                                        {
        if(PARSETREE) printf("for-stmt -> for\n");
        (yyval.node) = createNode(FOR_STMT , NULL ,NULL,(yyvsp[-7].node),(yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node));
    }
#line 1978 "c7synt.tab.c"
    break;

  case 36: /* return-stmt: RETURN expression ';'  */
#line 271 "c7synt.y"
                                   {
        if(PARSETREE) printf("return-stmt -> return exp ;\n");
        (yyval.node) = createNode(RETURN_STMT , NULL,NULL,(yyvsp[-1].node), NULL,NULL,NULL);
    }
#line 1987 "c7synt.tab.c"
    break;

  case 37: /* forall-stmt: FORALL '(' in-exp ')' compound-stmt  */
#line 277 "c7synt.y"
                                                 {
        if(PARSETREE) printf("forall-stmt ->FORALL (in-exp) compound\n");
        (yyval.node) = createNode(FORALL_STMT, NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 1996 "c7synt.tab.c"
    break;

  case 38: /* forall-stmt: FORALL '(' in-exp ')' expression-stmt  */
#line 281 "c7synt.y"
                                            {
        if(PARSETREE) printf("forall-stmt -> FORALL ( in-exp )\n");
       (yyval.node) = createNode(FORALL_STMT , NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2005 "c7synt.tab.c"
    break;

  case 39: /* expression-stmt: expression ';'  */
#line 287 "c7synt.y"
                                    {
        if(PARSETREE) printf("expression-stmt -> expression ;\n");
        (yyval.node) =(yyvsp[-1].node);
    }
#line 2014 "c7synt.tab.c"
    break;

  case 40: /* expression-stmt: ';'  */
#line 291 "c7synt.y"
          { (yyval.node) =NULL;}
#line 2020 "c7synt.tab.c"
    break;

  case 41: /* expression: assign-exp  */
#line 293 "c7synt.y"
                        {
        if(PARSETREE) printf("expression-> assign \n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2030 "c7synt.tab.c"
    break;

  case 42: /* expression: expression ',' assign-exp  */
#line 298 "c7synt.y"
                                 {
        if(PARSETREE) printf("expression -> exp , assign\n");
        (yyval.node) = createNode(EXPRESSION , NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2039 "c7synt.tab.c"
    break;

  case 43: /* assign-exp: basic-exp  */
#line 303 "c7synt.y"
                      {
        if(PARSETREE) printf("assign-exp -> basic-exp\n");
        (yyval.node) = (yyvsp[0].node);
        
    }
#line 2049 "c7synt.tab.c"
    break;

  case 44: /* assign-exp: basic-exp EQ assign-exp  */
#line 308 "c7synt.y"
                              {
        if (PARSETREE) printf("assign -> ID EQ assign\n");
        (yyval.node) = createNode(ASSIGN , (yyvsp[-1].str) ,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
       
    }
#line 2059 "c7synt.tab.c"
    break;

  case 45: /* in-exp: expression IN in-exp  */
#line 315 "c7synt.y"
                             {
        if(PARSETREE) printf("in-exp -> expression IN in-exp\n");
        (yyval.node) = createNode(IN_OP,NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);

    }
#line 2069 "c7synt.tab.c"
    break;

  case 46: /* in-exp: expression  */
#line 320 "c7synt.y"
                 {
        if(PARSETREE) printf("in-exp -> expression\n");
        (yyval.node) = (yyvsp[0].node);

    }
#line 2079 "c7synt.tab.c"
    break;

  case 47: /* basic-exp: logical-exp  */
#line 326 "c7synt.y"
                       {
        if(PARSETREE) printf("basic-exp -> logical\n");
        (yyval.node) = (yyvsp[0].node);
 
    }
#line 2089 "c7synt.tab.c"
    break;

  case 48: /* basic-exp: logical-exp OR logical-exp  */
#line 331 "c7synt.y"
                                 {
        if(PARSETREE) printf("basic-exp -> logical OR logical\n");
        (yyval.node) = createNode(BASIC_OP , (yyvsp[-1].str) ,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2098 "c7synt.tab.c"
    break;

  case 49: /* basic-exp: logical-exp AND logical-exp  */
#line 335 "c7synt.y"
                                  {
        if(PARSETREE) printf("basic-exp -> logical AND logical\n");
        (yyval.node) = createNode(BASIC_OP , (yyvsp[-1].str) ,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);

    }
#line 2108 "c7synt.tab.c"
    break;

  case 50: /* basic-exp: NOT logical-exp  */
#line 340 "c7synt.y"
                      {
        if(PARSETREE) printf("basic-exp -> NOT logical\n");
        (yyval.node) = createNode(BASIC_OP,(yyvsp[-1].str),NULL,(yyvsp[0].node), NULL,NULL,NULL);
    }
#line 2117 "c7synt.tab.c"
    break;

  case 51: /* logical-exp: add-exp  */
#line 346 "c7synt.y"
                     {
        if(PARSETREE) printf(" basic-exp -> add-exp\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2126 "c7synt.tab.c"
    break;

  case 52: /* logical-exp: add-exp EQ_TO add-exp  */
#line 350 "c7synt.y"
                            {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(BASIC_OP, (yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);

    }
#line 2136 "c7synt.tab.c"
    break;

  case 53: /* logical-exp: add-exp NEQ_TO add-exp  */
#line 355 "c7synt.y"
                             {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(BASIC_OP, (yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2145 "c7synt.tab.c"
    break;

  case 54: /* logical-exp: add-exp GT add-exp  */
#line 359 "c7synt.y"
                         {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(BASIC_OP, (yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2154 "c7synt.tab.c"
    break;

  case 55: /* logical-exp: add-exp LT add-exp  */
#line 363 "c7synt.y"
                         {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
       (yyval.node) = createNode(BASIC_OP, (yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2163 "c7synt.tab.c"
    break;

  case 56: /* logical-exp: add-exp GTE add-exp  */
#line 367 "c7synt.y"
                          {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(BASIC_OP, (yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2172 "c7synt.tab.c"
    break;

  case 57: /* logical-exp: add-exp LTE add-exp  */
#line 371 "c7synt.y"
                          {
        if(PARSETREE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        (yyval.node) = createNode(BASIC_OP , NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2181 "c7synt.tab.c"
    break;

  case 58: /* add-exp: term  */
#line 377 "c7synt.y"
              {
            if(PARSETREE)printf(" add-exp -> term\n");
            (yyval.node) = (yyvsp[0].node);
        }
#line 2190 "c7synt.tab.c"
    break;

  case 59: /* add-exp: term PLUS term  */
#line 381 "c7synt.y"
                         {
            if(PARSETREE)printf(" add-exp -> term PLUS term\n");
            (yyval.node) = createNode(BASIC_OP , (yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
        }
#line 2199 "c7synt.tab.c"
    break;

  case 60: /* add-exp: term MINUS term  */
#line 385 "c7synt.y"
                          {
            if(PARSETREE) printf(" add-exp -> term MINUS term\n");
            (yyval.node) = createNode(BASIC_OP , NULL,(yyvsp[-1].str),(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
 
        }
#line 2209 "c7synt.tab.c"
    break;

  case 61: /* term: factor  */
#line 391 "c7synt.y"
             {
        if(PARSETREE) printf(" term -> factor\n");
        (yyval.node) = (yyvsp[0].node);
    }
#line 2218 "c7synt.tab.c"
    break;

  case 62: /* term: term MULT factor  */
#line 395 "c7synt.y"
                       {
        if(PARSETREE) printf(" term -> term mul-op factor\n");
        (yyval.node) = createNode(BASIC_OP ,(yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
    }
#line 2227 "c7synt.tab.c"
    break;

  case 63: /* term: term DIV factor  */
#line 399 "c7synt.y"
                      {
        if(PARSETREE) printf(" term -> term mul-op factor\n");
        (yyval.node) = createNode(BASIC_OP ,(yyvsp[-1].str),NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);

    }
#line 2237 "c7synt.tab.c"
    break;

  case 64: /* factor: '(' expression ')'  */
#line 406 "c7synt.y"
                           {
        if(PARSETREE) printf(" factor -> ( expression )\n");
        (yyval.node) = (yyvsp[-1].node);

    }
#line 2247 "c7synt.tab.c"
    break;

  case 65: /* factor: ID  */
#line 411 "c7synt.y"
         {
        if(PARSETREE) printf(" factor -> ID\n");
        (yyval.node) = createNode(IDENT , NULL,(yyvsp[0].str),NULL, NULL,NULL,NULL);

    }
#line 2257 "c7synt.tab.c"
    break;

  case 66: /* factor: constant  */
#line 416 "c7synt.y"
               {
        if(PARSETREE) printf(" factor -> constant\n");
        (yyval.node) = (yyvsp[0].node);

    }
#line 2267 "c7synt.tab.c"
    break;

  case 67: /* factor: call  */
#line 421 "c7synt.y"
           {
        if(PARSETREE) printf("factor -> call\n");
        (yyval.node) = (yyvsp[0].node);
    
    }
#line 2277 "c7synt.tab.c"
    break;

  case 68: /* factor: set-exp  */
#line 426 "c7synt.y"
              {
        if(PARSETREE) printf(" factor -> set-exp\n");
        (yyval.node) = (yyvsp[0].node);

    }
#line 2287 "c7synt.tab.c"
    break;

  case 69: /* set-exp: ADD '(' in-exp ')'  */
#line 432 "c7synt.y"
                             {
        if(PARSETREE) printf(" set-op -> ADD (in-exp)\n");
        (yyval.node) = (yyvsp[-1].node);
    
    }
#line 2297 "c7synt.tab.c"
    break;

  case 70: /* set-exp: REMOVE '(' in-exp ')'  */
#line 437 "c7synt.y"
                            {
        if(PARSETREE) printf(" set-op -> REMOVE (in-exp)\n");
        (yyval.node) = (yyvsp[-1].node);
        
    }
#line 2307 "c7synt.tab.c"
    break;

  case 71: /* set-exp: EXISTS '(' in-exp ')'  */
#line 442 "c7synt.y"
                            {
        if(PARSETREE) printf(" set-op -> EXISTS (in-exp)\n");
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2316 "c7synt.tab.c"
    break;

  case 72: /* set-exp: IS_SET '(' in-exp ')'  */
#line 446 "c7synt.y"
                            {
        if(PARSETREE) printf(" set-op -> IS_SET (in-exp)\n");
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2325 "c7synt.tab.c"
    break;

  case 73: /* constant: INTEGER_CONST  */
#line 452 "c7synt.y"
                        {
            if(PARSETREE)printf(" constant -> INTEGER_CONST\n");
            (yyval.node) = createNode(CONST , NULL,(yyvsp[0].str),NULL, NULL,NULL,NULL);
             
        }
#line 2335 "c7synt.tab.c"
    break;

  case 74: /* constant: FLOAT_CONST  */
#line 457 "c7synt.y"
                      {
            if(PARSETREE) printf(" constant -> FLOAT_CONST\n");
            (yyval.node) = createNode(CONST , NULL,(yyvsp[0].str),NULL, NULL,NULL,NULL);
             
        }
#line 2345 "c7synt.tab.c"
    break;

  case 75: /* constant: EMPTY_CONST  */
#line 462 "c7synt.y"
                      {
            if(PARSETREE) printf(" constant -> EMPTY_CONST\n");
            (yyval.node) = createNode(CONST , NULL,(yyvsp[0].str),NULL, NULL,NULL,NULL);
             
        }
#line 2355 "c7synt.tab.c"
    break;

  case 76: /* constant: STRING  */
#line 467 "c7synt.y"
                 {
            if(PARSETREE) printf(" constant -> STRING\n");
            (yyval.node) = createNode(CONST , NULL,(yyvsp[0].str),NULL, NULL,NULL,NULL);   
        }
#line 2364 "c7synt.tab.c"
    break;

  case 77: /* call: ID '(' arg-list ')'  */
#line 472 "c7synt.y"
                          {
        if(PARSETREE)printf(" call -> ID (args)\n");
        (yyval.node) = createNode(CALL , NULL,(yyvsp[-3].str),(yyvsp[-1].node), NULL,NULL,NULL);
         
         
    }
#line 2375 "c7synt.tab.c"
    break;

  case 78: /* call: ID '(' ')'  */
#line 478 "c7synt.y"
                {
        if(PARSETREE)printf(" call -> ID (args)\n");
        (yyval.node) = createNode(CALL , NULL,(yyvsp[-2].str),NULL, NULL,NULL,NULL);
    }
#line 2384 "c7synt.tab.c"
    break;

  case 79: /* arg-list: factor  */
#line 483 "c7synt.y"
                 {
            if(PARSETREE) printf("arg-list");
            (yyval.node)=(yyvsp[0].node);
        }
#line 2393 "c7synt.tab.c"
    break;

  case 80: /* arg-list: arg-list ',' factor  */
#line 487 "c7synt.y"
                              {
            if(PARSETREE) printf("arg-list");
            (yyval.node) = createNode(ARG_LIST , NULL,NULL,(yyvsp[-2].node), (yyvsp[0].node),NULL,NULL);
        }
#line 2402 "c7synt.tab.c"
    break;


#line 2406 "c7synt.tab.c"

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

#line 494 "c7synt.y"



int yyerror(const char *s){
    printf("yyerror: %s , line: %d , col: %d \n",s, line, col);
    return 10;
}

int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    
    yyparse();

    if(error_count!=0) {
        printf(YEL"\n\n___________________________ARVORE SINTATICA ABSTRATA_______________________________\t\n"DFT);
        printTree(root,0);
        printf(BLU"\n\n___________________________TABELA DE SIMBOLOS______________________________________\t\n"DFT);
        printTable();
    }
    if (!root) freeVertex(root);
    fclose(yyin);
    yylex_destroy();
    return 0;

}
