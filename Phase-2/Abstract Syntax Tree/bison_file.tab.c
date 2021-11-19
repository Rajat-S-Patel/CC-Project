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
#line 1 "bison_file.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <limits.h>

	void yyerror(const char*);
	int yylex();
	extern FILE * yyin, *yyout;

	int x=0;	

	extern int line;
	
	int scope = 0;

	int unaryop = -1;		//unary operator type
	int assignop = -1;		//assignment operator == += -=
	int datatype = -1;		//type specifier
	int assigntype = -1;	//RHS type 
	int idcheck = -1;		//check if ID 
	int check_un = 0;		//check for undeclared variables


	char tempStr[100];		//sprintf

	struct node{
		char token[20];
		char name[20];
		int dtype;
		int scope;
		int lineno;
		int valid;
		union value{
			float f;
			int i;
			char c;
		}val;
		
		struct node *link;

	}*first = NULL, *tmp, *crt, *lhs;

	typedef struct Node{
		struct Node *left;
		struct Node *right;
		char token[100];
		struct Node *val;
		int level;
	}Node;

	typedef struct tree_stack{
		Node *node;
		struct tree_stack *next;
	}tree_stack;

	tree_stack *tree_top = NULL;
	char preBuf[1000000];

	struct node * checksym(char *);
	void addsymbol(struct node *,char *);	
	void addInt(struct node *, int, int);
	void addFloat(struct node *, int, float);
	void addChar(struct node *, int, char);
	void addfunc(struct node *t, int, char *);
	void printsymtable();

	struct node * addtosymbol(struct node * n);
	void cleansymbol();


	//AST 
	void create_node(char *token, int leaf);
	void push_tree(Node *newnode);
	Node *pop_tree();
	void preorder(Node* root);
	void printtree(Node* root);
	int getmaxlevel(Node *root);
	void printGivenLevel(Node* root, int level, int h);
	void get_levels(Node *root, int level);



#line 154 "bison_file.tab.c"

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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_BISON_FILE_TAB_H_INCLUDED
# define YY_YY_BISON_FILE_TAB_H_INCLUDED
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
    HASH = 258,
    INCLUDE = 259,
    IOSTREAM = 260,
    STRING_LITERAL = 261,
    HEADER_LITERAL = 262,
    PRINT = 263,
    RETURN = 264,
    INTEGER_LITERAL = 265,
    CHARACTER_LITERAL = 266,
    FLOAT_LITERAL = 267,
    IDENTIFIER = 268,
    INC_OP = 269,
    DEC_OP = 270,
    LE_OP = 271,
    GE_OP = 272,
    EQ_OP = 273,
    NE_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    CHAR = 280,
    INT = 281,
    FLOAT = 282,
    VOID = 283,
    FOR = 284,
    WHILE = 285,
    IF = 286,
    ELSE = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 91 "bison_file.y"

	int ival;
	float fval;
	char cval;
	char string[128];
	struct node *ptr;

#line 247 "bison_file.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_FILE_TAB_H_INCLUDED  */



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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

#define YYUNDEFTOK  2
#define YYMAXUTOK   289


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
       2,     2,     2,    49,     2,     2,     2,    14,     2,     2,
      44,    45,    13,    10,    46,    11,     2,    12,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    43,
      39,    15,    40,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,    50,     2,     2,     2,
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
       5,     6,     7,     8,     9,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   127,   127,   135,   136,   137,   142,   143,   148,   149,
     154,   159,   160,   165,   166,   174,   175,   176,   177,   181,
     186,   187,   192,   197,   209,   210,   211,   215,   216,   222,
     226,   234,   235,   236,   237,   242,   243,   248,   248,   356,
     423,   424,   424,   673,   674,   675,   676,   677,   678,   683,
     684,   699,   700,   705,   706,   711,   745,   754,   772,   790,
     797,   798,   799,   804,   805,   833,   834,   835,   836,   837,
     838,   843,   844,   853,   865,   866,   875,   884,   893,   906,
     907,   912,   921,   922,   927,   941,   960,   978,  1005,  1006,
    1011,  1018,  1019,  1020,  1025,  1026,  1031,  1032,  1037,  1038
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "INCLUDE", "IOSTREAM",
  "STRING_LITERAL", "HEADER_LITERAL", "PRINT", "RETURN", "'+'", "'-'",
  "'/'", "'*'", "'%'", "'='", "INTEGER_LITERAL", "CHARACTER_LITERAL",
  "FLOAT_LITERAL", "IDENTIFIER", "INC_OP", "DEC_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "CHAR", "INT", "FLOAT", "VOID", "FOR", "WHILE", "IF",
  "ELSE", "'<'", "'>'", "'{'", "'}'", "';'", "'('", "')'", "','", "'?'",
  "':'", "'!'", "'~'", "\"INC_OP\"", "\"DEC_OP\"", "$accept", "S",
  "program", "translation_unit", "ext_dec", "libraries",
  "compound_statement", "block_item_list", "block_item", "printstat",
  "declaration", "statement", "condition_statement", "iteration_statement",
  "type_specifier", "init_declarator_list", "init_declarator", "$@1",
  "assignment_expression", "$@2", "assignment_operator",
  "conditional_expression", "expression_statement", "expression",
  "primary_expression", "postfix_expression", "unary_expression",
  "unary_operator", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression",
  "function_definition", "function_call", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      43,    45,    47,    42,    37,    61,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    60,
      62,   123,   125,    59,    40,    41,    44,    63,    58,    33,
     126,   288,   289
};
# endif

#define YYPACT_NINF (-151)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,    20,  -151,  -151,  -151,  -151,  -151,    29,  -151,   253,
    -151,  -151,    19,  -151,   -25,     8,  -151,  -151,    -4,   -26,
    -151,   -25,    98,    47,  -151,    54,    62,    44,  -151,    53,
    -151,   -10,   190,  -151,  -151,  -151,  -151,  -151,    40,    52,
      57,    66,   180,  -151,  -151,    25,  -151,  -151,  -151,  -151,
    -151,   143,  -151,    48,  -151,  -151,  -151,  -151,    53,  -151,
    -151,  -151,    15,  -151,    69,   247,    25,    46,   105,    84,
      51,    55,    75,  -151,  -151,    85,    77,  -151,    80,  -151,
    -151,    73,    25,   195,  -151,   131,  -151,  -151,   132,    25,
      25,  -151,   122,  -151,  -151,  -151,  -151,    25,  -151,  -151,
     252,  -151,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,  -151,   124,  -151,  -151,   132,  -151,
     203,    54,  -151,   137,   190,  -151,    60,   226,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,    25,   105,   105,   -21,
      84,    84,    84,    84,    51,    51,  -151,  -151,  -151,   194,
     157,  -151,  -151,  -151,  -151,    25,    25,   209,   180,  -151,
      25,   199,   159,   191,  -151,  -151,  -151,  -151,   209,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    90,    32,    33,    34,    31,     0,     2,     5,
       6,     8,     0,     9,     0,     0,     1,     7,    39,     0,
      35,     0,     0,     0,    87,     0,     0,     0,    22,     0,
      86,     0,     0,    65,    66,    56,    58,    57,    55,     0,
       0,     0,     0,    11,    51,     0,    67,    68,    69,    70,
      23,     0,    13,     0,    15,    16,    26,    25,     0,    53,
      40,    24,     0,    60,    63,    82,     0,    49,    71,    74,
      79,     0,     0,    98,    93,    97,     0,    94,     0,     4,
      10,     0,     0,    39,    36,     0,    55,    18,     0,     0,
       0,    28,     0,    12,    14,    19,    52,     0,    61,    62,
       0,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,    96,    91,     0,    92,
       0,     0,    38,     0,     0,    82,     0,     0,    59,    54,
      43,    46,    47,    48,    44,    45,     0,    72,    73,     0,
      77,    78,    75,    76,    80,    81,    84,    83,    85,    89,
       0,    95,    99,     3,    20,     0,     0,     0,     0,    42,
       0,    88,     0,     0,    30,    27,    50,    21,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,   -19,  -151,   242,  -151,     0,  -151,   -38,  -151,
     -20,  -150,  -151,  -151,     3,  -151,   206,  -151,   -74,  -151,
    -151,    94,   -27,   -44,  -151,  -151,   -57,  -151,  -151,   166,
      65,   154,  -151,  -151,   -12,  -151,   139,   155
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    81,    50,    51,    52,    53,
      11,    55,    56,    57,    58,    19,    20,    27,    59,   100,
     136,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    13,    71,    14,    76,    77,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    92,    54,    12,    91,    87,    79,   164,   122,   101,
      72,   -37,    12,    94,    24,    25,    22,    28,   169,    23,
      29,    30,    54,   129,    15,    97,    75,   160,    12,    16,
      72,    54,   125,   125,    85,    33,    34,   -90,    18,    72,
     -90,    35,    36,    37,    86,   125,   125,    26,   125,   125,
     125,   125,   125,   125,   146,   147,   148,     1,    96,    82,
     139,    97,   159,   111,   112,   113,    73,    80,   124,    45,
     102,   103,    83,     2,    46,    47,    48,    49,     3,     4,
       5,     6,   105,   106,   -90,     3,     4,     5,     6,    98,
      99,    95,    74,   104,   109,   110,    88,   156,   114,   107,
     108,    89,   153,   125,   116,   157,    31,    32,    33,    34,
      90,   162,   163,   121,    35,    36,    37,    38,    75,   115,
     165,    75,   117,   118,    12,   119,   120,   105,   106,     3,
       4,     5,     6,    39,    40,    41,    42,   123,    54,    22,
      43,    44,    45,    73,   107,   108,    72,    46,    47,    48,
      49,    31,    32,    33,    34,     3,     4,     5,     6,    35,
      36,    37,    38,     3,     4,     5,     6,   128,    97,   149,
     140,   141,   142,   143,     3,     4,     5,     6,    39,    40,
      41,    42,   154,   155,    22,    93,    44,    45,    31,    32,
      33,    34,    46,    47,    48,    49,    35,    36,    37,    38,
      33,    34,   161,   120,   167,    97,    35,    36,    37,    86,
     -37,     3,     4,     5,     6,    39,    40,    41,    42,    33,
      34,    22,   152,    44,    45,    35,    36,    37,    86,    46,
      47,    48,    49,    44,    45,    84,   168,    97,   -93,    46,
      47,    48,    49,   -92,    39,    40,    41,    42,   105,   106,
      22,    17,    44,    45,   166,   126,   127,   151,    46,    47,
      48,    49,   -41,   144,   145,   107,   108,   130,   137,   138,
     150,   158,     2,   -41,   -41,   -41,   -41,   -41,   131,   132,
     133,   134,   135,     0,     3,     4,     5,     6
};

static const yytype_int16 yycheck[] =
{
      12,    45,    22,     0,    42,    32,    25,   157,    82,    66,
      22,    15,     9,    51,    14,     7,    41,    43,   168,    44,
      46,    21,    42,    97,     4,    46,    23,    48,    25,     0,
      42,    51,    89,    90,    44,    10,    11,    41,    19,    51,
      44,    16,    17,    18,    19,   102,   103,    39,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     3,    43,    15,
     104,    46,   136,    12,    13,    14,    19,     5,    88,    44,
      24,    25,    19,    19,    49,    50,    51,    52,    31,    32,
      33,    34,    22,    23,    44,    31,    32,    33,    34,    20,
      21,    43,    45,    47,    10,    11,    44,   124,    43,    39,
      40,    44,   121,   160,    19,    45,     8,     9,    10,    11,
      44,   155,   156,    40,    16,    17,    18,    19,   115,    44,
     158,   118,    45,    46,   121,    45,    46,    22,    23,    31,
      32,    33,    34,    35,    36,    37,    38,     6,   158,    41,
      42,    43,    44,    19,    39,    40,   158,    49,    50,    51,
      52,     8,     9,    10,    11,    31,    32,    33,    34,    16,
      17,    18,    19,    31,    32,    33,    34,    45,    46,    45,
     105,   106,   107,   108,    31,    32,    33,    34,    35,    36,
      37,    38,    45,    46,    41,    42,    43,    44,     8,     9,
      10,    11,    49,    50,    51,    52,    16,    17,    18,    19,
      10,    11,    45,    46,    45,    46,    16,    17,    18,    19,
      15,    31,    32,    33,    34,    35,    36,    37,    38,    10,
      11,    41,    19,    43,    44,    16,    17,    18,    19,    49,
      50,    51,    52,    43,    44,    29,    45,    46,    44,    49,
      50,    51,    52,    44,    35,    36,    37,    38,    22,    23,
      41,     9,    43,    44,   160,    89,    90,   118,    49,    50,
      51,    52,    15,   109,   110,    39,    40,    15,   102,   103,
     115,    45,    19,    26,    27,    28,    29,    30,    26,    27,
      28,    29,    30,    -1,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    19,    31,    32,    33,    34,    54,    55,    56,
      57,    63,    67,    85,    87,     4,     0,    57,    19,    68,
      69,    87,    41,    44,    59,     7,    39,    70,    43,    46,
      59,     8,     9,    10,    11,    16,    17,    18,    19,    35,
      36,    37,    38,    42,    43,    44,    49,    50,    51,    52,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    71,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    86,    87,    19,    45,    67,    88,    89,    90,    55,
       5,    58,    15,    19,    69,    44,    19,    75,    44,    44,
      44,    61,    76,    42,    61,    43,    43,    46,    20,    21,
      72,    79,    24,    25,    47,    22,    23,    39,    40,    10,
      11,    12,    13,    14,    43,    44,    19,    45,    46,    45,
      46,    40,    71,     6,    63,    79,    82,    82,    45,    71,
      15,    26,    27,    28,    29,    30,    73,    82,    82,    76,
      83,    83,    83,    83,    84,    84,    79,    79,    79,    45,
      90,    89,    19,    55,    45,    46,    75,    45,    45,    71,
      48,    45,    76,    76,    64,    61,    74,    45,    45,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      62,    62,    63,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    67,    67,    67,    68,    68,    70,    69,    69,
      71,    72,    71,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    77,    77,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    87,    88,    88,    89,    89,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     6,     4,     1,     1,     2,     1,     1,
       1,     2,     3,     1,     2,     1,     1,     2,     2,     2,
       4,     6,     3,     1,     1,     1,     1,     5,     2,     7,
       5,     1,     1,     1,     1,     1,     3,     0,     4,     1,
       1,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     2,     1,     3,     1,     1,     1,     1,     3,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     2,     4,     3,
       1,     4,     4,     3,     1,     3,     2,     1,     1,     3
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
#line 127 "bison_file.y"
            {
				cleansymbol();	
                printsymtable();
                return 0;
            }
#line 1575 "bison_file.tab.c"
    break;

  case 14:
#line 167 "bison_file.y"
                        {
				create_node("stmt", 0);
			}
#line 1583 "bison_file.tab.c"
    break;

  case 18:
#line 178 "bison_file.y"
                        {
				create_node("return", 1);
			}
#line 1591 "bison_file.tab.c"
    break;

  case 23:
#line 197 "bison_file.y"
                             {
						struct node *ftp;
						ftp = first;
						while(ftp!=NULL){
							if(ftp->scope == scope && ftp->valid == 1){
								ftp->valid = 0;
							}
							ftp=ftp->link;
						}
						scope--;

					}
#line 1608 "bison_file.tab.c"
    break;

  case 27:
#line 215 "bison_file.y"
                                                      {create_node("if", 0);}
#line 1614 "bison_file.tab.c"
    break;

  case 28:
#line 216 "bison_file.y"
                          {create_node("else",0);}
#line 1620 "bison_file.tab.c"
    break;

  case 29:
#line 223 "bison_file.y"
                        { 
				create_node("for", 0); 
			}
#line 1628 "bison_file.tab.c"
    break;

  case 30:
#line 227 "bison_file.y"
        {
		create_node("while", 0); 
	}
#line 1636 "bison_file.tab.c"
    break;

  case 31:
#line 234 "bison_file.y"
                {	datatype = (yyvsp[0].ival); }
#line 1642 "bison_file.tab.c"
    break;

  case 32:
#line 235 "bison_file.y"
                {	datatype = (yyvsp[0].ival); }
#line 1648 "bison_file.tab.c"
    break;

  case 33:
#line 236 "bison_file.y"
                {	datatype = (yyvsp[0].ival); }
#line 1654 "bison_file.tab.c"
    break;

  case 34:
#line 237 "bison_file.y"
                {	datatype = (yyvsp[0].ival); }
#line 1660 "bison_file.tab.c"
    break;

  case 37:
#line 248 "bison_file.y"
                     { create_node((yyvsp[0].ptr)->name, 1); }
#line 1666 "bison_file.tab.c"
    break;

  case 38:
#line 249 "bison_file.y"
                                        {	
						if((yyvsp[-3].ptr)->dtype !=- 1 && (yyvsp[-3].ptr)->scope < scope && (yyvsp[-3].ptr)->valid == 1){
																		
							struct node *ftp, *nnode;
							nnode = (struct node *)malloc(sizeof(struct node));
							ftp = first;
							while(ftp->link!=NULL){
								ftp = ftp->link;
							}
							addsymbol(nnode,(yyvsp[-3].ptr)->name);	
							ftp->link = nnode;
							nnode->link = NULL;
							(yyvsp[-3].ptr) = nnode;

							if (datatype == 0){	
								
								addInt((yyvsp[-3].ptr), 0, (yyvsp[0].fval));
								if(assigntype == 1){
									printf("Line:%d: ", line);
									printf("\033[1;35m"); 
									printf("warning: ");
									printf("\033[0m");
									printf("implicit conversion from \'float\' to \'int\' \n\n");
								}
							}
							else if(datatype == 1){
								
								addFloat((yyvsp[-3].ptr), 1, (yyvsp[0].fval));
								if(assigntype == 2){
									printf("Line:%d: ", line);
									printf("\033[1;35m"); 
									printf("warning: ");
									printf("\033[0m");
									printf("implicit conversion from \'char\' to \'float\' \n\n");
								}
							}
							else if(datatype == 2){
								float tempf = (float)(yyvsp[0].fval);
								addChar((yyvsp[-3].ptr), 2, (int)tempf);

								if(assigntype == 1){
									printf("Line:%d: ", line);
									printf("\033[1;35m"); 
									printf("warning: ");
									printf("\033[0m");
									printf("implicit conversion from \'float\' to \'char\' \n\n");
								}
							}
							x = datatype;
							
							create_node("=", 0);

						}

						
						else if((yyvsp[-3].ptr)->dtype !=- 1){

								printf("Line:%d: ", line);
								printf("\033[1;31m");
								printf("error: ");
								printf("\033[0m");
								printf("redefinition of \'%s\' \n",  (yyvsp[-3].ptr)->name);
						}
						else{
							
							
							create_node("=", 0);

							if (datatype == 0){	
								
								addInt((yyvsp[-3].ptr), 0, (yyvsp[0].fval));
								if(assigntype == 1){
									printf("Line:%d: ", line);
									printf("\033[1;35m"); 
									printf("warning: ");
									printf("\033[0m");
									printf("implicit conversion from \'float\' to \'int\' \n\n");
								}
							}
							else if(datatype == 1){
								
								addFloat((yyvsp[-3].ptr), 1, (yyvsp[0].fval));
								if(assigntype == 2){
									printf("Line:%d: ", line);
									printf("\033[1;35m"); 
									printf("warning: ");
									printf("\033[0m");
									printf("implicit conversion from \'char\' to \'float\' \n\n");
								}
							}
							else if(datatype == 2){
								float tempf = (float)(yyvsp[0].fval);
								addChar((yyvsp[-3].ptr), 2, (int)tempf);

								if(assigntype == 1){
									printf("Line:%d: ", line);
									printf("\033[1;35m"); 
									printf("warning: ");
									printf("\033[0m");
									printf("implicit conversion from \'float\' to \'char\' \n\n");
								}
							}
							x = datatype;
							
						}
					}
#line 1777 "bison_file.tab.c"
    break;

  case 39:
#line 356 "bison_file.y"
                        {	//previous. a , dtype = 1(int)
						// printf("type = %d\nscope = %d\nvalid = %d", $1->dtype, $1->scope, $1->valid);
						if((yyvsp[0].ptr)->dtype !=- 1 && (yyvsp[0].ptr)->scope < scope && (yyvsp[0].ptr)->valid == 1){
							// printf("case 1 \n" );
																		
							struct node *ftp, *nnode;
							nnode = (struct node *)malloc(sizeof(struct node));
							ftp = first;
							while(ftp->link!=NULL){
								ftp = ftp->link;
							}
							addsymbol(nnode,(yyvsp[0].ptr)->name);	
							ftp->link = nnode;
							nnode->link = NULL;							
							(yyvsp[0].ptr) = nnode;
							
							if (datatype == 0){	
								addInt((yyvsp[0].ptr), 0, INT_MIN);
							}
							else if(datatype == 1){
								addFloat((yyvsp[0].ptr), 1, INT_MIN);
							}
							else if(datatype == 2){
								addChar((yyvsp[0].ptr), 2, '-');
		
							}
							x = datatype;

							char buff[20];
							strcpy(buff, "Dc ");
							strcat(buff, (yyvsp[0].ptr)->name);
							create_node(buff, 1);

						}
						else if((yyvsp[0].ptr)->dtype !=- 1 ){
							printf("Line:%d: ", line);
							printf("\033[1;31m");
							printf("error: ");
							printf("\033[0m");
							printf("redefinition of \'%s\' \n", (yyvsp[0].ptr)->name);
						
						}else{
							

							if (datatype == 0){	
								addInt((yyvsp[0].ptr), 0, INT_MIN);
							}
							else if(datatype == 1){
								addFloat((yyvsp[0].ptr), 1, INT_MIN);
							}
							else if(datatype == 2){
								addChar((yyvsp[0].ptr), 2, '-');
		
							}
							x = datatype;

							char buff[20];
							strcpy(buff, "Dc ");
							strcat(buff, (yyvsp[0].ptr)->name);
							create_node(buff, 1);
						
						}
					}
#line 1845 "bison_file.tab.c"
    break;

  case 40:
#line 423 "bison_file.y"
                                        {	(yyval.fval) = (yyvsp[0].fval); }
#line 1851 "bison_file.tab.c"
    break;

  case 41:
#line 424 "bison_file.y"
                                { crt = lhs; }
#line 1857 "bison_file.tab.c"
    break;

  case 42:
#line 425 "bison_file.y"
                        {							
				switch(assignop){
					case 0: if(idcheck == 1){
								create_node("=", 0);
								if(crt->dtype == 0){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'int\' \n\n");
									}
									crt->val.i = (int)(yyvsp[0].fval);
									
								}
								else if(crt->dtype == 1){
									if(assigntype == 2){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'char\' to \'float\' \n\n");
									}
									crt->val.f = (yyvsp[0].fval);
								}
								else if(crt->dtype == 2){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'char\' \n\n");
									}
									crt->val.c = (char)((int)(yyvsp[0].fval));
								}
							}
							else{
								printf("We'll see later\n");
							}
							crt = NULL;
							break;

					case 1: if(idcheck == 1){
								create_node("+=", 0);
								if(crt->dtype == 0){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'int\' \n\n");
									}
									crt->val.i = (int)(yyvsp[-3].fval) + (int)(yyvsp[0].fval);
								}
								else if(crt->dtype == 1){
									if(assigntype == 2){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'char\' to \'float\' \n\n");
									}
									crt->val.f = (yyvsp[-3].fval)+ (yyvsp[0].fval);
								}
								else if(crt->dtype == 2){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'char\' \n\n");
									}
									crt->val.c = (char)((int)(yyvsp[-3].fval) + (int)(yyvsp[0].fval));
								}
							}
							else{
								printf("We'll see later\n");
							}
							crt = NULL;
							break;

					case 2:	if(idcheck == 1){
							create_node("-=", 0);
								if(crt->dtype == 0){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'int\' \n\n");
									}
									crt->val.i = (int)(yyvsp[-3].fval) - (int)(yyvsp[0].fval);
								}
								else if(crt->dtype == 1){
									if(assigntype == 2){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'char\' to \'float\' \n\n");
									}
									crt->val.f = (yyvsp[-3].fval) - (yyvsp[0].fval);
								}
								else if(crt->dtype == 2){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'char\' \n\n");
									}
									crt->val.c = (char)((int)(yyvsp[-3].fval) - (int)(yyvsp[0].fval));
								}
							}
							else{
								printf("We'll see later\n");
							}
							crt = NULL;
							break;

					case 3:	if(idcheck == 1){
								create_node("*=", 0);
								if(crt->dtype == 0){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'int\' \n\n");
									}
									crt->val.i = (int)(yyvsp[-3].fval) * (int)(yyvsp[0].fval);
								}
								else if(crt->dtype == 1){
									if(assigntype == 2){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'char\' to \'float\' \n\n");
									}
									crt->val.f = (yyvsp[-3].fval) * (yyvsp[0].fval);
								}
								else if(crt->dtype == 2){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'char\' \n\n");
									}
									crt->val.c = (char)((int)(yyvsp[-3].fval) * (int)(yyvsp[0].fval));
								}
							}
							else{
								printf("We'll see later\n");
							}
							crt = NULL;
							break;

					case 4:	if(idcheck == 1){
								create_node("/=", 0);
								if(crt->dtype == 0){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'int\' \n\n");
									}
									crt->val.i = (int)(yyvsp[-3].fval) / (int)(yyvsp[0].fval);
								}
								else if(crt->dtype == 1){
									if(assigntype == 2){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'char\' to \'float\' \n\n");
									}
									crt->val.f = (yyvsp[-3].fval) / (yyvsp[0].fval);
								}
								else if(crt->dtype == 2){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'char\' \n\n");
									}
									crt->val.c = (char)((int)(yyvsp[-3].fval) / (int)(yyvsp[0].fval));
								}
							}
							else{
								printf("We'll see later\n");
							}
							crt = NULL;
							break;

					case 5:	if(idcheck == 1){
								create_node("%=", 0);
								if(crt->dtype == 0){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'int\' \n\n");
									}
									crt->val.i = (int)(yyvsp[-3].fval) % (int)(yyvsp[0].fval);
								}
								else if(crt->dtype == 1){
									if(assigntype == 2){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'char\' to \'float\' \n\n");
									}
									crt->val.f = (int)(yyvsp[-3].fval) % (int)(yyvsp[0].fval);
								}
								else if(crt->dtype == 2){
									if(assigntype == 1){
										printf("Line:%d: ", line);
										printf("\033[1;35m"); 
										printf("warning: ");
										printf("\033[0m");
										printf("implicit conversion from \'float\' to \'char\' \n\n");
									}
									crt->val.c = (char)((int)(yyvsp[-3].fval) % (int)(yyvsp[0].fval));
								}
							}
							else{
								printf("We'll see later\n");
							}
							crt = NULL;
							break;


				}
				assignop = -1;
				assigntype = -1;
			}
#line 2104 "bison_file.tab.c"
    break;

  case 43:
#line 673 "bison_file.y"
                                {	assignop = 0;	}
#line 2110 "bison_file.tab.c"
    break;

  case 44:
#line 674 "bison_file.y"
                        {	assignop = 1;	}
#line 2116 "bison_file.tab.c"
    break;

  case 45:
#line 675 "bison_file.y"
                        {	assignop = 2;	}
#line 2122 "bison_file.tab.c"
    break;

  case 46:
#line 676 "bison_file.y"
                        {	assignop = 3;	}
#line 2128 "bison_file.tab.c"
    break;

  case 47:
#line 677 "bison_file.y"
                        {	assignop = 4;	}
#line 2134 "bison_file.tab.c"
    break;

  case 48:
#line 678 "bison_file.y"
                        {	assignop = 5;	}
#line 2140 "bison_file.tab.c"
    break;

  case 49:
#line 683 "bison_file.y"
                                {	(yyval.fval) = (yyvsp[0].fval);	}
#line 2146 "bison_file.tab.c"
    break;

  case 50:
#line 685 "bison_file.y"
                        {
				create_node("else", 0);
				create_node("if", 0);
				if((yyvsp[-4].fval) == 1){
					(yyval.fval) = (yyvsp[-2].fval);

				}else{
					(yyval.fval) = (yyvsp[0].fval);
				}
			}
#line 2161 "bison_file.tab.c"
    break;

  case 51:
#line 699 "bison_file.y"
                                        {				}
#line 2167 "bison_file.tab.c"
    break;

  case 52:
#line 700 "bison_file.y"
                                {				}
#line 2173 "bison_file.tab.c"
    break;

  case 53:
#line 705 "bison_file.y"
                                        {		}
#line 2179 "bison_file.tab.c"
    break;

  case 54:
#line 706 "bison_file.y"
                                               {		}
#line 2185 "bison_file.tab.c"
    break;

  case 55:
#line 712 "bison_file.y"
                                {					
					idcheck = 1;
					lhs = (yyvsp[0].ptr);

					if((yyvsp[0].ptr)->dtype == -1 && check_un == 0){

						printf("Line:%d: ", line);
						printf("\033[1;31m");
						printf("error: ");
						printf("\033[0m");
						printf("use of undeclared identifier \'%s\' \n\n", (yyvsp[0].ptr)->name);

						check_un = 0;		// set check_un = -1

					}
					else if((yyvsp[0].ptr)->dtype == 0){
						(yyval.fval) = (yyvsp[0].ptr)->val.i;
						assigntype = 0;
						create_node((yyvsp[0].ptr)->name, 1);
					}
					else if((yyvsp[0].ptr)->dtype == 1){
						(yyval.fval) = (yyvsp[0].ptr)->val.f;
						assigntype = 1;
						create_node((yyvsp[0].ptr)->name, 1);
					}
					else if((yyvsp[0].ptr)->dtype == 2){
						(yyval.fval) = (yyvsp[0].ptr)->val.c;
						assigntype = 2;
						create_node((yyvsp[0].ptr)->name, 1);
					}
						
									
				}
#line 2223 "bison_file.tab.c"
    break;

  case 56:
#line 746 "bison_file.y"
                                {
					(yyval.fval) = (yyvsp[0].ival);
					assigntype = 0;
				
					sprintf(tempStr, "%d", (int)(yyvsp[0].ival));
					create_node(tempStr, 1);
				}
#line 2235 "bison_file.tab.c"
    break;

  case 57:
#line 755 "bison_file.y"
                                {	
					assigntype = 1;
					if(datatype == 1){
						(yyval.fval) = (yyvsp[0].fval);
					}
					else if(datatype == 0){
						
						(yyval.fval) = (int)(yyvsp[0].fval);
					}
					else if(datatype == 2){

						(yyval.fval) = (int)(yyvsp[0].fval);
					}

					sprintf(tempStr, "%f", (yyvsp[0].fval));
					create_node(tempStr, 1);
				}
#line 2257 "bison_file.tab.c"
    break;

  case 58:
#line 773 "bison_file.y"
                                {	
					assigntype = 2;
					if(datatype == 2){
						int tempc = (int)(yyvsp[0].cval);
						(yyval.fval) =  (float)tempc;
					}
					else if(datatype == 0){
						(yyval.fval) = (int)(yyvsp[0].cval);
					}
					else if(datatype == 1){
						
						(yyval.fval) = (int)(yyvsp[0].cval);
					}

					sprintf(tempStr, "%c", (yyvsp[0].cval));
					create_node(tempStr, 1);
				}
#line 2279 "bison_file.tab.c"
    break;

  case 59:
#line 791 "bison_file.y"
                                {
					(yyval.fval) = (yyvsp[-1].fval);
				}
#line 2287 "bison_file.tab.c"
    break;

  case 60:
#line 797 "bison_file.y"
                                        {	(yyval.fval) = (yyvsp[0].fval);	}
#line 2293 "bison_file.tab.c"
    break;

  case 61:
#line 798 "bison_file.y"
                                        {	(yyvsp[-1].fval)++; (yyval.fval) = (yyvsp[-1].fval);	create_node("++", 0); }
#line 2299 "bison_file.tab.c"
    break;

  case 62:
#line 799 "bison_file.y"
                                    {	(yyvsp[-1].fval)--; (yyval.fval) = (yyvsp[-1].fval);	create_node("--", 0); }
#line 2305 "bison_file.tab.c"
    break;

  case 63:
#line 804 "bison_file.y"
                                {	(yyval.fval) = (yyvsp[0].fval);	}
#line 2311 "bison_file.tab.c"
    break;

  case 64:
#line 806 "bison_file.y"
                                {
					switch(unaryop){
						case 1:	(yyval.fval) = (yyvsp[0].fval);
								create_node("'+'", 0);
								break;
						case 2:	(yyval.fval) = -(yyvsp[0].fval);
								create_node("'+'", 0);
								break;
						case 3:	(yyval.fval) = !(yyvsp[0].fval);
								create_node("!", 0);
								break;
						case 4:	(yyval.fval) = ~((int)(yyvsp[0].fval));
								create_node("~", 0);
								break;	
						case 5:	(yyval.fval) = ++(yyvsp[0].fval);
								create_node("++", 0);							
								break;
						case 6:	(yyval.fval) = --(yyvsp[0].fval);
								create_node("--", 0);
								break;		
					}
					unaryop = -1;
				}
#line 2339 "bison_file.tab.c"
    break;

  case 65:
#line 833 "bison_file.y"
                        {	unaryop = 1;	}
#line 2345 "bison_file.tab.c"
    break;

  case 66:
#line 834 "bison_file.y"
                        {	unaryop = 2;	}
#line 2351 "bison_file.tab.c"
    break;

  case 67:
#line 835 "bison_file.y"
                        {	unaryop = 3;	}
#line 2357 "bison_file.tab.c"
    break;

  case 68:
#line 836 "bison_file.y"
                        {	unaryop = 4;	}
#line 2363 "bison_file.tab.c"
    break;

  case 69:
#line 837 "bison_file.y"
                        {	unaryop = 5;	}
#line 2369 "bison_file.tab.c"
    break;

  case 70:
#line 838 "bison_file.y"
                        {	unaryop = 6;	}
#line 2375 "bison_file.tab.c"
    break;

  case 71:
#line 843 "bison_file.y"
                                {	(yyval.fval) = (yyvsp[0].fval);	}
#line 2381 "bison_file.tab.c"
    break;

  case 72:
#line 845 "bison_file.y"
                                { 
					create_node("==", 0);
					if((yyvsp[-2].fval) == (yyvsp[0].fval))
						(yyval.fval) = 1;
					else
						(yyval.fval) = 0;

				}
#line 2394 "bison_file.tab.c"
    break;

  case 73:
#line 854 "bison_file.y"
                                { 
					create_node("!=", 0);
					if((yyvsp[-2].fval) != (yyvsp[0].fval))
						(yyval.fval) = 1;
					else
						(yyval.fval) = 0;
				}
#line 2406 "bison_file.tab.c"
    break;

  case 74:
#line 865 "bison_file.y"
                                {	(yyval.fval) = (yyvsp[0].fval);	}
#line 2412 "bison_file.tab.c"
    break;

  case 75:
#line 867 "bison_file.y"
                                { 
					create_node("<", 0);
					if((yyvsp[-2].fval) < (yyvsp[0].fval))
						(yyval.fval) = 1;
					else
						(yyval.fval) = 0;

				}
#line 2425 "bison_file.tab.c"
    break;

  case 76:
#line 876 "bison_file.y"
                                { 
					create_node(">", 0);
					if((yyvsp[-2].fval) > (yyvsp[0].fval))
						(yyval.fval) = 1;
					else
						(yyval.fval) = 0;

				}
#line 2438 "bison_file.tab.c"
    break;

  case 77:
#line 885 "bison_file.y"
                                { 
					create_node("<=", 0);
					if((yyvsp[-2].fval) <= (yyvsp[0].fval))
						(yyval.fval) = 1;
					else
						(yyval.fval) = 0;

				}
#line 2451 "bison_file.tab.c"
    break;

  case 78:
#line 894 "bison_file.y"
                                { 
					create_node(">=", 0);
					if((yyvsp[-2].fval) >= (yyvsp[0].fval))
						(yyval.fval) = 1;
					else
						(yyval.fval) = 0;

				}
#line 2464 "bison_file.tab.c"
    break;

  case 79:
#line 906 "bison_file.y"
                                        {	(yyval.fval) = (yyvsp[0].fval);	}
#line 2470 "bison_file.tab.c"
    break;

  case 80:
#line 908 "bison_file.y"
                        {	
				create_node("+", 0);
				(yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].fval);	
			}
#line 2479 "bison_file.tab.c"
    break;

  case 81:
#line 913 "bison_file.y"
                        {	
				create_node("-", 0);
				(yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].fval);	
			}
#line 2488 "bison_file.tab.c"
    break;

  case 82:
#line 921 "bison_file.y"
                                                {	(yyval.fval) = (yyvsp[0].fval);	}
#line 2494 "bison_file.tab.c"
    break;

  case 83:
#line 923 "bison_file.y"
                                        {	
						create_node("*", 0);	
						(yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].fval);	
					}
#line 2503 "bison_file.tab.c"
    break;

  case 84:
#line 928 "bison_file.y"
                                        {	
						if((yyvsp[0].fval) == 0){
							printf("Line:%d: ", line);
							printf("\033[1;35m"); 
							printf("warning: ");
							printf("\033[0m");
							printf("division by zero is undefined\n\n");
							(yyval.fval) = INT_MAX;		//junk value in real
						}else{
							(yyval.fval) = (yyvsp[-2].fval) / (yyvsp[0].fval);	
							create_node("/", 0);
						}
					}
#line 2521 "bison_file.tab.c"
    break;

  case 85:
#line 942 "bison_file.y"
                                        {	
						if(assigntype == 1){
							printf("Line:%d: ", line);
							printf("\033[1;31m");
							printf("error: ");
							printf("\033[0m");
							printf("invalid operands to binary expression (\'float\' and \'float\') \n\n");
							}else{								
								(yyval.fval) = (int)(yyvsp[-2].fval) % (int)(yyvsp[0].fval);	
								create_node("%", 0);
							}
						}
#line 2538 "bison_file.tab.c"
    break;

  case 86:
#line 961 "bison_file.y"
                                {
					create_node((yyvsp[-1].string), 3);
					struct node *ftp;
					ftp = first;
					while(ftp!=NULL){
						if(ftp->scope == scope && ftp->valid == 1){
							ftp->valid = 0;
						}
						else if(strcmp(ftp->token, "param") == 0 && ftp->valid == 1){
							ftp->valid = 0;
						}

						ftp=ftp->link;
					}
					scope--;

				}
#line 2560 "bison_file.tab.c"
    break;

  case 87:
#line 979 "bison_file.y"
                                {	
					create_node((yyvsp[-1].string), 3);
					printf("Line:%d: ", line);
					printf("\033[1;35m"); 
					printf("warning: ");
					printf("\033[0m");
					printf("type specifier missing, defaults to \'int\' \n");

					struct node *ftp;
					ftp = first;
					while(ftp!=NULL){
						if(ftp->scope == scope && ftp->valid == 1){
							ftp->valid = 0;
						}
						else if(strcmp(ftp->token, "param") == 0 && ftp->valid == 1){
							ftp->valid = 0;
						}

						ftp=ftp->link;
					}
					scope--;
				}
#line 2587 "bison_file.tab.c"
    break;

  case 90:
#line 1012 "bison_file.y"
                                {	
					// printf("OKAY : %s\n", $1->name);
					// create_node($1->name, 1);
					addfunc((yyvsp[0].ptr), datatype, "function");	
					strcpy((yyval.string), (yyvsp[0].ptr)->name); 								
				}
#line 2598 "bison_file.tab.c"
    break;

  case 91:
#line 1018 "bison_file.y"
                                                        { }
#line 2604 "bison_file.tab.c"
    break;

  case 92:
#line 1019 "bison_file.y"
                                                { }
#line 2610 "bison_file.tab.c"
    break;

  case 93:
#line 1020 "bison_file.y"
                                                                { }
#line 2616 "bison_file.tab.c"
    break;

  case 94:
#line 1025 "bison_file.y"
                                                                        {}
#line 2622 "bison_file.tab.c"
    break;

  case 95:
#line 1026 "bison_file.y"
                                                        {}
#line 2628 "bison_file.tab.c"
    break;

  case 96:
#line 1031 "bison_file.y"
                                                {	addfunc((yyvsp[0].ptr), datatype, "param");	}
#line 2634 "bison_file.tab.c"
    break;

  case 97:
#line 1032 "bison_file.y"
                                                        {}
#line 2640 "bison_file.tab.c"
    break;

  case 98:
#line 1037 "bison_file.y"
                                                                {		}
#line 2646 "bison_file.tab.c"
    break;

  case 99:
#line 1038 "bison_file.y"
                                                {		}
#line 2652 "bison_file.tab.c"
    break;


#line 2656 "bison_file.tab.c"

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
#line 1042 "bison_file.y"



void yyerror(const char *str){
	fflush(stdout);
	printf("Line:%d: ", line);
	printf("\033[1;31m");
	printf("error: ");
	printf("\033[0m");
	printf("%s\n", str);
}


int main(){
	yyout = fopen("output.c", "w");


	tree_top = (tree_stack*)malloc(sizeof(tree_stack));
	tree_top->node = NULL;
	tree_top->next = NULL;
	struct Node *root;

	printf("\n");
	yyparse();

	root = pop_tree();
	get_levels(root, 1);

	printtree(root);
	

	preorder(root);
	printf("\n\nPreorder Traversal\n\n");
	printf("%s\n", preBuf);

	fclose(yyout);
	return 0;
}


void addfunc(struct node *t,int type, char *s){
	if(t->dtype == -1) {
        t->dtype = type;
        t->val.i = 0;
        strcpy(t->token, s);
    }
}


void addInt(struct node *t,int type,int val) {
    if(t->dtype == -1) {
        t->dtype = type;
        t->val.i = val;
        strcpy(t->token, "identifier");
    }
}


void addFloat(struct node *t,int type,float val) {
    if(t->dtype == -1) {
        t->dtype = type;
        t->val.f = (float)val;
        strcpy(t->token, "identifier");
    }
}


void addChar(struct node *t,int type, char val) {
   	if(t->dtype == -1) {
   	    t->dtype = type;
   	    t->val.c = (char)val;
   	    strcpy(t->token, "identifier");
   	}
}


struct node * addtosymbol(struct node * n){
	if(first == NULL){
		first = n;
	}
	else{
		struct  node * ftp = first;
		while(ftp->link !=NULL) {
			ftp = ftp->link;
		}
		ftp->link = n;
	}
	return n;
}


struct node * checksym(char *vname) {
	struct node *ftp;
	struct node *rp;
	struct node *nnode;
	struct node *same;
	
	if(first == NULL) {
		nnode = (struct node *)malloc(sizeof(struct node));
		addsymbol(nnode,vname);
	    first = nnode;
	}
	else {
	    ftp = first;
	    while(ftp!=NULL) {

	        if(strcmp(vname,ftp->name) == 0){
	            if(ftp->scope > scope && ftp->valid == 1) {	          	
					same = ftp; 
	            	return same;
	            }	
	            else if(ftp->scope == scope && ftp->valid == 1){
	            	same = ftp;
	            	return same;
	            }          	
	            else if(ftp->scope < scope && ftp->valid == 1){
	         		check_un = 1;	//no error 

	         		same = ftp;
	            	return same;
	         			            		         				         		       	         
	            } 
	          	else if(ftp->scope > scope && ftp->valid == 0){
	          		check_un = 0;	//undeclared
	          	}

	        }            
	        rp = ftp;
	        ftp = ftp->link;
	    }
	    nnode = (struct node *)malloc(sizeof(struct node));
		addsymbol(nnode,vname);

	    rp->link = nnode;
	}
	return nnode;
}


void addsymbol(struct node *tp, char *vname) {
    strcpy(tp->name,vname);
    tp->dtype = -1;
    tp->link = NULL;
    tp->scope = scope;
    tp->valid = 1;
    tp->lineno = line;
}


void cleansymbol(){
	struct node** pp = &first; 
    while (*pp) { 
  
        struct node* entry = *pp; 
 
        if (entry->dtype == -1  ) { 
            *pp = entry->link; 
            free(entry); 
        }
        else if(strcmp(entry->name,"main")== 0 && strcmp(entry->token, "function")==0){	//remove main entry from symbol table
        	*pp = entry->link; 
            free(entry); 
        }
        // Else move to next 
        else
            pp = &(entry->link); 
    } 
}


void printsymtable(){
	struct node *ftp;
    ftp=first;
    //blue
    printf("\n\nSymbol Table\n\n");
    //white

	printf("   Symbol\t\tName\t  Type\t      Scope\t   Line Number\t       Value \n");
   
    while(ftp!=NULL) {
        char data_type[10];
        if(ftp->dtype==0)
        	strcpy(data_type,"int");
        if(ftp->dtype==1)
        	strcpy(data_type,"float");
        if(ftp->dtype==2)
        	strcpy(data_type,"char");
        if(ftp->dtype==3)
        	strcpy(data_type,"void");

        printf("%11s\t%12s\t%6s\t\t%d\t\t%d\t\t",ftp->token, ftp->name, data_type, ftp->scope, ftp->lineno);

        if(ftp->dtype == 0){
        	if(ftp->val.i == INT_MIN)
        		printf("-\n");
        	else
           		printf("%d\n",ftp->val.i);
        }
        else if(ftp->dtype == 1){
        	if(ftp->val.f == INT_MIN)
        		printf("-\n");
        	else
           		printf("%f\n",ftp->val.f);
       	}
        else if(ftp->dtype == 2){
            printf("%c\n",ftp->val.c);
        }
        else if(strcmp(ftp->token, "function")==0){
        	printf("-\n");
        }
        else{
	        printf("-	Delete it\n");
	    }
        ftp=ftp->link;
    }
    printf("\n\n\n");
}


void create_node(char *token, int leaf) {
	Node *l;
	Node *r;
	if(leaf==0) {

		r = pop_tree();
		l = pop_tree();
	}
	else if(leaf ==1) {
		l = NULL;
		r = NULL;
	}
	else {
		l = pop_tree();
		r = NULL;
	}

	Node *newnode = (Node*)malloc(sizeof(Node));
	strcpy(newnode->token, token);
	newnode->left = l;
	newnode->right = r;
	push_tree(newnode);
}


void push_tree(Node *newnode){
	tree_stack *temp= (tree_stack*)malloc(sizeof(tree_stack));
	temp->node = newnode;
	temp->next = tree_top;
	tree_top = temp;
}


Node* pop_tree(){
	tree_stack *temp = tree_top;
	tree_top = tree_top->next;
	Node *retnode = temp->node;
	if(temp != NULL)
		free(temp);
	return retnode;
}


void printtree(Node* root){

    int h = getmaxlevel(root)-1;
    int i;
	
	printf("\n\nAbstract Syntax Tree\n\n");

	
    for (i=1; i<=h; i++){
		printf("\t");
		for(int j=0;j<=h+1-i;j++){
			printf("      ");
		}
        printGivenLevel(root, i,h);

        printf("\n\n\n");
    }

}


int getmaxlevel(Node *root){
	int count=0;
	Node *temp= root;
	while(temp->left!=NULL){
		count++;
		temp=temp->left;
	}
	return count*2;
}


void printGivenLevel(Node* root, int level, int h){
    if (root == NULL)
        return;
    if (level == 1){
		for(int j=0; j<=h-1-level; j++){
			printf(" ");
		}
	    printf("%s ", root->token);
	}
    else if (level > 1){
        printGivenLevel(root->left, level-1,h);
		for(int j=0; j<=h-1-level; j++){
			printf(" ");
		}
        printGivenLevel(root->right, level-1,h);
    }
}


void preorder(Node * node){
	if (node == NULL)
		return;

	if(node->left!=NULL && node->right!=NULL)
		strcat(preBuf, "   ( ");
	strcat(preBuf, node->token);
	strcat(preBuf, "   ");

	preorder(node-> left);

	
	if(node->right){
		preorder(node-> right);
	}
	
	if(node->left!=NULL && node->right!=NULL)
		strcat(preBuf, ")   ");
	// printf("\n");
	
}

void get_levels(Node *root, int level){
	root->level = level;
	if(root->left == NULL && root->right == NULL){
		return;
	}
	if(root->left == NULL){
		get_levels(root->right, level+1);
	}
	else if(root->right == NULL){
		get_levels(root->left, level+1);
	}
	else{
		get_levels(root->left, level+1);
		get_levels(root->right, level+1);
	}
}
