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
#line 1 "grammar" /* yacc.c:339  */

    #include "../global.h"
    #define YYSTYPE SemVal
    #include "parser.ih"

#line 72 "parser.c" /* yacc.c:339  */

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
   by #include "tokens.h".  */
#ifndef YY_YY_TOKENS_H_INCLUDED
# define YY_YY_TOKENS_H_INCLUDED
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
    ARG_HEAD = 258,
    ARG_TAIL = 259,
    ASCII = 260,
    BREAK = 261,
    CHDIR = 262,
    CMD_HEAD = 263,
    CMD_TAIL = 264,
    CONTINUE = 265,
    C_BASE = 266,
    C_EXT = 267,
    C_PATH = 268,
    G_BASE = 269,
    G_EXT = 270,
    G_DEXT = 271,
    G_PATH = 272,
    ELEMENT = 273,
    ELSE = 274,
    EXEC = 275,
    EXECUTE = 276,
    EXISTS = 277,
    EXIT = 278,
    FGETS = 279,
    FIELDS = 280,
    FOR = 281,
    FPRINTF = 282,
    GETENV = 283,
    GETCH = 284,
    GETPID = 285,
    GETS = 286,
    IDENTIFIER = 287,
    IF = 288,
    INT = 289,
    LIST = 290,
    MAKELIST = 291,
    M_ECHO = 292,
    NUMBER = 293,
    PRINTF = 294,
    PUTENV = 295,
    RETURN = 296,
    SIZEOFLIST = 297,
    STAT = 298,
    STRING = 299,
    STRINGTYPE = 300,
    STRLEN = 301,
    STRLWR = 302,
    STRUPR = 303,
    STRFIND = 304,
    STRFORMAT = 305,
    SUBSTR = 306,
    SYSTEM = 307,
    TRIM = 308,
    TRIMLEFT = 309,
    TRIMRIGHT = 310,
    VOID = 311,
    WHILE = 312,
    AND_IS = 313,
    OR_IS = 314,
    XOR_IS = 315,
    SHL_IS = 316,
    SHR_IS = 317,
    DIV_IS = 318,
    MINUS_IS = 319,
    MUL_IS = 320,
    MOD_IS = 321,
    PLUS_IS = 322,
    OR = 323,
    AND = 324,
    EQUAL = 325,
    NOT_EQUAL = 326,
    SMALLER_EQUAL = 327,
    GREATER_EQUAL = 328,
    OLDER = 329,
    YOUNGER = 330,
    SHL = 331,
    SHR = 332,
    INC = 333,
    DEC = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOKENS_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "parser.c" /* yacc.c:358  */

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
# ifdef __SIZExprType_
#  define YYSIZE_T __SIZExprType_
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   884

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    90,    75,     2,
     102,    97,    88,    86,    98,    87,     2,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,   103,
      78,    58,    79,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,     2,   101,    74,     2,   100,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,    73,    96,    94,     2,     2,     2,
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
      55,    56,    57,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    71,    72,    76,    77,    80,    81,    82,
      83,    84,    85,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   114,   118,   125,   131,   136,   142,   142,
     148,   148,   154,   154,   160,   168,   174,   181,   184,   189,
     195,   195,   204,   210,   212,   214,   218,   224,   232,   235,
     242,   242,   249,   256,   264,   271,   278,   285,   292,   299,
     306,   313,   320,   327,   334,   341,   348,   355,   362,   371,
     378,   385,   392,   399,   406,   413,   420,   427,   434,   441,
     448,   455,   462,   469,   476,   483,   489,   495,   501,   507,
     513,   519,   525,   531,   539,   544,   549,   556,   558,   566,
     571,   578,   582,   584,   588,   590,   597,   613,   621,   625,
     629,   630,   635,   643,   649,   654,   656,   660,   672,   680,
     689,   691,   693,   697,   699,   701,   703,   705,   707,   709,
     711,   713,   715,   717,   719,   721,   723,   725,   727,   729,
     731,   733,   735,   739,   741,   743,   745,   747,   749,   751,
     755,   757,   759,   763,   769,   773,   775,   779,   785,   789,
     791,   795,   802,   808,   815,   824,   835,   843,   851,   858,
     865,   872,   879,   882,   887,   893,   897,   912,   921,   928,
     930,   934,   934,   944,   959,   974,   996,  1020,  1026,  1032,
    1032,  1039,  1039,  1045,  1050,  1055,  1057,  1061,  1063,  1067,
    1076,  1076,  1082,  1084,  1090,  1093,  1095,  1097,  1099,  1102,
    1105,  1108,  1113,  1119,  1125,  1128,  1130,  1132,  1136,  1143,
    1150,  1153,  1162,  1170,  1172,  1181,  1189,  1194,  1197,  1202,
    1214
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARG_HEAD", "ARG_TAIL", "ASCII", "BREAK",
  "CHDIR", "CMD_HEAD", "CMD_TAIL", "CONTINUE", "C_BASE", "C_EXT", "C_PATH",
  "G_BASE", "G_EXT", "G_DEXT", "G_PATH", "ELEMENT", "ELSE", "EXEC",
  "EXECUTE", "EXISTS", "EXIT", "FGETS", "FIELDS", "FOR", "FPRINTF",
  "GETENV", "GETCH", "GETPID", "GETS", "IDENTIFIER", "IF", "INT", "LIST",
  "MAKELIST", "M_ECHO", "NUMBER", "PRINTF", "PUTENV", "RETURN",
  "SIZEOFLIST", "STAT", "STRING", "STRINGTYPE", "STRLEN", "STRLWR",
  "STRUPR", "STRFIND", "STRFORMAT", "SUBSTR", "SYSTEM", "TRIM", "TRIMLEFT",
  "TRIMRIGHT", "VOID", "WHILE", "'='", "AND_IS", "OR_IS", "XOR_IS",
  "SHL_IS", "SHR_IS", "DIV_IS", "MINUS_IS", "MUL_IS", "MOD_IS", "PLUS_IS",
  "'?'", "':'", "OR", "AND", "'|'", "'^'", "'&'", "EQUAL", "NOT_EQUAL",
  "'<'", "'>'", "SMALLER_EQUAL", "GREATER_EQUAL", "OLDER", "YOUNGER",
  "SHL", "SHR", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "INC", "DEC",
  "'~'", "'['", "'}'", "')'", "','", "'{'", "'`'", "']'", "'('", "';'",
  "$accept", "input", "args", "break_ok", "break_stat", "closebrace",
  "$@1", "closepar", "$@2", "comma", "$@3", "compound", "continue_stat",
  "_voidtype", "def_var_or_fun", "enterid", "err_expression", "$@4",
  "expr_code", "_casttype", "_string", "_func_or_var", "_backtick", "$@5",
  "expression", "_for", "_expr_list", "_opt_expr_list", "_opt_expression",
  "for_stat", "_partype", "_pars", "_opt_parlist", "_local_list",
  "_locals", "_opt_locals", "_funvars", "_funid", "funcdef",
  "_zero_arg_funs", "_one_arg_funs", "_two_arg_funs", "_optint_string",
  "_comma_expr", "_optint_special", "_comma_arglist", "_opt_arglist",
  "_funname", "function", "_if", "_else", "if_stat", "_makelist_expr",
  "_makelist_normal", "_old_young", "_older_younger", "$@6", "makelist",
  "nesting", "ok", "openbrace", "$@7", "openpar", "$@8", "popdead",
  "pushdead", "_return_tail", "_leave", "return_stat", "semicol", "$@9",
  "_stm", "statement", "statements", "_varType", "type_of_var",
  "_entervarid", "_idexpr", "_varnames", "vardefs", "var_or_fun", "_while",
  "while_stat", "zeroframe", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,    61,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    63,
      58,   323,   324,   124,    94,    38,   325,   326,    60,    62,
     327,   328,   329,   330,   331,   332,    43,    45,    42,    47,
      37,    33,   333,   334,   126,    91,   125,    41,    44,   123,
      96,    93,    40,    59
};
# endif

#define YYPACT_NINF -312

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-312)))

#define YYTABLE_NINF -211

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,  -312,  -312,  -312,  -312,     8,   -11,  -312,  -312,     9,
    -312,  -312,  -312,  -312,  -312,   -86,   -71,   -23,  -312,     5,
    -312,   -65,  -312,  -312,  -312,   -15,   -62,  -312,  -312,  -312,
     624,    41,    -6,  -312,   -25,   320,  -312,  -312,    -2,     0,
      41,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,    -4,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,   624,   624,   624,   624,
     624,   624,   624,   524,    55,  -312,   751,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,     3,  -312,  -312,  -312,  -312,  -312,
     -86,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,    13,  -312,  -312,  -312,   624,  -312,  -312,  -312,
    -312,  -312,    10,  -312,  -312,  -312,  -312,  -312,   -15,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,   -36,   -36,   -36,   -36,
     -36,   -36,   751,  -312,  -312,  -312,    14,   751,  -312,   624,
     624,   624,   624,   624,   624,   624,   624,   624,   624,   624,
     624,   624,   624,   624,   624,   624,   624,   624,   624,   624,
     624,   624,   624,   624,   624,   624,   624,   624,   624,   624,
     624,  -312,  -312,   624,  -312,  -312,  -312,  -312,  -312,    17,
    -312,    57,   -49,  -312,  -312,  -312,  -312,  -312,  -312,   320,
    -312,  -312,  -312,  -312,   751,  -312,    10,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,   -15,    18,    58,  -312,  -312,    59,
      60,  -312,  -312,    61,   624,  -312,   751,   751,   751,   751,
     751,   751,   751,   751,   751,   751,   751,   713,   207,   408,
     506,   605,   771,   789,   789,   -18,   -18,   -18,   -18,   -18,
     -18,     1,     1,    15,    15,   -36,   -36,   -36,   669,  -312,
    -312,    62,    64,    66,  -312,  -312,  -312,    69,  -312,   -21,
    -312,  -312,    70,  -312,  -312,  -312,  -312,  -312,   -15,  -312,
      12,  -312,  -312,  -312,  -312,  -312,   -36,   624,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,    56,   423,  -312,  -312,  -312,  -312,  -312,   307,
    -312,  -312,    72,  -312,  -312,  -312,  -312,  -312,  -312,   423,
    -312,  -312,  -312,    17,  -312,  -312,  -312,  -312,  -312,    93,
    -312,  -312,   423,  -312,  -312,   423,  -312,  -312,  -312,  -312
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   195,   197,   196,    16,     0,     0,     3,   198,     0,
       1,     2,    98,   171,    18,     0,    19,   210,   207,     0,
     203,    12,   206,    17,   210,    91,     0,   168,   210,   200,
       0,     0,     0,   205,     0,     0,   194,    89,    12,     0,
       0,   172,   204,   109,   110,   103,   131,   108,   107,   124,
     123,   125,   111,   113,   114,   112,   126,   135,   136,   105,
     127,   128,   171,   116,   100,   101,   102,    29,   171,   106,
      75,   171,   115,   104,   130,    27,   117,   119,   118,   129,
     171,   171,   132,   120,   121,   122,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    77,   201,   171,   171,   171,
     171,   171,   171,    10,    12,   152,    19,   202,    13,   181,
       0,     7,    15,   178,   174,   174,   177,   174,   210,   210,
     180,    99,     0,   182,   180,    22,     0,   180,   171,   187,
     171,   186,    20,   180,   192,   193,   171,   185,     0,   169,
      87,    20,    20,    20,    20,    20,    70,    65,    72,    66,
      68,    71,    30,    23,    24,    25,     0,    10,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    69,     0,   142,    20,    20,    20,    20,    20,
      28,     0,    20,   163,   191,    79,   167,   153,   208,     0,
     183,   189,     9,   190,    21,   184,    20,    20,   175,   179,
     176,   188,    20,    88,   210,     0,    12,     5,   157,    12,
      12,    12,    78,     0,     0,    76,    32,    39,    40,    41,
      42,    43,    35,    38,    34,    36,    37,     0,    44,    45,
      55,    56,    54,    46,    47,    49,    50,    51,    52,    62,
      61,    57,    58,    53,    59,    60,    63,    64,     0,   143,
      12,   210,   210,    12,   151,   140,    11,    12,    12,     0,
      14,    81,    82,   180,    83,    10,    10,    94,    95,    97,
       0,    96,   170,    20,    20,    31,    73,     0,    33,    20,
      20,   146,   134,    20,   147,   138,   161,    20,   159,   160,
     162,    20,    20,     0,     6,    93,    92,     4,    12,    48,
     144,   133,    12,    12,   158,    80,    84,   180,   173,     0,
      20,    20,   165,    20,   174,   173,   145,   166,    10,   210,
     209,     6,     0,   173,   155,     0,   154,   156,   173,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,  -139,  -183,  -312,   -42,  -312,  -135,  -312,   -20,
    -312,  -312,  -312,  -312,   165,   131,  -116,  -312,  -158,  -312,
    -312,  -312,  -312,  -312,   -41,  -312,  -312,  -161,  -312,  -312,
      35,  -312,  -312,  -114,  -312,  -312,  -312,  -312,   167,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -145,  -312,  -126,  -312,  -312,  -103,    71,
    -312,  -312,   142,  -312,  -311,  -149,  -312,  -312,  -312,  -118,
    -312,  -312,  -306,    68,  -312,   -22,  -312,   157,  -312,  -101,
    -312,  -312,  -312,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   226,   329,   120,   121,   122,   200,   201,   293,
      32,   123,   124,     6,     7,    17,   125,   126,   127,   156,
      94,    95,   232,   233,    96,   128,   282,   283,   327,   129,
      37,    38,    39,   287,   288,   289,    24,    13,    14,    97,
      98,    99,   100,   301,   101,   304,   274,   102,   103,   130,
     343,   131,   104,   203,   310,   278,   279,   105,   205,    28,
     224,   225,    25,    26,   334,   206,   219,   132,   133,    33,
      34,   134,   135,    35,     8,     9,    19,    20,    21,    22,
      23,   136,   137,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    31,   211,    40,   229,   230,   213,   328,    10,   215,
      15,    42,   207,    15,   208,   221,   218,    27,   138,     1,
       2,    12,   235,   335,   340,   227,   228,   227,   227,   231,
       3,   -98,   347,  -161,  -161,  -199,   346,   349,  -180,   348,
      41,    16,     1,     2,   106,   146,   147,   148,   149,   150,
     151,   152,   157,     3,     1,     2,   191,   192,   281,   193,
     273,   308,   309,    30,     4,     3,   184,   185,   186,   187,
     188,   189,   190,   106,   191,   192,     4,   193,   109,   269,
     270,   271,   272,   227,   202,   214,   277,   186,   187,   188,
     189,   190,   108,   191,   192,   -90,   193,   139,  -141,   158,
    -158,   285,   210,   188,   189,   190,   286,   191,   192,   212,
     193,   234,   342,  -210,  -210,   220,    40,   292,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     313,   314,   268,   325,   276,  -149,  -148,  -150,   345,   -85,
     300,   295,   303,  -139,   322,   312,  -164,   280,   311,  -137,
      11,   140,   338,   223,   315,   281,    18,   317,   318,   332,
     323,   204,   275,   320,   321,   339,   209,   227,   107,   316,
       0,   324,     0,   296,     0,     0,   326,     0,     0,   284,
       0,     0,   290,   341,   141,     0,     0,   291,     0,   333,
     142,   294,     0,   143,   336,   337,     0,     0,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   194,
     195,   196,   197,   198,   199,     0,     0,     0,     0,     0,
     299,     0,     0,     0,   302,   305,   319,   306,   307,     0,
       0,     0,     0,     0,     0,     0,   290,     0,     0,     0,
     216,     0,   217,     0,     0,     0,     0,     0,   222,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   330,   191,
     192,     0,   193,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,     0,     0,     0,
       0,   110,   344,   -20,   -20,   -20,   111,   -20,   -20,   -20,
     112,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   113,   -20,   -20,   114,   -20,   -20,   -20,
     -20,   -20,   -20,   115,     0,     0,   -20,   -20,   -20,   -20,
     -20,   116,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   170,   117,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,     0,   191,
     192,     0,   193,     0,     0,     0,   -20,   -20,     0,     0,
       0,   -20,   -20,   -20,   -20,     0,    -8,     0,     0,   118,
     -20,     0,   -20,   119,   110,     0,   -20,   -20,   -20,   111,
     -20,   -20,   -20,   112,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   113,   -20,   -20,   114,
     -20,   -20,   -20,   -20,   -20,   -20,   115,     0,     0,   -20,
     -20,   -20,   -20,   -20,   116,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     117,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     0,
     191,   192,     0,   193,     0,     0,     0,     0,     0,   -20,
     -20,     0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,
       0,     0,   118,   -20,     0,   -20,   119,    43,    44,    45,
       0,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,     0,    60,    61,
       0,    62,    63,    64,    65,    66,    67,     0,   153,   154,
      68,    69,    70,    71,    72,     0,    73,    74,    75,   155,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,     0,   191,   192,
       0,   193,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,    88,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,    93,    43,    44,    45,
       0,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,     0,    60,    61,
       0,    62,    63,    64,    65,    66,    67,     0,     0,     0,
      68,    69,    70,    71,    72,     0,    73,    74,    75,     0,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,     0,   191,   192,     0,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,    88,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,    93,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,     0,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
       0,   191,   192,     0,   193,     0,     0,     0,     0,     0,
     298,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   297,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     0,   191,   192,     0,   193,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,     0,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,     0,   191,   192,     0,   193,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,     0,   191,   192,     0,   193,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
       0,   191,   192,     0,   193
};

static const yytype_int16 yycheck[] =
{
      17,    21,   120,    25,   143,   144,   124,   313,     0,   127,
       1,    28,   115,     1,   117,   133,   132,   103,    38,    34,
      35,    32,   157,   329,   335,   141,   142,   143,   144,   145,
      45,   102,   343,    82,    83,    58,   342,   348,   103,   345,
     102,    32,    34,    35,    32,    86,    87,    88,    89,    90,
      91,    92,    93,    45,    34,    35,    92,    93,   216,    95,
     199,    82,    83,    58,    56,    45,    84,    85,    86,    87,
      88,    89,    90,    32,    92,    93,    56,    95,   103,   195,
     196,   197,   198,   199,   104,   126,   202,    86,    87,    88,
      89,    90,    98,    92,    93,    97,    95,    97,   102,    44,
      97,   217,   119,    88,    89,    90,   222,    92,    93,    96,
      95,    97,    19,   103,    97,   132,   138,    99,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     285,   286,   193,   311,    97,    97,    97,    97,   341,   103,
      98,   100,    98,    97,   303,   283,    97,   209,    98,    97,
       5,    40,   333,   138,   288,   333,     9,   293,   294,   324,
     306,   110,   199,   299,   300,   334,   118,   303,    31,   290,
      -1,   307,    -1,   234,    -1,    -1,   312,    -1,    -1,   216,
      -1,    -1,   224,   338,    62,    -1,    -1,   224,    -1,   327,
      68,   231,    -1,    71,   330,   331,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
     270,    -1,    -1,    -1,   271,   272,   297,   277,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,
     128,    -1,   130,    -1,    -1,    -1,    -1,    -1,   136,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   318,    92,
      93,    -1,    95,   323,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,
      -1,     1,   339,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    57,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    -1,    -1,    99,
     100,    -1,   102,   103,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,   100,    -1,   102,   103,     3,     4,     5,
      -1,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,     3,     4,     5,
      -1,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,
     101,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    -1,    95,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    -1,    95,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    45,    56,   105,   117,   118,   178,   179,
       0,   118,    32,   141,   142,     1,    32,   119,   142,   180,
     181,   182,   183,   184,   140,   166,   167,   103,   163,   187,
      58,   113,   114,   173,   174,   177,   187,   134,   135,   136,
     179,   102,   187,     3,     4,     5,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    20,    21,    22,
      24,    25,    27,    28,    29,    30,    31,    32,    36,    37,
      38,    39,    40,    42,    43,    44,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    86,    87,    91,    92,
      93,    94,   100,   102,   124,   125,   128,   143,   144,   145,
     146,   148,   151,   152,   156,   161,    32,   181,    98,   103,
       1,     6,    10,    23,    26,    33,    41,    57,    99,   103,
     108,   109,   110,   115,   116,   120,   121,   122,   129,   133,
     153,   155,   171,   172,   175,   176,   185,   186,   113,    97,
     119,   166,   166,   166,   166,   166,   128,   128,   128,   128,
     128,   128,   128,    34,    35,    45,   123,   128,    44,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    92,    93,    95,   166,   166,   166,   166,   166,   166,
     111,   112,   113,   157,   163,   162,   169,   162,   162,   177,
     187,   173,    96,   173,   128,   173,   166,   166,   120,   170,
     187,   173,   166,   134,   164,   165,   106,   120,   120,   106,
     106,   120,   126,   127,    97,   111,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   120,
     120,   120,   120,   106,   150,   187,    97,   120,   159,   160,
     109,   122,   130,   131,   187,   120,   120,   137,   138,   139,
     179,   187,    99,   113,   113,   100,   128,    70,   101,   113,
      98,   147,   187,    98,   149,   187,   113,   113,    82,    83,
     158,    98,   173,   111,   111,   137,   183,   120,   120,   128,
     120,   120,   106,   159,   120,   122,   120,   132,   176,   107,
     113,   113,   157,   173,   168,   176,   120,   120,   131,   169,
     168,   111,    19,   154,   187,   107,   176,   168,   176,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   107,   108,   110,   109,
     112,   111,   114,   113,   115,   116,   117,   118,   118,   119,
     121,   120,   122,   123,   123,   123,   124,   124,   125,   125,
     127,   126,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   129,
     130,   130,   131,   131,   132,   132,   133,   134,   135,   135,
     136,   136,   137,   138,   138,   139,   139,   140,   141,   142,
     143,   143,   143,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   145,   145,   145,   145,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   154,   154,   155,   156,   157,   158,
     158,   160,   159,   161,   161,   161,   161,   162,   163,   165,
     164,   167,   166,   168,   169,   170,   170,   171,   171,   172,
     174,   173,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   176,   177,   177,   178,   178,   178,   179,   180,
     181,   181,   182,   182,   182,   183,   184,   184,   185,   186,
     187
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     0,     2,
       0,     2,     0,     2,     3,     1,     1,     2,     2,     1,
       0,     2,     1,     1,     1,     1,     2,     1,     2,     1,
       0,     2,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     1,     3,     1,     3,     2,
       3,     1,     1,     1,     1,     0,    11,     2,     3,     1,
       1,     0,     2,     2,     1,     1,     1,     5,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     2,     3,     5,     7,     4,     4,     3,     3,
       3,     3,     1,     2,     2,     1,     9,     3,     0,     1,
       1,     0,     2,     2,     3,     6,     7,     1,     1,     0,
       2,     0,     2,     0,     0,     1,     1,     1,     1,     2,
       0,     2,     1,     2,     2,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     1,     3,     2,     1,     1,     2,     7,
       0
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 121 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *multargs(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 1673 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 126 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *firstarg(&(yyvsp[0]));
    }
#line 1681 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 131 "grammar" /* yacc.c:1646  */
    {
        gp_breakOK++;
    }
#line 1689 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 137 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *break_stmnt();
    }
#line 1697 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 142 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closebrace_expected;
    }
#line 1705 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closepar_expected; 
    }
#line 1713 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 154 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_comma_expected; 
    }
#line 1721 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 163 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 1729 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 169 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *continue_stmnt();
    }
#line 1737 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 175 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1745 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 190 "grammar" /* yacc.c:1646  */
    {
        entervar();
    }
#line 1753 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 195 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1761 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 199 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1769 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 205 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(&(yyvsp[0]));
    }
#line 1777 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 220 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        g_stringbuf = xstrcat(g_stringbuf, g_lexstring);
    }
#line 1785 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 225 "grammar" /* yacc.c:1646  */
    {
        free(g_stringbuf);                  /* free former string */
        g_stringbuf = xstrdup(g_lexstring); /* duplicate initial string */
    }
#line 1794 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 236 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1802 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 242 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1810 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 252 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1818 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 260 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1826 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 267 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), multiply, "*=");
        }
#line 1834 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 274 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), divide, "/=");
        }
#line 1842 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 281 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), modulo, "%=");
        }
#line 1850 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 288 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), addition, "+=");
        }
#line 1858 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 295 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), subtract, "-=");
        }
#line 1866 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 302 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), band, "&=");
        }
#line 1874 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 309 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), bor, "|=");
        }
#line 1882 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 316 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), xor, "^=");
        }
#line 1890 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 323 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shl, "<<=");
        }
#line 1898 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 330 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shr, ">>=");
        }
#line 1906 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 337 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *or_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1914 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 344 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *and_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1922 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 351 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1930 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 358 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1938 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 367 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1946 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 374 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1954 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 381 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1962 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 388 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *sm_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1970 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 395 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *gr_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1978 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 402 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1986 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 409 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *band(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1994 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 416 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2002 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 423 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2010 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 430 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2018 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 437 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2026 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 444 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2034 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 451 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2042 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 458 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2050 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 465 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2058 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 472 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2066 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 479 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2074 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 485 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *negate(&(yyvsp[0]));
        }
#line 2082 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 491 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2090 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 497 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2098 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 503 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2106 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 509 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2114 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 515 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2122 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 521 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bnot(&(yyvsp[0]));
        }
#line 2130 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 527 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *not_boolean(&(yyvsp[0]));
        }
#line 2138 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 535 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2146 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 540 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_str | e_const);
        }
#line 2154 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 545 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
        }
#line 2162 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 552 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2170 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 561 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[-1]));
        }
#line 2178 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 574 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2186 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 590 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2195 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 608 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *for_stmnt(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2203 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 615 "grammar" /* yacc.c:1646  */
    {
        ++gp_nParams;
    }
#line 2211 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 637 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2219 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 645 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-1]), &(yyvsp[0]));        /* cat initialization code */
    }
#line 2227 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 665 "grammar" /* yacc.c:1646  */
    {
        make_frame();
        outbin((yyvsp[0]).code, (yyvsp[0]).codelen);
    }
#line 2236 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 673 "grammar" /* yacc.c:1646  */
    {
        open_fun();
    }
#line 2244 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 684 "grammar" /* yacc.c:1646  */
    {
        close_fun(&(yyvsp[-1]));
    }
#line 2252 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 765 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2260 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 781 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2268 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 796 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = symtabFunIdx();
    }
#line 2276 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 804 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *zeroargs((yyvsp[-1]).type);
    }
#line 2284 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 811 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *onearg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2292 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 820 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *twoargs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2300 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 831 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *threeargs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2308 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 839 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_string((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2316 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 847 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_special((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2324 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 854 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_printf, &(yyvsp[0]));
    }
#line 2332 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 861 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *exec_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2340 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 868 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_strformat, &(yyvsp[0]));
    }
#line 2348 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 875 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *callfun((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2356 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 889 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2364 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 906 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *if_stmnt(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2372 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 915 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2380 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 921 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = O_FILE;
    }
#line 2389 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 934 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2397 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 938 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2405 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 946 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *makelist
             (
                 multargs
                 (
                     firstarg(&(yyvsp[0])),     /* O_FILE is passed */
                     &(yyvsp[-1])                /* expression is passed */
                 ),
                 op_hlt                 /* not op_younger or op_older */
             );
    }
#line 2421 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 962 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *makelist
             (
                 multargs
                 (
                     firstarg(&(yyvsp[-2])),     /* fileattribute is passed */
                     &(yyvsp[0])                /* expression is passed */
                 ),
                 op_hlt                 /* not op_younger or op_older */
             );
    }
#line 2437 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 980 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *makelist
             (
                multargs
                (
                    multargs
                    (
                        firstarg(&(yyvsp[0])),  /* O_FILE   is passed */
                        &(yyvsp[-5])             /* 1st expression is passed */
                    ),
                    &(yyvsp[-1])                 /* 2nd expression is passed */
                 ),
                 (yyvsp[-3]).type                /* older/younger */
             );
    }
#line 2457 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1003 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *makelist
             (
                multargs
                (
                    multargs
                    (
                        firstarg(&(yyvsp[-6])),  /* attribute is passed */
                        &(yyvsp[-4])             /* 2nd expression is passed */
                    ),
                    &(yyvsp[0])                 /* 3rd expression is passed */
                 ),
                 (yyvsp[-2]).type                /* older/younger */
             );
    }
#line 2477 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1021 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2485 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1027 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2493 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1032 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2501 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1039 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2509 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1045 "grammar" /* yacc.c:1646  */
    {
        pop_dead();
    }
#line 2517 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1050 "grammar" /* yacc.c:1646  */
    {
        push_dead();                    /* set new dead-level */
    }
#line 2525 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1069 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *return_stmnt((yyvsp[-1]).type, &(yyvsp[0]));
    }
#line 2533 "parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1076 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2541 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1086 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2549 "parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1114 "grammar" /* yacc.c:1646  */
    {
        g_sem_err = 0;
    }
#line 2557 "parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1121 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *cat_stmnt(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2565 "parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1137 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2574 "parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1144 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 2582 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1156 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2590 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1165 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2599 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1175 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2607 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1183 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);                    /* initialization code */
    }
#line 2615 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1190 "grammar" /* yacc.c:1646  */
    {
            g_init = *catcode(&g_init, &(yyvsp[0]));
        }
#line 2623 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1209 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *while_stmnt(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2631 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1214 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(0);
    }
#line 2639 "parser.c" /* yacc.c:1646  */
    break;


#line 2643 "parser.c" /* yacc.c:1646  */
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 1219 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
