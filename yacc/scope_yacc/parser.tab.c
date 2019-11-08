/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void yyerror(char *s, ...);
int yylex();

#line 76 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    COLON = 262,
    CONST = 263,
    CONTINUE = 264,
    DEFAULT = 265,
    DO = 266,
    DOUBLE = 267,
    ELLIPSIS = 268,
    ELSE = 269,
    ENUM = 270,
    EXTERN = 271,
    FLOAT = 272,
    FOR = 273,
    GOTO = 274,
    IF = 275,
    INT = 276,
    LONG = 277,
    REGISTER = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    INLINE = 292,
    RESTRICT = 293,
    _BOOL = 294,
    _COMPLEX = 295,
    _IMAGINARY = 296,
    _ALIGNAS = 297,
    _ALIGNOF = 298,
    _ATOMIC = 299,
    _STATIC_ASSERT = 300,
    _NORETURN = 301,
    _THREAD_LOCAL = 302,
    _GENERIC = 303,
    ADD = 304,
    SUB = 305,
    MUL = 306,
    DIV = 307,
    MOD = 308,
    NEG = 309,
    COMMA = 310,
    DOT = 311,
    SEMI = 312,
    PARENTHESE_L = 313,
    PARENTHESE_R = 314,
    PELEMENT = 315,
    POST_ADD = 316,
    POST_SUB = 317,
    BRACKET_L = 318,
    BRACKET_R = 319,
    BRACE_L = 320,
    BRACE_R = 321,
    AND = 322,
    AND_OP = 323,
    OR = 324,
    OR_OP = 325,
    XOR_OP = 326,
    NOT = 327,
    EQUAL = 328,
    MOVE_L = 329,
    MOVE_R = 330,
    LESSER = 331,
    GREATER = 332,
    NOT_EQUAL = 333,
    LEQUAL = 334,
    GEQUAL = 335,
    ASSIGN_OP = 336,
    ASSIGN = 337,
    QUES = 338,
    IDENTITY = 339,
    INT_NUM = 340,
    FLOAT_NUM = 341,
    STRING = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "parser.y" /* yacc.c:355  */

    int intval;
    char *strval;

#line 209 "parser.tab.c" /* yacc.c:355  */
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1879

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   185,   185,   186,   188,   189,   191,   192,   193,   194,
     195,   197,   198,   200,   201,   203,   204,   205,   206,   207,
     208,   209,   211,   212,   213,   214,   215,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   230,
     231,   233,   234,   235,   237,   238,   240,   241,   243,   244,
     246,   247,   249,   251,   252,   253,   254,   256,   257,   259,
     260,   261,   263,   264,   265,   267,   268,   270,   271,   273,
     274,   275,   277,   278,   279,   280,   281,   282,   283,   285,
     286,   287,   288,   290,   291,   293,   294,   296,   297,   299,
     300,   301,   303,   304,   306,   307,   308,   310,   311,   313,
     314,   316,   317,   318,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   330,   332,   333,   334,   335,   336,   337,
     339,   340,   341,   343,   344,   346,   347,   348,   349,   351,
     352,   354,   355,   356,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   369,   370,   371,   372,   373,   375,
     376,   378,   379,   381,   382,   384,   385,   387,   388,   390,
     391,   393,   394,   396,   397,   399,   400,   402,   403,   405,
     406,   407,   409,   410,   411,   412,   413,   415,   416,   417,
     419,   420,   421,   423,   424,   425,   426,   428,   429,   431,
     432,   433,   434,   435,   436,   438,   439,   440,   441,   442,
     443,   445,   446,   447,   448,   449,   450,   451,   452,   454,
     455,   456,   457,   459,   460,   462,   463,   464
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "COLON",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELLIPSIS", "ELSE",
  "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INT", "LONG",
  "REGISTER", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT",
  "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE",
  "INLINE", "RESTRICT", "_BOOL", "_COMPLEX", "_IMAGINARY", "_ALIGNAS",
  "_ALIGNOF", "_ATOMIC", "_STATIC_ASSERT", "_NORETURN", "_THREAD_LOCAL",
  "_GENERIC", "ADD", "SUB", "MUL", "DIV", "MOD", "NEG", "COMMA", "DOT",
  "SEMI", "PARENTHESE_L", "PARENTHESE_R", "PELEMENT", "POST_ADD",
  "POST_SUB", "BRACKET_L", "BRACKET_R", "BRACE_L", "BRACE_R", "AND",
  "AND_OP", "OR", "OR_OP", "XOR_OP", "NOT", "EQUAL", "MOVE_L", "MOVE_R",
  "LESSER", "GREATER", "NOT_EQUAL", "LEQUAL", "GEQUAL", "ASSIGN_OP",
  "ASSIGN", "QUES", "IDENTITY", "INT_NUM", "FLOAT_NUM", "STRING",
  "$accept", "translation_unit", "external_decl", "function_definition",
  "decl", "decl_list", "decl_specs", "storage_class_spec", "type_spec",
  "type_qualifier", "struct_or_union_spec", "struct_or_union",
  "struct_decl_list", "init_declarator_list", "init_declarator",
  "struct_decl", "spec_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_spec", "enumerator_list", "enumerator",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "param_type_list", "param_list", "param_decl", "id_list", "initializer",
  "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "typedef_name", "stat", "labeled_stat",
  "exp_stat", "compound_stat", "stat_list", "selection_stat",
  "iteration_stat", "jump_stat", "exp", "assignment_exp",
  "assignment_operator", "conditional_exp", "const_exp", "logical_or_exp",
  "logical_and_exp", "inclusive_or_exp", "exclusive_or_exp", "and_exp",
  "equality_exp", "relational_exp", "shift_expression", "additive_exp",
  "mult_exp", "cast_exp", "unary_exp", "unary_operator", "postfix_exp",
  "primary_exp", "argument_exp_list", "const_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -190

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-190)))

#define YYTABLE_NINF -159

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     726,  -190,  -190,  -190,  -190,   -37,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
      18,   726,  -190,   286,  -190,  -190,  -190,   644,   982,   764,
     982,  -190,   -32,  -190,   803,    25,   -12,  -190,   -61,   -11,
    -190,  -190,    18,  -190,    32,  -190,  -190,  -190,    69,  -190,
     544,  -190,  -190,  -190,    25,  -190,  1176,    14,   343,  -190,
     803,   644,  -190,   838,  1207,  -190,    25,    50,   -28,  -190,
     -61,  -190,  -190,  -190,   726,  -190,  1246,   803,  -190,  1176,
    1176,  1108,  -190,   682,  1176,    64,  1714,    78,    84,   139,
    1081,    91,   105,   128,  1285,   153,   159,  -190,  -190,   187,
     413,  -190,  -190,  -190,  -190,  1014,  -190,  -190,  -190,  -190,
    -190,   149,  -190,    54,   590,   178,   179,  -190,    72,  1753,
    -190,  -190,  -190,  -190,   459,  1792,  1792,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,   176,    -3,   177,   189,   197,
     180,    39,    98,   126,   175,   199,  -190,  -190,  1714,   152,
      87,  -190,  1714,   -61,  -190,    20,  -190,  1246,  -190,  -190,
    -190,   173,  -190,  -190,  -190,  -190,  -190,  -190,  1714,   190,
    -190,   280,  1146,  -190,   293,  -190,  -190,  1081,   187,   269,
    1324,   253,  1714,  -190,   216,  -190,  1714,  1714,  1081,  -190,
    1038,  -190,  -190,   590,  1363,   873,  -190,     0,  -190,   212,
    -190,   912,   229,  -190,   459,  -190,   490,    85,   257,   101,
    1714,  -190,  -190,  -190,  1714,  1714,  1714,  1714,  1714,  1714,
    1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,
    1714,  1714,  1714,  -190,   238,  1402,   239,  -190,  -190,  1714,
    -190,  -190,  -190,  -190,    41,  -190,  -190,  1714,  -190,   682,
    -190,  1714,  -190,  1081,  -190,   266,  1441,   233,  -190,   102,
    1714,  -190,   107,   124,  -190,  -190,   267,  -190,   261,  -190,
     262,   212,  1480,   946,  -190,  -190,  -190,   268,    85,    89,
    -190,  1714,  -190,   177,    12,   189,   197,   180,    39,    98,
      98,   126,   126,   126,   126,   175,   175,   199,   199,  -190,
    -190,  -190,  -190,  -190,  -190,   133,  -190,     7,  1167,  -190,
    -190,  -190,  -190,  -190,  1714,  1519,   236,  1558,  1081,  -190,
    1081,  1081,  -190,  -190,  -190,  -190,   270,  -190,   264,  -190,
    -190,  -190,  1714,  -190,  -190,  -190,  -190,   136,  1081,   148,
    1597,  1636,   249,   317,  -190,  -190,  -190,  -190,  -190,   275,
    -190,  1081,  1081,   161,  1081,   164,  1675,  1081,  -190,  -190,
    -190,  1081,  -190,  1081,  1081,   167,  -190,  -190,  -190,  -190,
    1081,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    22,    28,    39,    33,     0,    25,    32,    30,    31,
      23,    29,    34,    24,    44,    26,    45,    35,    27,    40,
      80,     0,    72,     0,     2,     4,     5,    71,    16,    19,
      21,    36,     0,    37,     0,    70,     0,    38,     0,    64,
      83,    82,    79,    71,     0,     1,     3,    12,     0,    48,
       9,   113,    15,    17,    18,    20,     0,    43,     0,    13,
       0,     0,    10,     0,     0,    72,    69,    67,     0,    65,
       0,    84,    81,    73,     0,    11,     0,     0,     8,    54,
      56,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,   128,   113,
       0,   129,   114,   115,   116,     0,   117,   118,   119,    14,
       7,    50,    78,   113,    91,     0,    85,    87,     0,     0,
     197,   198,   196,   199,     0,     0,     0,    75,   195,   200,
     209,   215,   216,   211,   157,     0,   155,   159,   161,   163,
     165,   167,   169,   172,   177,   180,   183,   187,     0,   189,
     201,   210,     0,     0,    63,     0,    49,     0,    51,    94,
     151,   187,   201,     6,    53,    55,    42,    47,     0,     0,
      57,    59,     0,   146,     0,   123,   145,     0,     0,     0,
       0,     0,     0,   148,     0,   149,     0,     0,     0,   127,
       0,   126,   130,     0,     0,     0,    89,   101,    90,   103,
      76,     0,     0,    77,     0,   193,   209,   100,     0,     0,
       0,   190,   191,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,   207,   208,     0,
      68,    66,    62,    97,     0,   154,   153,     0,    61,     0,
      52,     0,    41,     0,   122,     0,     0,     0,   144,     0,
       0,   147,     0,     0,   120,   125,     0,   108,     0,   112,
       0,   102,     0,     0,    86,    88,    93,     0,     0,   101,
      99,     0,   212,   160,     0,   162,   164,   166,   168,   170,
     171,   173,   174,   175,   176,   178,   179,   181,   182,   184,
     185,   186,   205,   204,   213,     0,   206,     0,     0,    95,
     152,    58,    60,   121,     0,     0,     0,     0,     0,   150,
       0,     0,   104,   106,   110,   107,     0,   111,     0,   194,
     188,   156,     0,   203,   202,    96,    98,     0,     0,     0,
       0,     0,     0,   131,   133,   134,   105,   109,   214,     0,
     143,     0,     0,     0,     0,     0,     0,     0,   135,   142,
     141,     0,   139,     0,     0,     0,   132,   140,   138,   137,
       0,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,   310,  -190,    16,    24,     1,  -190,   -39,   125,
    -190,  -190,   251,  -190,   265,   -70,   -67,  -190,    92,  -190,
     272,   183,    -6,   -27,   -17,  -190,  -173,  -190,   137,  -190,
    -153,  -190,   141,  -108,  -189,  -190,   -85,  -190,  -190,    10,
     240,  -190,  -190,  -190,   -57,   -62,  -190,   -54,   -79,  -190,
     129,   140,   163,   165,   138,    42,     5,    55,    67,  -112,
     -76,  -190,  -190,   -30,  -190,  -190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    59,    60,    43,    28,    29,    30,
      31,    32,    81,    48,    49,    82,    83,   169,   170,    33,
      68,    69,    34,    35,    36,    42,   115,   116,   117,   118,
     158,   244,   208,   266,   199,    37,   101,   102,   103,   104,
     105,   106,   107,   108,   209,   185,   247,   160,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   162,   305,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     161,    27,    54,    41,   243,   179,   198,   174,   271,    66,
     134,   167,   164,   165,   159,    44,    26,    79,   161,   331,
     192,    50,   270,    67,    27,    72,     3,   153,    38,    52,
      53,    55,   134,    56,   150,    61,   233,   184,   154,    26,
      79,    79,    79,   205,    62,    79,    21,    39,   161,   211,
     212,    61,    57,    19,    70,   111,   150,   207,   193,    61,
      78,    61,   260,   194,   114,   195,   214,   260,   111,    20,
     110,   334,    65,   240,    77,   153,   109,   171,    61,    84,
     215,   161,   100,    63,    65,    79,   242,   163,    64,   248,
     271,    73,   254,   109,  -158,   159,   308,   197,   134,   280,
     328,    61,   167,   264,   161,   192,   161,   309,   196,   -92,
     161,   161,   220,   -92,   134,   268,   109,   221,   299,   300,
     301,   173,   150,   257,    74,   259,    75,   202,   161,   262,
     263,   203,   152,    79,   161,   175,    20,   207,   150,   161,
     134,   176,  -158,   278,  -158,    40,   177,   278,   194,   180,
     195,  -158,   194,  -158,   195,   336,   260,   260,   284,   161,
     282,   318,   260,   161,   150,    79,   320,    71,   313,   330,
      66,   161,   312,   304,   222,   223,   197,   224,   225,   260,
     161,    80,   307,   321,   161,   310,   182,    44,   332,   181,
     279,   260,   333,   326,   188,   349,   114,   134,   319,   316,
     226,   227,   114,   260,    80,    80,    80,   351,   234,    80,
     235,   186,   236,   237,   238,   239,   260,   187,   134,   260,
     361,   150,   260,   363,   228,   229,   370,   291,   292,   293,
     294,    76,   161,   343,   201,   344,   345,   200,   161,   161,
     213,   161,   150,   171,   216,   249,   159,   250,   219,    80,
     230,   231,   232,   350,   245,   246,   161,   337,   339,   217,
     342,   279,   289,   290,   161,   161,   359,   360,   218,   362,
     348,   260,   366,   261,   114,   272,   367,   273,   368,   369,
     161,   295,   296,   353,   355,   371,    45,   251,   260,     1,
     317,   260,     2,   340,     3,   297,   298,    80,     4,   365,
     253,     5,     6,     7,   260,   255,   356,     8,     9,    10,
     258,    11,    12,   276,    13,    14,   281,    15,    16,    17,
      18,    19,   302,   306,   314,   323,   322,   329,   324,    80,
     347,   357,   358,    46,   346,   172,   241,    20,   275,   156,
     190,   311,   155,   283,    21,   277,     1,    85,    86,     2,
      87,     3,    88,    89,    90,     4,   285,   288,     5,     6,
       7,    91,    92,    93,     8,     9,    10,    94,    11,    12,
      22,    13,    14,    95,    15,    16,    17,    18,    19,    96,
     286,     0,     0,   287,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,    58,    98,
       0,     0,     0,     0,     0,     0,     1,    85,    86,     2,
      87,     3,    88,    89,    90,     4,     0,    99,     5,     6,
       7,    91,    92,    93,     8,     9,    10,    94,    11,    12,
       0,    13,    14,    95,    15,    16,    17,    18,    19,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
      97,     4,     0,     0,     5,     0,     7,     0,    58,   189,
       8,     9,     0,     0,    11,    12,   119,     0,    14,     0,
       0,    16,    17,    18,    19,     0,  -113,    99,  -113,     0,
       0,     0,  -113,     0,     0,  -113,     0,  -113,   120,   121,
     122,  -113,  -113,   123,     0,  -113,  -113,   124,     0,  -113,
     125,   126,  -113,  -113,  -113,  -113,     0,   128,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -113,     0,   206,   131,   132,   133,     1,  -113,  -113,
       2,     0,     3,  -113,     0,  -113,     4,     0,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,  -113,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     2,     0,     3,   -50,
       0,   -50,     4,     0,     0,     5,     6,     7,     0,    58,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,    76,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     1,   193,     0,
       2,     0,     3,   194,     0,   195,     4,     0,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,    22,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     1,     0,     0,     2,   168,
       3,     0,     0,     0,     4,    20,     0,     5,     6,     7,
       0,    47,    21,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     1,
       0,     0,     2,    20,     3,     0,     0,     0,     4,     0,
      21,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    22,     1,     0,     0,
       2,     0,     3,     0,     0,     0,     4,    20,     0,     5,
       6,     7,     0,     0,    21,     8,     9,    10,     0,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     2,
      22,     3,     0,     0,     0,     4,     0,     0,     5,     6,
       7,     0,    21,     0,     8,     9,    10,     0,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     0,
       0,     1,     0,     0,     2,     0,     3,     0,    22,     0,
       4,     0,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,    58,    15,
      16,    17,    18,    19,     0,     0,     1,     0,     0,     2,
       0,     3,     0,     0,     0,     4,     0,    51,     5,     6,
       7,     0,     0,     0,     8,     9,    10,   112,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     2,     0,
       3,     0,   113,     0,     4,   274,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,   269,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     1,
       0,     0,     2,     0,     3,     0,     0,    51,     4,     0,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     1,     0,     0,     2,     0,
       3,     0,     0,     0,     4,     0,    51,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,   327,    15,    16,    17,    18,    19,    85,    86,
       0,    87,     0,    88,    89,    90,     0,     0,     0,     0,
      51,     0,    91,    92,    93,     0,     0,     0,    94,     0,
       0,     0,    85,    86,    95,    87,     0,    88,    89,    90,
      96,     0,     0,     0,     0,     0,    91,    92,    93,     0,
       0,     0,    94,     0,     0,     0,    51,     0,    95,     0,
       0,    97,     0,     0,    96,     0,     0,     0,     0,    58,
     191,     0,     0,     0,     0,    85,    86,     0,    87,     0,
      88,    89,    90,     0,     0,    97,     0,     0,   178,    91,
      92,    93,     0,    58,   265,    94,     0,     0,     0,     0,
       0,    95,     0,     0,     2,     0,     3,    96,     0,     0,
       4,     0,   178,     5,     0,     7,     0,     0,     0,     8,
       9,     0,     0,    11,    12,     0,     0,    14,    97,     0,
      16,    17,    18,    19,     0,     0,    58,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,     0,     4,     0,
       0,     5,     0,     7,     0,   178,     0,     8,     9,     0,
       0,    11,    12,     0,   166,    14,     0,     0,    16,    17,
      18,    19,     2,     0,     3,     0,     0,     0,     4,     0,
       0,     5,    51,     7,   119,     0,     0,     8,     9,     0,
       0,    11,    12,     0,     0,    14,     0,     0,    16,    17,
      18,    19,   252,     0,     0,     0,   120,   121,   122,     0,
       0,   123,     0,     0,     0,   124,     0,     0,   125,   126,
      51,     0,   157,   335,   119,   128,     0,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,   133,     0,   120,   121,   122,     0,
      51,   123,     0,     0,     0,   124,     0,     0,   125,   126,
       0,   127,     0,   119,     0,   128,     0,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,   133,   120,   121,   122,     0,     0,
     123,     0,     0,     0,   124,     0,     0,   125,   126,     0,
       0,   157,   119,     0,   128,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,   131,   132,   133,   120,   121,   122,     0,     0,   123,
       0,     0,   183,   124,     0,     0,   125,   126,     0,     0,
       0,   119,     0,   128,     0,     0,     0,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     131,   132,   133,   120,   121,   122,     0,     0,   123,     0,
       0,   256,   124,     0,     0,   125,   126,     0,     0,     0,
     119,     0,   128,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     132,   133,   120,   121,   122,     0,     0,   123,     0,     0,
       0,   124,     0,     0,   125,   126,     0,   267,     0,   119,
       0,   128,     0,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,   132,
     133,   120,   121,   122,     0,     0,   123,     0,     0,     0,
     124,   303,     0,   125,   126,     0,     0,     0,   119,     0,
     128,     0,     0,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,   131,   132,   133,
     120,   121,   122,     0,     0,   123,     0,     0,   315,   124,
       0,     0,   125,   126,     0,     0,     0,   119,     0,   128,
       0,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,   131,   132,   133,   120,
     121,   122,     0,     0,   123,     0,     0,     0,   124,     0,
       0,   125,   126,     0,   325,     0,   119,     0,   128,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,   131,   132,   133,   120,   121,
     122,     0,     0,   123,     0,     0,     0,   124,   338,     0,
     125,   126,     0,     0,     0,   119,     0,   128,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   120,   121,   122,
       0,     0,   123,     0,     0,   341,   124,     0,     0,   125,
     126,     0,     0,     0,   119,     0,   128,     0,     0,     0,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   131,   132,   133,   120,   121,   122,     0,
       0,   123,     0,     0,     0,   124,   352,     0,   125,   126,
       0,     0,     0,   119,     0,   128,     0,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,   133,   120,   121,   122,     0,     0,
     123,     0,     0,     0,   124,   354,     0,   125,   126,     0,
       0,     0,   119,     0,   128,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,   131,   132,   133,   120,   121,   122,     0,     0,   123,
       0,     0,     0,   124,   364,     0,   125,   126,     0,     0,
       0,   119,     0,   128,     0,     0,     0,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     131,   132,   133,   120,   121,   122,     0,     0,   123,     0,
       0,     0,   124,     0,     0,   125,   126,     0,     0,     0,
     119,     0,   128,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     132,   133,   120,   121,   122,     0,     0,   123,     0,     0,
       0,   204,     0,     0,   125,   126,     0,     0,     0,   119,
       0,   128,     0,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,   132,
     133,   120,   121,   122,     0,     0,   123,     0,     0,     0,
     210,     0,     0,   125,   126,     0,     0,     0,     0,     0,
     128,     0,     0,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
      76,     0,    29,    20,   157,    90,   114,    86,   197,    36,
      64,    81,    79,    80,    76,    21,     0,    56,    94,     7,
     105,    27,   195,    84,    23,    42,     8,    55,    65,    28,
      29,    30,    86,    65,    64,    34,   148,    94,    66,    23,
      79,    80,    81,   119,    34,    84,    58,    84,   124,   125,
     126,    50,    84,    35,    65,    61,    86,   124,    58,    58,
      50,    60,    55,    63,    63,    65,    69,    55,    74,    51,
      60,    64,    84,   152,    50,    55,    60,    83,    77,    65,
      83,   157,    58,    58,    84,   124,    66,    77,    63,   168,
     279,    59,   177,    77,     7,   157,    55,   114,   152,   207,
     273,   100,   172,   188,   180,   190,   182,    66,   114,    55,
     186,   187,    73,    59,   168,   194,   100,    78,   230,   231,
     232,    57,   152,   180,    55,   182,    57,    55,   204,   186,
     187,    59,    82,   172,   210,    57,    51,   204,   168,   215,
     194,    57,    55,    58,    57,    20,     7,    58,    63,    58,
      65,    64,    63,    66,    65,   308,    55,    55,   215,   235,
      59,    59,    55,   239,   194,   204,    59,    42,   253,   281,
     197,   247,   251,   235,    76,    77,   193,    79,    80,    55,
     256,    56,   239,    59,   260,   247,    58,   193,    55,    84,
     207,    55,    59,   272,     7,    59,   195,   251,   260,   256,
      74,    75,   201,    55,    79,    80,    81,    59,    56,    84,
      58,    58,    60,    61,    62,    63,    55,    58,   272,    55,
      59,   251,    55,    59,    49,    50,    59,   222,   223,   224,
     225,    82,   308,   318,    55,   320,   321,    59,   314,   315,
      64,   317,   272,   249,    67,    55,   308,    57,    68,   124,
      51,    52,    53,   338,    81,    82,   332,   314,   315,    70,
     317,   278,   220,   221,   340,   341,   351,   352,    71,   354,
     332,    55,   357,    57,   273,    63,   361,    65,   363,   364,
     356,   226,   227,   340,   341,   370,     0,     7,    55,     3,
      57,    55,     6,    57,     8,   228,   229,   172,    12,   356,
       7,    15,    16,    17,    55,    36,    57,    21,    22,    23,
      57,    25,    26,    84,    28,    29,    59,    31,    32,    33,
      34,    35,    84,    84,    58,    64,    59,    59,    66,   204,
      66,    14,    57,    23,    64,    84,   153,    51,   201,    74,
     100,   249,    70,   214,    58,   204,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   216,   219,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      84,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     217,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    84,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    -1,     8,    -1,    -1,
      57,    12,    -1,    -1,    15,    -1,    17,    -1,    65,    66,
      21,    22,    -1,    -1,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    -1,     6,    84,     8,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    17,    49,    50,
      51,    21,    22,    54,    -1,    25,    26,    58,    -1,    29,
      61,    62,    32,    33,    34,    35,    -1,    68,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    84,    85,    86,    87,     3,    58,    59,
       6,    -1,     8,    63,    -1,    65,    12,    -1,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    84,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,     6,    -1,     8,    55,
      -1,    57,    12,    -1,    -1,    15,    16,    17,    -1,    65,
      -1,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,     3,    58,    -1,
       6,    -1,     8,    63,    -1,    65,    12,    -1,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    84,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,
       8,    -1,    -1,    -1,    12,    51,    -1,    15,    16,    17,
      -1,    57,    58,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,     3,
      -1,    -1,     6,    51,     8,    -1,    -1,    -1,    12,    -1,
      58,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    84,     3,    -1,    -1,
       6,    -1,     8,    -1,    -1,    -1,    12,    51,    -1,    15,
      16,    17,    -1,    -1,    58,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,
      84,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      17,    -1,    58,    -1,    21,    22,    23,    -1,    25,    26,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,     3,    -1,    -1,     6,    -1,     8,    -1,    84,    -1,
      12,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    -1,    28,    29,    65,    31,
      32,    33,    34,    35,    -1,    -1,     3,    -1,    -1,     6,
      -1,     8,    -1,    -1,    -1,    12,    -1,    84,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    23,    59,    25,    26,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,    -1,
       8,    -1,    84,    -1,    12,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    66,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,     3,
      -1,    -1,     6,    -1,     8,    -1,    -1,    84,    12,    -1,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    -1,     3,    -1,    -1,     6,    -1,
       8,    -1,    -1,    -1,    12,    -1,    84,    15,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    66,    31,    32,    33,    34,    35,     4,     5,
      -1,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      84,    -1,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,     4,     5,    30,     7,    -1,     9,    10,    11,
      36,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    84,    -1,    30,    -1,
      -1,    57,    -1,    -1,    36,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,    -1,
       9,    10,    11,    -1,    -1,    57,    -1,    -1,    84,    18,
      19,    20,    -1,    65,    66,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,     6,    -1,     8,    36,    -1,    -1,
      12,    -1,    84,    15,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    29,    57,    -1,
      32,    33,    34,    35,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,     6,    -1,     8,    -1,    -1,    -1,    12,    -1,
      -1,    15,    -1,    17,    -1,    84,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    66,    29,    -1,    -1,    32,    33,
      34,    35,     6,    -1,     8,    -1,    -1,    -1,    12,    -1,
      -1,    15,    84,    17,    27,    -1,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    29,    -1,    -1,    32,    33,
      34,    35,    66,    -1,    -1,    -1,    49,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      84,    -1,    65,    66,    27,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    -1,    49,    50,    51,    -1,
      84,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    64,    -1,    27,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    49,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,
      -1,    65,    27,    -1,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    49,    50,    51,    -1,    -1,    54,
      -1,    -1,    57,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    27,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    49,    50,    51,    -1,    -1,    54,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      27,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    49,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    64,    -1,    27,
      -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    27,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      49,    50,    51,    -1,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    -1,    -1,    -1,    27,    -1,    68,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    49,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    64,    -1,    27,    -1,    68,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    49,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,    -1,
      61,    62,    -1,    -1,    -1,    27,    -1,    68,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    49,    50,    51,
      -1,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,    -1,    -1,    -1,    27,    -1,    68,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    49,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    58,    59,    -1,    61,    62,
      -1,    -1,    -1,    27,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    49,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    61,    62,    -1,
      -1,    -1,    27,    -1,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    49,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    58,    59,    -1,    61,    62,    -1,    -1,
      -1,    27,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    49,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,
      27,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    49,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    27,
      -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     8,    12,    15,    16,    17,    21,    22,
      23,    25,    26,    28,    29,    31,    32,    33,    34,    35,
      51,    58,    84,    89,    90,    91,    92,    94,    95,    96,
      97,    98,    99,   107,   110,   111,   112,   123,    65,    84,
      97,   112,   113,    94,   110,     0,    90,    57,   101,   102,
     110,    84,    94,    94,   111,    94,    65,    84,    65,    92,
      93,    94,   127,    58,    63,    84,   111,    84,   108,   109,
      65,    97,   112,    59,    55,    57,    82,    93,   127,    96,
      97,   100,   103,   104,    65,     4,     5,     7,     9,    10,
      11,    18,    19,    20,    24,    30,    36,    57,    66,    84,
      93,   124,   125,   126,   127,   128,   129,   130,   131,    92,
     127,   110,    59,    84,    94,   114,   115,   116,   117,    27,
      49,    50,    51,    54,    58,    61,    62,    64,    68,    72,
      84,    85,    86,    87,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   153,    82,    55,    66,   108,   102,    65,   118,   133,
     135,   148,   151,   127,   104,   104,    66,   103,     7,   105,
     106,   110,   100,    57,   136,    57,    57,     7,    84,   124,
      58,    84,    58,    57,   132,   133,    58,    58,     7,    66,
     128,    66,   124,    58,    63,    65,   110,   112,   121,   122,
      59,    55,    55,    59,    58,   148,    84,   104,   120,   132,
      58,   148,   148,    64,    69,    83,    67,    70,    71,    68,
      73,    78,    76,    77,    79,    80,    74,    75,    49,    50,
      51,    52,    53,   147,    56,    58,    60,    61,    62,    63,
     136,   109,    66,   118,   119,    81,    82,   134,   136,    55,
      57,     7,    66,     7,   124,    36,    57,   132,    57,   132,
      55,    57,   132,   132,   124,    66,   121,    64,   136,    66,
     114,   122,    63,    65,    13,   116,    84,   120,    58,   112,
     121,    59,    59,   138,   132,   139,   140,   141,   142,   143,
     143,   144,   144,   144,   144,   145,   145,   146,   146,   147,
     147,   147,    84,    59,   133,   152,    84,   132,    55,    66,
     133,   106,   136,   124,    58,    57,   132,    57,    59,   133,
      59,    59,    59,    64,    66,    64,   136,    66,   114,    59,
     147,     7,    55,    59,    64,    66,   118,   132,    59,   132,
      57,    57,   132,   124,   124,   124,    64,    66,   133,    59,
     124,    59,    59,   132,    59,   132,    57,    14,    57,   124,
     124,    59,   124,    59,    59,   132,   124,   124,   124,   124,
      59,   124
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   118,   119,   119,   120,
     120,   121,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   124,   124,   124,   124,   124,   124,
     125,   125,   125,   126,   126,   127,   127,   127,   127,   128,
     128,   129,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   142,   143,   143,   143,   143,   143,   144,   144,   144,
     145,   145,   145,   146,   146,   146,   146,   147,   147,   148,
     148,   148,   148,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   150,   150,   150,   151,
     151,   151,   151,   152,   152,   153,   153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     3,     3,     2,
       2,     3,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     1,     3,
       1,     3,     3,     2,     1,     2,     1,     1,     3,     1,
       3,     2,     5,     4,     2,     1,     3,     1,     3,     2,
       1,     1,     1,     3,     4,     3,     4,     4,     3,     2,
       1,     3,     2,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     3,     4,     1,     3,     2,
       1,     1,     2,     1,     3,     4,     3,     3,     2,     4,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     1,     4,     3,     3,     2,     1,
       2,     5,     7,     5,     5,     7,     9,     8,     8,     7,
       8,     7,     7,     6,     3,     2,     2,     3,     2,     1,
       3,     1,     3,     1,     1,     1,     4,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     4,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     3,     3,     3,     2,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
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

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
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
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 185 "parser.y" /* yacc.c:1646  */
    { printf("translation_unit -> external_decl\r\n"); }
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 186 "parser.y" /* yacc.c:1646  */
    { printf("translation_unit -> translation_unit external_decl\r\n"); }
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 188 "parser.y" /* yacc.c:1646  */
    { printf("external_decl -> function_definition\r\n"); }
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 189 "parser.y" /* yacc.c:1646  */
    { printf("external_decl -> decl\r\n"); }
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 191 "parser.y" /* yacc.c:1646  */
    { printf("function_definition -> decl_specs declarator decl_list compound_stat\r\n"); }
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 192 "parser.y" /* yacc.c:1646  */
    { printf("function_definition -> declarator decl_list compound_stat\r\n"); }
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 193 "parser.y" /* yacc.c:1646  */
    { printf("function_definition -> decl_specs declarator compound_stat\r\n"); }
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 194 "parser.y" /* yacc.c:1646  */
    { printf("function_definition -> declarator\r\n"); }
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 195 "parser.y" /* yacc.c:1646  */
    { printf("function_definition -> declarator compound_stat\r\n"); }
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 197 "parser.y" /* yacc.c:1646  */
    { printf("decl -> decl_specs init_declarator_list SEMI\r\n"); }
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 198 "parser.y" /* yacc.c:1646  */
    { printf("decl -> decl_specs SEMI\r\n"); }
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 200 "parser.y" /* yacc.c:1646  */
    { printf("decl_list -> decl\r\n"); }
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 201 "parser.y" /* yacc.c:1646  */
    { printf("decl_list -> decl_list decl\r\n"); }
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 203 "parser.y" /* yacc.c:1646  */
    { printf("decl_specs -> storage_class_spec decl_specs\r\n"); }
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 204 "parser.y" /* yacc.c:1646  */
    { printf("decl_specs -> storage_class_spec\r\n"); }
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "parser.y" /* yacc.c:1646  */
    { printf("decl_specs -> type_spec decl_specs\r\n"); }
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 206 "parser.y" /* yacc.c:1646  */
    { printf("decl_specs -> type_spec direct_declarator\r\n"); }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 207 "parser.y" /* yacc.c:1646  */
    { printf("decl_specs -> type_spec\r\n"); }
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 208 "parser.y" /* yacc.c:1646  */
    { printf("decl_specs -> type_qualifier decl_specs\r\n"); }
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 209 "parser.y" /* yacc.c:1646  */
    { printf("decl_specs -> type_qualifier\r\n"); }
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 211 "parser.y" /* yacc.c:1646  */
    { printf("storage_class_spec -> AUTO\r\n"); }
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 212 "parser.y" /* yacc.c:1646  */
    { printf("storage_class_spec -> REGISTER\r\n"); }
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 213 "parser.y" /* yacc.c:1646  */
    { printf("storage_class_spec -> STATIC\r\n"); }
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 214 "parser.y" /* yacc.c:1646  */
    { printf("storage_class_spec -> EXTERN\r\n"); }
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 215 "parser.y" /* yacc.c:1646  */
    { printf("storage_class_spec -> TYPEDEF\r\n"); }
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 217 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> VOID\r\n"); }
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 218 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> CHAR\r\n"); }
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 219 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> SHORT\r\n"); }
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 220 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> INT\r\n"); }
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 221 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> LONG\r\n"); }
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 222 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> FLOAT\r\n"); }
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 223 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> DOUBLE\r\n"); }
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 224 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> SIGNED\r\n"); }
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 225 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> UNSIGNED\r\n"); }
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 226 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> struct_or_union_spec\r\n"); }
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 227 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> enum_spec\r\n"); }
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 228 "parser.y" /* yacc.c:1646  */
    { printf("type_spec -> typedef_name\r\n"); }
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 230 "parser.y" /* yacc.c:1646  */
    { printf("type_qualifier -> CONST\r\n"); }
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 231 "parser.y" /* yacc.c:1646  */
    { printf("type_qualifier -> VOLATILE\r\n"); }
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 233 "parser.y" /* yacc.c:1646  */
    { printf("struct_or_union_spec -> struct_or_union IDENTITY(%s) BRACE_L struct_decl_list BRACE_R\r\n", (yyvsp[-3].strval)); }
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 234 "parser.y" /* yacc.c:1646  */
    { printf("struct_or_union_spec -> struct_or_union BRACE_L struct_decl_list BRACE_R\r\n"); }
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 235 "parser.y" /* yacc.c:1646  */
    { printf("struct_or_union_spec -> struct_or_union IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 237 "parser.y" /* yacc.c:1646  */
    { printf("struct_or_union -> STRUCT\r\n"); }
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 238 "parser.y" /* yacc.c:1646  */
    { printf("struct_or_union -> UNION\r\n"); }
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 240 "parser.y" /* yacc.c:1646  */
    { printf("struct_decl_list -> struct_decl\r\n"); }
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 241 "parser.y" /* yacc.c:1646  */
    { printf("struct_decl_list -> struct_decl_list struct_decl\r\n"); }
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 243 "parser.y" /* yacc.c:1646  */
    { printf("init_declarator_list -> init_declarator\r\n"); }
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 244 "parser.y" /* yacc.c:1646  */
    { printf("init_declarator_list -> init_declarator_list COMMA init_declarator\r\n"); }
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 246 "parser.y" /* yacc.c:1646  */
    { printf("init_declarator -> declarator\r\n"); }
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 247 "parser.y" /* yacc.c:1646  */
    { printf("init_declarator -> declarator ASSIGN initializer\r\n"); }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 249 "parser.y" /* yacc.c:1646  */
    { printf("struct_decl -> spec_qualifier_list struct_declarator_list SEMI\r\n"); }
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 251 "parser.y" /* yacc.c:1646  */
    { printf("spec_qualifier_list -> type_spec spec_qualifier_list\r\n"); }
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 252 "parser.y" /* yacc.c:1646  */
    { printf("spec_qualifier_list -> type_spec\r\n"); }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 253 "parser.y" /* yacc.c:1646  */
    { printf("spec_qualifier_list -> type_qualifier spec_qualifier_list\r\n"); }
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 254 "parser.y" /* yacc.c:1646  */
    { printf("spec_qualifier_list -> type_qualifier\r\n"); }
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 256 "parser.y" /* yacc.c:1646  */
    { printf("struct_declarator_list -> struct_declarator\r\n"); }
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 257 "parser.y" /* yacc.c:1646  */
    { printf("struct_declarator_list -> struct_declarator_list COMMA struct_declarator\r\n"); }
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 259 "parser.y" /* yacc.c:1646  */
    { printf("struct_declarator -> declarator\r\n"); }
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 260 "parser.y" /* yacc.c:1646  */
    { printf("struct_declarator -> declarator COLON const_exp\r\n"); }
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 261 "parser.y" /* yacc.c:1646  */
    { printf("struct_declarator -> COLON const_exp\r\n"); }
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 263 "parser.y" /* yacc.c:1646  */
    { printf("enum_spec -> ENUM IDENTITY(%s) BRACE_L enumerator_list BRACE_R\r\n", (yyvsp[-3].strval)); }
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 264 "parser.y" /* yacc.c:1646  */
    { printf("enum_spec -> ENUM BRACE_L enumerator_list BRACE_R\r\n"); }
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 265 "parser.y" /* yacc.c:1646  */
    { printf("enum_spec -> ENUM IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 267 "parser.y" /* yacc.c:1646  */
    { printf("enumerator_list -> enumerator\r\n"); }
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 268 "parser.y" /* yacc.c:1646  */
    { printf("enumerator_list -> enumerator_list COMMA enumerator\r\n"); }
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 270 "parser.y" /* yacc.c:1646  */
    { printf("enumerator -> IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 271 "parser.y" /* yacc.c:1646  */
    { printf("enumerator -> IDENTITY(%s) ASSIGN const_exp\r\n", (yyvsp[-2].strval)); }
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 273 "parser.y" /* yacc.c:1646  */
    { printf("declarator -> pointer direct_declarator\r\n"); }
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 274 "parser.y" /* yacc.c:1646  */
    { printf("declarator -> direct_declarator\r\n"); }
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 275 "parser.y" /* yacc.c:1646  */
    { printf("declarator -> decl_specs\r\n"); }
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 277 "parser.y" /* yacc.c:1646  */
    { printf("direct_declarator -> IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 278 "parser.y" /* yacc.c:1646  */
    { printf("direct_declarator -> PARENTHESE_L declarator PARENTHESE_R\r\n"); }
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 279 "parser.y" /* yacc.c:1646  */
    { printf("direct_declarator -> direct_declarator BRACKET_L const_exp BRACKET_R\r\n"); }
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 280 "parser.y" /* yacc.c:1646  */
    { printf("direct_declarator -> direct_declarator BRACKET_L BRACKET_R\r\n"); }
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 281 "parser.y" /* yacc.c:1646  */
    { printf("direct_declarator -> direct_declarator PARENTHESE_L param_type_list PARENTHESE_R\r\n"); }
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 282 "parser.y" /* yacc.c:1646  */
    { printf("direct_declarator -> direct_declarator PARENTHESE_L id_list PARENTHESE_R\r\n"); }
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 283 "parser.y" /* yacc.c:1646  */
    { printf("direct_declarator -> direct_declarator PARENTHESE_L PARENTHESE_R\r\n"); }
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 285 "parser.y" /* yacc.c:1646  */
    { printf("pointer -> MUL type_qualifier_list\r\n"); }
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 286 "parser.y" /* yacc.c:1646  */
    { printf("pointer -> MUL\r\n"); }
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 287 "parser.y" /* yacc.c:1646  */
    { printf("pointer -> MUL type_qualifier_list pointer\r\n"); }
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 288 "parser.y" /* yacc.c:1646  */
    { printf("pointer -> MUL pointer\r\n"); }
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 290 "parser.y" /* yacc.c:1646  */
    { printf("type_qualifier_list -> type_qualifier\r\n"); }
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 291 "parser.y" /* yacc.c:1646  */
    { printf("type_qualifier_list -> type_qualifier_list type_qualifier\r\n"); }
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 293 "parser.y" /* yacc.c:1646  */
    { printf("param_type_list -> param_list\r\n"); }
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 294 "parser.y" /* yacc.c:1646  */
    { printf("param_type_list -> param_list COMMA ELLIPSIS\r\n"); }
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 296 "parser.y" /* yacc.c:1646  */
    { printf("param_list -> param_decl\r\n"); }
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 297 "parser.y" /* yacc.c:1646  */
    { printf("param_list -> param_list COMMA param_decl\r\n"); }
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 299 "parser.y" /* yacc.c:1646  */
    { printf("param_decl -> decl_specs declarator\r\n"); }
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 300 "parser.y" /* yacc.c:1646  */
    { printf("param_decl -> decl_specs abstract_declarator\r\n"); }
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 301 "parser.y" /* yacc.c:1646  */
    { printf("param_decl -> decl_specs\r\n"); }
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 303 "parser.y" /* yacc.c:1646  */
    { printf("id_list -> IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 304 "parser.y" /* yacc.c:1646  */
    { printf("id_list -> id_list COMMA IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 306 "parser.y" /* yacc.c:1646  */
    { printf("initializer -> assignment_exp\r\n"); }
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 307 "parser.y" /* yacc.c:1646  */
    { printf("initializer -> BRACE_L initializer_list BRACE_R\r\n"); }
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 308 "parser.y" /* yacc.c:1646  */
    { printf("initializer -> BRACE_L initializer_list COMMA BRACE_R\r\n"); }
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 310 "parser.y" /* yacc.c:1646  */
    { printf("initializer_list -> initializer\r\n"); }
#line 2575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 311 "parser.y" /* yacc.c:1646  */
    { printf("initializer_list -> initializer_list COMMA initializer\r\n"); }
#line 2581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 313 "parser.y" /* yacc.c:1646  */
    { printf("type_name -> spec_qualifier_list abstract_declarator\r\n"); }
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 314 "parser.y" /* yacc.c:1646  */
    { printf("type_name -> spec_qualifier_list\r\n"); }
#line 2593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 316 "parser.y" /* yacc.c:1646  */
    { printf("abstract_declarator -> pointer\r\n"); }
#line 2599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 317 "parser.y" /* yacc.c:1646  */
    { printf("abstract_declarator -> pointer direct_abstract_declarator\r\n"); }
#line 2605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 318 "parser.y" /* yacc.c:1646  */
    { printf("abstract_declarator -> direct_abstract_declarator\r\n"); }
#line 2611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 320 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> PARENTHESE_L abstract_declarator PARENTHESE_R\r\n"); }
#line 2617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 321 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> direct_abstract_declarator BRACKET_L const_exp BRACKET_R\r\n"); }
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 322 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> BRACKET_L const_exp BRACKET_R\r\n"); }
#line 2629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 323 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> direct_abstract_declarator BRACKET_L BRACKET_R\r\n"); }
#line 2635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 324 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> BRACKET_L BRACKET_R\r\n"); }
#line 2641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 325 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> direct_abstract_declarator BRACE_L param_type_list BRACE_R\r\n"); }
#line 2647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 326 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> BRACE_L param_type_list BRACE_R\r\n"); }
#line 2653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 327 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> direct_abstract_declarator BRACE_L BRACE_R\r\n"); }
#line 2659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 328 "parser.y" /* yacc.c:1646  */
    { printf("direct_abstract_declarator -> BRACE_L BRACE_R\r\n"); }
#line 2665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 330 "parser.y" /* yacc.c:1646  */
    { printf("typedef_name -> IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 2671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 332 "parser.y" /* yacc.c:1646  */
    { printf("stat -> labeled_stat\r\n"); }
#line 2677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 333 "parser.y" /* yacc.c:1646  */
    { printf("stat -> exp_stat\r\n"); }
#line 2683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 334 "parser.y" /* yacc.c:1646  */
    { printf("stat -> compound_stat\r\n"); }
#line 2689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 335 "parser.y" /* yacc.c:1646  */
    { printf("stat -> selection_stat\r\n"); }
#line 2695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 336 "parser.y" /* yacc.c:1646  */
    { printf("stat -> iteration_stat\r\n"); }
#line 2701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 337 "parser.y" /* yacc.c:1646  */
    { printf("stat -> jump_stat\r\n"); }
#line 2707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "parser.y" /* yacc.c:1646  */
    { printf("labeled_stat -> IDENTITY(%s) COLON stat\r\n", (yyvsp[-2].strval)); }
#line 2713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 340 "parser.y" /* yacc.c:1646  */
    { printf("labeled_stat -> CASE const_exp COLON stat\r\n"); }
#line 2719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "parser.y" /* yacc.c:1646  */
    { printf("labeled_stat -> DEFAULT COLON stat\r\n"); }
#line 2725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 343 "parser.y" /* yacc.c:1646  */
    { printf("exp_stat -> COLON\r\n"); }
#line 2731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 344 "parser.y" /* yacc.c:1646  */
    { printf("exp_stat -> SEMI\r\n"); }
#line 2737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 346 "parser.y" /* yacc.c:1646  */
    { printf("compound_stat -> BRACE_L decl_list stat_list\r\n"); }
#line 2743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 347 "parser.y" /* yacc.c:1646  */
    { printf("compound_stat -> BRACE_L stat_list BRACE_R\r\n"); }
#line 2749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 348 "parser.y" /* yacc.c:1646  */
    { printf("compound_stat -> BRACE_L decl_list BRACE_R\r\n"); }
#line 2755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 349 "parser.y" /* yacc.c:1646  */
    { printf("compound_stat -> BRACE_L BRACE_R\r\n"); }
#line 2761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 351 "parser.y" /* yacc.c:1646  */
    { printf("stat_list -> stat\r\n"); }
#line 2767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 352 "parser.y" /* yacc.c:1646  */
    { printf("stat_list -> stat_list stat\r\n"); }
#line 2773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 354 "parser.y" /* yacc.c:1646  */
    { printf("selection_stat -> IF PARENTHESE_L exp PARENTHESE_R stat\r\n"); }
#line 2779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 355 "parser.y" /* yacc.c:1646  */
    { printf("selection_stat -> IF PARENTHESE_L exp PARENTHESE_R stat ELSE stat\r\n"); }
#line 2785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 356 "parser.y" /* yacc.c:1646  */
    { printf("selection_stat -> SWITCH PARENTHESE_L exp PARENTHESE_R stat\r\n"); }
#line 2791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 358 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> WHILE PARENTHESE_L exp PARENTHESE_R stat\r\n"); }
#line 2797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 359 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> DO stat WHILE PARENTHESE_L exp PARENTHESE_R SEMI\r\n"); }
#line 2803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 360 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI exp SEMI exp PARENTHESE_R stat\r\n"); }
#line 2809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 361 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI exp SEMI PARENTHESE_R stat\r\n"); }
#line 2815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 362 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI SEMI exp PARENTHESE_R stat\r\n"); }
#line 2821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 363 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L exp SEMI SEMI PARENTHESE_R stat\r\n"); }
#line 2827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 364 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L SEMI exp SEMI exp PARENTHESE_R stat\r\n"); }
#line 2833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 365 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L SEMI exp SEMI PARENTHESE_R stat\r\n"); }
#line 2839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 366 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L SEMI SEMI exp PARENTHESE_R stat\r\n"); }
#line 2845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 367 "parser.y" /* yacc.c:1646  */
    { printf("iteration_stat -> FOR PARENTHESE_L SEMI SEMI PARENTHESE_R stat\r\n"); }
#line 2851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 369 "parser.y" /* yacc.c:1646  */
    { printf("jump_stat -> GOTO IDENTITY(%s) SEMI\r\n", (yyvsp[-1].strval)); }
#line 2857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 370 "parser.y" /* yacc.c:1646  */
    { printf("jump_stat -> CONTINUE SEMI\r\n"); }
#line 2863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 371 "parser.y" /* yacc.c:1646  */
    { printf("jump_stat -> BREAK SEMI\r\n"); }
#line 2869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 372 "parser.y" /* yacc.c:1646  */
    { printf("jump_stat -> RETURN exp SEMI\r\n"); }
#line 2875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 373 "parser.y" /* yacc.c:1646  */
    { printf("jump_stat -> RETURN SEMI\r\n"); }
#line 2881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 375 "parser.y" /* yacc.c:1646  */
    { printf("exp -> assignment_exp\r\n"); }
#line 2887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 376 "parser.y" /* yacc.c:1646  */
    { printf("exp -> exp COMMA assignment_exp\r\n"); }
#line 2893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 378 "parser.y" /* yacc.c:1646  */
    { printf("assignment_exp -> conditional_exp\r\n"); }
#line 2899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 379 "parser.y" /* yacc.c:1646  */
    { printf("assignment_exp -> unary_exp assignment_operator assignment_exp\r\n"); }
#line 2905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 381 "parser.y" /* yacc.c:1646  */
    { printf("assignment_operator -> ASSIGN\r\n"); }
#line 2911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 382 "parser.y" /* yacc.c:1646  */
    { printf("assignment_operator -> ASSIGN_OP\r\n"); }
#line 2917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 384 "parser.y" /* yacc.c:1646  */
    { printf("conditional_exp -> logical_or_exp\r\n"); }
#line 2923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 385 "parser.y" /* yacc.c:1646  */
    { printf("conditional_exp -> logical_or_exp QUES exp COLON\r\n"); }
#line 2929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 387 "parser.y" /* yacc.c:1646  */
    { printf("const_exp -> conditional_exp\r\n"); }
#line 2935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 388 "parser.y" /* yacc.c:1646  */
    { printf("const_exp -> primary_exp\r\n"); }
#line 2941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 390 "parser.y" /* yacc.c:1646  */
    { printf("logical_or_exp -> logical_and_exp\r\n"); }
#line 2947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 391 "parser.y" /* yacc.c:1646  */
    { printf("logical_or_exp -> logical_or_exp OR logical_and_exp\r\n"); }
#line 2953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 393 "parser.y" /* yacc.c:1646  */
    { printf("logical_and_exp -> inclusive_or_exp\r\n"); }
#line 2959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 394 "parser.y" /* yacc.c:1646  */
    { printf("logical_and_exp -> logical_and_exp AND inclusive_or_exp\r\n"); }
#line 2965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 396 "parser.y" /* yacc.c:1646  */
    { printf("inclusive_or_exp -> exclusive_or_exp\r\n"); }
#line 2971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 397 "parser.y" /* yacc.c:1646  */
    { printf("inclusive_or_exp -> inclusive_or_exp OR_OP exclusive_or_exp\r\n"); }
#line 2977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 399 "parser.y" /* yacc.c:1646  */
    { printf("exclusive_or_exp -> and_exp\r\n"); }
#line 2983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 400 "parser.y" /* yacc.c:1646  */
    { printf("exclusive_or_exp -> exclusive_or_exp XOR_OP and_exp\r\n"); }
#line 2989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 402 "parser.y" /* yacc.c:1646  */
    { printf("and_exp -> equality_exp\r\n"); }
#line 2995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 403 "parser.y" /* yacc.c:1646  */
    { printf("and_exp -> and_exp AND_OP equality_exp\r\n"); }
#line 3001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 405 "parser.y" /* yacc.c:1646  */
    { printf("equality_exp -> relational_exp\r\n"); }
#line 3007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 406 "parser.y" /* yacc.c:1646  */
    { printf("equality_exp -> equality_exp EQUAL relational_exp\r\n"); }
#line 3013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 407 "parser.y" /* yacc.c:1646  */
    { printf("equality_exp -> equality_exp NOT_EQUAL relational_exp\r\n"); }
#line 3019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 409 "parser.y" /* yacc.c:1646  */
    { printf("relational_exp -> shift_expression\r\n"); }
#line 3025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 410 "parser.y" /* yacc.c:1646  */
    { printf("relational_exp -> relational_exp LESSER shift_expression\r\n"); }
#line 3031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 411 "parser.y" /* yacc.c:1646  */
    { printf("relational_exp -> relational_exp GREATER shift_expression\r\n"); }
#line 3037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 412 "parser.y" /* yacc.c:1646  */
    { printf("relational_exp -> relational_exp LEQUAL shift_expression\r\n"); }
#line 3043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 413 "parser.y" /* yacc.c:1646  */
    { printf("relational_exp -> relational_exp GEQUAL shift_expression\r\n"); }
#line 3049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 415 "parser.y" /* yacc.c:1646  */
    { printf("shift_expression -> additive_exp\r\n"); }
#line 3055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 416 "parser.y" /* yacc.c:1646  */
    { printf("shift_expression -> shift_expression MOVE_L additive_exp\r\n"); }
#line 3061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 417 "parser.y" /* yacc.c:1646  */
    { printf("shift_expression -> shift_expression MOVE_R additive_exp\r\n"); }
#line 3067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 419 "parser.y" /* yacc.c:1646  */
    { printf("additive_exp -> mult_exp\r\n"); }
#line 3073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 420 "parser.y" /* yacc.c:1646  */
    { printf("additive_exp -> additive_exp ADD mult_exp\r\n"); }
#line 3079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 421 "parser.y" /* yacc.c:1646  */
    { printf("additive_exp -> additive_exp SUB mult_exp\r\n"); }
#line 3085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 423 "parser.y" /* yacc.c:1646  */
    { printf("mult_exp -> cast_exp\r\n"); }
#line 3091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 424 "parser.y" /* yacc.c:1646  */
    { printf("mult_exp -> mult_exp MUL cast_exp\r\n"); }
#line 3097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 425 "parser.y" /* yacc.c:1646  */
    { printf("mult_exp -> mult_exp DIV cast_exp\r\n"); }
#line 3103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 426 "parser.y" /* yacc.c:1646  */
    { printf("mult_exp -> mult_exp MOD cast_exp\r\n"); }
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 428 "parser.y" /* yacc.c:1646  */
    { printf("cast_exp -> unary_exp\r\n"); }
#line 3115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 429 "parser.y" /* yacc.c:1646  */
    { printf("cast_exp -> PARENTHESE_L type_name PARENTHESE_R cast_exp\r\n"); }
#line 3121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 431 "parser.y" /* yacc.c:1646  */
    { printf("unary_exp -> postfix_exp\r\n"); }
#line 3127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 432 "parser.y" /* yacc.c:1646  */
    { printf("unary_exp -> POST_ADD unary_exp\r\n"); }
#line 3133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 433 "parser.y" /* yacc.c:1646  */
    { printf("unary_exp -> POST_SUB unary_exp\r\n"); }
#line 3139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 434 "parser.y" /* yacc.c:1646  */
    { printf("unary_exp -> unary_operator cast_exp\r\n"); }
#line 3145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 435 "parser.y" /* yacc.c:1646  */
    { printf("unary_exp -> SIZEOF unary_exp\r\n"); }
#line 3151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 436 "parser.y" /* yacc.c:1646  */
    { printf("unary_exp -> PARENTHESE_L type_name PARENTHESE_R\r\n"); }
#line 3157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 438 "parser.y" /* yacc.c:1646  */
    { printf("unary_operator -> AND_OP\r\n"); }
#line 3163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 439 "parser.y" /* yacc.c:1646  */
    { printf("unary_operator -> MUL\r\n"); }
#line 3169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 440 "parser.y" /* yacc.c:1646  */
    { printf("unary_operator -> ADD\r\n"); }
#line 3175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 441 "parser.y" /* yacc.c:1646  */
    { printf("unary_operator -> SUB\r\n"); }
#line 3181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 442 "parser.y" /* yacc.c:1646  */
    { printf("unary_operator -> NEG\r\n"); }
#line 3187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 443 "parser.y" /* yacc.c:1646  */
    { printf("unary_operator -> NOT\r\n"); }
#line 3193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 445 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> primary_exp\r\n"); }
#line 3199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 446 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> postfix_exp BRACKET_L exp BRACKET_R\r\n"); }
#line 3205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 447 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> postfix_exp PARENTHESE_L argument_exp_list PARENTHESE_R\r\n"); }
#line 3211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 448 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> postfix_exp PARENTHESE_L PARENTHESE_R\r\n"); }
#line 3217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 449 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> postfix_exp DOT IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 3223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 450 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> postfix_exp PELEMENT IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 3229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 451 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> postfix_exp POST_ADD\r\n"); }
#line 3235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 452 "parser.y" /* yacc.c:1646  */
    { printf("postfix_exp -> postfix_exp POST_SUB\r\n"); }
#line 3241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 454 "parser.y" /* yacc.c:1646  */
    { printf("primary_exp -> IDENTITY(%s)\r\n", (yyvsp[0].strval)); }
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 455 "parser.y" /* yacc.c:1646  */
    { printf("primary_exp -> const_type\r\n"); }
#line 3253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 456 "parser.y" /* yacc.c:1646  */
    { printf("primary_exp -> STRING\r\n"); }
#line 3259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 457 "parser.y" /* yacc.c:1646  */
    { printf("primary_exp -> PARENTHESE_L exp PARENTHESE_R\r\n"); }
#line 3265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 459 "parser.y" /* yacc.c:1646  */
    { printf("argument_exp_list -> assignment_exp\r\n"); }
#line 3271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 460 "parser.y" /* yacc.c:1646  */
    { printf("argument_exp_list -> argument_exp_list COMMA assignment_exp\r\n"); }
#line 3277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 462 "parser.y" /* yacc.c:1646  */
    { printf("const_type -> INT_NUM(%s)\r\n", (yyvsp[0].strval)); }
#line 3283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 463 "parser.y" /* yacc.c:1646  */
    { printf("const_type -> FLOAT_NUM(%s)\r\n", (yyvsp[0].strval)); }
#line 3289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 464 "parser.y" /* yacc.c:1646  */
    { printf("const_type -> STRING(%s)\r\n", (yyvsp[0].strval)); }
#line 3295 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3299 "parser.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 466 "parser.y" /* yacc.c:1906  */

int main(int argc, const char *args[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Useage: [./]cyacc [file]\r\n");
        exit(2);
    }
    // yydebug = 1;

	extern FILE *yyin;
	if ((yyin = fopen(args[1], "r")) == NULL)
    {
		fprintf(stderr, "can not open %s\n", args[1]);
		exit(1);
	}
	if (yyparse())
		exit(-1);
	fclose(yyin);
    return 0;
}

void yyerror(char *s, ...)
{
    extern int yylineno;

    va_list ap;
    va_start(ap, s);

    fprintf(stderr, "row %d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}
