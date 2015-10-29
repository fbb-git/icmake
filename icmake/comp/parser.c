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
#line 3 "parser" /* yacc.c:339  */


#include "iccomp.h"


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
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    C_BASE = 265,
    C_EXT = 266,
    C_PATH = 267,
    G_BASE = 268,
    G_EXT = 269,
    G_DEXT = 270,
    G_PATH = 271,
    ELEMENT = 272,
    ELSE = 273,
    EXEC = 274,
    EXECUTE = 275,
    EXISTS = 276,
    EXIT = 277,
    FGETS = 278,
    FIELDS = 279,
    FOR = 280,
    FPRINTF = 281,
    GETENV = 282,
    GETCH = 283,
    GETPID = 284,
    GETS = 285,
    IDENTIFIER = 286,
    IF = 287,
    INT = 288,
    LIST = 289,
    MAKELIST = 290,
    M_ECHO = 291,
    NUMBER = 292,
    PRINTF = 293,
    PUTENV = 294,
    RETURN = 295,
    SIZEOFLIST = 296,
    STAT = 297,
    STRING = 298,
    STRINGTYPE = 299,
    STRLEN = 300,
    STRLWR = 301,
    STRUPR = 302,
    STRFIND = 303,
    STRFORMAT = 304,
    SUBSTR = 305,
    SYSTEM = 306,
    TRIM = 307,
    TRIMLEFT = 308,
    TRIMRIGHT = 309,
    VOID = 310,
    WHILE = 311,
    AND_IS = 312,
    OR_IS = 313,
    XOR_IS = 314,
    SHL_IS = 315,
    SHR_IS = 316,
    DIV_IS = 317,
    MINUS_IS = 318,
    MUL_IS = 319,
    MOD_IS = 320,
    PLUS_IS = 321,
    OR = 322,
    AND = 323,
    EQUAL = 324,
    NOT_EQUAL = 325,
    SMALLER_EQUAL = 326,
    GREATER_EQUAL = 327,
    OLDER = 328,
    YOUNGER = 329,
    SHL = 330,
    SHR = 331,
    INC = 332,
    DEC = 333
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

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "parser.c" /* yacc.c:358  */

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
#define YYLAST   855

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    87,    72,     2,
      99,    95,    85,    83,    96,    84,     2,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   100,
      75,    57,    76,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    98,    71,     2,    93,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,    70,    94,    91,     2,     2,     2,
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
      55,    56,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    73,    74,    77,    78,    79,    80,
      81,    82,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   115,   120,   127,   134,   140,   147,   149,
     151,   154,   154,   155,   155,   156,   156,   157,   157,   160,
     166,   170,   176,   180,   189,   192,   197,   203,   207,   214,
     221,   221,   231,   238,   246,   253,   260,   267,   274,   281,
     288,   295,   302,   309,   316,   323,   330,   337,   344,   351,
     358,   365,   372,   379,   386,   393,   400,   407,   414,   421,
     428,   435,   442,   449,   456,   462,   468,   474,   480,   486,
     492,   498,   504,   512,   517,   522,   529,   531,   540,   547,
     554,   558,   563,   580,   590,   593,   600,   606,   613,   622,
     633,   641,   649,   656,   663,   670,   677,   681,   688,   695,
     710,   713,   723,   728,   743,   752,   754,   758,   766,   772,
     777,   792,   807,   829,   854,   863,   870,   877,   884,   884,
     892,   894,   898,   900,   902,   904,   906,   908,   910,   912,
     914,   916,   918,   920,   922,   924,   926,   928,   930,   932,
     934,   936,   939,   939,   940,   940,   943,   945,   949,   951,
     958,   960,   964,   966,   970,   972,   974,   978,   980,   984,
     985,   989,   991,   997,  1001,  1005,  1013,  1019,  1027,  1035,
    1037,  1040,  1040,  1043,  1050,  1056,  1060,  1062,  1068,  1071,
    1073,  1075,  1077,  1080,  1083,  1088,  1094,  1103,  1105,  1107,
    1109,  1111,  1113,  1115,  1119,  1123,  1132,  1140,  1148,  1150,
    1159,  1164,  1168,  1170,  1172,  1176,  1183,  1188,  1204,  1206,
    1208,  1212
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARG_HEAD", "ARG_TAIL", "ASCII", "BREAK",
  "CHDIR", "CMD_HEAD", "CMD_TAIL", "C_BASE", "C_EXT", "C_PATH", "G_BASE",
  "G_EXT", "G_DEXT", "G_PATH", "ELEMENT", "ELSE", "EXEC", "EXECUTE",
  "EXISTS", "EXIT", "FGETS", "FIELDS", "FOR", "FPRINTF", "GETENV", "GETCH",
  "GETPID", "GETS", "IDENTIFIER", "IF", "INT", "LIST", "MAKELIST",
  "M_ECHO", "NUMBER", "PRINTF", "PUTENV", "RETURN", "SIZEOFLIST", "STAT",
  "STRING", "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR", "STRFIND",
  "STRFORMAT", "SUBSTR", "SYSTEM", "TRIM", "TRIMLEFT", "TRIMRIGHT", "VOID",
  "WHILE", "'='", "AND_IS", "OR_IS", "XOR_IS", "SHL_IS", "SHR_IS",
  "DIV_IS", "MINUS_IS", "MUL_IS", "MOD_IS", "PLUS_IS", "OR", "AND", "'|'",
  "'^'", "'&'", "EQUAL", "NOT_EQUAL", "'<'", "'>'", "SMALLER_EQUAL",
  "GREATER_EQUAL", "OLDER", "YOUNGER", "SHL", "SHR", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "INC", "DEC", "'~'", "'['", "'`'", "'}'", "')'",
  "','", "'{'", "']'", "'('", "';'", "$accept", "input", "args",
  "break_ok", "break_stat", "casttype", "backtick", "$@1", "closebrace",
  "$@2", "closepar", "$@3", "comma", "$@4", "comma_arglist", "comma_expr",
  "compound", "def_var_or_fun", "else_tail", "enterid", "entervarid",
  "err_expression", "$@5", "expression", "expr_code", "expr_list", "for",
  "for_stat", "funcdef", "func_or_var", "function", "funid", "funname",
  "funvars", "idexpr", "if", "if_stat", "initassign", "leave_key",
  "local_list", "locals", "makelist", "makelist_expr", "makelist_normal",
  "nesting", "ok", "older_younger", "$@6", "old_young", "one_arg_funs",
  "openpar", "$@7", "openbrace", "$@8", "opt_arglist", "opt_expression",
  "opt_expr_list", "optint_special", "optint_string", "opt_locals",
  "opt_parlist", "opt_vartype", "pars", "partype", "popdead", "pushdead",
  "return_stat", "return_tail", "semicol", "$@9", "statement",
  "statements", "stm", "string", "two_arg_funs", "three_arg_funs",
  "type_of_var", "vardefs", "varnames", "var_or_fun", "vartype",
  "voidtype", "while", "while_stat", "zero_arg_funs", "zeroframe", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,    61,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     124,    94,    38,   324,   325,    60,    62,   326,   327,   328,
     329,   330,   331,    43,    45,    42,    47,    37,    33,   332,
     333,   126,    91,    96,   125,    41,    44,   123,    93,    40,
      59
};
# endif

#define YYPACT_NINF -308

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-308)))

#define YYTABLE_NINF -212

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,  -308,  -308,  -308,  -308,    14,  -308,     7,  -308,  -308,
     -18,  -308,  -308,   -83,   -79,   -25,    -6,  -308,  -308,  -308,
    -308,   -63,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   678,
    -308,    -8,   -57,    21,   -43,  -308,   -46,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,   -44,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,   678,   678,   678,   678,   678,   678,   678,   585,   763,
    -308,  -308,  -308,  -308,   -28,  -308,  -308,  -308,    27,  -308,
    -308,  -308,   387,  -308,   -23,   -22,  -308,    21,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,   -62,   -62,   -62,
     -62,   -62,   -62,   763,  -308,  -308,  -308,   -19,   763,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
    -308,  -308,   678,  -308,   -17,   -16,   -34,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,   -83,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,   -13,  -308,  -308,   678,
    -308,  -308,  -308,  -308,  -308,    -1,  -308,  -308,  -308,  -308,
    -308,  -308,    -8,  -308,   -12,  -308,  -308,    34,    52,  -308,
      -9,   678,  -308,   763,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,    38,   225,   286,    59,   371,   469,
     469,     6,     6,     6,     6,     6,     6,    72,    72,   103,
     103,   -62,   -62,   -62,   721,  -308,    57,  -308,  -308,    58,
    -308,   -30,  -308,   -21,    -2,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,   387,  -308,  -308,  -308,   763,  -308,    -1,  -308,
    -308,  -308,  -308,  -308,  -308,    -8,    66,  -308,  -308,  -308,
     -62,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,    70,  -308,  -308,
    -308,  -308,  -308,    -8,  -308,     8,  -308,  -308,  -308,  -308,
    -308,    75,  -308,  -308,  -308,  -308,     3,   487,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   487,  -308,
    -308,   -16,  -308,  -308,  -308,   149,  -308,  -308,   487,  -308,
    -308,   487,  -308,  -308,  -308,  -308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     162,   202,   204,   203,   205,   162,     3,     0,   161,   195,
       0,     1,     2,     0,    28,   211,     0,   201,   142,   198,
     200,    17,    24,    97,    25,   117,   211,   100,   104,     0,
     211,   160,     0,     0,     0,   196,     0,   199,   128,   129,
     122,   155,   127,   126,   188,   187,   189,   130,   132,   133,
     131,   190,   152,   153,   124,   191,   192,   142,   135,   208,
     209,   210,    85,   142,   125,    74,   142,   134,   123,   154,
     186,   136,   138,   137,   193,   142,   194,   156,   139,   140,
     141,     0,     0,     0,     0,     0,     0,     0,     0,   101,
      76,    15,   142,    96,    17,   142,   142,   142,    73,   142,
     142,   142,     0,   175,     0,    17,   164,     0,   143,    28,
     197,    18,   172,    30,    30,    30,    30,    69,    64,    71,
      65,    67,    70,    11,     8,     9,    10,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    68,     0,    84,     0,    30,    30,   110,    30,    30,
      30,   185,    30,    30,    86,     0,     7,   106,   167,   167,
     105,   167,   211,   211,   171,    83,     0,   176,    78,     0,
     171,   142,   181,   142,   180,    30,   171,   174,   173,   142,
     179,   144,     0,   165,    17,     5,   114,    17,    17,    77,
       0,     0,    75,    32,    39,    40,    41,    42,    43,    35,
      38,    34,    36,    37,    44,    45,    54,    55,    53,    46,
      47,    48,    49,    50,    51,    61,    60,    56,    57,    52,
      58,    59,    62,    63,     0,    16,    17,    95,   147,    17,
      17,     0,    87,   211,   211,    17,    17,   184,    81,   116,
     102,   206,     0,   177,   183,    14,    31,   178,    30,    30,
     169,   168,   170,   182,    30,   211,     0,   163,    30,    12,
      72,    33,   118,    30,   120,   121,   119,    30,    91,    20,
      30,    90,    22,    30,    30,    23,    80,   150,   171,   151,
      15,    15,   109,   157,    99,     0,   158,   145,     4,    17,
     115,    17,    21,    88,    17,    30,    30,     0,     6,   108,
     107,    30,   112,    30,    79,   148,   171,   166,     0,   113,
      89,    30,   167,   166,    15,   211,   207,     6,     0,   166,
      27,     0,    26,   103,   166,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,  -100,  -260,  -308,  -308,  -308,  -308,   -91,  -308,
    -125,  -308,   -20,  -308,  -308,  -308,  -308,   167,  -308,    76,
    -308,  -109,  -308,   194,  -249,  -308,  -308,  -308,   169,  -308,
    -308,  -308,  -308,  -308,   144,  -308,  -308,  -308,  -308,  -121,
    -308,  -308,  -308,  -124,  -138,    16,   -88,  -308,  -308,  -308,
       5,  -308,  -308,  -308,  -308,  -308,  -134,  -308,  -308,  -308,
    -308,  -308,  -308,    -3,  -304,  -132,  -308,  -308,  -172,  -308,
    -307,    19,  -308,  -308,  -308,  -308,   -29,  -103,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,   -15
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   204,   328,   184,   127,   209,   210,   185,   186,
     163,   164,   278,    34,   288,   291,   187,     6,   339,    15,
      16,   188,   189,    89,   190,   297,   191,   192,    17,    90,
      91,    18,    92,    30,    19,   193,   194,    29,   195,   302,
     303,    93,    94,   167,   258,    26,   250,   251,   286,    95,
      31,    32,   275,   276,   247,   326,   298,    96,    97,   304,
     104,     7,   105,   106,   332,   259,   196,   271,    35,    36,
     197,   102,   198,    98,    99,   100,     8,    20,    21,    22,
       9,    10,   199,   200,   101,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    33,   107,   212,   205,   206,   205,   205,    13,    13,
     327,    37,   264,    23,    11,   207,   208,    25,   267,   296,
     -97,   333,     1,     2,   273,     1,     2,   160,   161,   336,
     162,   342,   -29,     3,   344,   343,     3,  -171,    14,   109,
     345,   260,   108,   261,     4,  -118,  -118,     1,     2,   284,
     285,    28,   109,   111,   112,   -98,   205,   249,     3,   252,
     253,   254,   113,   255,   256,   246,   324,  -115,   114,     4,
     171,   115,   201,  -159,   166,   287,   211,   341,   245,  -211,
     116,   265,   296,   -93,   279,   202,   270,   153,   154,   155,
     156,   157,   158,   159,   290,   160,   161,   165,   162,  -211,
     168,   169,   170,  -149,   172,   173,   174,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   316,   160,   161,   -92,
     162,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   -94,   160,   161,
     248,   162,  -146,  -111,   331,   155,   156,   157,   158,   159,
     300,   160,   161,   307,   162,   301,   315,   338,   263,   308,
     -19,   295,    12,   107,   310,   317,   318,   110,   205,    24,
     272,   312,   319,   203,   313,   314,   322,   311,   157,   158,
     159,   257,   160,   161,   309,   162,   268,   334,   269,   277,
     335,   262,   320,     0,   274,     0,     0,   325,     0,   337,
       0,     0,   329,     0,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
     283,     0,     0,     0,     0,   293,   294,     0,   289,   292,
       0,     0,     0,     0,     0,     0,   305,     0,     0,     0,
       0,     0,     0,   299,     0,     0,     0,     0,     0,     0,
     306,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   305,   117,   118,   119,   120,   121,
     122,   123,   128,     0,     0,     0,     0,     0,     0,   321,
       0,     0,     0,     0,   323,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,     0,   160,   161,   299,   162,     0,     0,
     340,     0,     0,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,     0,     0,   244,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,     0,   160,   161,     0,   162,     0,
       0,     0,     0,   266,     0,     0,     0,     0,   175,     0,
     -30,   -30,   -30,   176,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   280,   -30,   -30,   -30,   177,
     -30,   -30,   178,   -30,   -30,   -30,   -30,   -30,   -30,   179,
       0,     0,   -30,   -30,   -30,   -30,   -30,   180,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   181,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,     0,
     160,   161,     0,   162,     0,     0,     0,     0,     0,     0,
     -30,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
     -30,   -13,     0,     0,   182,     0,   -30,   183,   175,     0,
     -30,   -30,   -30,   176,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   177,
     -30,   -30,   178,   -30,   -30,   -30,   -30,   -30,   -30,   179,
       0,     0,   -30,   -30,   -30,   -30,   -30,   180,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   181,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,   160,   161,
       0,   162,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
     -30,     0,     0,     0,   182,     0,   -30,   183,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,    52,    53,    54,     0,    55,    56,
       0,    57,    58,    59,    60,    61,    62,     0,   124,   125,
      63,    64,    65,    66,    67,     0,    68,    69,    70,   126,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
       0,     0,     0,    83,    84,    85,    86,     0,    87,     0,
       0,    38,    39,    40,    88,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,    52,    53,    54,
       0,    55,    56,     0,    57,    58,    59,    60,    61,    62,
       0,     0,     0,    63,    64,    65,    66,    67,     0,    68,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,    82,     0,     0,     0,    83,    84,    85,    86,
       0,    87,     0,     0,     0,     0,     0,    88,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,     0,
     160,   161,     0,   162,     0,     0,     0,     0,     0,   281,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,     0,   160,   161,     0,   162
};

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   128,   113,   114,   115,   116,     1,     1,
     317,    26,   184,    31,     0,   115,   116,   100,   190,   268,
      99,   328,    33,    34,   196,    33,    34,    89,    90,   333,
      92,   338,    57,    44,   341,   339,    44,   100,    31,    31,
     344,   179,    99,   181,    55,    79,    80,    33,    34,    79,
      80,    57,    31,    96,   100,    99,   165,   166,    44,   168,
     169,   170,    57,   172,   173,   165,   315,    95,    63,    55,
      43,    66,    95,    95,    94,    96,    95,   337,    95,    95,
      75,    94,   331,    95,    93,   105,   195,    81,    82,    83,
      84,    85,    86,    87,    96,    89,    90,    92,    92,   100,
      95,    96,    97,   100,    99,   100,   101,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,   298,    89,    90,    95,
      92,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    95,    89,    90,
     165,    92,    95,    95,   326,    83,    84,    85,    86,    87,
     269,    89,    90,    97,    92,   274,    96,    18,   183,   278,
      95,   262,     5,   202,   283,   300,   301,    33,   287,    10,
     195,   290,   303,   107,   293,   294,   310,   287,    85,    86,
      87,   175,    89,    90,   282,    92,   191,   331,   193,   202,
     332,   182,   305,    -1,   199,    -1,    -1,   316,    -1,   334,
      -1,    -1,   321,    -1,   323,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
     250,    -1,    -1,    -1,    -1,   255,   256,    -1,   253,   254,
      -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,   314,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    90,   331,    92,    -1,    -1,
     335,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    -1,    -1,   162,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    -1,    92,    -1,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   211,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    88,    89,    90,    91,    -1,
      93,    94,    -1,    -1,    97,    -1,    99,   100,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    90,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    88,    89,    90,    91,    -1,
      93,    -1,    -1,    -1,    97,    -1,    99,   100,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    -1,
      -1,     3,     4,     5,    99,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    -1,    -1,    88,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    99,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    34,    44,    55,   102,   118,   162,   177,   181,
     182,     0,   118,     1,    31,   120,   121,   129,   132,   135,
     178,   179,   180,    31,   129,   100,   146,   186,    57,   138,
     134,   151,   152,   113,   114,   169,   170,   186,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    19,    20,    21,    23,    24,    26,    27,    28,
      29,    30,    31,    35,    36,    37,    38,    39,    41,    42,
      43,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    83,    84,    88,    89,    90,    91,    93,    99,   124,
     130,   131,   133,   142,   143,   150,   158,   159,   174,   175,
     176,   185,   172,   186,   161,   163,   164,   177,    99,    31,
     135,    96,   100,   151,   151,   151,   151,   124,   124,   124,
     124,   124,   124,   124,    33,    34,    44,   106,   124,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      89,    90,    92,   111,   112,   151,   113,   144,   151,   151,
     151,    43,   151,   151,   151,     1,     6,    22,    25,    32,
      40,    56,    97,   100,   105,   109,   110,   117,   122,   123,
     125,   127,   128,   136,   137,   139,   167,   171,   173,   183,
     184,    95,   113,   120,   103,   122,   122,   103,   103,   107,
     108,    95,   111,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,    95,   103,   155,   186,   122,
     147,   148,   122,   122,   122,   122,   122,   146,   145,   166,
     145,   145,   172,   186,   169,    94,   124,   169,   151,   151,
     122,   168,   186,   169,   151,   153,   154,   164,   113,    93,
     124,    98,   113,   113,    79,    80,   149,    96,   115,   186,
      96,   116,   186,   113,   113,   109,   125,   126,   157,   186,
     122,   122,   140,   141,   160,   177,   186,    97,   122,   147,
     122,   103,   122,   122,   122,    96,   169,   111,   111,   140,
     178,   113,   144,   113,   125,   122,   156,   171,   104,   122,
     122,   169,   165,   171,   157,   166,   165,   111,    18,   119,
     186,   104,   171,   165,   171,   165
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   103,   103,   104,   105,   106,   106,
     106,   108,   107,   110,   109,   112,   111,   114,   113,   115,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   121,
     123,   122,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   126,
     126,   127,   128,   129,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   133,   134,
     135,   135,   136,   137,   138,   139,   139,   140,   141,   141,
     142,   142,   142,   142,   143,   144,   145,   146,   148,   147,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   152,   151,   154,   153,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   165,   166,   167,   168,
     168,   170,   169,   171,   172,   172,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   176,   177,   178,   179,   179,   179,
     180,   180,   181,   181,   181,   182,   183,   184,   185,   185,
     185,   186
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     2,     0,     2,     2,
       1,     2,     1,     3,     2,     2,     2,     1,     1,     1,
       0,     2,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     1,     3,     1,     3,     1,     3,
       1,     2,    11,     4,     2,     1,     2,     3,     5,     7,
       4,     4,     3,     3,     3,     3,     1,     1,     1,     5,
       2,     3,     2,     9,     1,     1,     1,     2,     2,     1,
       2,     3,     6,     7,     3,     0,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     3,     1,     2,     0,     0,     2,     1,
       1,     0,     2,     1,     2,     1,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     7,     1,     1,
       1,     0
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
#line 123 "parser" /* yacc.c:1646  */
    {
            (yyval) = *multargs(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1665 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 128 "parser" /* yacc.c:1646  */
    {
            (yyval) = *firstarg(&(yyvsp[0]));
        }
#line 1673 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "parser" /* yacc.c:1646  */
    {
            break_ok++;
        }
#line 1681 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "parser" /* yacc.c:1646  */
    {
            (yyval) = *break_stmnt();
        }
#line 1689 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "parser" /* yacc.c:1646  */
    {parse_error = err_backtick_expected; }
#line 1695 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 155 "parser" /* yacc.c:1646  */
    {parse_error = err_closebrace_expected; }
#line 1701 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 156 "parser" /* yacc.c:1646  */
    {parse_error = err_closepar_expected; }
#line 1707 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 157 "parser" /* yacc.c:1646  */
    {parse_error = err_comma_expected; }
#line 1713 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 162 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1721 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 172 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1729 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 183 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 1737 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 199 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1745 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 208 "parser" /* yacc.c:1646  */
    {
            entervar();
        }
#line 1753 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 215 "parser" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1761 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 221 "parser" /* yacc.c:1646  */
    {
            parse_error = err_in_expression;
        }
#line 1769 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 225 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1777 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 234 "parser" /* yacc.c:1646  */
    {
            (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1785 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 242 "parser" /* yacc.c:1646  */
    {
            (yyval) = *indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1793 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 249 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), multiply, "*=");
        }
#line 1801 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 256 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), divide, "/=");
        }
#line 1809 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 263 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), modulo, "%=");
        }
#line 1817 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 270 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), addition, "+=");
        }
#line 1825 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 277 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), subtract, "-=");
        }
#line 1833 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 284 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), band, "&=");
        }
#line 1841 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 291 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), bor, "|=");
        }
#line 1849 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 298 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), xor, "^=");
        }
#line 1857 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 305 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shl, "<<=");
        }
#line 1865 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 312 "parser" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shr, ">>=");
        }
#line 1873 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 319 "parser" /* yacc.c:1646  */
    {
            (yyval) = *or_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1881 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 326 "parser" /* yacc.c:1646  */
    {
            (yyval) = *and_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1889 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 333 "parser" /* yacc.c:1646  */
    {
            (yyval) = *equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1897 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 340 "parser" /* yacc.c:1646  */
    {
            (yyval) = *unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1905 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 347 "parser" /* yacc.c:1646  */
    {
            (yyval) = *smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1913 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 354 "parser" /* yacc.c:1646  */
    {
            (yyval) = *greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1921 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 361 "parser" /* yacc.c:1646  */
    {
            (yyval) = *sm_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1929 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 368 "parser" /* yacc.c:1646  */
    {
            (yyval) = *gr_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1937 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 375 "parser" /* yacc.c:1646  */
    {
            (yyval) = *addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1945 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 382 "parser" /* yacc.c:1646  */
    {
            (yyval) = *band(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1953 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 389 "parser" /* yacc.c:1646  */
    {
            (yyval) = *bor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1961 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 396 "parser" /* yacc.c:1646  */
    {
            (yyval) = *xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1969 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 403 "parser" /* yacc.c:1646  */
    {
            (yyval) = *shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1977 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 410 "parser" /* yacc.c:1646  */
    {
            (yyval) = *shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1985 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 417 "parser" /* yacc.c:1646  */
    {
            (yyval) = *subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1993 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 424 "parser" /* yacc.c:1646  */
    {
            (yyval) = *multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2001 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 431 "parser" /* yacc.c:1646  */
    {
            (yyval) = *young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2009 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 438 "parser" /* yacc.c:1646  */
    {
            (yyval) = *old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2017 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 445 "parser" /* yacc.c:1646  */
    {
            (yyval) = *divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2025 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 452 "parser" /* yacc.c:1646  */
    {
            (yyval) = *modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2033 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 458 "parser" /* yacc.c:1646  */
    {
            (yyval) = *negate(&(yyvsp[0]));
        }
#line 2041 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 464 "parser" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2049 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 470 "parser" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2057 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 476 "parser" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2065 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 482 "parser" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2073 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 488 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2081 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 494 "parser" /* yacc.c:1646  */
    {
            (yyval) = *bnot(&(yyvsp[0]));
        }
#line 2089 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 500 "parser" /* yacc.c:1646  */
    {
            (yyval) = *not_boolean(&(yyvsp[0]));
        }
#line 2097 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 508 "parser" /* yacc.c:1646  */
    {
            (yyval) = *cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2105 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 513 "parser" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_str | e_const);
        }
#line 2113 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 518 "parser" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
        }
#line 2121 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 525 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2129 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 534 "parser" /* yacc.c:1646  */
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[-1]));
        }
#line 2137 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 541 "parser" /* yacc.c:1646  */
    {
            (yyval) = *expr_stmnt(&(yyvsp[0]));
        }
#line 2145 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 550 "parser" /* yacc.c:1646  */
    {
            (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2153 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 574 "parser" /* yacc.c:1646  */
    {
            (yyval) = *for_stmnt(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        }
#line 2161 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 584 "parser" /* yacc.c:1646  */
    {
            close_fun(&(yyvsp[-1]));
        }
#line 2169 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 594 "parser" /* yacc.c:1646  */
    {
            (yyval) = *fetchvar();
        }
#line 2177 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 602 "parser" /* yacc.c:1646  */
    {
            (yyval) = *zeroargs((yyvsp[-1]).type);
        }
#line 2185 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 609 "parser" /* yacc.c:1646  */
    {
            (yyval) = *onearg((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2193 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 618 "parser" /* yacc.c:1646  */
    {
            (yyval) = *twoargs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2201 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 629 "parser" /* yacc.c:1646  */
    {
            (yyval) = *threeargs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2209 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 637 "parser" /* yacc.c:1646  */
    {
            (yyval) = *optint_string((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2217 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 645 "parser" /* yacc.c:1646  */
    {
            (yyval) = *optint_special((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2225 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 652 "parser" /* yacc.c:1646  */
    {
            (yyval) = *specials(f_printf, &(yyvsp[0]));
        }
#line 2233 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 659 "parser" /* yacc.c:1646  */
    {
            (yyval) = *exec_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2241 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 666 "parser" /* yacc.c:1646  */
    {
            (yyval) = *specials(f_strformat, &(yyvsp[0]));
        }
#line 2249 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 673 "parser" /* yacc.c:1646  */
    {
            (yyval) = *callfun((yyvsp[-2]).evalue, &(yyvsp[0]));
        }
#line 2257 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 682 "parser" /* yacc.c:1646  */
    {
            open_fun();
        }
#line 2265 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 689 "parser" /* yacc.c:1646  */
    {
            (yyval).evalue = fetchfun();
        }
#line 2273 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 700 "parser" /* yacc.c:1646  */
    {
            make_frame();
            outbin((yyvsp[0]).code, (yyvsp[0]).codelen);
        }
#line 2282 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 716 "parser" /* yacc.c:1646  */
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2291 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 737 "parser" /* yacc.c:1646  */
    {
            (yyval) = *if_stmnt(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        }
#line 2299 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 744 "parser" /* yacc.c:1646  */
    {
        initialization = 1;
    }
#line 2307 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 760 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2315 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 768 "parser" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-1]), &(yyvsp[0]));        /* cat initialization code */
    }
#line 2323 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 779 "parser" /* yacc.c:1646  */
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
#line 2339 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 795 "parser" /* yacc.c:1646  */
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
#line 2355 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 813 "parser" /* yacc.c:1646  */
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
#line 2375 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 836 "parser" /* yacc.c:1646  */
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
#line 2395 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 857 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2403 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 863 "parser" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        }
#line 2412 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 871 "parser" /* yacc.c:1646  */
    {
            nestlevel++;
        }
#line 2420 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 878 "parser" /* yacc.c:1646  */
    {
            yyerrok;
        }
#line 2428 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 884 "parser" /* yacc.c:1646  */
    {parse_error = err_older_younger; }
#line 2434 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 886 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2442 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 939 "parser" /* yacc.c:1646  */
    {parse_error = err_openpar_expected; }
#line 2448 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 940 "parser" /* yacc.c:1646  */
    {parse_error = err_openbrace_expected; }
#line 2454 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 951 "parser" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        }
#line 2463 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 991 "parser" /* yacc.c:1646  */
    {
            vartype = e_int;
        }
#line 2471 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1007 "parser" /* yacc.c:1646  */
    {
            n_params++;
        }
#line 2479 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1013 "parser" /* yacc.c:1646  */
    {
            pop_dead();
        }
#line 2487 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1019 "parser" /* yacc.c:1646  */
    {
            push_dead();                    /* set new dead-level */
        }
#line 2495 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1029 "parser" /* yacc.c:1646  */
    {
            (yyval) = *return_stmnt((yyvsp[-1]).type, &(yyvsp[0]));
        }
#line 2503 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1040 "parser" /* yacc.c:1646  */
    {parse_error = err_semicol_expected; }
#line 2509 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1044 "parser" /* yacc.c:1646  */
    {
            sem_err = 0;
        }
#line 2517 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1052 "parser" /* yacc.c:1646  */
    {
            (yyval) = *cat_stmnt(&(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2525 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1064 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2533 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1090 "parser" /* yacc.c:1646  */
    {
        stringbuf = xstrcat(stringbuf, lexstring);/* catenate the new string */
    }
#line 2541 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1095 "parser" /* yacc.c:1646  */
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(lexstring);     /* duplicate initial string */
    }
#line 2550 "parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1124 "parser" /* yacc.c:1646  */
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[0]).type;
        }
#line 2559 "parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1134 "parser" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);                    /* initialization code */
    }
#line 2567 "parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1143 "parser" /* yacc.c:1646  */
    {
            (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                        /* initialization code  */
        }
#line 2576 "parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1153 "parser" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2584 "parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1160 "parser" /* yacc.c:1646  */
    {
            global_init = *catcode(&global_init, &(yyvsp[0]));
        }
#line 2592 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1177 "parser" /* yacc.c:1646  */
    {
            vartype = 0;
        }
#line 2600 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1195 "parser" /* yacc.c:1646  */
    {
            (yyval) = *while_stmnt(&(yyvsp[-4]), &(yyvsp[-1]));
        }
#line 2608 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1212 "parser" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(0);
        }
#line 2616 "parser.c" /* yacc.c:1646  */
    break;


#line 2620 "parser.c" /* yacc.c:1646  */
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
#line 1216 "parser" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
