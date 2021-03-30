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
#line 4 "c7synt.y"

    #include <stdio.h>
    extern int yylex();
    int yyerror(const char *s);
    extern int yylex_destroy();
    extern FILE *yyin;

#line 79 "c7synt.tab.c"

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
  YYSYMBOL_3_then_ = 3,                    /* "then"  */
  YYSYMBOL_4_else_ = 4,                    /* "else"  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_ELEM = 7,                       /* ELEM  */
  YYSYMBOL_SET = 8,                        /* SET  */
  YYSYMBOL_INTEGER_CONST = 9,              /* INTEGER_CONST  */
  YYSYMBOL_FLOAT_CONST = 10,               /* FLOAT_CONST  */
  YYSYMBOL_EMPTY_CONST = 11,               /* EMPTY_CONST  */
  YYSYMBOL_PLUS = 12,                      /* PLUS  */
  YYSYMBOL_MINUS = 13,                     /* MINUS  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_MULT = 15,                      /* MULT  */
  YYSYMBOL_EQ = 16,                        /* EQ  */
  YYSYMBOL_I_PLUS = 17,                    /* I_PLUS  */
  YYSYMBOL_D_MINUS = 18,                   /* D_MINUS  */
  YYSYMBOL_NOT = 19,                       /* NOT  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_EQ_TO = 22,                     /* EQ_TO  */
  YYSYMBOL_NEQ_TO = 23,                    /* NEQ_TO  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_GTE = 26,                       /* GTE  */
  YYSYMBOL_LTE = 27,                       /* LTE  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_FOR = 30,                       /* FOR  */
  YYSYMBOL_FORALL = 31,                    /* FORALL  */
  YYSYMBOL_IS_SET = 32,                    /* IS_SET  */
  YYSYMBOL_ADD = 33,                       /* ADD  */
  YYSYMBOL_IN = 34,                        /* IN  */
  YYSYMBOL_REMOVE = 35,                    /* REMOVE  */
  YYSYMBOL_RETURN = 36,                    /* RETURN  */
  YYSYMBOL_EXISTS = 37,                    /* EXISTS  */
  YYSYMBOL_OPENPARENT = 38,                /* OPENPARENT  */
  YYSYMBOL_CLOSEPARENT = 39,               /* CLOSEPARENT  */
  YYSYMBOL_OPENBRACES = 40,                /* OPENBRACES  */
  YYSYMBOL_CLOSEBRACES = 41,               /* CLOSEBRACES  */
  YYSYMBOL_SEMICOLON = 42,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 43,                     /* COMMA  */
  YYSYMBOL_READ = 44,                      /* READ  */
  YYSYMBOL_WRITE = 45,                     /* WRITE  */
  YYSYMBOL_WRITELN = 46,                   /* WRITELN  */
  YYSYMBOL_ID = 47,                        /* ID  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_58_declaration_list = 58,       /* declaration-list  */
  YYSYMBOL_declaration = 59,               /* declaration  */
  YYSYMBOL_60_var_declaration = 60,        /* var-declaration  */
  YYSYMBOL_61_function_definition = 61,    /* function-definition  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_parameters = 63,                /* parameters  */
  YYSYMBOL_64_parameter_list = 64,         /* parameter-list  */
  YYSYMBOL_65_parameter_declaration = 65,  /* parameter-declaration  */
  YYSYMBOL_66_compound_stmt = 66,          /* compound-stmt  */
  YYSYMBOL_67_var_decls = 67,              /* var-decls  */
  YYSYMBOL_68_var_list = 68,               /* var-list  */
  YYSYMBOL_69_local_stmts = 69,            /* local-stmts  */
  YYSYMBOL_stmts = 70,                     /* stmts  */
  YYSYMBOL_stmt = 71,                      /* stmt  */
  YYSYMBOL_72_io_stmt = 72,                /* io-stmt  */
  YYSYMBOL_73_if_stmt = 73,                /* if-stmt  */
  YYSYMBOL_74_for_stmt = 74,               /* for-stmt  */
  YYSYMBOL_75_return_stmt = 75,            /* return-stmt  */
  YYSYMBOL_76_forall_stmt = 76,            /* forall-stmt  */
  YYSYMBOL_77_is_set_stmt = 77,            /* is_set-stmt  */
  YYSYMBOL_78_set_stmt = 78,               /* set-stmt  */
  YYSYMBOL_79_expression_stmt = 79,        /* expression-stmt  */
  YYSYMBOL_expression = 80,                /* expression  */
  YYSYMBOL_81_set_exp = 81,                /* set-exp  */
  YYSYMBOL_82_element_list = 82,           /* element-list  */
  YYSYMBOL_elem = 83,                      /* elem  */
  YYSYMBOL_84_in_exp = 84,                 /* in-exp  */
  YYSYMBOL_85_basic_exp = 85,              /* basic-exp  */
  YYSYMBOL_86_rel_op = 86,                 /* rel-op  */
  YYSYMBOL_87_add_exp = 87,                /* add-exp  */
  YYSYMBOL_88_add_op = 88,                 /* add-op  */
  YYSYMBOL_term = 89,                      /* term  */
  YYSYMBOL_90_mul_op = 90,                 /* mul-op  */
  YYSYMBOL_factor = 91,                    /* factor  */
  YYSYMBOL_constant = 92,                  /* constant  */
  YYSYMBOL_call = 93,                      /* call  */
  YYSYMBOL_args = 94,                      /* args  */
  YYSYMBOL_95_arg_list = 95                /* arg-list  */
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
#define YYLAST   176

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      49,    50,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    59,    60,    62,    63,    65,    67,    70,
      71,    72,    73,    75,    76,    78,    79,    81,    83,    85,
      86,    88,    89,    92,    93,    95,    96,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   109,   110,   111,   114,
     115,   118,   121,   124,   127,   129,   130,   131,   133,   134,
     136,   137,   138,   140,   141,   143,   144,   146,   147,   148,
     149,   152,   153,   155,   156,   158,   159,   160,   161,   162,
     163,   165,   166,   168,   169,   171,   172,   174,   175,   177,
     178,   179,   180,   182,   183,   184,   186,   188,   189,   191,
     192
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
  "\"end of file\"", "error", "\"invalid token\"", "\"then\"", "\"else\"",
  "INT", "FLOAT", "ELEM", "SET", "INTEGER_CONST", "FLOAT_CONST",
  "EMPTY_CONST", "PLUS", "MINUS", "DIV", "MULT", "EQ", "I_PLUS", "D_MINUS",
  "NOT", "OR", "AND", "EQ_TO", "NEQ_TO", "GT", "LT", "GTE", "LTE", "IF",
  "ELSE", "FOR", "FORALL", "IS_SET", "ADD", "IN", "REMOVE", "RETURN",
  "EXISTS", "OPENPARENT", "CLOSEPARENT", "OPENBRACES", "CLOSEBRACES",
  "SEMICOLON", "COMMA", "READ", "WRITE", "WRITELN", "ID", "';'", "'('",
  "')'", "','", "'{'", "'}'", "'['", "']'", "$accept", "program",
  "declaration-list", "declaration", "var-declaration",
  "function-definition", "type", "parameters", "parameter-list",
  "parameter-declaration", "compound-stmt", "var-decls", "var-list",
  "local-stmts", "stmts", "stmt", "io-stmt", "if-stmt", "for-stmt",
  "return-stmt", "forall-stmt", "is_set-stmt", "set-stmt",
  "expression-stmt", "expression", "set-exp", "element-list", "elem",
  "in-exp", "basic-exp", "rel-op", "add-exp", "add-op", "term", "mul-op",
  "factor", "constant", "call", "args", "arg-list", YY_NULLPTR
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    59,    40,
      41,    44,   123,   125,    91,    93
};
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      33,   -92,   -92,   -92,   -92,     2,    33,   -92,   -92,   -92,
     -32,   -92,   -92,    10,   -92,    33,   -23,   -20,    15,   -92,
     -92,   -24,    33,    33,   -92,   -92,   -92,    20,    45,    33,
      21,   -92,   -92,   -92,    22,    39,    47,    51,    65,    75,
      25,    83,    84,    85,    86,   -12,   -92,    25,     3,   -92,
      30,    45,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,    88,   -92,   -92,   103,   104,   106,   -92,   -92,   -92,
     -92,    25,    25,    76,    76,    76,    76,    90,    76,    92,
      93,    94,    25,    25,    95,   -92,   -92,   -92,     3,   -37,
     -92,   -92,   -92,   -92,   -27,   -92,   -92,   -92,   -92,   -92,
     -92,    76,   -92,   -92,   -92,   -92,    76,    76,    96,    99,
     100,    98,   103,   101,   102,   105,   -92,   107,   108,   109,
     110,   -92,   -92,   111,    91,   -92,   -22,     3,   -92,   -92,
     -92,   -92,     7,   -92,    16,    25,    80,   114,   115,   116,
     117,   118,   119,   120,   -92,    25,   -92,   -92,    45,   121,
     122,   123,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,    45,    25,   -92,   -92,   124,    45,   125,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    10,    12,    11,     0,     2,     4,     6,     5,
       0,     1,     3,     0,     7,    14,     0,     0,    13,    15,
      17,     0,     0,    20,     8,    16,    22,     0,    24,    19,
       0,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    49,     0,     0,    29,
       0,    23,    26,    27,    30,    31,    28,    33,    34,    35,
      32,     0,    52,    54,    51,    63,    71,    75,    81,    82,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    58,    59,    57,     0,     0,
      56,    18,    25,    48,     0,    65,    66,    67,    68,    69,
      70,     0,    73,    74,    78,    77,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,    50,    89,     0,    87,    79,     0,     0,    53,    62,
      61,    64,    72,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,    60,    55,     0,     0,
       0,     0,    44,    45,    46,    47,    36,    37,    38,    90,
      39,     0,     0,    43,    40,     0,     0,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   137,   -18,   -92,    -6,   -92,   -92,   131,
     133,   -92,   -92,   -92,   -92,   -50,   -92,   -92,   -92,   -92,
     -92,   -92,   -91,   -92,   -40,   -92,    56,    29,    28,    34,
     -92,    68,   -92,    66,   -92,    69,   -92,   -92,   -92,   -92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    10,    17,    18,    19,
      49,    28,    29,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    89,    90,    63,    64,
     101,    65,   106,    66,   107,    67,    68,    69,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      77,    92,    11,   130,    82,    26,    38,    84,    39,    16,
      41,    70,    85,    86,   127,    13,    16,    27,   128,   148,
     129,   104,   105,    27,    20,    31,    32,    33,    23,   127,
      21,   108,   109,   146,    31,    32,    33,    83,     1,     2,
       3,     4,   121,   122,    34,   151,    35,    36,    37,    38,
      87,    39,    40,    41,    31,    32,    33,    88,    14,    15,
      42,    43,    44,    45,    46,    47,    22,    30,    23,    14,
      48,    71,    45,    34,    47,    35,    36,    37,    38,    48,
      39,    40,    41,    91,   149,    31,    32,    33,    72,    42,
      43,    44,    45,    46,    47,   150,    73,    23,   160,    48,
      74,   111,   113,   114,   115,   159,   117,   112,   112,   112,
     112,   164,   112,    38,    75,    39,   167,    41,   102,   103,
     104,   105,   165,   110,    76,    47,    95,    96,    97,    98,
      99,   100,    78,    79,    80,    81,    93,    94,   116,   118,
     119,   120,   145,    12,   126,   125,   134,   135,   136,    83,
     161,   137,   138,    25,    24,   139,   147,   140,   141,   142,
     143,   144,   152,   153,   154,   155,   156,   157,   158,   131,
     162,   163,   132,   168,   166,     0,   133
};

static const yytype_int16 yycheck[] =
{
      40,    51,     0,    94,    16,    23,    33,    47,    35,    15,
      37,    29,     9,    10,    51,    47,    22,    23,    55,     3,
      47,    14,    15,    29,    47,     9,    10,    11,    52,    51,
      50,    71,    72,    55,     9,    10,    11,    49,     5,     6,
       7,     8,    82,    83,    28,   136,    30,    31,    32,    33,
      47,    35,    36,    37,     9,    10,    11,    54,    48,    49,
      44,    45,    46,    47,    48,    49,    51,    47,    52,    48,
      54,    49,    47,    28,    49,    30,    31,    32,    33,    54,
      35,    36,    37,    53,   134,     9,    10,    11,    49,    44,
      45,    46,    47,    48,    49,   135,    49,    52,   148,    54,
      49,    73,    74,    75,    76,   145,    78,    73,    74,    75,
      76,   161,    78,    33,    49,    35,   166,    37,    12,    13,
      14,    15,   162,    47,    49,    49,    22,    23,    24,    25,
      26,    27,    49,    49,    49,    49,    48,    34,    48,    47,
      47,    47,    51,     6,    88,    50,    50,    48,    50,    49,
      29,    50,    50,    22,    21,    50,   127,    50,    50,    50,
      50,    50,    48,    48,    48,    48,    48,    48,    48,   101,
      48,    48,   106,    48,    50,    -1,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    57,    58,    59,    60,    61,
      62,     0,    59,    47,    48,    49,    62,    63,    64,    65,
      47,    50,    51,    52,    66,    65,    60,    62,    67,    68,
      47,     9,    10,    11,    28,    30,    31,    32,    33,    35,
      36,    37,    44,    45,    46,    47,    48,    49,    54,    66,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    84,    85,    87,    89,    91,    92,    93,
      60,    49,    49,    49,    49,    49,    49,    80,    49,    49,
      49,    49,    16,    49,    80,     9,    10,    47,    54,    82,
      83,    53,    71,    48,    34,    22,    23,    24,    25,    26,
      27,    86,    12,    13,    14,    15,    88,    90,    80,    80,
      47,    84,    85,    84,    84,    84,    48,    84,    47,    47,
      47,    80,    80,    94,    95,    50,    82,    51,    55,    47,
      78,    87,    89,    91,    50,    48,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    51,    55,    83,     3,    71,
      80,    78,    48,    48,    48,    48,    48,    48,    48,    80,
      71,    29,    48,    48,    71,    80,    50,    71,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    60,    61,    62,
      62,    62,    62,    63,    63,    64,    64,    65,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    74,    75,    76,    77,    78,    78,    78,    79,    79,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    92,    92,    92,    93,    94,    94,    95,
      95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     1,     1,     1,     0,     1,     3,     2,     4,     1,
       0,     2,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     6,
       7,    10,     3,     6,     5,     5,     5,     5,     2,     1,
       3,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     1,     0,     1,
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
  case 2: /* program: declaration-list  */
#line 57 "c7synt.y"
                          {printf("program -> declaration-list\n");}
#line 1662 "c7synt.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 59 "c7synt.y"
                                               {printf("declaration-list -> declaration-list declaration \n");}
#line 1668 "c7synt.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 60 "c7synt.y"
                              {printf("declaration-list -> declaration\n");}
#line 1674 "c7synt.tab.c"
    break;

  case 5: /* declaration: function-definition  */
#line 62 "c7synt.y"
                                 {printf("declaration -> function-definition\n");}
#line 1680 "c7synt.tab.c"
    break;

  case 6: /* declaration: var-declaration  */
#line 63 "c7synt.y"
                             {printf("declaration -> var-declaration\n");}
#line 1686 "c7synt.tab.c"
    break;

  case 7: /* var-declaration: type ID ';'  */
#line 65 "c7synt.y"
                             {printf("var-declaration -> type ID\n");}
#line 1692 "c7synt.tab.c"
    break;

  case 8: /* function-definition: type ID '(' parameters ')' compound-stmt  */
#line 67 "c7synt.y"
                                                               {printf("function-definition -> type ID '(' parameter-list ')'\n");}
#line 1698 "c7synt.tab.c"
    break;

  case 9: /* type: INT  */
#line 70 "c7synt.y"
                {printf("INT\n");}
#line 1704 "c7synt.tab.c"
    break;

  case 10: /* type: FLOAT  */
#line 71 "c7synt.y"
                {printf("FLOAT\n");}
#line 1710 "c7synt.tab.c"
    break;

  case 11: /* type: SET  */
#line 72 "c7synt.y"
                {printf("SET\n");}
#line 1716 "c7synt.tab.c"
    break;

  case 12: /* type: ELEM  */
#line 73 "c7synt.y"
                {printf("ELEM\n");}
#line 1722 "c7synt.tab.c"
    break;

  case 13: /* parameters: parameter-list  */
#line 75 "c7synt.y"
                           {printf("parameters -> parameter-list\n");}
#line 1728 "c7synt.tab.c"
    break;

  case 14: /* parameters: %empty  */
#line 76 "c7synt.y"
                   {printf("empty\n");}
#line 1734 "c7synt.tab.c"
    break;

  case 15: /* parameter-list: parameter-declaration  */
#line 78 "c7synt.y"
                                        {printf("parameter-list -> parameter-declaration\n");}
#line 1740 "c7synt.tab.c"
    break;

  case 16: /* parameter-list: parameter-list ',' parameter-declaration  */
#line 79 "c7synt.y"
                                                         {printf("parameter-list -> parameter-list ',' parameter-declaration\n");}
#line 1746 "c7synt.tab.c"
    break;

  case 17: /* parameter-declaration: type ID  */
#line 81 "c7synt.y"
                               {printf("parameter-declaration -> type ID\n");}
#line 1752 "c7synt.tab.c"
    break;

  case 18: /* compound-stmt: '{' var-decls local-stmts '}'  */
#line 83 "c7synt.y"
                                            {printf("C-stmt -> '{' var-decls local-stmts'}'\n");}
#line 1758 "c7synt.tab.c"
    break;

  case 19: /* var-decls: var-list  */
#line 85 "c7synt.y"
                    {printf("var-decls -> var-declaration var-decls\n");}
#line 1764 "c7synt.tab.c"
    break;

  case 21: /* var-list: var-list var-declaration  */
#line 88 "c7synt.y"
                                   {printf("var-");}
#line 1770 "c7synt.tab.c"
    break;

  case 23: /* local-stmts: stmts  */
#line 92 "c7synt.y"
                    {printf("local-stmts -> stmts\n");}
#line 1776 "c7synt.tab.c"
    break;

  case 25: /* stmts: stmts stmt  */
#line 95 "c7synt.y"
                  {printf("stmts -> stmts stmt");}
#line 1782 "c7synt.tab.c"
    break;

  case 27: /* stmt: io-stmt  */
#line 98 "c7synt.y"
              {printf("stmt -> io-stmt\n");}
#line 1788 "c7synt.tab.c"
    break;

  case 28: /* stmt: return-stmt  */
#line 99 "c7synt.y"
                  {printf("stmt -> return-stmt\n");}
#line 1794 "c7synt.tab.c"
    break;

  case 29: /* stmt: compound-stmt  */
#line 100 "c7synt.y"
                    {printf("stmt -> cp-stmt\n");}
#line 1800 "c7synt.tab.c"
    break;

  case 30: /* stmt: if-stmt  */
#line 101 "c7synt.y"
              {printf("stmt -> if-stmt\n");}
#line 1806 "c7synt.tab.c"
    break;

  case 31: /* stmt: for-stmt  */
#line 102 "c7synt.y"
               {printf("stmt -> for-stmt\n");}
#line 1812 "c7synt.tab.c"
    break;

  case 32: /* stmt: expression-stmt  */
#line 103 "c7synt.y"
                      {printf("stmt -> expression-stmt\n");}
#line 1818 "c7synt.tab.c"
    break;

  case 33: /* stmt: forall-stmt  */
#line 104 "c7synt.y"
                  {printf("stmt -> forall");}
#line 1824 "c7synt.tab.c"
    break;

  case 34: /* stmt: is_set-stmt  */
#line 105 "c7synt.y"
                  {printf("stmt -> IS_SET");}
#line 1830 "c7synt.tab.c"
    break;

  case 35: /* stmt: set-stmt  */
#line 106 "c7synt.y"
               {printf("stmt -> SET");}
#line 1836 "c7synt.tab.c"
    break;

  case 36: /* io-stmt: READ '(' ID ')' ';'  */
#line 109 "c7synt.y"
                             {printf("io-stmt -> read ( <id> ) \n");}
#line 1842 "c7synt.tab.c"
    break;

  case 37: /* io-stmt: WRITE '(' ID ')' ';'  */
#line 110 "c7synt.y"
                              {printf("io-stmt -> write ( <id> ) \n");}
#line 1848 "c7synt.tab.c"
    break;

  case 38: /* io-stmt: WRITELN '(' ID ')' ';'  */
#line 111 "c7synt.y"
                                {printf("io-stmt -> writeln ( <id> )\n");}
#line 1854 "c7synt.tab.c"
    break;

  case 41: /* for-stmt: FOR '(' expression ';' expression ';' expression ')' stmt ';'  */
#line 118 "c7synt.y"
                                                                        {printf("for-stmt -> for\n");}
#line 1860 "c7synt.tab.c"
    break;

  case 42: /* return-stmt: RETURN expression ';'  */
#line 121 "c7synt.y"
                                   {printf("return-stmt -> return exp ;\n");}
#line 1866 "c7synt.tab.c"
    break;

  case 43: /* forall-stmt: FORALL '(' in-exp ')' set-stmt ';'  */
#line 124 "c7synt.y"
                                                {printf(" set-op -> FORALL (in-exp)\n");}
#line 1872 "c7synt.tab.c"
    break;

  case 45: /* set-stmt: ADD '(' in-exp ')' ';'  */
#line 129 "c7synt.y"
                                 {printf(" set-op -> ADD (in-exp)\n");}
#line 1878 "c7synt.tab.c"
    break;

  case 46: /* set-stmt: REMOVE '(' in-exp ')' ';'  */
#line 130 "c7synt.y"
                                  {printf(" set-op -> REMOVE (in-exp)\n");}
#line 1884 "c7synt.tab.c"
    break;

  case 47: /* set-stmt: EXISTS '(' in-exp ')' ';'  */
#line 131 "c7synt.y"
                                  {printf(" set-op -> EXISTS (in-exp)\n");}
#line 1890 "c7synt.tab.c"
    break;

  case 48: /* expression-stmt: expression ';'  */
#line 133 "c7synt.y"
                                    {printf("expression-stmt -> expression ;\n");}
#line 1896 "c7synt.tab.c"
    break;

  case 49: /* expression-stmt: ';'  */
#line 134 "c7synt.y"
                                    {printf("expression-stmt -> ;\n");}
#line 1902 "c7synt.tab.c"
    break;

  case 50: /* expression: ID EQ expression  */
#line 136 "c7synt.y"
                               {printf("expression-> ID = expression \n");}
#line 1908 "c7synt.tab.c"
    break;

  case 51: /* expression: basic-exp  */
#line 137 "c7synt.y"
                               {printf("expression -> basic-exp\n");}
#line 1914 "c7synt.tab.c"
    break;

  case 52: /* expression: set-exp  */
#line 138 "c7synt.y"
                                {printf("expression -> set-exp\n");}
#line 1920 "c7synt.tab.c"
    break;

  case 53: /* set-exp: '[' element-list ']'  */
#line 140 "c7synt.y"
                              {printf("set-exp -> {element-list}\n");}
#line 1926 "c7synt.tab.c"
    break;

  case 54: /* set-exp: in-exp  */
#line 141 "c7synt.y"
                {printf("set-exp -> in-exp\n");}
#line 1932 "c7synt.tab.c"
    break;

  case 55: /* element-list: element-list ',' elem  */
#line 143 "c7synt.y"
                                    {printf("element-list -> element-list , elem\n");}
#line 1938 "c7synt.tab.c"
    break;

  case 56: /* element-list: elem  */
#line 144 "c7synt.y"
                                    {printf("element-list -> elem\n");}
#line 1944 "c7synt.tab.c"
    break;

  case 57: /* elem: ID  */
#line 146 "c7synt.y"
         {printf(" elem -> ID \n");}
#line 1950 "c7synt.tab.c"
    break;

  case 58: /* elem: INTEGER_CONST  */
#line 147 "c7synt.y"
                    {printf(" elem -> INTEGER_CONST\n");}
#line 1956 "c7synt.tab.c"
    break;

  case 59: /* elem: FLOAT_CONST  */
#line 148 "c7synt.y"
                  {printf(" elem -> FLOAT_CONST\n");}
#line 1962 "c7synt.tab.c"
    break;

  case 60: /* elem: '[' element-list ']'  */
#line 149 "c7synt.y"
                           {printf(" elem ->  { element-list }\n");}
#line 1968 "c7synt.tab.c"
    break;

  case 61: /* in-exp: basic-exp IN set-stmt  */
#line 152 "c7synt.y"
                              {printf(" in-exp -> basic-exp IN set-stmt\n");}
#line 1974 "c7synt.tab.c"
    break;

  case 62: /* in-exp: basic-exp IN ID  */
#line 153 "c7synt.y"
                        {printf(" in-exp -> basic-exp IN set-exp\n");}
#line 1980 "c7synt.tab.c"
    break;

  case 63: /* basic-exp: add-exp  */
#line 155 "c7synt.y"
                   {printf(" basic-exp -> add-exp\n");}
#line 1986 "c7synt.tab.c"
    break;

  case 64: /* basic-exp: add-exp rel-op add-exp  */
#line 156 "c7synt.y"
                                  {printf(" basic-exp -> add-exp rel-op add-exp\n");}
#line 1992 "c7synt.tab.c"
    break;

  case 65: /* rel-op: EQ_TO  */
#line 158 "c7synt.y"
              {printf(" rel-op -> EQ_TO\n");}
#line 1998 "c7synt.tab.c"
    break;

  case 66: /* rel-op: NEQ_TO  */
#line 159 "c7synt.y"
               {printf(" rel-op -> NEQ_TO\n");}
#line 2004 "c7synt.tab.c"
    break;

  case 67: /* rel-op: GT  */
#line 160 "c7synt.y"
            {printf(" rel-op -> GT\n");}
#line 2010 "c7synt.tab.c"
    break;

  case 68: /* rel-op: LT  */
#line 161 "c7synt.y"
           {printf(" rel-op -> LT\n");}
#line 2016 "c7synt.tab.c"
    break;

  case 69: /* rel-op: GTE  */
#line 162 "c7synt.y"
            {printf(" rel-op -> GTE\n");}
#line 2022 "c7synt.tab.c"
    break;

  case 70: /* rel-op: LTE  */
#line 163 "c7synt.y"
            {printf(" rel-op -> LTE\n");}
#line 2028 "c7synt.tab.c"
    break;

  case 71: /* add-exp: term  */
#line 165 "c7synt.y"
              {printf(" add-exp -> term\n");}
#line 2034 "c7synt.tab.c"
    break;

  case 72: /* add-exp: term add-op term  */
#line 166 "c7synt.y"
                          {printf(" add-exp -> term add-op term\n");}
#line 2040 "c7synt.tab.c"
    break;

  case 73: /* add-op: PLUS  */
#line 168 "c7synt.y"
             {printf(" add-op -> PLUS\n");}
#line 2046 "c7synt.tab.c"
    break;

  case 74: /* add-op: MINUS  */
#line 169 "c7synt.y"
              {printf(" rel-op -> MINUS\n");}
#line 2052 "c7synt.tab.c"
    break;

  case 75: /* term: factor  */
#line 171 "c7synt.y"
             {printf(" term -> factor\n");}
#line 2058 "c7synt.tab.c"
    break;

  case 76: /* term: term mul-op factor  */
#line 172 "c7synt.y"
                         {printf(" term -> term mul-op factor\n");}
#line 2064 "c7synt.tab.c"
    break;

  case 77: /* mul-op: MULT  */
#line 174 "c7synt.y"
             {printf(" mul-op -> MULT\n");}
#line 2070 "c7synt.tab.c"
    break;

  case 78: /* mul-op: DIV  */
#line 175 "c7synt.y"
            {printf(" mul-op -> DIV\n");}
#line 2076 "c7synt.tab.c"
    break;

  case 79: /* factor: '(' expression ')'  */
#line 177 "c7synt.y"
                           {printf(" factor -> ( expression )\n");}
#line 2082 "c7synt.tab.c"
    break;

  case 80: /* factor: ID  */
#line 178 "c7synt.y"
           {printf(" factor -> ID\n");}
#line 2088 "c7synt.tab.c"
    break;

  case 81: /* factor: constant  */
#line 179 "c7synt.y"
                 {printf(" factor -> constant\n");}
#line 2094 "c7synt.tab.c"
    break;

  case 82: /* factor: call  */
#line 180 "c7synt.y"
             {printf("factor -> call\n");}
#line 2100 "c7synt.tab.c"
    break;

  case 83: /* constant: INTEGER_CONST  */
#line 182 "c7synt.y"
                        {printf(" constant -> INTEGER_CONST\n");}
#line 2106 "c7synt.tab.c"
    break;

  case 84: /* constant: FLOAT_CONST  */
#line 183 "c7synt.y"
                      {printf(" constant -> FLOAT_CONST\n");}
#line 2112 "c7synt.tab.c"
    break;

  case 85: /* constant: EMPTY_CONST  */
#line 184 "c7synt.y"
                      {printf(" constant -> EMPTY_CONST\n");}
#line 2118 "c7synt.tab.c"
    break;

  case 86: /* call: ID '(' args ')'  */
#line 186 "c7synt.y"
                    {printf(" call -> ID (args)\n");}
#line 2124 "c7synt.tab.c"
    break;

  case 87: /* args: arg-list  */
#line 188 "c7synt.y"
               {printf(" args -> arg-list\n");}
#line 2130 "c7synt.tab.c"
    break;

  case 88: /* args: %empty  */
#line 189 "c7synt.y"
             {printf(" args -> empty\n");}
#line 2136 "c7synt.tab.c"
    break;

  case 89: /* arg-list: expression  */
#line 191 "c7synt.y"
                     {printf(" arg-list -> expression\n");}
#line 2142 "c7synt.tab.c"
    break;

  case 90: /* arg-list: arg-list ',' expression  */
#line 192 "c7synt.y"
                                  {printf(" arg-list -> arg-list , expression\n");}
#line 2148 "c7synt.tab.c"
    break;


#line 2152 "c7synt.tab.c"

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

#line 195 "c7synt.y"


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
    fclose(yyin);
    yylex_destroy();
    return 0;
}
