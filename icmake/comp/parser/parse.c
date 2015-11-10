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

    #include "parser.ih"

#line 70 "parse.c" /* yacc.c:339  */

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

#line 201 "parse.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

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
     101,    97,    88,    86,    98,    87,     2,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,   102,
      78,    58,    79,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,     2,   100,    74,     2,    99,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,    73,    96,    94,     2,     2,     2,
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
       0,   110,   110,   113,   117,   124,   130,   135,   141,   141,
     148,   148,   154,   154,   160,   168,   174,   181,   184,   189,
     191,   194,   202,   210,   217,   217,   226,   232,   234,   236,
     240,   246,   254,   257,   264,   264,   271,   278,   286,   293,
     300,   307,   314,   321,   328,   335,   342,   349,   356,   363,
     370,   377,   384,   393,   400,   407,   414,   421,   428,   435,
     442,   449,   456,   463,   470,   477,   484,   491,   498,   505,
     511,   517,   523,   529,   535,   541,   547,   553,   561,   566,
     571,   578,   580,   588,   596,   603,   607,   609,   611,   616,
     618,   625,   627,   631,   663,   668,   672,   676,   677,   682,
     692,   700,   709,   711,   713,   717,   719,   721,   723,   725,
     727,   729,   731,   733,   735,   737,   739,   741,   743,   745,
     747,   749,   751,   753,   755,   759,   761,   763,   765,   767,
     769,   771,   775,   777,   779,   783,   789,   793,   795,   799,
     805,   809,   811,   815,   822,   828,   835,   844,   855,   863,
     871,   878,   885,   892,   899,   902,   910,   916,   920,   942,
     951,   958,   960,   964,   964,   974,   989,  1004,  1026,  1050,
    1056,  1062,  1062,  1072,  1072,  1078,  1083,  1088,  1090,  1094,
    1096,  1100,  1109,  1109,  1115,  1117,  1123,  1126,  1128,  1130,
    1132,  1135,  1138,  1141,  1146,  1151,  1154,  1160,  1163,  1165,
    1167,  1171,  1178,  1181,  1190,  1197,  1205,  1207,  1216,  1220,
    1225,  1228,  1233,  1245
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
  "'~'", "'['", "'}'", "')'", "','", "'`'", "']'", "'('", "';'", "'{'",
  "$accept", "input", "args", "break_ok", "break_stat", "closebrace",
  "$@1", "closepar", "$@2", "comma", "$@3", "compound", "continue_stat",
  "_voidtype", "def_var_or_fun", "embedded_expression", "embedded_var",
  "embedded_varlist", "enterid", "err_expression", "$@4", "expr_code",
  "_casttype", "_string", "_func_or_var", "_backtick", "$@5", "expression",
  "_for", "_expr_list", "_opt_init_expression", "_opt_cond_expression",
  "_opt_inc_expression", "for_stat", "_partype", "_pars", "_opt_parlist",
  "_funvars", "_funid", "funcdef", "_zero_arg_funs", "_one_arg_funs",
  "_two_arg_funs", "_optint_string", "_comma_expr", "_optint_special",
  "_comma_arglist", "_opt_arglist", "_funname", "function", "_if", "_else",
  "if_stat", "_makelist_expr", "_makelist_normal", "_old_young",
  "_older_younger", "$@6", "makelist", "nesting", "ok", "openbrace", "$@7",
  "openpar", "$@8", "popdead", "pushdead", "_return_tail", "_leave",
  "return_stat", "semicol", "$@9", "_stm", "statement", "statements",
  "_varType", "type_of_var", "vardef", "_entervarid", "vardefs", "varlist",
  "var_or_fun", "_while", "while_stat", "zeroframe", YY_NULLPTR
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
      37,    33,   333,   334,   126,    91,   125,    41,    44,    96,
      93,    40,    59,   123
};
# endif

#define YYPACT_NINF -304

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-304)))

#define YYTABLE_NINF -214

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,  -304,  -304,  -304,  -304,    15,   -22,  -304,  -304,    -2,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,    19,  -304,  -304,
    -304,     3,   -83,  -304,   -79,   -71,  -304,   -14,  -304,    -3,
     -62,   377,  -304,  -304,   -39,   -23,    36,  -304,  -304,  -304,
    -304,  -304,   680,    36,   -17,   -71,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,   -16,  -304,  -304,  -304,
     680,  -304,  -304,  -304,  -304,  -304,  -304,   -25,   -11,  -304,
    -304,  -304,  -304,  -304,  -304,     3,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,    -9,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,   680,   680,   680,   680,   680,   680,   680,   581,
      39,  -304,   805,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
     -12,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,   805,  -304,   -18,     3,   377,  -304,  -304,
    -304,  -304,  -304,     3,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,   -20,   -20,   -20,   -20,   -20,   -20,   805,  -304,  -304,
    -304,    -4,   805,  -304,   680,   680,   680,   680,   680,   680,
     680,   680,   680,   680,   680,   680,   680,   680,   680,   680,
     680,   680,   680,   680,   680,   680,   680,   680,   680,   680,
     680,   680,   680,   680,   680,   680,  -304,  -304,   680,  -304,
    -304,  -304,  -304,  -304,    -1,  -304,     1,   -19,  -304,  -304,
    -304,    33,  -304,  -304,  -304,  -304,  -304,    36,  -304,  -304,
       2,  -304,  -304,    48,    50,  -304,  -304,    -5,   680,  -304,
     805,   805,   805,   805,   805,   805,   805,   805,   805,   805,
     805,   767,   565,   663,   827,    37,   203,   106,   106,    51,
      51,    51,    51,    51,    51,    79,    79,   -36,   -36,   -20,
     -20,   -20,   724,  -304,  -304,    35,    52,    54,  -304,  -304,
    -304,    55,  -304,     4,  -304,    -7,   480,  -304,  -304,  -304,
    -304,  -304,   -20,   680,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,   480,  -304,  -304,   467,  -304,  -304,    56,  -304,  -304,
      -1,  -304,  -304,  -304,  -304,  -304,    33,  -304,  -304,   115,
    -304,  -304,  -304,  -304,   480,  -304,  -304,   480,  -304,  -304,
    -304,  -304
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   198,   200,   199,    16,     0,     0,     3,   201,     0,
       1,     2,   100,   173,    18,   182,   210,     0,   209,    17,
     213,    98,     0,   208,     0,     0,    23,   213,   206,     0,
      12,     0,   197,    96,    12,     0,     0,   174,   183,   170,
     213,   202,     0,     0,     0,     0,     7,    15,   180,   176,
     176,   179,   176,   213,   182,   101,     0,   184,   182,    26,
       0,   182,   173,   189,   173,   188,   213,     0,    24,   182,
     194,   196,   195,   173,   187,     0,   171,    94,   207,   111,
     112,   105,   133,   110,   109,   126,   125,   127,   113,   115,
     116,   114,   128,   137,   138,   107,   129,   130,   173,   118,
     102,   103,   104,    33,   173,   108,    79,   173,   117,   106,
     132,    31,   119,   121,   120,   131,   173,   173,   134,   122,
     123,   124,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    81,   203,   173,   173,   173,   173,   173,   173,    10,
      12,   154,   205,    13,   193,    83,   169,   155,   211,   185,
     191,     9,   192,    25,   186,    24,    24,     0,   172,   177,
     181,   178,   190,    24,    95,    99,    24,    24,    24,    24,
      24,    74,    69,    76,    70,    72,    75,    34,    27,    28,
      29,     0,    10,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    73,     0,   144,
      24,    24,    24,    24,    24,    32,     0,    24,   165,    87,
      85,    86,   182,    88,    10,    20,    19,     0,    14,    10,
      12,     5,   159,    12,    12,    12,    82,     0,     0,    80,
      36,    43,    44,    45,    46,    47,    39,    42,    38,    40,
      41,     0,    48,    49,    59,    60,    58,    50,    51,    53,
      54,    55,    56,    66,    65,    61,    62,    57,    63,    64,
      67,    68,     0,   145,    12,   213,   213,    12,   153,   142,
      11,    12,    12,     0,    24,    24,     0,    21,     6,    24,
      24,    35,    77,     0,    37,    24,    24,   148,   136,    24,
     149,   140,   163,    24,   161,   162,   164,    84,    89,   182,
     175,     0,     4,    12,    52,   146,   135,    12,    12,   160,
      24,   176,   175,    24,    24,   167,    91,    10,    92,   213,
     212,   147,   168,     6,     0,   175,   157,     0,   156,   158,
     175,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -304,  -304,  -147,  -195,  -304,    -8,  -304,  -173,  -304,   -29,
    -304,  -304,  -304,  -304,   154,    10,  -304,     5,   139,   -66,
    -304,  -152,  -304,  -304,  -304,  -304,  -304,   148,  -304,  -154,
    -304,  -304,  -304,  -304,   102,  -304,  -304,  -304,  -304,   170,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -149,  -304,  -131,  -304,  -304,    17,
     138,   126,  -304,   -28,  -304,  -303,  -128,  -304,  -304,  -304,
     -50,  -304,  -304,  -282,   140,  -304,     7,   -37,  -304,  -304,
     195,  -304,  -304,  -304,   -27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   240,   321,    54,    55,    56,   225,   226,   299,
      44,    57,    58,     6,     7,   234,   235,    15,    27,    59,
      60,    61,   181,   130,   131,   246,   247,   132,    62,   231,
     232,   319,   337,    63,    33,    34,    35,    20,    13,    14,
     133,   134,   135,   136,   307,   137,   310,   288,   138,   139,
      64,   345,    65,   140,   228,   316,   292,   293,   141,   145,
      40,    66,    67,    21,    22,   331,   146,   160,    68,    69,
      23,    24,    70,    71,    31,     8,    17,    28,    29,    30,
      72,    19,    73,    74,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    43,   159,   230,   150,    75,   142,     9,   152,   249,
      12,   154,     9,    78,   320,    10,     1,     2,    37,   162,
      25,   243,   244,    38,     1,     2,   149,     3,    36,   340,
      12,    39,     1,     2,   155,     3,   156,     1,     2,   332,
     -22,   161,   349,     3,  -204,   163,     4,   351,     3,     1,
       2,    26,   213,   214,   215,    42,   216,   217,   -97,   218,
       3,   296,   348,  -163,  -163,   350,   298,   147,    26,   148,
     166,     4,   216,   217,    76,   218,   167,   287,   158,   168,
     151,   143,    36,   183,  -213,  -160,   314,   315,   169,   170,
     236,  -213,  -143,   248,   301,   -90,  -213,   236,   290,  -151,
     241,   242,   241,   241,   245,   219,   220,   221,   222,   223,
     224,   227,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   233,   216,
     217,   294,   218,   306,   344,   209,   210,   211,   212,   213,
     214,   215,   317,   216,   217,  -150,   218,  -152,   347,   238,
     309,  -141,  -166,  -139,   283,   284,   285,   286,   241,    11,
     229,   291,   327,   237,   343,   211,   212,   213,   214,   215,
     237,   216,   217,   239,   218,    77,   336,   164,   230,    16,
     335,   328,   295,   144,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   289,   216,   217,
     297,   218,   165,   339,    18,     0,   157,     0,   153,     0,
       0,     0,     0,     0,     0,     0,   300,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
       0,     0,     0,   322,   323,     0,     0,     0,     0,   325,
     326,     0,     0,   241,     0,     0,     0,   329,     0,     0,
       0,     0,     0,     0,     0,   305,     0,     0,   308,   311,
       0,     0,   312,   313,     0,     0,     0,   341,   342,   330,
     171,   172,   173,   174,   175,   176,   177,   182,     0,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   333,   216,   217,     0,   218,   334,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
       0,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     0,     0,   282,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
     -24,   -24,   -24,    46,   -24,   -24,   -24,    47,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   302,   -24,   -24,   -24,
      48,   -24,   -24,    49,   -24,   -24,   -24,   -24,   -24,   -24,
      50,     1,     2,   -24,   -24,   -24,   -24,   -24,    51,   -24,
     -24,   -24,     3,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   324,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -24,   -24,     0,     0,     0,   -24,   -24,
     -24,   -24,     0,    -8,     0,     0,   -24,     0,   -24,    53,
    -171,    45,     0,   -24,   -24,   -24,    46,   -24,   -24,   -24,
      47,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,    48,   -24,   -24,    49,   -24,   -24,   -24,
     -24,   -24,   -24,    50,     1,     2,   -24,   -24,   -24,   -24,
     -24,    51,   -24,   -24,   -24,     3,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   195,    52,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,     0,   216,
     217,     0,   218,     0,     0,     0,   -24,   -24,     0,     0,
       0,   -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,
       0,   -24,    53,  -171,    79,    80,    81,     0,    82,    83,
      84,     0,    85,    86,    87,    88,    89,    90,    91,    92,
       0,    93,    94,    95,     0,    96,    97,     0,    98,    99,
     100,   101,   102,   103,     0,   178,   179,   104,   105,   106,
     107,   108,     0,   109,   110,   111,   180,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,     0,   216,   217,     0,
     218,     0,     0,     0,     0,     0,     0,   122,   123,     0,
       0,     0,   124,   125,   126,   127,     0,     0,     0,     0,
     128,     0,   129,    79,    80,    81,     0,    82,    83,    84,
       0,    85,    86,    87,    88,    89,    90,    91,    92,     0,
      93,    94,    95,     0,    96,    97,     0,    98,    99,   100,
     101,   102,   103,     0,     0,     0,   104,   105,   106,   107,
     108,     0,   109,   110,   111,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,     0,   216,   217,     0,   218,     0,
       0,     0,     0,     0,     0,     0,   122,   123,     0,     0,
       0,   124,   125,   126,   127,     0,     0,     0,     0,   128,
       0,   129,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     0,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,     0,   216,   217,     0,   218,
       0,     0,     0,     0,   304,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   303,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,     0,   216,
     217,     0,   218,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,     0,   216,   217,     0,
     218,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,     0,   216,
     217,     0,   218
};

static const yytype_int16 yycheck[] =
{
      27,    30,    68,   155,    54,    34,    43,     0,    58,   182,
      32,    61,     5,    40,   296,     0,    34,    35,   101,    69,
       1,   168,   169,   102,    34,    35,    53,    45,    21,   332,
      32,   102,    34,    35,    62,    45,    64,    34,    35,   321,
     102,    68,   345,    45,    58,    73,    56,   350,    45,    34,
      35,    32,    88,    89,    90,    58,    92,    93,    97,    95,
      45,   234,   344,    82,    83,   347,   239,    50,    32,    52,
      98,    56,    92,    93,    97,    95,   104,   224,   103,   107,
      96,    98,    75,    44,   102,    97,    82,    83,   116,   117,
     156,   102,   101,    97,    99,   102,    97,   163,    97,    97,
     166,   167,   168,   169,   170,   133,   134,   135,   136,   137,
     138,   140,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   155,    92,
      93,    98,    95,    98,    19,    84,    85,    86,    87,    88,
      89,    90,   294,    92,    93,    97,    95,    97,   343,   157,
      98,    97,    97,    97,   220,   221,   222,   223,   224,     5,
     155,   227,   309,   156,   337,    86,    87,    88,    89,    90,
     163,    92,    93,   163,    95,    36,   330,    75,   330,     9,
     329,   312,   232,    45,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   224,    92,    93,
     237,    95,    76,   331,     9,    -1,    66,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
      -1,    -1,    -1,   299,   300,    -1,    -1,    -1,    -1,   305,
     306,    -1,    -1,   309,    -1,    -1,    -1,   313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,   285,   286,
      -1,    -1,   291,   292,    -1,    -1,    -1,   333,   334,   319,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   323,    92,    93,    -1,    95,   328,
      -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,    -1,    -1,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   248,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
     103,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    57,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,   101,   102,   103,     3,     4,     5,    -1,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,   101,     3,     4,     5,    -1,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,   101,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    -1,    -1,    -1,   100,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    45,    56,   105,   117,   118,   179,   180,
       0,   118,    32,   142,   143,   121,   143,   180,   184,   185,
     141,   167,   168,   174,   175,     1,    32,   122,   181,   182,
     183,   178,   188,   138,   139,   140,   180,   101,   102,   102,
     164,   188,    58,   113,   114,     1,     6,    10,    23,    26,
      33,    41,    57,   102,   108,   109,   110,   115,   116,   123,
     124,   125,   132,   137,   154,   156,   165,   166,   172,   173,
     176,   177,   184,   186,   187,   113,    97,   122,   188,     3,
       4,     5,     7,     8,     9,    11,    12,    13,    14,    15,
      16,    17,    18,    20,    21,    22,    24,    25,    27,    28,
      29,    30,    31,    32,    36,    37,    38,    39,    40,    42,
      43,    44,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    86,    87,    91,    92,    93,    94,    99,   101,
     127,   128,   131,   144,   145,   146,   147,   149,   152,   153,
     157,   162,   181,    98,   164,   163,   170,   163,   163,   188,
     174,    96,   174,   131,   174,   167,   167,   178,   103,   123,
     171,   188,   174,   167,   138,   165,   167,   167,   167,   167,
     167,   131,   131,   131,   131,   131,   131,   131,    34,    35,
      45,   126,   131,    44,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    92,    93,    95,   167,
     167,   167,   167,   167,   167,   111,   112,   113,   158,   121,
     125,   133,   134,   188,   119,   120,   123,   180,   109,   119,
     106,   123,   123,   106,   106,   123,   129,   130,    97,   111,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   123,   123,   123,   123,   106,   151,   188,
      97,   123,   160,   161,    98,   174,   111,   181,   111,   113,
     113,    99,   131,    70,   100,   113,    98,   148,   188,    98,
     150,   188,   113,   113,    82,    83,   159,   125,   123,   135,
     177,   107,   123,   123,   131,   123,   123,   106,   160,   123,
     174,   169,   177,   113,   113,   158,   133,   136,   188,   170,
     169,   123,   123,   111,    19,   155,   188,   107,   177,   169,
     177,   169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   107,   108,   110,   109,
     112,   111,   114,   113,   115,   116,   117,   118,   118,   119,
     119,   120,   121,   122,   124,   123,   125,   126,   126,   126,
     127,   127,   128,   128,   130,   129,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   133,   133,   134,   134,   134,   135,
     135,   136,   136,   137,   138,   139,   139,   140,   140,   141,
     142,   143,   144,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   154,   155,   155,   156,   157,
     158,   159,   159,   161,   160,   162,   162,   162,   162,   163,
     164,   166,   165,   168,   167,   169,   170,   171,   171,   172,
     172,   173,   175,   174,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   177,   177,   178,   178,   179,   179,
     179,   180,   181,   181,   182,   183,   183,   183,   184,   185,
     185,   186,   187,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     0,     2,
       0,     2,     0,     2,     3,     1,     1,     2,     2,     1,
       1,     2,     2,     1,     0,     2,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     2,     3,     5,     7,     4,     4,
       3,     3,     3,     3,     1,     2,     2,     1,     9,     3,
       0,     1,     1,     0,     2,     2,     3,     6,     7,     1,
       1,     0,     2,     0,     2,     0,     0,     1,     1,     1,
       1,     2,     0,     2,     1,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     3,     1,     3,     1,     3,     2,     1,
       1,     2,     7,     0
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
#line 120 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *multargs(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 1682 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *firstarg(&(yyvsp[0]));
    }
#line 1690 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 130 "grammar" /* yacc.c:1646  */
    {
        gp_breakOK++;
    }
#line 1698 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 136 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *break_stmnt();
    }
#line 1706 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 141 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closebrace_expected;
        symtab_pop();
    }
#line 1715 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closepar_expected; 
    }
#line 1723 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 154 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_comma_expected; 
    }
#line 1731 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 163 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 1739 "parse.c" /* yacc.c:1646  */
    break;

  case 15:
#line 169 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *continue_stmnt();
    }
#line 1747 "parse.c" /* yacc.c:1646  */
    break;

  case 16:
#line 175 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1755 "parse.c" /* yacc.c:1646  */
    break;

  case 21:
#line 196 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1763 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1771 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "grammar" /* yacc.c:1646  */
    {
        defineVar();    /* the first n variables of a function, up to the
                            end of the parameter list are the parameters. */
    }
#line 1780 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 217 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1788 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 221 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1796 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 227 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(&(yyvsp[0]));
    }
#line 1804 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 242 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        gp_stringbuf = rss_strcat(gp_stringbuf, util_string());
    }
#line 1812 "parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 247 "grammar" /* yacc.c:1646  */
    {
        free(gp_stringbuf);                  /* free former string */
        gp_stringbuf = rss_strdup(util_string()); /* duplicate initial string */
    }
#line 1821 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 258 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1829 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 264 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1837 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 274 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1845 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 282 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1853 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 289 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), multiply, "*=");
        }
#line 1861 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 296 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), divide, "/=");
        }
#line 1869 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 303 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), modulo, "%=");
        }
#line 1877 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 310 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), addition, "+=");
        }
#line 1885 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 317 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), subtract, "-=");
        }
#line 1893 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 324 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), band, "&=");
        }
#line 1901 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 331 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), bor, "|=");
        }
#line 1909 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 338 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), xor, "^=");
        }
#line 1917 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 345 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shl, "<<=");
        }
#line 1925 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 352 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shr, ">>=");
        }
#line 1933 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 359 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *or_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1941 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 366 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *and_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1949 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 373 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1957 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 380 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1965 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 389 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1973 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 396 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1981 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 403 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1989 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 410 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *sm_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1997 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 417 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *gr_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2005 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 424 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2013 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 431 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *band(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2021 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 438 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2029 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 445 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2037 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 452 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2045 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 459 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2053 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 466 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2061 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 473 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2069 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 480 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2077 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 487 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2085 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 494 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2093 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 501 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2101 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 507 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *negate(&(yyvsp[0]));
        }
#line 2109 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 513 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2117 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 519 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2125 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 525 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2133 "parse.c" /* yacc.c:1646  */
    break;

  case 73:
#line 531 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2141 "parse.c" /* yacc.c:1646  */
    break;

  case 74:
#line 537 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2149 "parse.c" /* yacc.c:1646  */
    break;

  case 75:
#line 543 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bnot(&(yyvsp[0]));
        }
#line 2157 "parse.c" /* yacc.c:1646  */
    break;

  case 76:
#line 549 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *not_boolean(&(yyvsp[0]));
        }
#line 2165 "parse.c" /* yacc.c:1646  */
    break;

  case 77:
#line 557 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2173 "parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 562 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_str | e_const);
        }
#line 2181 "parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 567 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
        }
#line 2189 "parse.c" /* yacc.c:1646  */
    break;

  case 80:
#line 574 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2197 "parse.c" /* yacc.c:1646  */
    break;

  case 82:
#line 583 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[-1]));
        }
#line 2205 "parse.c" /* yacc.c:1646  */
    break;

  case 83:
#line 590 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2213 "parse.c" /* yacc.c:1646  */
    break;

  case 84:
#line 599 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2221 "parse.c" /* yacc.c:1646  */
    break;

  case 90:
#line 618 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2230 "parse.c" /* yacc.c:1646  */
    break;

  case 93:
#line 642 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *for_stmnt(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2238 "parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 686 "grammar" /* yacc.c:1646  */
    {
        symtab_setFunParams(); /* the # variables so far are the parameters */
    }
#line 2246 "parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 693 "grammar" /* yacc.c:1646  */
    {
        open_fun();
    }
#line 2254 "parse.c" /* yacc.c:1646  */
    break;

  case 101:
#line 704 "grammar" /* yacc.c:1646  */
    {
        close_fun(&(yyvsp[-1]));
    }
#line 2262 "parse.c" /* yacc.c:1646  */
    break;

  case 135:
#line 785 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2270 "parse.c" /* yacc.c:1646  */
    break;

  case 139:
#line 801 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2278 "parse.c" /* yacc.c:1646  */
    break;

  case 143:
#line 816 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = functionIdx();
    }
#line 2286 "parse.c" /* yacc.c:1646  */
    break;

  case 144:
#line 824 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *zeroargs((yyvsp[-1]).type);
    }
#line 2294 "parse.c" /* yacc.c:1646  */
    break;

  case 145:
#line 831 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *onearg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2302 "parse.c" /* yacc.c:1646  */
    break;

  case 146:
#line 840 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *twoargs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2310 "parse.c" /* yacc.c:1646  */
    break;

  case 147:
#line 851 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *threeargs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2318 "parse.c" /* yacc.c:1646  */
    break;

  case 148:
#line 859 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_string((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2326 "parse.c" /* yacc.c:1646  */
    break;

  case 149:
#line 867 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_special((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2334 "parse.c" /* yacc.c:1646  */
    break;

  case 150:
#line 874 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_printf, &(yyvsp[0]));
    }
#line 2342 "parse.c" /* yacc.c:1646  */
    break;

  case 151:
#line 881 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *exec_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2350 "parse.c" /* yacc.c:1646  */
    break;

  case 152:
#line 888 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_strformat, &(yyvsp[0]));
    }
#line 2358 "parse.c" /* yacc.c:1646  */
    break;

  case 153:
#line 895 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *callfun((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2366 "parse.c" /* yacc.c:1646  */
    break;

  case 155:
#line 904 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2374 "parse.c" /* yacc.c:1646  */
    break;

  case 156:
#line 912 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2382 "parse.c" /* yacc.c:1646  */
    break;

  case 158:
#line 929 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *if_stmnt(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        symtab_pop();
    }
#line 2391 "parse.c" /* yacc.c:1646  */
    break;

  case 159:
#line 945 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2399 "parse.c" /* yacc.c:1646  */
    break;

  case 160:
#line 951 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = O_FILE;
    }
#line 2408 "parse.c" /* yacc.c:1646  */
    break;

  case 163:
#line 964 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2416 "parse.c" /* yacc.c:1646  */
    break;

  case 164:
#line 968 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2424 "parse.c" /* yacc.c:1646  */
    break;

  case 165:
#line 976 "grammar" /* yacc.c:1646  */
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
#line 2440 "parse.c" /* yacc.c:1646  */
    break;

  case 166:
#line 992 "grammar" /* yacc.c:1646  */
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
#line 2456 "parse.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1010 "grammar" /* yacc.c:1646  */
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
#line 2476 "parse.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1033 "grammar" /* yacc.c:1646  */
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
#line 2496 "parse.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1051 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2504 "parse.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1057 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2512 "parse.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1062 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2520 "parse.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1066 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2528 "parse.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1072 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2536 "parse.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1078 "grammar" /* yacc.c:1646  */
    {
        pop_dead();
    }
#line 2544 "parse.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1083 "grammar" /* yacc.c:1646  */
    {
        push_dead();                    /* set new dead-level */
    }
#line 2552 "parse.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1102 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *return_stmnt((yyvsp[-1]).type, &(yyvsp[0]));
    }
#line 2560 "parse.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1109 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2568 "parse.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1119 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2576 "parse.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1147 "grammar" /* yacc.c:1646  */
    {
        util_resetSemErr();
    }
#line 2584 "parse.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1156 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *cat_stmnt(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2592 "parse.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1172 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2601 "parse.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1184 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2609 "parse.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1191 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 2617 "parse.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1200 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2626 "parse.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1210 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2634 "parse.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1221 "grammar" /* yacc.c:1646  */
    {
        gp_init = *catcode(&gp_init, &(yyvsp[0]));
    }
#line 2642 "parse.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1240 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *while_stmnt(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2650 "parse.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1245 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(0);   /* by default initializes a variable to 0 */
    }
#line 2658 "parse.c" /* yacc.c:1646  */
    break;


#line 2662 "parse.c" /* yacc.c:1646  */
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
#line 1250 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
