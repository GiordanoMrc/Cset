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
    #include "ast.h"
    
    // define
    #define VERBOSE 0

    // extern vars
    extern int yylex();
    extern int yyparse();
    extern int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;

    // root
    vertex* root;


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
  YYSYMBOL_INT = 23,                       /* INT  */
  YYSYMBOL_FLOAT = 24,                     /* FLOAT  */
  YYSYMBOL_ELEM = 25,                      /* ELEM  */
  YYSYMBOL_SET = 26,                       /* SET  */
  YYSYMBOL_27_ = 27,                       /* '('  */
  YYSYMBOL_28_ = 28,                       /* ')'  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_FORALL = 36,                    /* FORALL  */
  YYSYMBOL_IS_SET = 37,                    /* IS_SET  */
  YYSYMBOL_ADD = 38,                       /* ADD  */
  YYSYMBOL_IN = 39,                        /* IN  */
  YYSYMBOL_REMOVE = 40,                    /* REMOVE  */
  YYSYMBOL_RETURN = 41,                    /* RETURN  */
  YYSYMBOL_EXISTS = 42,                    /* EXISTS  */
  YYSYMBOL_READ = 43,                      /* READ  */
  YYSYMBOL_WRITE = 44,                     /* WRITE  */
  YYSYMBOL_WRITELN = 45,                   /* WRITELN  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_48_declaration_list = 48,       /* declaration-list  */
  YYSYMBOL_declaration = 49,               /* declaration  */
  YYSYMBOL_50_var_declaration = 50,        /* var-declaration  */
  YYSYMBOL_51_function_definition = 51,    /* function-definition  */
  YYSYMBOL_type = 52,                      /* type  */
  YYSYMBOL_parameters = 53,                /* parameters  */
  YYSYMBOL_54_parameter_list = 54,         /* parameter-list  */
  YYSYMBOL_55_parameter_declaration = 55,  /* parameter-declaration  */
  YYSYMBOL_56_compound_stmt = 56,          /* compound-stmt  */
  YYSYMBOL_57_local_decls_stmts = 57,      /* local-decls-stmts  */
  YYSYMBOL_stmts = 58,                     /* stmts  */
  YYSYMBOL_stmt = 59,                      /* stmt  */
  YYSYMBOL_60_io_stmt = 60,                /* io-stmt  */
  YYSYMBOL_61_if_stmt = 61,                /* if-stmt  */
  YYSYMBOL_62_for_stmt = 62,               /* for-stmt  */
  YYSYMBOL_63_return_stmt = 63,            /* return-stmt  */
  YYSYMBOL_64_forall_stmt = 64,            /* forall-stmt  */
  YYSYMBOL_65_expression_stmt = 65,        /* expression-stmt  */
  YYSYMBOL_expression = 66,                /* expression  */
  YYSYMBOL_67_assign_exp = 67,             /* assign-exp  */
  YYSYMBOL_68_in_exp = 68,                 /* in-exp  */
  YYSYMBOL_69_basic_exp = 69,              /* basic-exp  */
  YYSYMBOL_70_logical_exp = 70,            /* logical-exp  */
  YYSYMBOL_71_add_exp = 71,                /* add-exp  */
  YYSYMBOL_term = 72,                      /* term  */
  YYSYMBOL_factor = 73,                    /* factor  */
  YYSYMBOL_74_set_exp = 74,                /* set-exp  */
  YYSYMBOL_constant = 75,                  /* constant  */
  YYSYMBOL_call = 76,                      /* call  */
  YYSYMBOL_77_arg_list = 77                /* arg-list  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      27,    28,     2,     2,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      25,    26,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,   100,   106,   112,   117,   124,   132,   141,
     146,   151,   156,   163,   168,   173,   178,   185,   193,   200,
     205,   210,   216,   222,   228,   233,   238,   243,   248,   253,
     258,   265,   270,   276,   283,   289,   296,   306,   316,   323,
     329,   337,   342,   344,   349,   356,   361,   368,   374,   380,
     385,   392,   399,   407,   412,   419,   426,   433,   440,   447,
     456,   461,   468,   476,   481,   488,   497,   502,   507,   512,
     517,   523,   528,   533,   538,   545,   550,   555,   560,   566,
     572,   577,   582
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
  "LTE", "INT", "FLOAT", "ELEM", "SET", "'('", "')'", "'{'", "'}'", "';'",
  "','", "IF", "ELSE", "FOR", "FORALL", "IS_SET", "ADD", "IN", "REMOVE",
  "RETURN", "EXISTS", "READ", "WRITE", "WRITELN", "$accept", "program",
  "declaration-list", "declaration", "var-declaration",
  "function-definition", "type", "parameters", "parameter-list",
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
     275,   276,   277,   278,   279,   280,   281,    40,    41,   123,
     125,    59,    44,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294
};
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      97,  -110,  -110,  -110,  -110,    17,    97,  -110,  -110,  -110,
      18,  -110,  -110,    -8,    97,  -110,    26,    24,    35,  -110,
    -110,    43,    97,   104,  -110,  -110,    -1,  -110,  -110,  -110,
    -110,   174,   158,  -110,    50,    63,   105,   107,   109,   111,
     158,   116,   128,   134,   144,  -110,    79,  -110,   145,   104,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,    -3,  -110,  -110,
      66,    75,   147,  -110,  -110,  -110,  -110,   158,    31,   149,
    -110,    32,   158,   158,   158,   158,   158,   158,    67,   158,
     158,   158,   158,   143,  -110,  -110,  -110,   158,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
    -110,  -110,  -110,    42,  -110,   -14,    74,   -19,   159,   169,
     171,   175,  -110,   176,    47,    56,    72,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,   114,   114,  -110,  -110,
    -110,   174,   104,   158,   158,   158,    49,  -110,  -110,  -110,
    -110,   177,   178,   179,  -110,   168,    85,   136,  -110,  -110,
    -110,  -110,  -110,  -110,   104,   146,   158,  -110,   172,    87,
     146,   104,  -110,   182,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    10,    12,    11,     0,     2,     4,     6,     5,
       0,     1,     3,     0,    14,     7,     0,     0,    13,    15,
      17,     0,     0,    20,     8,    16,    67,    78,    75,    76,
      77,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,    25,     0,    19,
      22,    23,    26,    27,    24,    29,    28,     0,    43,    45,
      49,    53,    60,    63,    70,    68,    69,     0,     0,    67,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    21,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    80,    81,     0,    66,     0,     0,    48,     0,     0,
       0,     0,    38,     0,     0,     0,     0,    44,    50,    51,
      54,    55,    56,    57,    58,    59,    61,    62,    65,    64,
      79,     0,     0,     0,     0,     0,     0,    74,    71,    72,
      73,     0,     0,     0,    82,    34,     0,     0,    47,    39,
      40,    31,    32,    33,     0,     0,     0,    35,     0,     0,
       0,     0,    36,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,   199,    15,  -110,    10,  -110,  -110,   185,
     -20,  -110,  -110,   -47,  -110,  -110,  -110,  -110,  -110,  -109,
     -32,   -56,   -70,  -110,   -27,    99,    73,   -65,  -110,  -110,
    -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    45,     9,    46,    17,    18,    19,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,   108,    59,    60,    61,    62,    63,    64,    65,
      66,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    24,    85,   102,    70,   109,   110,   111,    78,   113,
      10,   100,    67,    87,   132,     8,    10,    11,    87,    14,
     135,     8,    13,    15,    16,   133,    68,   150,    86,    87,
      20,   117,    16,   128,   129,    69,    27,    28,    29,    30,
     105,   106,   107,   107,   107,   107,   158,   107,   114,   115,
     116,   162,    21,    26,    27,    28,    29,    30,    32,   101,
     104,   118,   119,    31,    87,   148,   144,    22,    37,    38,
     130,    39,    23,    41,   131,   141,    32,    72,    23,    87,
      33,    88,    89,    83,   142,   145,    37,    38,    87,    39,
      73,    41,    90,    91,    92,    93,    94,    95,   112,    87,
     143,   146,   147,   107,    87,   134,    87,   157,    26,    27,
      28,    29,    30,   155,   163,   161,   149,    87,    31,    87,
       1,     2,     3,     4,   159,    98,    99,     1,     2,     3,
       4,    32,    74,    23,    75,    33,    76,    34,    77,    35,
      36,    37,    38,    79,    39,    40,    41,    42,    43,    44,
      26,    27,    28,    29,    30,    80,    96,    97,    98,    99,
      31,    81,    26,    27,    28,    29,    30,   156,    87,   126,
     127,    82,    31,    32,    15,    84,    68,    33,    69,    27,
      28,    29,    30,    37,    38,    32,    39,   136,    41,   120,
     121,   122,   123,   124,   125,    37,    38,   137,    39,   138,
      41,    32,   154,   139,   140,    12,   160,    25,   151,   152,
     153,    37,    38,   164,    39,     0,    41
};

static const yytype_int16 yycheck[] =
{
      32,    21,    49,    68,    31,    75,    76,    77,    40,    79,
       0,    67,    13,    32,    28,     0,     6,     0,    32,    27,
      39,     6,     4,    31,    14,    39,    27,   136,    31,    32,
       4,    87,    22,    98,    99,     4,     5,     6,     7,     8,
      72,    73,    74,    75,    76,    77,   155,    79,    80,    81,
      82,   160,    28,     4,     5,     6,     7,     8,    27,    28,
      28,    88,    89,    14,    32,   135,   131,    32,    37,    38,
      28,    40,    29,    42,    32,    28,    27,    27,    29,    32,
      31,    15,    16,     4,    28,   132,    37,    38,    32,    40,
      27,    42,    17,    18,    19,    20,    21,    22,    31,    32,
      28,   133,   134,   135,    32,    31,    32,   154,     4,     5,
       6,     7,     8,    28,   161,    28,   136,    32,    14,    32,
      23,    24,    25,    26,   156,    11,    12,    23,    24,    25,
      26,    27,    27,    29,    27,    31,    27,    33,    27,    35,
      36,    37,    38,    27,    40,    41,    42,    43,    44,    45,
       4,     5,     6,     7,     8,    27,     9,    10,    11,    12,
      14,    27,     4,     5,     6,     7,     8,    31,    32,    96,
      97,    27,    14,    27,    31,    30,    27,    31,     4,     5,
       6,     7,     8,    37,    38,    27,    40,    28,    42,    90,
      91,    92,    93,    94,    95,    37,    38,    28,    40,    28,
      42,    27,    34,    28,    28,     6,    34,    22,    31,    31,
      31,    37,    38,    31,    40,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    24,    25,    26,    47,    48,    49,    50,    51,
      52,     0,    49,     4,    27,    31,    52,    53,    54,    55,
       4,    28,    32,    29,    56,    55,     4,     5,     6,     7,
       8,    14,    27,    31,    33,    35,    36,    37,    38,    40,
      41,    42,    43,    44,    45,    50,    52,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    69,
      70,    71,    72,    73,    74,    75,    76,    13,    27,     4,
      70,    66,    27,    27,    27,    27,    27,    27,    66,    27,
      27,    27,    27,     4,    30,    59,    31,    32,    15,    16,
      17,    18,    19,    20,    21,    22,     9,    10,    11,    12,
      67,    28,    73,    77,    28,    66,    66,    66,    68,    68,
      68,    68,    31,    68,    66,    66,    66,    67,    70,    70,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      28,    32,    28,    39,    31,    39,    28,    28,    28,    28,
      28,    28,    28,    28,    73,    59,    66,    66,    68,    56,
      65,    31,    31,    31,    34,    28,    31,    59,    65,    66,
      34,    28,    65,    59,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    52,
      52,    52,    52,    53,    53,    54,    54,    55,    56,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    61,    61,    61,    62,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    72,    73,    73,    73,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     1,     1,     1,     0,     1,     3,     2,     3,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     5,     5,     7,     9,    10,     3,     5,
       5,     2,     1,     1,     3,     1,     3,     3,     1,     1,
       3,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     4,     4,     4,     4,     1,     1,     1,     1,     4,
       3,     1,     3
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
  case 2: /* program: declaration-list  */
#line 92 "c7synt.y"
                          {
        if(VERBOSE) printf("tree-root ->program\n");
        (yyval.node) = createNode("program");
        (yyval.node)->nodes[0] = (yyvsp[0].node);
        root = (yyval.node);
    }
#line 1663 "c7synt.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 100 "c7synt.y"
                                               {
                        if (VERBOSE) printf("declaration-list -> declaration-list declaration \n");
                        (yyval.node) = createNode("declaration-list");
                        (yyval.node)->nodes[0] = (yyvsp[-1].node);
                        (yyval.node)->nodes[1] = (yyvsp[0].node);    
                    }
#line 1674 "c7synt.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 106 "c7synt.y"
                              {
                        if(VERBOSE) printf("declaration-list -> declaration\n");
                        (yyval.node) = createNode("declaration-list");
                        (yyval.node)->nodes[0] = (yyvsp[0].node);
                    }
#line 1684 "c7synt.tab.c"
    break;

  case 5: /* declaration: function-definition  */
#line 112 "c7synt.y"
                                 {
                if(VERBOSE) printf("declaration -> function-definition\n");
                (yyval.node) = createNode("declaration");
                (yyval.node)->nodes[0] = (yyvsp[0].node);
            }
#line 1694 "c7synt.tab.c"
    break;

  case 6: /* declaration: var-declaration  */
#line 117 "c7synt.y"
                             {
                if(VERBOSE) printf("declaration -> var-declaration\n");
                (yyval.node) = createNode("declaration");
                (yyval.node)->nodes[0] = (yyvsp[0].node);
            }
#line 1704 "c7synt.tab.c"
    break;

  case 7: /* var-declaration: type ID ';'  */
#line 124 "c7synt.y"
                             {
        if(VERBOSE) printf("var-declaration -> type ID\n");
        (yyval.node) = createNode("var-declaration");
        (yyval.node)->nodes[0] = (yyvsp[-2].node);
        (yyval.node)->symbol = (yyvsp[-1].str);
    }
#line 1715 "c7synt.tab.c"
    break;

  case 8: /* function-definition: type ID '(' parameters ')' compound-stmt  */
#line 132 "c7synt.y"
                                                               {
        if(VERBOSE) printf("function-definition -> type ID '(' parameter-list ')'\n");
        (yyval.node) = createNode("declaration");
        (yyval.node)-> nodes[0] = (yyvsp[-5].node);
        (yyval.node)-> nodes[1] = (yyvsp[-2].node);
        (yyval.node)-> nodes[2] = (yyvsp[0].node);
    }
#line 1727 "c7synt.tab.c"
    break;

  case 9: /* type: INT  */
#line 141 "c7synt.y"
          {
        if(VERBOSE) printf("type -> INT\n");
        (yyval.node) = createNode("type");
        //$$->symbol = $1;
    }
#line 1737 "c7synt.tab.c"
    break;

  case 10: /* type: FLOAT  */
#line 146 "c7synt.y"
            {
        if(VERBOSE) printf("type -> FLOAT\n");
        (yyval.node) = createNode("type");
        //$$->symbol = $1;
    }
#line 1747 "c7synt.tab.c"
    break;

  case 11: /* type: SET  */
#line 151 "c7synt.y"
          {
        if(VERBOSE) printf("type -> SET\n");
        (yyval.node) = createNode("type");
        //$$->symbol = $1;
    }
#line 1757 "c7synt.tab.c"
    break;

  case 12: /* type: ELEM  */
#line 156 "c7synt.y"
           {
        if(VERBOSE) printf("type ->ELEM\n");
        (yyval.node) = createNode("type");
        //$$->symbol = $1;
    }
#line 1767 "c7synt.tab.c"
    break;

  case 13: /* parameters: parameter-list  */
#line 163 "c7synt.y"
                           {
        if(VERBOSE) printf("parameters -> param-list\n");
        (yyval.node) = createNode("parameters");
        (yyval.node)-> nodes[0] = (yyvsp[0].node);
        }
#line 1777 "c7synt.tab.c"
    break;

  case 14: /* parameters: %empty  */
#line 168 "c7synt.y"
                 { 
            if(VERBOSE) printf("empty\n");
            (yyval.node) = NULL;
        }
#line 1786 "c7synt.tab.c"
    break;

  case 15: /* parameter-list: parameter-declaration  */
#line 173 "c7synt.y"
                                      {
        if(VERBOSE) printf("parameter-list -> parameter-declaration\n");
        (yyval.node) = createNode("parameter-list");
        (yyval.node)-> nodes[0] = (yyvsp[0].node);
    }
#line 1796 "c7synt.tab.c"
    break;

  case 16: /* parameter-list: parameter-list ',' parameter-declaration  */
#line 178 "c7synt.y"
                                               {
        if(VERBOSE) printf("parameter-list -> parameter-list ',' parameter-declaration\n");
        (yyval.node) = createNode("parameter-list");
        (yyval.node)-> nodes[0] = (yyvsp[-2].node);
        (yyval.node)-> nodes[1] = (yyvsp[0].node);
    }
#line 1807 "c7synt.tab.c"
    break;

  case 17: /* parameter-declaration: type ID  */
#line 185 "c7synt.y"
                               {
        if(VERBOSE) printf("parameter-declaration -> type ID\n");
        //$$ = createNode("parameter-declaration");
        //$$->nodes[0] = $1;
        //$$->symbol = $2;

    }
#line 1819 "c7synt.tab.c"
    break;

  case 18: /* compound-stmt: '{' local-decls-stmts '}'  */
#line 193 "c7synt.y"
                                        {
        if(VERBOSE) printf("C-stmt -> '{' local-decls-stmts'}'\n");
        //$$ = createNode("compound-stmt");
        //$$-> nodes[0] = $2;
    }
#line 1829 "c7synt.tab.c"
    break;

  case 19: /* local-decls-stmts: stmts  */
#line 200 "c7synt.y"
                          {
        if (VERBOSE) printf("local-stmts -> stmts\n");
        //$$ = createNode("local-decls-stmts");
        //$$-> nodes[0] = $1;
    }
#line 1839 "c7synt.tab.c"
    break;

  case 20: /* local-decls-stmts: %empty  */
#line 205 "c7synt.y"
             {
        if(VERBOSE) printf("empty\n");
        //$$ = NULL;
    }
#line 1848 "c7synt.tab.c"
    break;

  case 21: /* stmts: stmts stmt  */
#line 210 "c7synt.y"
                  {
        if(VERBOSE) printf("stmts -> stmts stmt\n");
        //$$ = createNode("stmts");
        //$$-> nodes[0] = $2;
        //$$-> nodes[1] = $1;
    }
#line 1859 "c7synt.tab.c"
    break;

  case 22: /* stmts: stmt  */
#line 216 "c7synt.y"
           {
        if(VERBOSE) printf("stmts -> stmts stmt\n");
        //$$ = createNode("stmts");
        //$$->nodes[0] = $1;
    }
#line 1869 "c7synt.tab.c"
    break;

  case 23: /* stmt: io-stmt  */
#line 222 "c7synt.y"
              {
        if(VERBOSE) printf("stmt -> io-stmt\n");
        //$$ = createNode("stmt");
        //$$->nodes[0] = $1;

    }
#line 1880 "c7synt.tab.c"
    break;

  case 24: /* stmt: return-stmt  */
#line 228 "c7synt.y"
                  {
        if(VERBOSE) printf("stmt -> return-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
#line 1890 "c7synt.tab.c"
    break;

  case 25: /* stmt: compound-stmt  */
#line 233 "c7synt.y"
                    {
        if(VERBOSE) printf("stmt -> cp-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
#line 1900 "c7synt.tab.c"
    break;

  case 26: /* stmt: if-stmt  */
#line 238 "c7synt.y"
              {
        if(VERBOSE) printf("stmt -> if-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
#line 1910 "c7synt.tab.c"
    break;

  case 27: /* stmt: for-stmt  */
#line 243 "c7synt.y"
               {
        if(VERBOSE) printf("stmt -> for-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
#line 1920 "c7synt.tab.c"
    break;

  case 28: /* stmt: expression-stmt  */
#line 248 "c7synt.y"
                      {
        if(VERBOSE) printf("stmt -> expression-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
#line 1930 "c7synt.tab.c"
    break;

  case 29: /* stmt: forall-stmt  */
#line 253 "c7synt.y"
                  {
        if(VERBOSE) printf("stmt -> forall-stmt\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
#line 1940 "c7synt.tab.c"
    break;

  case 30: /* stmt: var-declaration  */
#line 258 "c7synt.y"
                      {
        if(VERBOSE) printf("stmt -> var-decl\n");
        //$$ = createNode("stmt");
        //$$-> nodes[0] = $1;
    }
#line 1950 "c7synt.tab.c"
    break;

  case 31: /* io-stmt: READ '(' expression ')' ';'  */
#line 265 "c7synt.y"
                                     {
            if(VERBOSE) printf("io-stmt -> read ( exp ) \n");
            //$$ = createNode("io-stmt");
            //$$-> nodes[0] = $3;
        }
#line 1960 "c7synt.tab.c"
    break;

  case 32: /* io-stmt: WRITE '(' expression ')' ';'  */
#line 270 "c7synt.y"
                                       {
           if(VERBOSE) printf("io-stmt -> write ( exp ) \n");
           //$$ = createNode("io-stmt");
           //$$-> nodes[0] = $3;

        }
#line 1971 "c7synt.tab.c"
    break;

  case 33: /* io-stmt: WRITELN '(' expression ')' ';'  */
#line 276 "c7synt.y"
                                        {
           if(VERBOSE) printf("io-stmt -> writeln ( exp )\n");
           //$$ = createNode("io-stmt");
           //$$-> nodes[0] = $3;
        }
#line 1981 "c7synt.tab.c"
    break;

  case 34: /* if-stmt: IF '(' expression ')' stmt  */
#line 283 "c7synt.y"
                                                        {
            if(VERBOSE) printf("if-stmt\n");
            //$$ = createNode("if-stmt");
            //$$-> nodes[0] = $3;
            //$$-> nodes[1] = $5;
        }
#line 1992 "c7synt.tab.c"
    break;

  case 35: /* if-stmt: IF '(' expression ')' stmt ELSE stmt  */
#line 289 "c7synt.y"
                                                 {
           if(VERBOSE) printf("if-stmt\n");
           //$$ = createNode("if-stmt");
           //$$-> nodes[0] = $3;
           //$$-> nodes[1] = $5;
           //$$-> nodes[2] = $7;
       }
#line 2004 "c7synt.tab.c"
    break;

  case 36: /* if-stmt: IF '(' expression IN expression ')' expression-stmt ELSE expression-stmt  */
#line 296 "c7synt.y"
                                                                                 {
           if(VERBOSE) printf("if-stmt\n");
           //$$ = createNode("if-stmt");
           //$$-> nodes[0] = $3;
           //$$-> nodes[1] = $5;
           //$$-> nodes[2] = $7;
           //$$-> nodes[3] = $9;
       }
#line 2017 "c7synt.tab.c"
    break;

  case 37: /* for-stmt: FOR '(' expression ';' expression ';' expression ')' stmt ';'  */
#line 306 "c7synt.y"
                                                                        {
        if(VERBOSE) printf("for-stmt -> for\n");
        //$$ = createNode("for-stmt");
        //$$-> nodes[0] = $3;
        //$$-> nodes[1] = $5;
        //$$-> nodes[2] = $7;
        //$$-> nodes[3] = $9;
    }
#line 2030 "c7synt.tab.c"
    break;

  case 38: /* return-stmt: RETURN expression ';'  */
#line 316 "c7synt.y"
                                   {
        if(VERBOSE) printf("return-stmt -> return exp ;\n");
        //$$ = createNode("return-stmt");
        //$$-> nodes[0] = $2;
    }
#line 2040 "c7synt.tab.c"
    break;

  case 39: /* forall-stmt: FORALL '(' in-exp ')' compound-stmt  */
#line 323 "c7synt.y"
                                                 {
        if(VERBOSE) printf("forall-stmt ->FORALL (in-exp) compound\n");
        //$$ = createNode("forall-stmt");
        //$$-> nodes[0] = $3;
        //$$-> nodes[1] = $5;
    }
#line 2051 "c7synt.tab.c"
    break;

  case 40: /* forall-stmt: FORALL '(' in-exp ')' expression-stmt  */
#line 329 "c7synt.y"
                                            {
        if(VERBOSE) printf("forall-stmt -> FORALL ( in-exp )\n");
        //$$ = createNode("forall-stmt");
        //$$-> nodes[0] = $3;
        //$$-> nodes[1] = $5;
    }
#line 2062 "c7synt.tab.c"
    break;

  case 41: /* expression-stmt: expression ';'  */
#line 337 "c7synt.y"
                                    {
        if(VERBOSE) printf("expression-stmt -> expression ;\n");
        //$$ = createNode("expression-stmt");
        //$$-> nodes[0] = $1;
    }
#line 2072 "c7synt.tab.c"
    break;

  case 42: /* expression-stmt: ';'  */
#line 342 "c7synt.y"
          {}
#line 2078 "c7synt.tab.c"
    break;

  case 43: /* expression: assign-exp  */
#line 344 "c7synt.y"
                        {
        if(VERBOSE) printf("expression-> assign \n");
        //$$ = createNode("expression");
        //$$-> nodes[0] = $1;
    }
#line 2088 "c7synt.tab.c"
    break;

  case 44: /* expression: expression ',' assign-exp  */
#line 349 "c7synt.y"
                                 {
        if(VERBOSE) printf("expression -> exp , assign\n");
        //$$ = createNode("expression");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
    }
#line 2099 "c7synt.tab.c"
    break;

  case 45: /* assign-exp: basic-exp  */
#line 356 "c7synt.y"
                      {
        if(VERBOSE) printf("assign-exp -> basic-exp\n");
        //$$ = createNode("assign-exp");
        //$$-> nodes[0] = $1;
    }
#line 2109 "c7synt.tab.c"
    break;

  case 46: /* assign-exp: ID EQ assign-exp  */
#line 361 "c7synt.y"
                       {
        if (VERBOSE) printf("assign -> ID EQ assign\n");
        //$$ = createNode("assign-exp");
        //$$-> nodes[0] = $3;
    }
#line 2119 "c7synt.tab.c"
    break;

  case 47: /* in-exp: expression IN in-exp  */
#line 368 "c7synt.y"
                             {
        if(VERBOSE) printf("in-exp -> expression IN in-exp\n");
        //$$ = createNode("in-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
    }
#line 2130 "c7synt.tab.c"
    break;

  case 48: /* in-exp: expression  */
#line 374 "c7synt.y"
                 {
        if(VERBOSE) printf("in-exp -> expression\n");
        //$$ = createNode("in-exp");
        //$$ -> nodes[0] = $1;
    }
#line 2140 "c7synt.tab.c"
    break;

  case 49: /* basic-exp: logical-exp  */
#line 380 "c7synt.y"
                       {
        if(VERBOSE) printf("basic-exp -> logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $1;
    }
#line 2150 "c7synt.tab.c"
    break;

  case 50: /* basic-exp: logical-exp OR logical-exp  */
#line 385 "c7synt.y"
                                 {
        if(VERBOSE) printf("basic-exp -> logical OR logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2162 "c7synt.tab.c"
    break;

  case 51: /* basic-exp: logical-exp AND logical-exp  */
#line 392 "c7synt.y"
                                  {
        if(VERBOSE) printf("basic-exp -> logical AND logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2174 "c7synt.tab.c"
    break;

  case 52: /* basic-exp: NOT logical-exp  */
#line 399 "c7synt.y"
                      {
        if(VERBOSE) printf("basic-exp -> NOT logical\n");
        //$$ = createNode("basic-exp");
        //$$-> nodes[0] = $2;
        //$$->symbol = $1;
    }
#line 2185 "c7synt.tab.c"
    break;

  case 53: /* logical-exp: add-exp  */
#line 407 "c7synt.y"
                     {
        if(VERBOSE) printf(" basic-exp -> add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
    }
#line 2195 "c7synt.tab.c"
    break;

  case 54: /* logical-exp: add-exp EQ_TO add-exp  */
#line 412 "c7synt.y"
                            {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2207 "c7synt.tab.c"
    break;

  case 55: /* logical-exp: add-exp NEQ_TO add-exp  */
#line 419 "c7synt.y"
                             {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2219 "c7synt.tab.c"
    break;

  case 56: /* logical-exp: add-exp GT add-exp  */
#line 426 "c7synt.y"
                         {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2231 "c7synt.tab.c"
    break;

  case 57: /* logical-exp: add-exp LT add-exp  */
#line 433 "c7synt.y"
                         {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2243 "c7synt.tab.c"
    break;

  case 58: /* logical-exp: add-exp GTE add-exp  */
#line 440 "c7synt.y"
                          {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2255 "c7synt.tab.c"
    break;

  case 59: /* logical-exp: add-exp LTE add-exp  */
#line 447 "c7synt.y"
                          {
        if(VERBOSE) printf(" basic-exp -> add-exp rel-op add-exp\n");
        //$$ = createNode("logical-exp");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2267 "c7synt.tab.c"
    break;

  case 60: /* add-exp: term  */
#line 456 "c7synt.y"
              {
            if(VERBOSE)printf(" add-exp -> term\n");
            //$$ = createNode("add-exp");
            //$$-> nodes[0] = $1;
        }
#line 2277 "c7synt.tab.c"
    break;

  case 61: /* add-exp: term PLUS term  */
#line 461 "c7synt.y"
                         {
            if(VERBOSE)printf(" add-exp -> term PLUS term\n");
            //$$ = createNode("logical-exp");
            //$$-> nodes[0] = $1;
            //$$-> nodes[1] = $3;
            //$$->symbol = $2;
        }
#line 2289 "c7synt.tab.c"
    break;

  case 62: /* add-exp: term MINUS term  */
#line 468 "c7synt.y"
                          {
            if(VERBOSE) printf(" add-exp -> term MINUS term\n");
            //$$ = createNode("logical-exp");
            //$$-> nodes[0] = $1;
            //$$-> nodes[1] = $3;
            //$$->symbol = $2;
        }
#line 2301 "c7synt.tab.c"
    break;

  case 63: /* term: factor  */
#line 476 "c7synt.y"
             {
        if(VERBOSE) printf(" term -> factor\n");
        //$$ = createNode("term");
        //$$-> nodes[0] = $1;
    }
#line 2311 "c7synt.tab.c"
    break;

  case 64: /* term: term MULT factor  */
#line 481 "c7synt.y"
                       {
        if(VERBOSE) printf(" term -> term mul-op factor\n");
        //$$ = createNode("term");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2323 "c7synt.tab.c"
    break;

  case 65: /* term: term DIV factor  */
#line 488 "c7synt.y"
                      {
        if(VERBOSE) printf(" term -> term mul-op factor\n");
        //$$ = createNode("term");
        //$$-> nodes[0] = $1;
        //$$-> nodes[1] = $3;
        //$$->symbol = $2;
    }
#line 2335 "c7synt.tab.c"
    break;

  case 66: /* factor: '(' expression ')'  */
#line 497 "c7synt.y"
                           {
        if(VERBOSE) printf(" factor -> ( expression )\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $2;
    }
#line 2345 "c7synt.tab.c"
    break;

  case 67: /* factor: ID  */
#line 502 "c7synt.y"
         {
        if(VERBOSE) printf(" factor -> ID\n");
        //$$ = createNode("factor");
        //$$-> symbol = $1;
    }
#line 2355 "c7synt.tab.c"
    break;

  case 68: /* factor: constant  */
#line 507 "c7synt.y"
               {
        if(VERBOSE) printf(" factor -> constant\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $1;
    }
#line 2365 "c7synt.tab.c"
    break;

  case 69: /* factor: call  */
#line 512 "c7synt.y"
           {
        if(VERBOSE) printf("factor -> call\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $1;
    }
#line 2375 "c7synt.tab.c"
    break;

  case 70: /* factor: set-exp  */
#line 517 "c7synt.y"
              {
        if(VERBOSE) printf(" factor -> set-exp\n");
        //$$ = createNode("factor");
        //$$-> nodes[0] = $1;
    }
#line 2385 "c7synt.tab.c"
    break;

  case 71: /* set-exp: ADD '(' in-exp ')'  */
#line 523 "c7synt.y"
                             {
        if(VERBOSE) printf(" set-op -> ADD (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }
#line 2395 "c7synt.tab.c"
    break;

  case 72: /* set-exp: REMOVE '(' in-exp ')'  */
#line 528 "c7synt.y"
                            {
        if(VERBOSE) printf(" set-op -> REMOVE (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }
#line 2405 "c7synt.tab.c"
    break;

  case 73: /* set-exp: EXISTS '(' in-exp ')'  */
#line 533 "c7synt.y"
                            {
        if(VERBOSE) printf(" set-op -> EXISTS (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }
#line 2415 "c7synt.tab.c"
    break;

  case 74: /* set-exp: IS_SET '(' in-exp ')'  */
#line 538 "c7synt.y"
                            {
        if(VERBOSE) printf(" set-op -> IS_SET (in-exp)\n");
        //$$ = createNode("set-exp");
        //$$-> nodes[0] = $3;
    }
#line 2425 "c7synt.tab.c"
    break;

  case 75: /* constant: INTEGER_CONST  */
#line 545 "c7synt.y"
                        {
            if(VERBOSE)printf(" constant -> INTEGER_CONST\n");
            //$$ = createNode("INTEGER_CONST");
            //$$->symbol = $1;
        }
#line 2435 "c7synt.tab.c"
    break;

  case 76: /* constant: FLOAT_CONST  */
#line 550 "c7synt.y"
                      {
            if(VERBOSE) printf(" constant -> FLOAT_CONST\n");
            //$$ = createNode("constant");
            //$$->symbol = $1;
        }
#line 2445 "c7synt.tab.c"
    break;

  case 77: /* constant: EMPTY_CONST  */
#line 555 "c7synt.y"
                      {
            if(VERBOSE) printf(" constant -> EMPTY_CONST\n");
            //$$ = createNode("constant");
            //$$->symbol = $1;
        }
#line 2455 "c7synt.tab.c"
    break;

  case 78: /* constant: STRING  */
#line 560 "c7synt.y"
                 {
            if(VERBOSE) printf(" constant -> STRING\n");
            //$$ = createNode("constant");
            //$$->symbol = $1;
        }
#line 2465 "c7synt.tab.c"
    break;

  case 79: /* call: ID '(' arg-list ')'  */
#line 566 "c7synt.y"
                          {
        if(VERBOSE)printf(" call -> ID (args)\n");
        //$$ = createNode("call");
        //$$->symbol = $1;
        //$$-> nodes[0] = $3;
    }
#line 2476 "c7synt.tab.c"
    break;

  case 80: /* call: ID '(' ')'  */
#line 572 "c7synt.y"
                {
        if(VERBOSE)printf(" call -> ID (args)\n");
        //$$->symbol = $1;
    }
#line 2485 "c7synt.tab.c"
    break;

  case 81: /* arg-list: factor  */
#line 577 "c7synt.y"
                 {
            if(VERBOSE) printf("arg-list");
            //$$ = createNode("arg-list");
            //$$-> nodes[0] = $1;
        }
#line 2495 "c7synt.tab.c"
    break;

  case 82: /* arg-list: arg-list ',' factor  */
#line 582 "c7synt.y"
                              {
            if(VERBOSE) printf("arg-list");
            //$$ = createNode("arg-list");
            //$$-> nodes[0] = $1;
            //$$-> nodes[1] = $3;
        }
#line 2506 "c7synt.tab.c"
    break;


#line 2510 "c7synt.tab.c"

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

#line 591 "c7synt.y"



int yyerror(const char *s){
    printf("yyerror: %s\n",s);
    return 10;
}

int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    
    yyparse();

    
    printVertex(root);
    freeVertex(root);
    fclose(yyin);
    yylex_destroy();
    return 0;

}
