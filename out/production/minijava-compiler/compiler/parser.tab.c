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
#line 1 "parser.y"

	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
void yyerror (char const *s);


#line 81 "parser.tab.c"

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
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    T_EOF = 0,
    ASSIGN = 258,
    OPEN_PARENTHESIS = 259,
    CLOSE_PARENTHESIS = 260,
    OPEN_BRACKET = 261,
    CLOSE_BRACKET = 262,
    OPEN_BRACE = 263,
    CLOSE_BRACE = 264,
    SEMICOLON = 265,
    COMMA = 266,
    AND_OP = 267,
    LESS_THAN_OP = 268,
    PLUS_OP = 269,
    MINUS_OP = 270,
    MULTIPLICATION_OP = 271,
    DOT = 272,
    NOT_OP = 273,
    CLASS = 274,
    EXTENDS = 275,
    PUBLIC = 276,
    STATIC = 277,
    VOID = 278,
    MAIN_CLASS = 279,
    STRING = 280,
    RETURN = 281,
    BOOLEAN = 282,
    INT = 283,
    IF = 284,
    ELSE = 285,
    WHILE = 286,
    PRINT = 287,
    LENGTH = 288,
    THIS = 289,
    NEW = 290,
    INTEGER_LITERAL = 291,
    STRING_LITERAL = 292,
    BOOLEAN_LITERAL = 293,
    IDENTIFIER = 294
  };
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  609

#define YYUNDEFTOK  2
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    62,    65,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    85,    86,    88,    91,    92,    95,    96,    97,    98,
      99,   101,   102,   103,   104,   105,   106,   107,   110,   111,
     113,   116,   118,   119,   122,   123,   125,   128,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     146,   146,   147,   148,   151,   152,   153,   154,   157,   158,
     159,   160,   161,   163,   164,   167,   168,   170,   172,   173,
     174,   175,   176,   177,   178,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   245,   246,   248,   249,   251,
     252,   255,   255,   255,   255,   255
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"=\"", "\"(\"", "\")\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\";\"", "\",\"", "\"&&\"", "\"<\"",
  "\"+\"", "\"-\"", "\"*\"", "\".\"", "\"!\"", "\"class\"", "\"extends\"",
  "\"public\"", "\"static\"", "\"void\"", "\"main\"", "\"String\"",
  "\"return\"", "\"boolean\"", "\"int\"", "\"if\"", "\"else\"",
  "\"while\"", "\"System.out.println\"", "\"length\"", "\"this\"",
  "\"new\"", "\"integer literal\"", "\"string literal\"",
  "\"boolean literal\"", "\"identifier\"", "$accept", "program",
  "MainClass", "ClassDeclarations", "ClassDeclaration", "VarsDeclarations",
  "VarsDeclaration", "MethodDeclarations", "MethodDeclaration",
  "FunctionParams", "FunctionParameters", "Type", "Statements",
  "Statement", "Expression", "MethodVars", "MethodVariables", "Operator", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF (-350)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-148)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     148,     6,     8,    21,   158,   199,    89,   222,   187,    23,
    -350,   229,    16,    15,  -350,   159,  -350,   205,   233,    91,
     242,   268,   154,   249,   257,   279,   280,   150,    11,   251,
      11,   293,   231,   516,    18,   367,   375,   385,   392,   405,
     147,   129,   555,   307,   555,   364,   368,   555,   555,  1240,
     431,   235,   443,   453,   459,   460,   483,   484,    65,    52,
    -350,  -350,     7,  -350,  -350,    22,   236,  -350,   193,    11,
     195,    11,    11,   246,   386,   336,   485,    11,    11,  1245,
     456,   529,   530,   542,   543,   557,   568,   211,   531,   575,
     604,   609,   608,   614,   200,   574,  -350,  -350,  -350,   555,
    -350,   555,   555,  -350,  -350,  -350,  -350,   555,   555,   555,
    1250,   600,   613,   615,   617,   625,   626,   635,   638,    17,
    -350,  -350,  -350,  -350,  -350,  -350,   628,   633,   125,    26,
     680,   711,   729,   758,   797,   836,   594,   905,   658,   673,
     674,   684,   696,   697,   710,   712,   713,   165,   724,   725,
     727,   340,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
     632,   671,   726,   728,   733,   734,   744,   749,   750,   751,
      67,   477,   477,   477,   477,   535,   678,   695,   703,   738,
     741,   742,   756,   757,   768,   777,   780,    47,   126,   784,
    -350,    59,   785,   792,   815,   108,   276,   823,   824,   828,
     829,   830,   841,   850,   853,   854,   862,   863,   867,   353,
     864,   866,   873,   534,   877,   884,   886,   887,   888,   243,
     889,   890,   899,   901,   903,   907,   915,   916,   917,   920,
     921,   923,   925,   292,   672,   430,   672,   672,   672,   430,
     430,   430,   430,   430,   430,   980,   984,   984,   984,   984,
     984,   984,   984,   984,   984,   984,   984,   984,   984,   984,
    1092,  -350,  1009,  -350,  -350,  -350,  1009,  1009,  1009,  1009,
    1009,  1009,  1009,  1024,  1254,  1273,  1279,  1290,  1305,  1316,
    1322,  1331,  1348,  1357,  1363,  1374,  1389,  1400,  1406,  1415,
    1432,  1194,  1426,  1441,  1452,  1461,  1478,  1487,  1498,  1507,
    1221,  1524,   304,  1513,   352,   366,   387,   303,  -350,   927,
    -350,   928,   936,   938,   941,   958,   959,   961,   962,   963,
     969,   970,   971,   973,   977,  1056,   978,   611,    72,    72,
      72,    72,    72,    72,    72,    72,    72,   260,   388,    72,
      72,    72,   981,  1065,   982,    72,   774,    72,   813,    72,
     852,    72,  1080,  1104,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,   904,  1126,    72,  -350,    13,  -350,  -350,  -350,  -350,
    1803,  1820,  1837,  1854,  1871,  1888,  1905,  1922,  1939,   365,
    1126,  1752,  1956,   475,  1973,  1990,  1560,  2007,  -350,  -350,
    -350,  2024,   514,  2041,  2058,   553,  2075,  2092,   592,  2109,
    1769,   631,  2126,   670,  2143,    72,  -350,  -350,  -350,  -350,
    -350,   130,   906,   869,  1633,    72,   709,  2160,  1650,   321,
     310,   428,   462,  1132,  1005,     4,    72,  1011,  1012,  1013,
    1015,  1017,  1018,  1019,  1020,    72,  1616,  2177,  1021,  1022,
      66,  1030,  -350,  1081,   910,  1539,  1539,   965,  1550,  1146,
    1146,   926,  1146,   979,  1008,   313,  1023,  1039,  -350,  -350,
    -350,  1040,   172,   583,  2194,  -350,  1041,    72,  1042,  -350,
    1667,  -350,  -350,  1049,    72,    72,  1155,  1053,  1062,  -350,
    1057,  1684,   748,  2211,  -350,  1066,  -350,   464,  1701,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  2228,   404,  -350,
    -350,  -350,  -350,  -350,  1014,    72,  1016,  1045,  1718,  1046,
     945,    48,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
      72,    72,    72,    72,  1178,  -350,   618,  2245,  -350,  -350,
    2262,  2279,   787,  2296,  -350,  -350,   618,  -350,  -350,  -350,
     618,   618,   657,   910,  1146,  2313,  1146,  1146,  1146,  1146,
    1146,  1146,  2330,  2347,  2364,  2381,   826,  2398,   865,  1786,
    1067,  -350,  -350,  -350,  -350,  -350,  -350,  1072,  1073,  1074,
     436,  1075,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  1200,   735,  1200,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  1735,  -350,  -350
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,    23,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    70,     0,    72,    40,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    26,    45,     0,
      27,     0,     0,    28,    29,    30,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    42,    74,    68,    43,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    66,    67,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       4,     0,     0,     0,   118,     0,   114,   116,   115,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,   152,   153,   154,
     155,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   103,
      82,     0,     0,     0,     0,   128,     0,     0,     0,   143,
       0,   144,   122,     0,     0,     0,     0,     0,     0,   129,
     117,     0,     0,     0,    48,     0,   112,     0,     0,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,    57,
      58,    59,    47,    97,    93,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    80,    98,    99,   100,    81,
       0,     0,     0,     0,     0,   125,     0,     0,   139,   140,
       0,     0,     0,     0,   141,   120,     0,   126,   127,   111,
       0,     0,     0,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   145,   135,   136,   137,   138,   119,     0,     0,     0,
       0,     0,    87,   104,    88,    89,    90,    91,    92,    79,
     105,   106,   107,   108,   109,    83,     0,     0,     0,   130,
     131,   132,   133,   134,   113,   149,     0,   150,   148
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,  -350,  -350,  1079,  1087,   120,   -37,   -14,   -65,   349,
      92,   -92,  1343,  -274,  -212,    27,  -152,  -349
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     7,    16,    42,    67,    68,    98,   189,
     190,    65,   275,   310,   424,   570,   571,   436
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     308,    96,   127,   129,    64,   495,   -21,     5,    90,     8,
      96,    64,    41,    91,   429,   308,    21,   308,   146,    50,
     -38,    10,   425,    92,    18,   -21,   308,   150,   342,   344,
      70,    19,   -38,    73,    74,    76,   -38,   496,   -38,   -38,
     425,   430,   147,   497,   425,     6,   -69,     9,   208,   560,
     -38,   342,   431,   425,    22,    20,   425,    51,    88,   425,
     212,    93,   425,   342,   425,   151,    86,   371,   186,   342,
     372,    96,    64,   371,   187,   511,   372,   425,   561,   191,
     191,   191,   191,   191,   373,   130,   209,   131,   132,    87,
     373,    89,    26,   133,   134,   135,   137,    15,   213,   489,
     374,   375,   376,   377,   378,   490,   374,   375,   376,   377,
     378,   379,    27,   217,    88,   342,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   392,   394,   395,   396,   397,
      59,    88,    88,   401,   403,   404,   406,   407,   409,   410,
     412,   414,   191,   425,   191,   191,   191,   210,    57,     1,
      44,    39,    47,    49,    60,    32,    61,    62,   -21,     5,
     427,   428,    33,   475,   149,   210,   169,     2,    63,   476,
      58,   170,    40,   371,    34,   532,   372,   -21,   447,   514,
      23,   516,   517,   519,   521,   522,   523,   524,   525,    99,
     373,   101,   102,   425,    94,    17,    94,   107,   108,   110,
      12,   126,    97,   474,   100,   489,   374,   375,   376,   377,
     378,   490,   118,   480,    95,   119,    95,   425,    13,   425,
     491,   493,    -3,    12,   498,    60,    24,    61,    62,    -2,
      12,   425,    41,   507,   514,    64,    78,    94,   491,    63,
     -38,    13,    88,    79,   244,   491,   342,    94,    13,   491,
      28,   245,   -38,   491,    25,   103,   -38,    95,   -38,   -38,
     491,   389,    29,   339,   390,   537,   341,    95,   303,   -84,
      46,    35,   540,   541,   543,    89,    30,   218,   373,    36,
     582,   219,   584,   585,   586,   587,   588,   589,    31,   304,
      43,   305,   306,   259,   374,   375,   376,   377,   378,   391,
     260,    37,    38,   555,   351,   302,   352,   339,   340,   353,
     341,   485,   303,   -84,   371,    69,   486,   372,   562,   563,
     564,   565,   567,   528,   569,   483,   261,   484,   263,   264,
     265,   373,    45,   304,   569,   305,   306,    94,   569,   569,
     569,   174,    88,   307,   175,   105,   489,   374,   375,   376,
     377,   378,   490,   345,   232,   262,   346,    95,   233,   266,
     267,   268,   269,   270,   271,   273,   389,   347,   339,   390,
     348,   445,    71,   303,   -84,    89,    72,   416,   417,   418,
     419,   420,   421,   373,   569,   606,   569,    94,   349,   393,
      52,   350,   372,   422,   304,   104,   305,   306,    53,   374,
     375,   376,   377,   378,   446,   302,   373,    95,    54,  -122,
    -122,  -122,   303,   -84,   513,    55,  -122,  -122,  -122,  -122,
    -122,  -122,   374,   375,   376,   377,   378,   379,    56,   487,
     -84,    41,   488,   304,   -84,   305,   306,   371,   -38,    77,
     372,   603,   415,   307,   605,   607,   608,   596,   416,   417,
     418,   419,   420,   421,   373,   -38,   -38,   -38,   -38,   -38,
     111,   -38,   -38,   371,   422,   551,   372,    80,   552,   -38,
     374,   375,   376,   377,   378,   423,   371,    81,   188,   372,
     373,   415,   -61,    82,    83,   449,    94,   416,   417,   418,
     419,   420,   421,   373,   106,   489,   374,   375,   376,   377,
     378,   490,    60,   422,    61,    62,    95,    84,    85,   374,
     375,   376,   377,   378,   423,   371,    63,    48,   372,   456,
     415,   192,   193,   194,   196,   -38,   416,   417,   418,   419,
     420,   421,   373,   112,   113,   237,   195,   -38,   120,   -62,
     -61,   -38,   422,   -38,   -38,   238,   114,   115,   374,   375,
     376,   377,   378,   423,   371,   -38,    66,   372,   460,   415,
      60,   116,    61,    62,   -44,   416,   417,   418,   419,   420,
     421,   373,   117,   577,    63,   128,   -44,   578,   579,   581,
      60,   422,    61,    62,   533,   121,   534,   374,   375,   376,
     377,   378,   423,   371,    63,    94,   372,   464,   415,    60,
      88,    61,    62,   158,   416,   417,   418,   419,   420,   421,
     373,   122,   351,    63,   352,    95,   123,   353,   124,   568,
     422,   121,   372,  -146,   125,   138,   374,   375,   376,   377,
     378,   423,   371,    89,    88,   372,   373,   415,   139,   176,
     140,   469,   141,   416,   417,   418,   419,   420,   421,   373,
     142,   143,   374,   375,   376,   377,   378,   379,   580,   422,
     144,   372,  -146,   145,   160,   374,   375,   376,   377,   378,
     423,   371,   148,   188,   372,   373,   415,   471,   177,   161,
     162,    94,   416,   417,   418,   419,   420,   421,   373,   152,
     163,   374,   375,   376,   377,   378,   379,    60,   422,    61,
      62,    95,   164,   165,   374,   375,   376,   377,   378,   423,
     371,    63,    94,   372,   481,   415,   166,   197,   167,   168,
     153,   416,   417,   418,   419,   420,   421,   373,   171,   172,
      94,   173,    95,   178,   198,   179,   568,   422,   154,   372,
     180,   181,   199,   374,   375,   376,   377,   378,   423,   371,
      95,   182,   372,   373,   415,   548,   183,   184,   185,    94,
     416,   417,   418,   419,   420,   421,   373,   155,   489,   374,
     375,   376,   377,   378,   490,   402,   422,   200,   372,    95,
     201,   202,   374,   375,   376,   377,   378,   423,   371,   211,
     214,   372,   373,   415,   575,   203,   204,   215,    94,   416,
     417,   418,   419,   420,   421,   373,   156,   205,   374,   375,
     376,   377,   378,   379,   405,   422,   206,   372,    95,   207,
     216,   374,   375,   376,   377,   378,   423,   371,   220,   221,
     372,   373,   415,   222,   223,   224,   594,    94,   416,   417,
     418,   419,   420,   421,   373,   157,   225,   374,   375,   376,
     377,   378,   379,   408,   422,   226,   372,    95,   227,   228,
     374,   375,   376,   377,   378,   423,   371,   229,   230,   372,
     373,   415,   231,   478,   235,   234,   596,   416,   417,   418,
     419,   420,   421,   373,   236,   239,   374,   375,   376,   377,
     378,   379,   240,   422,   241,   242,   243,   246,   247,   374,
     375,   376,   377,   378,   423,   371,    94,   248,   372,   249,
     415,   250,   477,   515,   159,   251,   416,   417,   418,   419,
     420,   421,   373,   252,   253,   254,    95,   389,   255,   256,
     372,   257,   422,   258,   303,   -84,   354,   355,   374,   375,
     376,   377,   378,   423,   373,   356,   302,   357,   339,   340,
     358,   341,   -84,   303,   -84,   304,   -84,   305,   306,   489,
     374,   375,   376,   377,   378,   518,   389,   359,   360,   372,
     361,   362,   363,   303,   304,   559,   305,   306,   364,   365,
     366,   272,   367,   373,   307,   274,   368,   370,   -38,   526,
     398,   400,   -75,   -75,   304,   -84,   305,   306,   489,   374,
     375,   376,   377,   378,   518,   -38,   -38,   -38,   -38,   -38,
     291,   -38,   -38,   -75,   494,   -75,   -75,   -75,   527,   -38,
     499,   500,   501,   -75,   502,   300,   503,   504,   505,   506,
     509,   510,   -75,   529,    60,   -75,    61,    62,   -75,   512,
     -75,   -75,   530,   531,   554,   536,   556,   538,    63,    60,
     -75,    61,    62,   -75,   539,   -75,   -75,   302,   544,   339,
     340,   546,   341,    63,   303,   369,   302,   545,   339,   340,
     550,   341,   599,   303,   399,   557,   558,   600,   601,   602,
     604,   411,   302,    11,   372,   304,     0,   305,   306,   303,
     -84,   513,    14,   289,   304,   307,   305,   306,   373,     0,
     -75,   -75,     0,     0,   307,   413,     0,   -84,   372,     0,
     304,   -84,   305,   306,   374,   375,   376,   377,   378,   379,
     307,   -75,   373,   -75,   -75,     0,     0,   426,     0,     0,
     372,   -75,     0,   492,     0,     0,   372,     0,   374,   375,
     376,   377,   378,   379,   373,     0,     0,   302,     0,     0,
     373,     0,     0,     0,   303,   -84,   542,     0,     0,   372,
     374,   375,   376,   377,   378,   379,   374,   375,   376,   377,
     378,   379,   -84,   373,     0,   304,   -84,   305,   306,   566,
       0,     0,   372,     0,     0,   307,     0,     0,     0,   374,
     375,   376,   377,   378,   379,   302,   373,     0,     0,     0,
      88,   568,   303,     0,   372,     0,     0,     0,     0,     0,
       0,     0,   374,   375,   376,   377,   378,   379,   373,     0,
     -84,     0,   302,   304,     0,   305,   306,    88,     0,   303,
       0,     0,     0,   327,   374,   375,   376,   377,   378,   379,
       0,    75,     0,     0,     0,     0,   109,   336,     0,   -44,
     304,   136,   305,   306,   -38,   302,     0,     0,     0,   -44,
     327,   -44,   303,   -84,     0,    60,   -38,    61,    62,     0,
     -38,   -44,   -38,   -38,   302,    60,     0,    61,    62,    63,
     302,   303,   309,   304,   -38,   305,   306,   303,   311,    63,
       0,   302,     0,   307,     0,     0,     0,     0,   303,   312,
       0,     0,   304,     0,   305,   306,   302,     0,   304,     0,
     305,   306,   307,   303,   313,     0,     0,   302,   307,   304,
       0,   305,   306,   302,   303,   314,     0,     0,     0,   307,
     303,   315,   302,     0,   304,     0,   305,   306,     0,   303,
     316,     0,     0,     0,   307,   304,     0,   305,   306,   302,
       0,   304,     0,   305,   306,   307,   303,   317,   302,     0,
     304,   307,   305,   306,   302,   303,   318,     0,     0,     0,
     307,   303,   319,     0,     0,   302,     0,   304,     0,   305,
     306,     0,   303,   320,     0,     0,   304,   307,   305,   306,
     302,     0,   304,     0,   305,   306,   307,   303,   321,     0,
       0,   302,   307,   304,     0,   305,   306,   302,   303,   322,
       0,     0,     0,   307,   303,   323,   302,     0,   304,     0,
     305,   306,     0,   303,   324,     0,     0,   302,   307,   304,
       0,   305,   306,   325,   303,   304,     0,   305,   306,   307,
     303,   326,   302,     0,   304,   307,   305,   306,     0,   303,
       0,     0,   328,   302,   307,   304,     0,   305,   306,     0,
     303,   304,   302,   305,   306,   307,     0,   329,     0,   303,
     304,   307,   305,   306,     0,     0,     0,     0,   330,   302,
     307,   304,     0,   305,   306,     0,   303,   331,   302,     0,
     304,   307,   305,   306,     0,   303,     0,     0,     0,   302,
     307,     0,     0,     0,   332,     0,   303,   304,   302,   305,
     306,     0,     0,   333,   343,   303,   304,   307,   305,   306,
       0,   303,   -84,     0,   334,   337,   307,   304,     0,   305,
     306,     0,   303,   335,     0,     0,   304,   307,   305,   306,
     302,     0,   304,     0,   305,   306,   307,   303,     0,     0,
     338,   520,   307,   304,     0,   305,   306,     0,   303,     0,
       0,   432,     0,   307,     0,   453,   433,     0,   304,   -84,
     305,   306,   416,   417,   418,   419,   420,   435,   307,   304,
     -84,   305,   306,     0,     0,     0,     0,     0,     0,   307,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   290,     0,   292,     0,     0,     0,   293,
     294,   295,   296,   297,   298,   299,   301,   351,     0,   352,
     478,  -117,   353,  -117,     0,     0,  -117,     0,  -117,  -117,
    -117,  -117,  -117,  -117,   432,     0,     0,     0,   479,   433,
    -142,     0,     0,  -142,  -142,   416,   417,   418,   419,   420,
     435,   432,     0,     0,     0,  -121,   433,  -121,     0,     0,
    -121,  -121,   416,   417,   418,   419,   420,   435,   432,     0,
       0,     0,  -123,   433,  -123,     0,     0,  -123,  -123,   416,
     417,   418,   419,   420,   435,   432,     0,     0,     0,  -124,
     433,   547,     0,     0,  -124,  -124,   416,   417,   418,   419,
     420,   435,   432,     0,     0,     0,  -110,   433,  -110,     0,
       0,  -110,  -110,   416,   417,   418,   419,   420,   435,   351,
       0,   352,   546,  -117,   353,  -117,     0,     0,     0,     0,
    -117,  -117,  -117,  -117,  -117,  -117,   597,     0,     0,     0,
    -124,   433,   547,     0,     0,     0,   598,   416,   417,   418,
     419,   420,   435,   351,     0,   352,     0,     0,   353,     0,
       0,     0,  -117,     0,  -117,  -117,  -117,  -117,  -117,  -117,
     432,     0,     0,     0,     0,   433,   467,     0,     0,   468,
       0,   416,   417,   418,   419,   420,   435,   597,     0,     0,
       0,  -147,   433,     0,     0,     0,     0,   598,   416,   417,
     418,   419,   420,   435,   432,     0,     0,     0,     0,   433,
       0,     0,     0,   434,     0,   416,   417,   418,   419,   420,
     435,   432,     0,     0,     0,     0,   433,     0,     0,     0,
     437,     0,   416,   417,   418,   419,   420,   435,   432,     0,
       0,     0,     0,   433,     0,     0,     0,   438,     0,   416,
     417,   418,   419,   420,   435,   432,     0,     0,     0,     0,
     433,     0,     0,     0,   439,     0,   416,   417,   418,   419,
     420,   435,   432,     0,     0,     0,     0,   433,     0,     0,
       0,   440,     0,   416,   417,   418,   419,   420,   435,   432,
       0,     0,     0,     0,   433,     0,     0,     0,   441,     0,
     416,   417,   418,   419,   420,   435,   432,     0,     0,     0,
       0,   433,     0,     0,     0,   442,     0,   416,   417,   418,
     419,   420,   435,   432,     0,     0,     0,     0,   433,     0,
       0,     0,   443,     0,   416,   417,   418,   419,   420,   435,
     432,     0,     0,     0,     0,   433,     0,     0,     0,   444,
       0,   416,   417,   418,   419,   420,   435,   432,     0,     0,
       0,     0,   433,     0,     0,     0,   448,     0,   416,   417,
     418,   419,   420,   435,   450,     0,     0,     0,     0,   433,
       0,     0,     0,   451,     0,   416,   417,   418,   419,   420,
     435,   432,     0,     0,     0,     0,   433,     0,     0,     0,
     452,     0,   416,   417,   418,   419,   420,   435,   432,     0,
       0,     0,     0,   433,   454,     0,     0,     0,     0,   416,
     417,   418,   419,   420,   435,   432,     0,     0,     0,   455,
     433,     0,     0,     0,     0,     0,   416,   417,   418,   419,
     420,   435,   457,     0,     0,     0,   458,   433,     0,     0,
       0,     0,     0,   416,   417,   418,   419,   420,   435,   432,
       0,     0,     0,   459,   433,     0,     0,     0,     0,     0,
     416,   417,   418,   419,   420,   435,   461,     0,     0,     0,
     462,   433,     0,     0,     0,     0,     0,   416,   417,   418,
     419,   420,   435,   432,     0,     0,     0,   463,   433,     0,
       0,     0,     0,     0,   416,   417,   418,   419,   420,   435,
     465,     0,     0,     0,   466,   433,     0,     0,     0,     0,
       0,   416,   417,   418,   419,   420,   435,   432,     0,     0,
       0,     0,   433,     0,     0,     0,   470,     0,   416,   417,
     418,   419,   420,   435,   472,     0,     0,     0,     0,   433,
     473,     0,     0,     0,     0,   416,   417,   418,   419,   420,
     435,   432,     0,     0,     0,   482,   433,     0,     0,     0,
       0,     0,   416,   417,   418,   419,   420,   435,   432,     0,
       0,     0,   508,   433,     0,     0,     0,     0,     0,   416,
     417,   418,   419,   420,   435,   432,     0,     0,     0,     0,
     433,   535,     0,     0,     0,     0,   416,   417,   418,   419,
     420,   435,   432,     0,     0,     0,     0,   433,   549,     0,
       0,     0,     0,   416,   417,   418,   419,   420,   435,   432,
       0,     0,     0,     0,   433,   553,     0,     0,     0,     0,
     416,   417,   418,   419,   420,   435,   432,     0,     0,     0,
       0,   433,   572,     0,     0,     0,     0,   416,   417,   418,
     419,   420,   435,   432,     0,     0,     0,     0,   433,   573,
       0,     0,     0,     0,   416,   417,   418,   419,   420,   435,
     432,     0,     0,     0,     0,   433,   574,     0,     0,     0,
       0,   416,   417,   418,   419,   420,   435,   432,     0,     0,
       0,     0,   433,   576,     0,     0,     0,     0,   416,   417,
     418,   419,   420,   435,   432,     0,     0,     0,     0,   433,
       0,     0,     0,   583,     0,   416,   417,   418,   419,   420,
     435,   432,     0,     0,     0,     0,   433,     0,     0,     0,
     590,     0,   416,   417,   418,   419,   420,   435,   432,     0,
       0,     0,     0,   433,     0,     0,     0,   591,     0,   416,
     417,   418,   419,   420,   435,   432,     0,     0,     0,     0,
     433,     0,     0,     0,   592,     0,   416,   417,   418,   419,
     420,   435,   432,     0,     0,     0,     0,   433,     0,     0,
       0,   593,     0,   416,   417,   418,   419,   420,   435,   432,
       0,     0,     0,     0,   433,     0,     0,     0,   595,     0,
     416,   417,   418,   419,   420,   435
};

static const yytype_int16 yycheck[] =
{
     274,    66,    94,    95,    41,     1,     0,     1,     1,     1,
      75,    48,     1,     6,     1,   289,     1,   291,     1,     1,
       9,     0,   371,     1,     1,    19,   300,     1,   302,   303,
      44,     8,    21,    47,    48,    49,    25,    33,    27,    28,
     389,    28,    25,    39,   393,    39,    39,    39,     1,     1,
      39,   325,    39,   402,    39,    39,   405,    39,     6,   408,
       1,    39,   411,   337,   413,    39,     1,     1,     1,   343,
       4,   136,   109,     1,     7,     9,     4,   426,    30,   171,
     172,   173,   174,   175,    18,    99,    39,   101,   102,    24,
      18,    39,     1,   107,   108,   109,   110,     8,    39,    33,
      34,    35,    36,    37,    38,    39,    34,    35,    36,    37,
      38,    39,    21,     5,     6,   389,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
       1,     6,     6,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   234,   492,   236,   237,   238,    39,     1,     1,
      30,     1,    32,    33,    25,     1,    27,    28,     0,     1,
     372,   373,     8,    33,    39,    39,     1,    19,    39,    39,
      23,     6,    22,     1,    20,     3,     4,    19,   390,   453,
      21,   455,   456,   457,   458,   459,   460,   461,   462,    69,
      18,    71,    72,   542,     1,     8,     1,    77,    78,    79,
       1,     1,     9,   415,     9,    33,    34,    35,    36,    37,
      38,    39,     1,   425,    21,     4,    21,   566,    19,   568,
     432,   433,     0,     1,   436,    25,    21,    27,    28,     0,
       1,   580,     1,   445,   508,   272,     1,     1,   450,    39,
       9,    19,     6,     8,     1,   457,   520,     1,    19,   461,
       8,     8,    21,   465,    21,     9,    25,    21,    27,    28,
     472,     1,    20,     3,     4,   477,     6,    21,     8,     9,
      39,    22,   484,   485,   486,    39,     8,     1,    18,    22,
     554,     5,   556,   557,   558,   559,   560,   561,    20,    29,
      39,    31,    32,     1,    34,    35,    36,    37,    38,    39,
       8,    22,    22,   515,     1,     1,     3,     3,     4,     6,
       6,     1,     8,     9,     1,     8,     6,     4,   530,   531,
     532,   533,   534,    10,   536,     4,   234,     6,   236,   237,
     238,    18,    39,    29,   546,    31,    32,     1,   550,   551,
     552,     1,     6,    39,     4,     9,    33,    34,    35,    36,
      37,    38,    39,     1,     1,   235,     4,    21,     5,   239,
     240,   241,   242,   243,   244,   245,     1,     1,     3,     4,
       4,     6,     8,     8,     9,    39,     8,    12,    13,    14,
      15,    16,    17,    18,   596,   597,   598,     1,     1,     1,
      23,     4,     4,    28,    29,     9,    31,    32,    23,    34,
      35,    36,    37,    38,    39,     1,    18,    21,    23,     5,
       6,     7,     8,     9,    10,    23,    12,    13,    14,    15,
      16,    17,    34,    35,    36,    37,    38,    39,    23,     1,
      26,     1,     4,    29,    30,    31,    32,     1,     8,     8,
       4,     5,     6,    39,   596,   597,   598,    11,    12,    13,
      14,    15,    16,    17,    18,    25,    26,    27,    28,    29,
       4,    31,    32,     1,    28,     1,     4,    24,     4,    39,
      34,    35,    36,    37,    38,    39,     1,    24,     1,     4,
      18,     6,     5,    24,    24,    10,     1,    12,    13,    14,
      15,    16,    17,    18,     9,    33,    34,    35,    36,    37,
      38,    39,    25,    28,    27,    28,    21,    24,    24,    34,
      35,    36,    37,    38,    39,     1,    39,     1,     4,     5,
       6,   172,   173,   174,   175,     9,    12,    13,    14,    15,
      16,    17,    18,     4,     4,     1,     1,    21,     7,     5,
       5,    25,    28,    27,    28,    11,     4,     4,    34,    35,
      36,    37,    38,    39,     1,    39,     1,     4,     5,     6,
      25,     4,    27,    28,     9,    12,    13,    14,    15,    16,
      17,    18,     4,   546,    39,     1,    21,   550,   551,   552,
      25,    28,    27,    28,     1,    10,     3,    34,    35,    36,
      37,    38,    39,     1,    39,     1,     4,     5,     6,    25,
       6,    27,    28,     9,    12,    13,    14,    15,    16,    17,
      18,     7,     1,    39,     3,    21,     7,     6,    10,     1,
      28,    10,     4,     5,    10,    25,    34,    35,    36,    37,
      38,    39,     1,    39,     6,     4,    18,     6,    25,     7,
      25,    10,    25,    12,    13,    14,    15,    16,    17,    18,
      25,    25,    34,    35,    36,    37,    38,    39,     1,    28,
      25,     4,     5,    25,     6,    34,    35,    36,    37,    38,
      39,     1,    39,     1,     4,    18,     6,     7,     7,     6,
       6,     1,    12,    13,    14,    15,    16,    17,    18,     9,
       6,    34,    35,    36,    37,    38,    39,    25,    28,    27,
      28,    21,     6,     6,    34,    35,    36,    37,    38,    39,
       1,    39,     1,     4,     5,     6,     6,    39,     6,     6,
       9,    12,    13,    14,    15,    16,    17,    18,     4,     4,
       1,     4,    21,     7,    39,     7,     1,    28,     9,     4,
       7,     7,    39,    34,    35,    36,    37,    38,    39,     1,
      21,     7,     4,    18,     6,     7,     7,     7,     7,     1,
      12,    13,    14,    15,    16,    17,    18,     9,    33,    34,
      35,    36,    37,    38,    39,     1,    28,    39,     4,    21,
      39,    39,    34,    35,    36,    37,    38,    39,     1,     5,
       5,     4,    18,     6,     7,    39,    39,     5,     1,    12,
      13,    14,    15,    16,    17,    18,     9,    39,    34,    35,
      36,    37,    38,    39,     1,    28,    39,     4,    21,    39,
       5,    34,    35,    36,    37,    38,    39,     1,     5,     5,
       4,    18,     6,     5,     5,     5,    10,     1,    12,    13,
      14,    15,    16,    17,    18,     9,     5,    34,    35,    36,
      37,    38,    39,     1,    28,     5,     4,    21,     5,     5,
      34,    35,    36,    37,    38,    39,     1,     5,     5,     4,
      18,     6,     5,     4,     8,    11,    11,    12,    13,    14,
      15,    16,    17,    18,    11,     8,    34,    35,    36,    37,
      38,    39,     8,    28,     8,     8,     8,     8,     8,    34,
      35,    36,    37,    38,    39,     1,     1,     8,     4,     8,
       6,     8,     6,     3,     9,     8,    12,    13,    14,    15,
      16,    17,    18,     8,     8,     8,    21,     1,     8,     8,
       4,     8,    28,     8,     8,     9,     9,     9,    34,    35,
      36,    37,    38,    39,    18,     9,     1,     9,     3,     4,
       9,     6,    26,     8,     9,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     1,     9,     9,     4,
       9,     9,     9,     8,    29,    30,    31,    32,     9,     9,
       9,     1,     9,    18,    39,     1,     9,     9,     8,    10,
       9,     9,     8,     9,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    25,    26,    27,    28,    29,
       1,    31,    32,    29,     9,    31,    32,     8,    10,    39,
       9,     9,     9,    39,     9,     1,     9,     9,     9,     9,
       9,     9,     8,    10,    25,    26,    27,    28,    29,     9,
      31,    32,     3,     3,    30,     4,    30,     5,    39,    25,
      26,    27,    28,    29,     5,    31,    32,     1,     5,     3,
       4,     4,     6,    39,     8,     9,     1,     5,     3,     4,
       4,     6,     5,     8,     9,    30,    30,     5,     5,     5,
       5,     1,     1,     4,     4,    29,    -1,    31,    32,     8,
       9,    10,     5,     1,    29,    39,    31,    32,    18,    -1,
       8,     9,    -1,    -1,    39,     1,    -1,    26,     4,    -1,
      29,    30,    31,    32,    34,    35,    36,    37,    38,    39,
      39,    29,    18,    31,    32,    -1,    -1,     1,    -1,    -1,
       4,    39,    -1,     1,    -1,    -1,     4,    -1,    34,    35,
      36,    37,    38,    39,    18,    -1,    -1,     1,    -1,    -1,
      18,    -1,    -1,    -1,     8,     9,     1,    -1,    -1,     4,
      34,    35,    36,    37,    38,    39,    34,    35,    36,    37,
      38,    39,    26,    18,    -1,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    39,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     1,    18,    -1,    -1,    -1,
       6,     1,     8,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    18,    -1,
      26,    -1,     1,    29,    -1,    31,    32,     6,    -1,     8,
      -1,    -1,    -1,    39,    34,    35,    36,    37,    38,    39,
      -1,     1,    -1,    -1,    -1,    -1,     1,    26,    -1,     9,
      29,     1,    31,    32,     9,     1,    -1,    -1,    -1,     9,
      39,    21,     8,     9,    -1,    25,    21,    27,    28,    -1,
      25,    21,    27,    28,     1,    25,    -1,    27,    28,    39,
       1,     8,     9,    29,    39,    31,    32,     8,     9,    39,
      -1,     1,    -1,    39,    -1,    -1,    -1,    -1,     8,     9,
      -1,    -1,    29,    -1,    31,    32,     1,    -1,    29,    -1,
      31,    32,    39,     8,     9,    -1,    -1,     1,    39,    29,
      -1,    31,    32,     1,     8,     9,    -1,    -1,    -1,    39,
       8,     9,     1,    -1,    29,    -1,    31,    32,    -1,     8,
       9,    -1,    -1,    -1,    39,    29,    -1,    31,    32,     1,
      -1,    29,    -1,    31,    32,    39,     8,     9,     1,    -1,
      29,    39,    31,    32,     1,     8,     9,    -1,    -1,    -1,
      39,     8,     9,    -1,    -1,     1,    -1,    29,    -1,    31,
      32,    -1,     8,     9,    -1,    -1,    29,    39,    31,    32,
       1,    -1,    29,    -1,    31,    32,    39,     8,     9,    -1,
      -1,     1,    39,    29,    -1,    31,    32,     1,     8,     9,
      -1,    -1,    -1,    39,     8,     9,     1,    -1,    29,    -1,
      31,    32,    -1,     8,     9,    -1,    -1,     1,    39,    29,
      -1,    31,    32,     1,     8,    29,    -1,    31,    32,    39,
       8,     9,     1,    -1,    29,    39,    31,    32,    -1,     8,
      -1,    -1,    26,     1,    39,    29,    -1,    31,    32,    -1,
       8,    29,     1,    31,    32,    39,    -1,    26,    -1,     8,
      29,    39,    31,    32,    -1,    -1,    -1,    -1,    26,     1,
      39,    29,    -1,    31,    32,    -1,     8,    26,     1,    -1,
      29,    39,    31,    32,    -1,     8,    -1,    -1,    -1,     1,
      39,    -1,    -1,    -1,    26,    -1,     8,    29,     1,    31,
      32,    -1,    -1,    26,     1,     8,    29,    39,    31,    32,
      -1,     8,     9,    -1,    26,     1,    39,    29,    -1,    31,
      32,    -1,     8,    26,    -1,    -1,    29,    39,    31,    32,
       1,    -1,    29,    -1,    31,    32,    39,     8,    -1,    -1,
      26,     1,    39,    29,    -1,    31,    32,    -1,     8,    -1,
      -1,     1,    -1,    39,    -1,     5,     6,    -1,    29,    30,
      31,    32,    12,    13,    14,    15,    16,    17,    39,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,    -1,   262,    -1,    -1,    -1,   266,
     267,   268,   269,   270,   271,   272,   273,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    12,    13,
      14,    15,    16,    17,     1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,     1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,     1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,     1,    -1,    -1,    -1,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,     1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,     1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,     1,    -1,     3,    -1,    -1,     6,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    16,    17,
       1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    16,    17,     1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,     1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,    16,
      17,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    17,     1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    16,    17,     1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      16,    17,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    16,    17,     1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    17,     1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    16,    17,     1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    16,    17,
       1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    16,    17,     1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,
      14,    15,    16,    17,     1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,    16,
      17,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    17,     1,    -1,
      -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,     1,    -1,    -1,    -1,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,     1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,     1,
      -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,     1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,     1,    -1,    -1,    -1,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
       1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,     1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,
      14,    15,    16,    17,     1,    -1,    -1,    -1,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,     1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,     1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,     1,    -1,    -1,    -1,    -1,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,     1,
      -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,     1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,     1,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
       1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,     1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,     1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,    16,
      17,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    17,     1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    16,    17,     1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      16,    17,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    16,    17,     1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    19,    41,    42,     1,    39,    43,     1,    39,
       0,    43,     1,    19,    44,     8,    44,     8,     1,     8,
      39,     1,    39,    21,    21,    21,     1,    21,     8,    20,
       8,    20,     1,     8,    20,    22,    22,    22,    22,     1,
      22,     1,    45,    39,    45,    39,    39,    45,     1,    45,
       1,    39,    23,    23,    23,    23,    23,     1,    23,     1,
      25,    27,    28,    39,    46,    51,     1,    46,    47,     8,
      47,     8,     8,    47,    47,     1,    47,     8,     1,     8,
      24,    24,    24,    24,    24,    24,     1,    24,     6,    39,
       1,     6,     1,    39,     1,    21,    48,     9,    48,    45,
       9,    45,    45,     9,     9,     9,     9,    45,    45,     1,
      45,     4,     4,     4,     4,     4,     4,     4,     1,     4,
       7,    10,     7,     7,    10,    10,     1,    51,     1,    51,
      47,    47,    47,    47,    47,    47,     1,    47,    25,    25,
      25,    25,    25,    25,    25,    25,     1,    25,    39,    39,
       1,    39,     9,     9,     9,     9,     9,     9,     9,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     1,
       6,     4,     4,     4,     1,     4,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     1,     7,     1,    49,
      50,    51,    49,    49,    49,     1,    49,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,     1,    39,
      39,     5,     1,    39,     5,     5,     5,     5,     1,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     1,     5,    11,     8,    11,     1,    11,     8,
       8,     8,     8,     8,     1,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     1,
       8,    50,    45,    50,    50,    50,    45,    45,    45,    45,
      45,    45,     1,    45,     1,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,     1,
      52,     1,    52,    52,    52,    52,    52,    52,    52,    52,
       1,    52,     1,     8,    29,    31,    32,    39,    53,     9,
      53,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     1,     9,    39,    26,    26,
      26,    26,    26,    26,    26,    26,    26,     1,    26,     3,
       4,     6,    53,     1,    53,     1,     4,     1,     4,     1,
       4,     1,     3,     6,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     1,     4,    18,    34,    35,    36,    37,    38,    39,
      54,    54,    54,    54,    54,    54,    54,    54,    54,     1,
       4,    39,    54,     1,    54,    54,    54,    54,     9,     9,
       9,    54,     1,    54,    54,     1,    54,    54,     1,    54,
      54,     1,    54,     1,    54,     6,    12,    13,    14,    15,
      16,    17,    28,    39,    54,    57,     1,    54,    54,     1,
      28,    39,     1,     6,    10,    17,    57,    10,    10,    10,
      10,    10,    10,    10,    10,     6,    39,    54,    10,    10,
       1,    10,    10,     5,     7,     5,     5,     1,     5,     5,
       5,     1,     5,     5,     5,     1,     5,     7,    10,    10,
      10,     7,     1,     7,    54,    33,    39,     6,     4,     5,
      54,     5,     5,     4,     6,     1,     6,     1,     4,    33,
      39,    54,     1,    54,     9,     1,    33,    39,    54,     9,
       9,     9,     9,     9,     9,     9,     9,    54,     5,     9,
       9,     9,     9,    10,    53,     3,    53,    53,    39,    53,
       1,    53,    53,    53,    53,    53,    10,    10,    10,    10,
       3,     3,     3,     1,     3,     7,     4,    54,     5,     5,
      54,    54,     1,    54,     5,     5,     4,     7,     7,     7,
       4,     1,     4,     7,    30,    54,    30,    30,    30,    30,
       1,    30,    54,    54,    54,    54,     1,    54,     1,    54,
      55,    56,     7,     7,     7,     7,     7,    55,    55,    55,
       1,    55,    53,    10,    53,    53,    53,    53,    53,    53,
      10,    10,    10,    10,    10,    10,    11,     1,    11,     5,
       5,     5,     5,     5,     5,    56,    54,    56,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    43,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    45,    45,
      45,    46,    46,    46,    47,    47,    47,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    50,    50,    50,    50,    50,    50,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    56,    56,
      56,    57,    57,    57,    57,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,     0,     2,     2,     6,     8,     6,     6,     6,     6,
       6,     8,     8,     8,     8,     8,     8,     8,     0,     2,
       2,     3,     3,     3,     0,     2,     2,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
       1,     0,     2,     4,     2,     4,     4,     4,     3,     1,
       1,     1,     1,     3,     3,     0,     2,     2,     3,     7,
       5,     5,     4,     7,     0,     3,     3,     7,     7,     7,
       7,     7,     7,     5,     5,     5,     5,     5,     5,     5,
       5,     4,     4,     4,     7,     7,     7,     7,     7,     7,
       3,     4,     3,     6,     1,     1,     1,     1,     1,     5,
       4,     2,     3,     3,     3,     4,     4,     4,     3,     3,
       6,     6,     6,     6,     6,     5,     5,     5,     5,     4,
       4,     4,     2,     3,     3,     1,     0,     1,     3,     3,
       3,     1,     1,     1,     1,     1
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
        YY_LAC_DISCARD ("YYBACKUP");                              \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


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
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
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
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {

#line 2404 "parser.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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


#if 1
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 256 "parser.y"
 

extern FILE *yyin;

void yyerror (char const *s)
{
  fprintf (stderr, "%s near line %d\n", s, yylineno);
}


int main()
{
 yyparse(); 
}
