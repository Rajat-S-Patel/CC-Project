/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "bison_file.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYSTYPE char *




typedef struct node{
      int scope;
      int value;
      char name[100];
      char dtype[50];
      int line_num;
      int valid;
}node;

typedef struct table{
      node* head;
}table;
// int count = 0;
extern node symTable[1000];


extern int yylineno;
int valid=1;
int yylex();
int yyerror(const char *s);
extern int SymTable[100];
extern char tdType[50];
extern int t_scope;
extern int dflag;
extern int count;
extern void displaySymTable();
extern int find(int  t_scope, char *yytext);
extern void update(char* name, int value, int scope);
extern int insert(int* idx, int scope, char* dtype, char* val, int line_num);
extern void decrScope();


#line 112 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ID = 258,
    CLASS = 259,
    NUM = 260,
    T_lt = 261,
    T_gt = 262,
    COMMA = 263,
    STRC = 264,
    TERMINATOR = 265,
    RETURN = 266,
    FLT = 267,
    T_lteq = 268,
    T_gteq = 269,
    T_neq = 270,
    T_eqeq = 271,
    T_pl = 272,
    T_min = 273,
    T_mul = 274,
    T_div = 275,
    T_and = 276,
    T_or = 277,
    T_incr = 278,
    T_decr = 279,
    T_not = 280,
    T_eq = 281,
    WHILE = 282,
    INT = 283,
    CHAR = 284,
    FLOAT = 285,
    VOID = 286,
    H = 287,
    MAINTOK = 288,
    INCLUDE = 289,
    BREAK = 290,
    CONTINUE = 291,
    IF = 292,
    ELSE = 293,
    COUT = 294,
    STRING = 295,
    FOR = 296,
    OB = 297,
    CB = 298,
    OBR = 299,
    CBR = 300,
    ENDL = 301,
    CHARACTER = 302,
    str_ins = 303,
    str_extr = 304,
    CIN = 305,
    QMARK = 306,
    COLON = 307
  };
#endif
/* Tokens.  */
#define ID 258
#define CLASS 259
#define NUM 260
#define T_lt 261
#define T_gt 262
#define COMMA 263
#define STRC 264
#define TERMINATOR 265
#define RETURN 266
#define FLT 267
#define T_lteq 268
#define T_gteq 269
#define T_neq 270
#define T_eqeq 271
#define T_pl 272
#define T_min 273
#define T_mul 274
#define T_div 275
#define T_and 276
#define T_or 277
#define T_incr 278
#define T_decr 279
#define T_not 280
#define T_eq 281
#define WHILE 282
#define INT 283
#define CHAR 284
#define FLOAT 285
#define VOID 286
#define H 287
#define MAINTOK 288
#define INCLUDE 289
#define BREAK 290
#define CONTINUE 291
#define IF 292
#define ELSE 293
#define COUT 294
#define STRING 295
#define FOR 296
#define OB 297
#define CB 298
#define OBR 299
#define CBR 300
#define ENDL 301
#define CHARACTER 302
#define str_ins 303
#define str_extr 304
#define CIN 305
#define QMARK 306
#define COLON 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   694

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

#define YYUNDEFTOK  2
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    53,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    52,    56,    57,    58,    59,    62,    63,
      64,    65,    70,    73,    78,    79,    84,    88,    89,    90,
      91,   100,   101,   107,   108,   112,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   129,   130,   131,   132,   135,
     136,   137,   138,   139,   140,   143,   144,   145,   146,   150,
     151,   152,   153,   154,   155,   156,   162,   163,   164,   165,
     166,   167,   168,   169,   174,   181,   189,   195,   203,   212,
     219,   225,   232,   241,   255,   256,   257,   270,   282,   283,
     284,   288,   300,   303,   306,   309,   315,   320,   321,   322,
     326,   327,   330,   331,   332,   333,   338,   343,   344,   345,
     348,   349,   350,   353,   354,   355,   356,   357,   358,   378,
     379,   383,   386,   392
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CLASS", "NUM", "T_lt", "T_gt",
  "COMMA", "STRC", "TERMINATOR", "RETURN", "FLT", "T_lteq", "T_gteq",
  "T_neq", "T_eqeq", "T_pl", "T_min", "T_mul", "T_div", "T_and", "T_or",
  "T_incr", "T_decr", "T_not", "T_eq", "WHILE", "INT", "CHAR", "FLOAT",
  "VOID", "H", "MAINTOK", "INCLUDE", "BREAK", "CONTINUE", "IF", "ELSE",
  "COUT", "STRING", "FOR", "OB", "CB", "OBR", "CBR", "ENDL", "CHARACTER",
  "str_ins", "str_extr", "CIN", "QMARK", "COLON", "'\"'", "$accept", "S",
  "START", "FunctionDeclaration", "FunctionName", "ParamsType", "Function",
  "CLASS_DEC", "MAIN", "BODY", "C", "LOOPS", "COND_STMT", "LOOPBODY",
  "statement", "COND", "ASSIGN_EXPR", "X", "ARITH_EXPR", "ARITH_NEW",
  "TERNARY_EXPR", "INPUT", "PRINT", "PRINT_REP", "LIT", "TYPE", "RELOP",
  "bin_boolop", "un_arop", "un_boolop", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    34
};
# endif

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     160,  -165,   -17,   -15,     5,    22,  -165,  -165,    68,    68,
      20,    82,  -165,   256,  -165,  -165,   120,    76,   129,   124,
     143,  -165,   586,  -165,  -165,  -165,  -165,   112,  -165,  -165,
    -165,   148,   156,   131,   126,   144,   410,   153,  -165,   162,
     304,  -165,  -165,   190,  -165,   353,  -165,  -165,  -165,  -165,
     395,   207,   410,   410,   173,    74,  -165,   410,   529,  -165,
     353,  -165,    57,  -165,  -165,    57,   128,    11,  -165,   174,
     253,   616,   453,  -165,   215,   256,  -165,  -165,   209,  -165,
     410,   410,   410,   410,  -165,  -165,   410,  -165,    81,   353,
     353,   221,   -17,  -165,   183,    74,   431,  -165,   227,  -165,
     353,  -165,   204,   226,   228,   194,   346,   125,   199,   -11,
      26,   124,   234,   196,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,   152,   410,   410,   639,   201,   352,  -165,   116,   116,
    -165,  -165,   353,   249,   410,   529,    47,  -165,  -165,  -165,
    -165,   400,  -165,  -165,   529,   152,   152,   394,   529,   -11,
     601,  -165,  -165,    57,   558,    45,   315,   651,   152,   250,
    -165,   161,  -165,   258,   245,    13,   213,   135,  -165,  -165,
    -165,   307,   220,  -165,   -11,    26,   254,   217,   152,  -165,
     152,  -165,   216,   249,   410,   249,  -165,   431,  -165,    15,
     274,   151,   152,   443,  -165,  -165,   558,   558,   394,   192,
     284,  -165,   366,  -165,  -165,   431,  -165,   151,  -165,   246,
     252,  -165,   259,  -165,   152,  -165,  -165,   249,  -165,  -165,
      57,   529,  -165,  -165,   261,  -165,   529,   263,   486,   257,
    -165,    57,   262,   529,   272,   529,  -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     0,     0,     2,     7,     0,     0,
       0,     0,     1,     0,    24,    23,     0,     0,     0,    96,
       0,    97,     0,    98,   111,   112,   113,     0,   100,   101,
     102,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,    29,    37,     0,    49,    50,    74,    51,    52,    53,
      73,     0,     0,     0,     0,     0,    34,     0,     0,    54,
      55,    80,     0,    30,    31,     0,     0,     0,    96,     0,
       0,    73,     0,    33,     0,     0,    25,    27,     0,    28,
       0,     0,     0,     0,   109,   110,     0,    76,    66,    77,
      78,     0,   100,     5,     0,     0,     0,    10,     0,     6,
      64,    46,     0,     0,     0,     0,    57,     0,     0,    94,
      94,     0,     0,     0,    79,   103,   104,   105,   106,   107,
     108,     0,     0,     0,    73,    87,     0,    26,    82,    83,
      84,    85,    75,     0,     0,     0,     0,    11,     4,    12,
      48,     0,    38,    47,     0,     0,     0,    63,     0,    94,
       0,    91,    90,     0,     0,    56,    73,    73,     0,     0,
      32,    70,    67,    65,     0,     0,     0,    16,    45,    35,
      61,     0,    39,    95,    94,    94,     0,     0,     0,    62,
       0,    60,    88,     0,     0,     0,    21,     0,    18,     0,
      15,     0,     0,     0,    93,    92,     0,     0,     0,     0,
       0,    69,    72,    68,     8,     0,    19,     0,    14,     0,
       0,    40,     0,    86,     0,    59,    89,     0,     9,    13,
       0,     0,    58,    71,     0,    36,     0,    41,     0,     0,
      42,     0,     0,     0,    43,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,   -89,  -165,  -160,  -165,  -165,     8,    -6,
     -10,   -30,  -165,  -120,    -7,   -60,   -18,  -164,    -2,  -165,
     140,  -165,  -165,   -49,   -36,   -42,  -115,   -58,   -33,   -35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    93,    94,   166,    95,    96,    97,    14,
      40,    41,    42,   103,   104,    69,    44,   162,    45,    46,
      47,    48,    49,   151,    50,    51,   121,    86,    52,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    72,   105,    15,    59,   108,    43,   138,     7,   158,
      77,    10,    98,   122,   111,   164,     8,    87,     9,   201,
      60,   203,    12,   187,   169,   205,   106,   107,   172,   106,
     107,   208,   158,    78,    70,   149,   124,   150,    87,    28,
      29,    30,   180,    80,    81,    82,    83,   219,   145,   112,
      89,    90,    16,   223,    98,   100,   192,    13,    11,    13,
      68,   152,    21,    99,   110,   126,    84,    85,    43,    23,
      90,   147,   149,   211,   150,    28,    29,    30,   128,   129,
     130,   131,    26,   214,   132,   155,   156,   157,    72,   133,
     165,    87,   141,   176,   167,    43,    77,   178,   204,   122,
     173,   225,     2,   137,    38,     3,   227,   134,   230,   170,
     171,    77,    13,   234,    17,   236,   218,   106,   107,    78,
     132,    70,   181,    87,    87,   194,   195,    54,    68,    55,
      21,    68,   163,    21,    78,    82,    83,    23,   190,    56,
      23,   178,   198,   191,   199,    98,    58,   177,   175,   167,
      57,    24,    25,    26,    62,    68,   209,    21,    63,   188,
     224,     1,    61,    98,    23,   167,    64,   146,   109,   183,
      36,   232,    38,    65,    66,    38,    61,    91,   222,    28,
      29,    30,   202,   206,   106,   107,    67,   184,     2,   212,
     213,     3,    61,    61,     4,   106,   107,    61,    73,    38,
      79,    92,    29,    30,     3,    18,    61,    19,    20,    21,
      88,    74,    61,    84,    85,    22,    23,   113,   125,   127,
      61,    61,    61,    61,   135,   136,    61,    24,    25,    26,
     139,    27,    28,    29,    30,   215,   142,   144,   143,    31,
      32,    33,   148,    34,   153,    35,    36,   154,    37,   140,
     159,    38,   161,   182,    39,   186,   189,    18,   193,    19,
      20,    21,    61,    61,   196,   200,   185,    22,    23,   197,
      80,    81,    82,    83,    61,    80,    81,    82,    83,    24,
      25,    26,   207,    27,    28,    29,    30,   216,     0,   215,
      61,    31,    32,    33,   220,    34,   114,    35,    36,   231,
      37,   228,   221,    38,   226,   233,    39,    19,    20,    21,
     235,     0,     0,   115,   116,    22,    23,     0,     0,     0,
     117,   118,   119,   120,    61,     0,     0,    24,    25,    26,
       0,    27,    28,    29,    30,     0,    84,    85,    24,    25,
       0,    33,     0,    34,     0,    35,    36,     0,    75,    76,
     179,    38,   115,   116,    39,    19,    20,    21,   -61,   117,
     118,   119,   120,    22,    23,     0,     0,    84,    85,     0,
      80,    81,    82,    83,   217,    24,    25,    26,     0,    27,
      28,    29,    30,    80,    81,    82,    83,     0,     0,    33,
       0,    34,     0,    35,    36,     0,    75,   160,     0,    38,
     115,   116,    39,    19,    20,    21,     0,   117,   118,   119,
     120,    22,    23,    68,     0,    21,    84,    85,    24,    25,
       0,     0,    23,    24,    25,    26,     0,    27,    28,    29,
      30,     0,     0,    24,    25,    26,     0,    33,     0,    34,
       0,    35,    36,     0,    75,   168,    19,    38,    21,     0,
      39,     0,    36,   101,    22,    23,    68,    38,    21,    92,
      29,    30,     3,     0,     0,    23,    24,    25,    26,     0,
       0,    28,    29,    30,     0,     0,    24,    25,    26,     0,
     210,     0,    34,     0,     0,    36,     0,   102,     0,    19,
      38,    21,     0,    39,     0,   123,   101,    22,    23,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,   229,     0,    34,     0,     0,    36,     0,
     102,     0,    19,    38,    21,     0,    39,     0,     0,   101,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,     0,     0,    28,    29,    30,
       0,    19,     0,    21,     0,     0,     0,     0,    34,    22,
      23,    36,     0,   102,     0,     0,    38,     0,     0,    39,
       0,    24,    25,    26,     0,     0,    28,    29,    30,    19,
       0,    21,     0,     0,     0,     0,     0,    34,    23,     0,
      36,     0,     0,     0,    68,    38,    21,     0,    39,    24,
      25,    26,     0,    23,    28,    29,    30,     0,     0,     0,
       0,     0,   115,   116,    24,    25,    26,     0,    36,   117,
     118,   119,   120,    38,     0,     0,     0,    84,    85,    24,
      25,   174,     0,    36,     0,   115,   116,     0,    38,     0,
       0,     0,   117,   118,   119,   120,     0,   115,   116,   -57,
      84,    85,    24,    25,   117,   118,   119,   120,     0,     0,
       0,     0,    84,    85,    24,    25,     0,     0,     0,     0,
       0,     0,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179
};

static const yytype_int16 yycheck[] =
{
      36,    36,    62,     9,    22,    65,    13,    96,     0,   124,
      40,     6,    54,    71,     3,   135,    33,    50,    33,   183,
      22,   185,     0,    10,   144,    10,    62,    62,   148,    65,
      65,   191,   147,    40,    36,    46,    72,    48,    71,    28,
      29,    30,   157,    17,    18,    19,    20,   207,   106,    67,
      52,    53,    32,   217,    96,    57,   171,    44,    53,    44,
       3,   110,     5,    55,    66,    75,    21,    22,    75,    12,
      72,   107,    46,   193,    48,    28,    29,    30,    80,    81,
      82,    83,    25,   198,    86,   121,   122,   123,   123,     8,
      43,   124,   102,   153,   136,   102,   126,   155,   187,   157,
     149,   221,    28,    95,    47,    31,   226,    26,   228,   145,
     146,   141,    44,   233,    32,   235,   205,   153,   153,   126,
     122,   123,   158,   156,   157,   174,   175,     7,     3,    53,
       5,     3,   134,     5,   141,    19,    20,    12,     3,    10,
      12,   199,   178,     8,   180,   187,     3,   154,   150,   191,
      26,    23,    24,    25,    42,     3,   192,     5,    10,   165,
     220,     1,    22,   205,    12,   207,    10,    42,    40,     8,
      42,   231,    47,    42,    48,    47,    36,     4,   214,    28,
      29,    30,   184,   189,   220,   220,    42,    26,    28,   196,
     197,    31,    52,    53,    34,   231,   231,    57,    45,    47,
      10,    28,    29,    30,    31,     1,    66,     3,     4,     5,
       3,    49,    72,    21,    22,    11,    12,    43,     3,    10,
      80,    81,    82,    83,     3,    42,    86,    23,    24,    25,
       3,    27,    28,    29,    30,    43,    10,    43,    10,    35,
      36,    37,    43,    39,    10,    41,    42,    51,    44,    45,
      49,    47,     3,     3,    50,    10,    43,     1,    38,     3,
       4,     5,   122,   123,    10,    49,     8,    11,    12,    52,
      17,    18,    19,    20,   134,    17,    18,    19,    20,    23,
      24,    25,     8,    27,    28,    29,    30,     3,    -1,    43,
     150,    35,    36,    37,    42,    39,    43,    41,    42,    42,
      44,    38,    43,    47,    43,    43,    50,     3,     4,     5,
      38,    -1,    -1,     6,     7,    11,    12,    -1,    -1,    -1,
      13,    14,    15,    16,   184,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    -1,    21,    22,    23,    24,
      -1,    37,    -1,    39,    -1,    41,    42,    -1,    44,    45,
      43,    47,     6,     7,    50,     3,     4,     5,    43,    13,
      14,    15,    16,    11,    12,    -1,    -1,    21,    22,    -1,
      17,    18,    19,    20,     8,    23,    24,    25,    -1,    27,
      28,    29,    30,    17,    18,    19,    20,    -1,    -1,    37,
      -1,    39,    -1,    41,    42,    -1,    44,    45,    -1,    47,
       6,     7,    50,     3,     4,     5,    -1,    13,    14,    15,
      16,    11,    12,     3,    -1,     5,    21,    22,    23,    24,
      -1,    -1,    12,    23,    24,    25,    -1,    27,    28,    29,
      30,    -1,    -1,    23,    24,    25,    -1,    37,    -1,    39,
      -1,    41,    42,    -1,    44,    45,     3,    47,     5,    -1,
      50,    -1,    42,    10,    11,    12,     3,    47,     5,    28,
      29,    30,    31,    -1,    -1,    12,    23,    24,    25,    -1,
      -1,    28,    29,    30,    -1,    -1,    23,    24,    25,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    44,    -1,     3,
      47,     5,    -1,    50,    -1,    42,    10,    11,    12,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      44,    -1,     3,    47,     5,    -1,    50,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    28,    29,    30,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    39,    11,
      12,    42,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    30,     3,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    39,    12,    -1,
      42,    -1,    -1,    -1,     3,    47,     5,    -1,    50,    23,
      24,    25,    -1,    12,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,     6,     7,    23,    24,    25,    -1,    42,    13,
      14,    15,    16,    47,    -1,    -1,    -1,    21,    22,    23,
      24,    40,    -1,    42,    -1,     6,     7,    -1,    47,    -1,
      -1,    -1,    13,    14,    15,    16,    -1,     6,     7,    43,
      21,    22,    23,    24,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    28,    31,    34,    55,    56,    62,    33,    33,
       6,    53,     0,    44,    63,    63,    32,    32,     1,     3,
       4,     5,    11,    12,    23,    24,    25,    27,    28,    29,
      30,    35,    36,    37,    39,    41,    42,    44,    47,    50,
      64,    65,    66,    68,    70,    72,    73,    74,    75,    76,
      78,    79,    82,    83,     7,    53,    10,    26,     3,    70,
      72,    74,    42,    10,    10,    42,    48,    42,     3,    69,
      72,    78,    83,    45,    49,    44,    45,    65,    68,    10,
      17,    18,    19,    20,    21,    22,    81,    82,     3,    72,
      72,     4,    28,    57,    58,    60,    61,    62,    79,    62,
      72,    10,    44,    67,    68,    69,    78,    83,    69,    40,
      72,     3,    70,    43,    43,     6,     7,    13,    14,    15,
      16,    80,    81,    42,    78,     3,    64,    10,    72,    72,
      72,    72,    72,     8,    26,     3,    42,    62,    57,     3,
      45,    64,    10,    10,    43,    81,    42,    78,    43,    46,
      48,    77,    77,    10,    51,    78,    78,    78,    80,    49,
      45,     3,    71,    72,    67,    43,    59,    79,    45,    67,
      78,    78,    67,    77,    40,    72,    69,    68,    81,    43,
      80,    78,     3,     8,    26,     8,    10,    10,    63,    43,
       3,     8,    80,    38,    77,    77,    10,    52,    78,    78,
      49,    71,    72,    71,    57,    10,    63,     8,    59,    78,
      37,    67,    68,    68,    80,    43,     3,     8,    57,    59,
      42,    43,    78,    71,    69,    67,    43,    67,    38,    37,
      67,    42,    69,    43,    67,    38,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    58,    59,    59,    59,    59,    60,    60,    60,
      60,    61,    61,    62,    62,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    74,    75,    75,    75,
      76,    76,    77,    77,    77,    77,    78,    78,    78,    78,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     6,     5,     5,     1,     5,     6,
       1,     2,     2,     4,     3,     2,     1,     0,     4,     5,
       0,     4,     0,     3,     3,     3,     3,     2,     2,     1,
       2,     2,     4,     2,     2,     5,     9,     1,     4,     5,
       7,    11,    13,    17,    19,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     3,     1,     7,     6,
       4,     3,     4,     2,     3,     4,     2,     4,     6,     3,
       1,     5,     3,     1,     1,     3,     2,     2,     2,     3,
       1,     1,     3,     3,     3,     3,     7,     3,     5,     7,
       4,     4,     3,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 51 "bison_file.y"
              {printf("Successful parsing.\n");}
#line 1689 "y.tab.c"
    break;

  case 3:
#line 52 "bison_file.y"
           { yyerrok; yyclearin;}
#line 1695 "y.tab.c"
    break;

  case 13:
#line 73 "bison_file.y"
                                            {
                  if(!insert(&count, t_scope, yyvsp[-3], yyvsp[-2], yylineno)){
                        yyerror("Variable redeclared");
                  }
            }
#line 1705 "y.tab.c"
    break;

  case 15:
#line 79 "bison_file.y"
                  {
               if(!insert(&count, t_scope, yyvsp[-1], yyvsp[0], yylineno)){
                        yyerror("Variable redeclared");
                  }
         }
#line 1715 "y.tab.c"
    break;

  case 64:
#line 174 "bison_file.y"
                           {
      ;
        if (find(t_scope, yyvsp[-2]) == -1) {
          yyerror("variable not declared");
        }
      update(yyvsp[-2], yyvsp[0], t_scope);
    }
#line 1727 "y.tab.c"
    break;

  case 65:
#line 181 "bison_file.y"
                                {
        if(!insert(&count, t_scope, yyvsp[-3], yyvsp[-2], yylineno))
              yyerror("Variable redeclared");

        update(yyvsp[-2], yyvsp[0], t_scope);
      }
#line 1738 "y.tab.c"
    break;

  case 66:
#line 189 "bison_file.y"
              {

        if(!insert(&count, t_scope, yyvsp[-1], yyvsp[0], yylineno))
              yyerror("Variable redeclared");
      }
#line 1748 "y.tab.c"
    break;

  case 67:
#line 195 "bison_file.y"
                        {
        strcpy(tdType, yyvsp[-3]);
        dflag = 1;

        if(!insert(&count, t_scope, yyvsp[-3], yyvsp[-2], yylineno))
              yyerror("Variable redeclared");
            }
#line 1760 "y.tab.c"
    break;

  case 68:
#line 203 "bison_file.y"
                                      {
        strcpy(tdType, yyvsp[-5]);
        dflag = 1;
        if(!insert(&count, t_scope, yyvsp[-5], yyvsp[-4], yylineno))
              yyerror("Variable redeclared");
        update(yyvsp[-4], atoi(yyvsp[-2]), t_scope);
      }
#line 1772 "y.tab.c"
    break;

  case 69:
#line 212 "bison_file.y"
               {
  if(!insert(&count, t_scope, tdType, yyvsp[-2], yylineno)){
    printf("redeclared: %s\n", yyvsp[-2]);
    yyerror("Variable redeclared");
  }
}
#line 1783 "y.tab.c"
    break;

  case 70:
#line 219 "bison_file.y"
     {
    if(!insert(&count, t_scope, tdType, yyvsp[0], yylineno)){
      printf("redeclared: %s\n", yyvsp[0]);
      yyerror("Variable redeclared");
    }
  }
#line 1794 "y.tab.c"
    break;

  case 71:
#line 225 "bison_file.y"
                               {
    if(!insert(&count, t_scope, tdType, yyvsp[-4], yylineno)){
      printf("redeclared: %s\n", yyvsp[-4]);
      yyerror("Variable redeclared");
    }
    update(yyvsp[-4], atoi(yyvsp[-2]), t_scope);
  }
#line 1806 "y.tab.c"
    break;

  case 72:
#line 232 "bison_file.y"
                       {
    if(!insert(&count, t_scope, tdType, yyvsp[-2], yylineno)){
      printf("redeclared: %s\n", yyvsp[-2]);
      yyerror("Variable redeclared");
    }
    update(yyvsp[-2], atoi(yyvsp[0]), t_scope);
  }
#line 1818 "y.tab.c"
    break;

  case 73:
#line 241 "bison_file.y"
           {
            int val;
            
            if(atoi(yyvsp[0])){
                  val = atoi(yyvsp[0]);
            }
            else{
                  int idx = find(t_scope, yyvsp[0]);
                  val = symTable[idx].value;
                  
            } 
            yyval = val;
          
      }
#line 1837 "y.tab.c"
    break;

  case 74:
#line 255 "bison_file.y"
                  {yyval = yyvsp[0];}
#line 1843 "y.tab.c"
    break;

  case 76:
#line 257 "bison_file.y"
                   {
            int val;
            if(atoi(yyvsp[-1])){
                  yyerror("needs an lvalue");
            }
            else{
                  int idx = find(t_scope, yyvsp[-1]);
                  val = symTable[idx].value;
                  update(yyvsp[-1], val, t_scope);                  
            } 
            yyval = val;
            
      }
#line 1861 "y.tab.c"
    break;

  case 77:
#line 270 "bison_file.y"
                          {
            int val;
            if(atoi(yyvsp[0])){
                  yyerror("needs an lvalue");
            }
            else{
                  int idx = find(t_scope, yyvsp[0]);
                  val = symTable[idx].value + 1;
                  update(yyvsp[0], val+1, t_scope);                  
            } 
            yyval = val;
      }
#line 1878 "y.tab.c"
    break;

  case 81:
#line 288 "bison_file.y"
         {
            int val;
            if(atoi(yyvsp[0])){
                  val = atoi(yyvsp[0]);
            }
            else{
                  int idx = find(t_scope, yyvsp[0]);
                  val = symTable[idx].value;
                  
            } 
            yyval = val; 
      }
#line 1895 "y.tab.c"
    break;

  case 82:
#line 300 "bison_file.y"
                                  {
            yyval = (int)yyvsp[-2] + (int)yyvsp[0];
      }
#line 1903 "y.tab.c"
    break;

  case 83:
#line 303 "bison_file.y"
                                   {
            yyval = (int)yyvsp[-2] - (int)yyvsp[0];
      }
#line 1911 "y.tab.c"
    break;

  case 84:
#line 306 "bison_file.y"
                                   {
            yyval = (int)yyvsp[-2] * (int)yyvsp[0];
      }
#line 1919 "y.tab.c"
    break;

  case 85:
#line 309 "bison_file.y"
                                   {
            yyval = (int)yyvsp[-2] / (int)yyvsp[0];
      }
#line 1927 "y.tab.c"
    break;

  case 96:
#line 338 "bison_file.y"
           {
        if (find(t_scope, yyvsp[0]) == -1) {
            yyerror("variable not declared");
        }
      }
#line 1937 "y.tab.c"
    break;

  case 111:
#line 383 "bison_file.y"
              {
            yyval = yyvsp[0];
      }
#line 1945 "y.tab.c"
    break;

  case 112:
#line 386 "bison_file.y"
              {
            yyval = yyvsp[0];
      }
#line 1953 "y.tab.c"
    break;


#line 1957 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 396 "bison_file.y"


#include <ctype.h>
int yyerror(const char *s)
{
  	extern int yylineno;
  	valid =0;
      printf("\033[1;31m \n\nERROR: line number: %d - error: %s\n\n \033[0m\n",yylineno,s);
}

int main()
{
	t_scope=1;
	count=0;
	yyparse();
	if(valid)
  		printf("\033[1;92mParsing successful \033[m \n\n\n");
	else
	{
  		printf("\033[1;31mParsing unsuccessful \033[m \n\n\n");
	}
	displaySymTable();
	return 0;
}
