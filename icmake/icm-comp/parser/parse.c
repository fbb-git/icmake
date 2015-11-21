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

    /* #define msg
    */
    #include "parser.ih"

#line 72 "parse.c" /* yacc.c:339  */

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
    EVAL = 275,
    EXEC = 276,
    EXECUTE = 277,
    EXISTS = 278,
    EXIT = 279,
    FGETS = 280,
    FIELDS = 281,
    FOR = 282,
    FPRINTF = 283,
    GETENV = 284,
    GETCH = 285,
    GETPID = 286,
    GETS = 287,
    IDENTIFIER = 288,
    IF = 289,
    INT = 290,
    LIST = 291,
    LISTLEN = 292,
    MAKELIST = 293,
    ECHO_TOKEN = 294,
    NUMBER = 295,
    PRINTF = 296,
    PUTENV = 297,
    RETURN = 298,
    STAT = 299,
    STRING = 300,
    STRINGTYPE = 301,
    STRLEN = 302,
    STRLWR = 303,
    STRUPR = 304,
    STRFIND = 305,
    STRFORMAT = 306,
    SUBSTR = 307,
    SYSTEM = 308,
    TRIM = 309,
    TRIMLEFT = 310,
    TRIMRIGHT = 311,
    VOID = 312,
    WHILE = 313,
    AND_IS = 314,
    OR_IS = 315,
    XOR_IS = 316,
    SHL_IS = 317,
    SHR_IS = 318,
    DIV_IS = 319,
    MINUS_IS = 320,
    MUL_IS = 321,
    MOD_IS = 322,
    PLUS_IS = 323,
    OR = 324,
    AND = 325,
    EQUAL = 326,
    NOT_EQUAL = 327,
    SMALLER_EQUAL = 328,
    GREATER_EQUAL = 329,
    OLDER = 330,
    YOUNGER = 331,
    SHL = 332,
    SHR = 333,
    INC = 334,
    DEC = 335
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

#line 204 "parse.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   924

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,     2,     2,     2,    91,    76,     2,
     102,    98,    89,    87,    99,    88,     2,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,   103,
      79,    59,    80,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,   101,    75,     2,   100,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   104,    74,    97,    95,     2,     2,     2,
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
      55,    56,    57,    58,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    72,    73,    77,    78,    81,    82,
      83,    84,    85,    86,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   116,   120,   127,   133,   138,   144,   144,
     151,   151,   157,   157,   163,   171,   173,   176,   182,   189,
     195,   198,   203,   210,   217,   217,   226,   232,   234,   236,
     240,   246,   254,   257,   264,   264,   271,   278,   286,   293,
     300,   307,   314,   321,   328,   335,   342,   349,   356,   363,
     370,   377,   384,   393,   400,   407,   414,   421,   428,   435,
     442,   449,   456,   463,   470,   477,   484,   491,   498,   505,
     511,   517,   523,   529,   535,   541,   547,   553,   561,   566,
     571,   578,   580,   588,   596,   603,   607,   609,   611,   616,
     618,   625,   627,   631,   663,   668,   672,   676,   677,   682,
     692,   700,   709,   711,   713,   717,   719,   721,   723,   725,
     727,   729,   731,   733,   735,   737,   739,   741,   743,   745,
     747,   749,   751,   753,   755,   757,   761,   763,   765,   767,
     769,   771,   773,   777,   779,   781,   785,   791,   795,   797,
     801,   807,   811,   813,   817,   824,   830,   837,   846,   857,
     865,   873,   880,   887,   894,   901,   904,   912,   918,   922,
     944,   953,   960,   962,   966,   966,   976,   991,  1006,  1028,
    1052,  1058,  1064,  1064,  1074,  1074,  1080,  1085,  1090,  1092,
    1096,  1101,  1105,  1115,  1115,  1121,  1123,  1129,  1132,  1134,
    1136,  1138,  1141,  1144,  1147,  1152,  1158,  1162,  1168,  1176,
    1183,  1191,  1193,  1195,  1199,  1206,  1212,  1220,  1223,  1232,
    1240,  1242,  1251,  1256,  1268
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARG_HEAD", "ARG_TAIL", "ASCII", "BREAK",
  "CHDIR", "CMD_HEAD", "CMD_TAIL", "CONTINUE", "C_BASE", "C_EXT", "C_PATH",
  "G_BASE", "G_EXT", "G_DEXT", "G_PATH", "ELEMENT", "ELSE", "EVAL", "EXEC",
  "EXECUTE", "EXISTS", "EXIT", "FGETS", "FIELDS", "FOR", "FPRINTF",
  "GETENV", "GETCH", "GETPID", "GETS", "IDENTIFIER", "IF", "INT", "LIST",
  "LISTLEN", "MAKELIST", "ECHO_TOKEN", "NUMBER", "PRINTF", "PUTENV",
  "RETURN", "STAT", "STRING", "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR",
  "STRFIND", "STRFORMAT", "SUBSTR", "SYSTEM", "TRIM", "TRIMLEFT",
  "TRIMRIGHT", "VOID", "WHILE", "'='", "AND_IS", "OR_IS", "XOR_IS",
  "SHL_IS", "SHR_IS", "DIV_IS", "MINUS_IS", "MUL_IS", "MOD_IS", "PLUS_IS",
  "'?'", "':'", "OR", "AND", "'|'", "'^'", "'&'", "EQUAL", "NOT_EQUAL",
  "'<'", "'>'", "SMALLER_EQUAL", "GREATER_EQUAL", "OLDER", "YOUNGER",
  "SHL", "SHR", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "INC", "DEC",
  "'~'", "'['", "'}'", "')'", "','", "'`'", "']'", "'('", "';'", "'{'",
  "$accept", "input", "args", "break_ok", "break_stat", "closebrace",
  "$@1", "closepar", "$@2", "comma", "$@3", "compound", "condition",
  "continue_stat", "_voidtype", "def_var_or_fun", "enterid", "enter_varid",
  "err_expression", "$@4", "expr_code", "_p_casttype", "_string",
  "_func_or_var", "_backtick", "$@5", "expression", "_for", "_expr_list",
  "_opt_init_expression", "_opt_cond_expression", "_opt_inc_expression",
  "for_stat", "_partype", "_pars", "_opt_parlist", "_funvars", "_funid",
  "funcdef", "_zero_arg_funs", "_one_arg_funs", "_two_arg_funs",
  "_optint_string", "_comma_expr", "_optint_special", "_comma_arglist",
  "_opt_arglist", "_funname", "function", "_if", "_else", "if_stat",
  "_p_makeList_expr", "_p_makeList_normal", "_old_young", "_older_younger",
  "$@6", "p_makeList", "nesting", "ok", "openbrace", "$@7", "openpar",
  "$@8", "popdead", "pushdead", "_return_tail", "_leave", "return_stat",
  "semicol", "$@9", "_stm", "statement", "statements", "typed_condition",
  "typed_varlist", "_varType", "type_of_var", "var_condition", "var_expr",
  "var_expr_list", "_while", "while_stat", "zeroframe", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,    61,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
      63,    58,   324,   325,   124,    94,    38,   326,   327,    60,
      62,   328,   329,   330,   331,   332,   333,    43,    45,    42,
      47,    37,    33,   334,   335,   126,    91,   125,    41,    44,
      96,    93,    40,    59,   123
};
# endif

#define YYPACT_NINF -295

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-295)))

#define YYTABLE_NINF -215

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,  -295,  -295,  -295,  -295,    18,   -29,  -295,  -295,  -295,
      26,  -295,  -295,  -295,  -295,  -295,  -295,   -96,   -81,   -73,
     -25,   -21,  -295,  -295,   -53,  -295,   -10,   -41,  -295,  -295,
    -295,  -295,   682,    30,   -34,   376,  -295,  -295,   -28,   -24,
      30,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,   -33,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,   682,   682,   682,
     682,   682,   682,   682,   582,    31,  -295,   807,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,   -19,  -295,  -295,  -295,  -295,
     -81,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,   -17,  -295,  -295,  -295,   682,  -295,  -295,  -295,  -295,
    -295,  -295,   -27,   -13,  -295,  -295,  -295,  -295,    27,  -295,
    -295,   -10,  -295,  -295,  -295,  -295,  -295,  -295,  -295,   -63,
     -63,   -63,   -63,   -63,   -63,   807,  -295,  -295,  -295,    -5,
     807,  -295,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,  -295,  -295,   682,  -295,  -295,  -295,
    -295,  -295,    -3,  -295,    -1,   -35,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,   807,  -295,   -22,   -10,
     376,  -295,  -295,  -295,  -295,  -295,  -295,   -10,  -295,  -295,
       9,  -295,  -295,    11,    13,  -295,  -295,    -4,   682,  -295,
     807,   807,   807,   807,   807,   807,   807,   807,   807,   807,
     807,   769,   466,   565,   664,   828,    77,   277,   277,    -2,
      -2,    -2,    -2,    -2,    -2,    12,    12,   103,   103,   -63,
     -63,   -63,   726,  -295,  -295,     5,    15,    14,  -295,  -295,
    -295,    52,  -295,   -16,  -295,    70,  -295,  -295,  -295,  -295,
    -295,  -295,    30,  -295,  -295,  -295,  -295,  -295,   -63,   682,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,     7,   480,  -295,    92,  -295,  -295,
    -295,  -295,   363,  -295,  -295,    79,  -295,  -295,  -295,  -295,
    -295,  -295,   682,   480,  -295,  -295,  -295,    -3,  -295,   807,
    -295,  -295,  -295,    70,  -295,  -295,   159,  -295,  -295,   480,
    -295,  -295,   480,  -295,  -295,  -295,  -295
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   201,   203,   202,    18,     0,     0,     3,   183,   204,
       0,     1,     2,   100,   174,    21,    19,     0,     0,    22,
     214,     0,    20,   210,    12,   214,    98,     0,   184,   171,
     214,   207,     0,     0,     0,     0,   198,    96,    12,     0,
       0,   175,   211,   112,   113,   105,   134,   111,   110,   127,
     126,   128,   114,   116,   117,   115,   129,   106,   138,   139,
     107,   130,   131,   174,   119,   102,   103,   104,    33,   108,
     174,   109,    79,   174,   118,   133,    31,   120,   122,   121,
     132,   174,   174,   135,   123,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    81,   208,   174,   174,
     174,   174,   174,   174,    10,    12,   155,    22,   209,    13,
       0,     7,    17,   181,   177,   177,   180,   177,   214,   183,
     101,     0,   185,   183,    26,     0,   183,   174,   190,   174,
     189,   214,     0,    24,   183,   195,   197,   183,     0,   174,
     188,     0,   172,    94,    24,    24,    24,    24,    24,    74,
      69,    76,    70,    72,    75,    34,    27,    28,    29,     0,
      10,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    73,     0,   145,    24,    24,
      24,    24,    24,    32,     0,    24,   166,   194,    83,   170,
     156,   212,   186,   192,     9,   193,    25,   187,    24,    24,
       0,   173,   178,   182,   179,   191,   196,    24,    95,    99,
      12,     5,   160,    12,    12,    12,    82,     0,     0,    80,
      36,    43,    44,    45,    46,    47,    39,    42,    38,    40,
      41,     0,    48,    49,    59,    60,    58,    50,    51,    53,
      54,    55,    56,    66,    65,    61,    62,    57,    63,    64,
      67,    68,     0,   146,    12,   214,   214,    12,   154,   143,
      11,    12,    12,     0,    85,    86,   183,    87,    88,    10,
      15,    16,     0,    14,    10,    24,    24,    35,    77,     0,
      37,    24,    24,   149,   137,    24,   150,   141,   164,    24,
     162,   163,   165,    24,    24,     0,    23,   205,   199,     6,
       4,    12,    52,   147,   136,    12,    12,   161,    84,    89,
     183,   176,     0,     0,    24,    24,   168,    24,   177,   206,
     176,   148,   169,    91,    10,    92,   214,   213,     6,     0,
     176,   158,     0,   157,   159,   176,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -130,  -169,  -295,   -40,  -295,  -141,  -295,   -23,
    -295,  -295,   -46,  -295,  -295,   178,   -38,  -108,    41,  -295,
    -161,  -295,  -295,  -295,  -295,  -295,   -47,  -295,  -147,  -295,
    -295,  -295,  -295,    54,  -295,  -295,  -295,  -295,   190,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -126,  -295,  -106,  -295,  -295,   -80,    94,
      63,  -295,   194,  -295,  -284,  -132,  -295,  -295,  -295,  -114,
    -295,  -295,  -294,    76,  -295,     3,  -295,     6,  -295,   175,
    -295,  -295,  -295,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   230,   333,   119,   120,   121,   203,   204,   295,
      34,   122,   289,   123,     6,     7,    20,    21,   124,   125,
     126,   159,    95,    96,   236,   237,    97,   127,   285,   286,
     330,   344,   128,    37,    38,    39,    25,    14,    15,    98,
      99,   100,   101,   303,   102,   306,   278,   103,   104,   129,
     350,   130,   105,   206,   312,   282,   283,   106,   208,    30,
     131,   132,    26,    27,   338,   209,   223,   133,   134,    16,
      17,   135,   136,    35,   291,   137,     9,   138,   318,    23,
      24,   139,   140,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    33,   143,     8,    13,   213,    10,    28,     8,   215,
      42,    10,   217,     1,     2,   141,   233,   234,    11,   239,
     225,   331,    29,   226,     3,     1,     2,    18,    18,  -100,
     194,   195,    40,   196,   -23,   210,     3,   211,    32,   340,
     149,   150,   151,   152,   153,   154,   155,   160,  -164,  -164,
    -200,     1,     2,     1,     2,   353,   347,   284,   355,    19,
     107,    41,     3,   107,     3,   109,   354,   310,   311,  -144,
     -97,   356,   277,     4,   142,     4,   161,   221,   216,  -161,
     214,  -214,   205,   187,   188,   189,   190,   191,   192,   193,
    -214,   194,   195,   238,   196,  -214,   297,   280,   212,   189,
     190,   191,   192,   193,   302,   194,   195,  -152,   196,  -151,
     -90,  -153,  -142,   224,   305,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    40,   315,   272,
    -167,   332,   328,   319,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   313,
     194,   195,   314,   196,   222,   325,   284,  -140,   349,   352,
     293,   294,   279,    12,   317,   231,   232,   231,   231,   235,
     343,   298,   191,   192,   193,   228,   194,   195,   288,   196,
      22,   336,   326,   348,   207,   229,   346,   220,   108,     0,
       0,     0,   296,     0,     0,     0,   337,     0,     0,     0,
       0,   287,     0,     0,     0,   292,     0,     0,     0,     0,
       0,     0,     0,   292,     0,     0,     0,     0,     0,   273,
     274,   275,   276,   231,     0,     0,   281,     0,     0,     0,
       0,   301,   322,     0,   316,   304,   307,   144,   308,   309,
     290,     0,     0,     0,   145,     0,     0,   146,   290,     0,
       0,     0,     0,     0,     0,   147,   148,     0,     0,     0,
       0,     0,     0,     0,     0,   339,     0,     0,     0,     0,
       0,     0,   197,   198,   199,   200,   201,   202,   334,     0,
       0,     0,     0,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,     0,     0,
       0,   218,     0,   219,     0,     0,   351,     0,     0,     0,
       0,     0,     0,   227,     0,     0,   320,   321,     0,     0,
       0,     0,   323,   324,     0,     0,   231,     0,     0,     0,
     327,     0,     0,     0,     0,   329,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,     0,
     194,   195,     0,   196,     0,   341,   342,   110,     0,   -24,
     -24,   -24,   111,   -24,   -24,   -24,   112,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     113,   -24,   -24,   114,   -24,   -24,   -24,   -24,   -24,   -24,
     115,     1,     2,   -24,   -24,   -24,   -24,   -24,   -24,   116,
     -24,   -24,     3,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   173,   117,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,     0,   194,   195,     0,   196,
       0,     0,     0,   -24,   -24,     0,     0,     0,   -24,   -24,
     -24,   -24,     0,    -8,     0,     0,   -24,     0,   -24,   118,
    -172,   110,     0,   -24,   -24,   -24,   111,   -24,   -24,   -24,
     112,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   113,   -24,   -24,   114,   -24,   -24,
     -24,   -24,   -24,   -24,   115,     1,     2,   -24,   -24,   -24,
     -24,   -24,   -24,   116,   -24,   -24,     3,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   117,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,     0,   194,
     195,     0,   196,     0,     0,     0,     0,   -24,   -24,     0,
       0,     0,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,     0,   -24,   118,  -172,    43,    44,    45,     0,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,    61,    62,     0,
      63,    64,    65,    66,    67,    68,     0,   156,   157,    69,
      70,    71,    72,    73,    74,     0,    75,    76,   158,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,     0,   194,   195,
       0,   196,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,     0,     0,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,    94,    43,    44,    45,     0,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,    61,    62,     0,
      63,    64,    65,    66,    67,    68,     0,     0,     0,    69,
      70,    71,    72,    73,    74,     0,    75,    76,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,     0,   194,   195,     0,
     196,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,     0,     0,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,    94,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,     0,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,     0,   194,
     195,     0,   196,     0,     0,     0,     0,   300,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     299,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,     0,   194,   195,     0,   196,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,     0,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,     0,
     194,   195,     0,   196,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
       0,   194,   195,     0,   196
};

static const yytype_int16 yycheck[] =
{
      20,    24,    40,     0,    33,   119,     0,   103,     5,   123,
      30,     5,   126,    35,    36,    38,   146,   147,     0,   160,
     134,   315,   103,   137,    46,    35,    36,     1,     1,   102,
      93,    94,    26,    96,    59,   115,    46,   117,    59,   333,
      87,    88,    89,    90,    91,    92,    93,    94,    83,    84,
     103,    35,    36,    35,    36,   349,   340,   218,   352,    33,
      33,   102,    46,    33,    46,    99,   350,    83,    84,   102,
      98,   355,   202,    57,    98,    57,    45,   104,   125,    98,
      97,   103,   105,    85,    86,    87,    88,    89,    90,    91,
     103,    93,    94,    98,    96,    98,   100,    98,   118,    87,
      88,    89,    90,    91,    99,    93,    94,    98,    96,    98,
     103,    98,    98,   133,    99,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   141,   289,   196,
      98,    59,   313,   294,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    99,
      93,    94,   286,    96,   133,   305,   337,    98,    19,   348,
     220,   227,   202,     5,   292,   144,   145,   146,   147,   148,
     337,   238,    89,    90,    91,   141,    93,    94,   218,    96,
      10,   327,   308,   344,   110,   142,   338,   131,    33,    -1,
      -1,    -1,   235,    -1,    -1,    -1,   330,    -1,    -1,    -1,
      -1,   218,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   198,
     199,   200,   201,   202,    -1,    -1,   205,    -1,    -1,    -1,
      -1,   274,   299,    -1,   292,   275,   276,    63,   281,   282,
     219,    -1,    -1,    -1,    70,    -1,    -1,    73,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   321,    -1,
      -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,
      -1,   127,    -1,   129,    -1,    -1,   346,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,   295,   296,    -1,    -1,
      -1,    -1,   301,   302,    -1,    -1,   305,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,   314,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    -1,    96,    -1,   334,   335,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    70,    58,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    -1,    96,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,   102,   103,
     104,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    -1,    96,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,   102,   103,   104,     3,     4,     5,    -1,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,   102,     3,     4,     5,    -1,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    94,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,   102,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    -1,    96,    -1,    -1,    -1,    -1,   101,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    -1,    96,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    -1,    96,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    -1,    96
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,    46,    57,   106,   119,   120,   180,   181,
     182,     0,   120,    33,   142,   143,   174,   175,     1,    33,
     121,   122,   143,   184,   185,   141,   167,   168,   103,   103,
     164,   188,    59,   114,   115,   178,   188,   138,   139,   140,
     182,   102,   188,     3,     4,     5,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    20,    21,    22,
      23,    25,    26,    28,    29,    30,    31,    32,    33,    37,
      38,    39,    40,    41,    42,    44,    45,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    87,    88,    92,
      93,    94,    95,   100,   102,   127,   128,   131,   144,   145,
     146,   147,   149,   152,   153,   157,   162,    33,   184,    99,
       1,     6,    10,    24,    27,    34,    43,    58,   103,   109,
     110,   111,   116,   118,   123,   124,   125,   132,   137,   154,
     156,   165,   166,   172,   173,   176,   177,   180,   182,   186,
     187,   114,    98,   121,   167,   167,   167,   167,   167,   131,
     131,   131,   131,   131,   131,   131,    35,    36,    46,   126,
     131,    45,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    93,    94,    96,   167,   167,   167,
     167,   167,   167,   112,   113,   114,   158,   164,   163,   170,
     163,   163,   188,   174,    97,   174,   131,   174,   167,   167,
     178,   104,   123,   171,   188,   174,   174,   167,   138,   165,
     107,   123,   123,   107,   107,   123,   129,   130,    98,   112,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   123,   123,   123,   123,   107,   151,   188,
      98,   123,   160,   161,   125,   133,   134,   180,   188,   117,
     123,   179,   182,   110,   117,   114,   114,   100,   131,    71,
     101,   114,    99,   148,   188,    99,   150,   188,   114,   114,
      83,    84,   159,    99,   174,   112,   121,   122,   183,   112,
     123,   123,   131,   123,   123,   107,   160,   123,   125,   123,
     135,   177,    59,   108,   114,   114,   158,   174,   169,   131,
     177,   123,   123,   133,   136,   188,   170,   169,   112,    19,
     155,   188,   108,   177,   169,   177,   169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   107,   108,   109,   111,   110,
     113,   112,   115,   114,   116,   117,   117,   118,   119,   120,
     120,   120,   121,   122,   124,   123,   125,   126,   126,   126,
     127,   127,   128,   128,   130,   129,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   133,   133,   134,   134,   134,   135,
     135,   136,   136,   137,   138,   139,   139,   140,   140,   141,
     142,   143,   144,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   146,   146,   146,   146,
     146,   146,   146,   147,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   155,   155,   156,
     157,   158,   159,   159,   161,   160,   162,   162,   162,   162,
     163,   164,   166,   165,   168,   167,   169,   170,   171,   171,
     172,   172,   173,   175,   174,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   177,   178,   178,   179,
     180,   181,   181,   181,   182,   183,   183,   184,   184,   185,
     185,   185,   186,   187,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     0,     2,
       0,     2,     0,     2,     3,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     0,     2,     1,     1,     1,     1,
       2,     1,     2,     1,     0,     2,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     1,     1,
       3,     1,     3,     2,     3,     1,     1,     1,     1,     1,
       0,     1,     1,    11,     2,     3,     1,     1,     0,     4,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     2,     3,     5,     7,     4,
       4,     3,     3,     3,     3,     1,     2,     2,     1,     9,
       3,     0,     1,     1,     0,     2,     2,     3,     6,     7,
       1,     1,     0,     2,     0,     2,     0,     0,     1,     1,
       1,     1,     2,     0,     2,     1,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     3,     2,     3,     3,
       1,     3,     2,     7,     0
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
#line 123 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_multipleArgs(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 1685 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 128 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_firstArg(&(yyvsp[0]));
    }
#line 1693 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 133 "grammar" /* yacc.c:1646  */
    {
        gp_breakOK++;
    }
#line 1701 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_break();
    }
#line 1709 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closebrace_expected;
        symtab_pop();
    }
#line 1718 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 151 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closepar_expected; 
    }
#line 1726 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 157 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_comma_expected; 
    }
#line 1734 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 166 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 1742 "parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 177 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_continue();
    }
#line 1750 "parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1758 "parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 191 "grammar" /* yacc.c:1646  */
    {
        gp_init = *p_catCode(&gp_init, &(yyvsp[-1]));
    }
#line 1766 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "grammar" /* yacc.c:1646  */
    {
        p_defineVar();    /* the first n variables of a function, up to the
                            end of the parameter list are the parameters. */
    }
#line 1775 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1783 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 217 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1791 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 221 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1799 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 227 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(&(yyvsp[0]));
    }
#line 1807 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 242 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        gp_stringbuf = rss_strcat(gp_stringbuf, util_string());
    }
#line 1815 "parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 247 "grammar" /* yacc.c:1646  */
    {
        free(gp_stringbuf);                  /* free former string */
        gp_stringbuf = rss_strdup(util_string()); /* duplicate initial string */
    }
#line 1824 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 258 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1832 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 264 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1840 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 274 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1848 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 282 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1856 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 289 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_multiply, "*=");
        }
#line 1864 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 296 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_divide, "/=");
        }
#line 1872 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 303 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_modulo, "%=");
        }
#line 1880 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 310 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_addition, "+=");
        }
#line 1888 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 317 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_subtract, "-=");
        }
#line 1896 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 324 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_and, "&=");
        }
#line 1904 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 331 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_or, "|=");
        }
#line 1912 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 338 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_xor, "^=");
        }
#line 1920 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 345 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shl, "<<=");
        }
#line 1928 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 352 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shr, ">>=");
        }
#line 1936 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 359 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_orBool(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1944 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 366 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_andBoolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1952 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 373 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1960 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 380 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1968 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 389 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1976 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 396 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1984 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 403 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1992 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 410 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2000 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 417 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_grEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2008 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 424 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2016 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 431 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_and(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2024 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 438 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_or(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2032 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 445 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2040 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 452 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2048 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 459 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2056 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 466 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2064 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 473 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2072 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 480 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2080 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 487 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2088 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 494 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2096 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 501 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2104 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 507 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_negate(&(yyvsp[0]));
        }
#line 2112 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 513 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2120 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 519 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2128 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 525 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2136 "parse.c" /* yacc.c:1646  */
    break;

  case 73:
#line 531 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2144 "parse.c" /* yacc.c:1646  */
    break;

  case 74:
#line 537 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2152 "parse.c" /* yacc.c:1646  */
    break;

  case 75:
#line 543 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_not(&(yyvsp[0]));
        }
#line 2160 "parse.c" /* yacc.c:1646  */
    break;

  case 76:
#line 549 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_notBoolean(&(yyvsp[0]));
        }
#line 2168 "parse.c" /* yacc.c:1646  */
    break;

  case 77:
#line 557 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2176 "parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 562 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_str | e_const);
        }
#line 2184 "parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 567 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_int | e_const);
        }
#line 2192 "parse.c" /* yacc.c:1646  */
    break;

  case 80:
#line 574 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2200 "parse.c" /* yacc.c:1646  */
    break;

  case 82:
#line 583 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_oneArg(f_backtick, &(yyvsp[-1]));
        }
#line 2208 "parse.c" /* yacc.c:1646  */
    break;

  case 83:
#line 590 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2216 "parse.c" /* yacc.c:1646  */
    break;

  case 84:
#line 599 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2224 "parse.c" /* yacc.c:1646  */
    break;

  case 90:
#line 618 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2233 "parse.c" /* yacc.c:1646  */
    break;

  case 93:
#line 642 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_for(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2241 "parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 686 "grammar" /* yacc.c:1646  */
    {
        symtab_setFunParams(); /* the # variables so far are the parameters */
    }
#line 2249 "parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 693 "grammar" /* yacc.c:1646  */
    {
        p_beginFunction();
    }
#line 2257 "parse.c" /* yacc.c:1646  */
    break;

  case 101:
#line 704 "grammar" /* yacc.c:1646  */
    {
        p_endFunction(&(yyvsp[-1]));
    }
#line 2265 "parse.c" /* yacc.c:1646  */
    break;

  case 136:
#line 787 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2273 "parse.c" /* yacc.c:1646  */
    break;

  case 140:
#line 803 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2281 "parse.c" /* yacc.c:1646  */
    break;

  case 144:
#line 818 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = p_functionIdx();
    }
#line 2289 "parse.c" /* yacc.c:1646  */
    break;

  case 145:
#line 826 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_zeroArgs((yyvsp[-1]).type);
    }
#line 2297 "parse.c" /* yacc.c:1646  */
    break;

  case 146:
#line 833 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_oneArg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2305 "parse.c" /* yacc.c:1646  */
    break;

  case 147:
#line 842 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_twoArgs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2313 "parse.c" /* yacc.c:1646  */
    break;

  case 148:
#line 853 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_threeArgs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2321 "parse.c" /* yacc.c:1646  */
    break;

  case 149:
#line 861 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntString((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2329 "parse.c" /* yacc.c:1646  */
    break;

  case 150:
#line 869 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntSpecial((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2337 "parse.c" /* yacc.c:1646  */
    break;

  case 151:
#line 876 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_printf, &(yyvsp[0]));
    }
#line 2345 "parse.c" /* yacc.c:1646  */
    break;

  case 152:
#line 883 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2353 "parse.c" /* yacc.c:1646  */
    break;

  case 153:
#line 890 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_strformat, &(yyvsp[0]));
    }
#line 2361 "parse.c" /* yacc.c:1646  */
    break;

  case 154:
#line 897 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_callFunction((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2369 "parse.c" /* yacc.c:1646  */
    break;

  case 156:
#line 906 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2377 "parse.c" /* yacc.c:1646  */
    break;

  case 157:
#line 914 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2385 "parse.c" /* yacc.c:1646  */
    break;

  case 159:
#line 931 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_if(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        symtab_pop();
    }
#line 2394 "parse.c" /* yacc.c:1646  */
    break;

  case 160:
#line 947 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2402 "parse.c" /* yacc.c:1646  */
    break;

  case 161:
#line 953 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = IS_FILE;
    }
#line 2411 "parse.c" /* yacc.c:1646  */
    break;

  case 164:
#line 966 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2419 "parse.c" /* yacc.c:1646  */
    break;

  case 165:
#line 970 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2427 "parse.c" /* yacc.c:1646  */
    break;

  case 166:
#line 978 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_makeList
             (
                 p_multipleArgs
                 (
                     p_firstArg(&(yyvsp[0])),     /* IS_FILE is passed */
                     &(yyvsp[-1])                /* expression is passed */
                 ),
                 op_hlt                 /* not op_younger or op_older */
             );
    }
#line 2443 "parse.c" /* yacc.c:1646  */
    break;

  case 167:
#line 994 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_makeList
             (
                 p_multipleArgs
                 (
                     p_firstArg(&(yyvsp[-2])),     /* fileattribute is passed */
                     &(yyvsp[0])                /* expression is passed */
                 ),
                 op_hlt                 /* not op_younger or op_older */
             );
    }
#line 2459 "parse.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1012 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_makeList
             (
                p_multipleArgs
                (
                    p_multipleArgs
                    (
                        p_firstArg(&(yyvsp[0])),  /* IS_FILE   is passed */
                        &(yyvsp[-5])             /* 1st expression is passed */
                    ),
                    &(yyvsp[-1])                 /* 2nd expression is passed */
                 ),
                 (yyvsp[-3]).type                /* older/younger */
             );
    }
#line 2479 "parse.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1035 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_makeList
             (
                p_multipleArgs
                (
                    p_multipleArgs
                    (
                        p_firstArg(&(yyvsp[-6])),  /* attribute is passed */
                        &(yyvsp[-4])             /* 2nd expression is passed */
                    ),
                    &(yyvsp[0])                 /* 3rd expression is passed */
                 ),
                 (yyvsp[-2]).type                /* older/younger */
             );
    }
#line 2499 "parse.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1053 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2507 "parse.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1059 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2515 "parse.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1064 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2523 "parse.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1068 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2531 "parse.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1074 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2539 "parse.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1080 "grammar" /* yacc.c:1646  */
    {
        p_popDead();
    }
#line 2547 "parse.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1085 "grammar" /* yacc.c:1646  */
    {
        p_pushDead();                    /* set new dead-level */
    }
#line 2555 "parse.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1097 "grammar" /* yacc.c:1646  */
    {
        msg("saw return");
    }
#line 2563 "parse.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1107 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_return((yyvsp[-1]).type, &(yyvsp[0]));
        msg("SAW return stmt");
    }
#line 2572 "parse.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1115 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2580 "parse.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1125 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2588 "parse.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1153 "grammar" /* yacc.c:1646  */
    {
        msg("saw statement(.5)");
        util_resetSemErr();
    }
#line 2597 "parse.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1164 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catStmnts(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2605 "parse.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1178 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2613 "parse.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1185 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2621 "parse.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1200 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2630 "parse.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1207 "grammar" /* yacc.c:1646  */
    {
        p_generateCode(&(yyvsp[0]), op_push_imm, 0);
        (yyval) = (yyvsp[0]);
    }
#line 2639 "parse.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1215 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));    /* explicit initialization */
    }
#line 2647 "parse.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1226 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(p_assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2655 "parse.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1235 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2664 "parse.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1245 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2672 "parse.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1263 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_while(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2680 "parse.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1268 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(0);   /* by default initializes a variable to 0 */
    }
#line 2688 "parse.c" /* yacc.c:1646  */
    break;


#line 2692 "parse.c" /* yacc.c:1646  */
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
#line 1273 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
