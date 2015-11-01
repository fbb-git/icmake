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
    #define YYSTYPE ESTRUC_
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
#define YYLAST   821

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

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
       2,     2,     2,    89,     2,     2,     2,    88,    73,     2,
     100,    96,    86,    84,    97,    85,     2,    87,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   101,
      76,    58,    77,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    99,    72,     2,    94,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    98,    71,    95,    92,     2,     2,     2,
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
      66,    67,    68,    69,    70,    74,    75,    78,    79,    80,
      81,    82,    83,    90,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   112,   117,   124,   131,   137,   144,   151,
     153,   155,   158,   158,   159,   159,   160,   160,   161,   161,
     164,   170,   174,   180,   184,   193,   196,   201,   207,   211,
     218,   225,   225,   235,   242,   250,   257,   264,   271,   278,
     285,   292,   299,   306,   313,   320,   327,   334,   341,   348,
     355,   362,   369,   376,   383,   390,   397,   404,   411,   418,
     425,   432,   439,   446,   453,   460,   466,   472,   478,   484,
     490,   496,   502,   508,   516,   521,   526,   533,   535,   544,
     551,   558,   562,   567,   584,   594,   597,   604,   610,   617,
     626,   637,   645,   653,   660,   667,   674,   681,   685,   692,
     699,   715,   718,   728,   733,   748,   757,   759,   763,   771,
     777,   782,   797,   812,   834,   859,   868,   875,   882,   889,
     889,   897,   899,   903,   905,   907,   909,   911,   913,   915,
     917,   919,   921,   923,   925,   927,   929,   931,   933,   935,
     937,   939,   941,   944,   944,   945,   945,   948,   950,   954,
     956,   963,   965,   969,   971,   975,   977,   979,   983,   985,
     989,   990,   994,   996,  1002,  1006,  1010,  1018,  1024,  1032,
    1040,  1042,  1045,  1045,  1048,  1055,  1061,  1065,  1067,  1073,
    1076,  1078,  1080,  1082,  1085,  1088,  1091,  1096,  1102,  1111,
    1113,  1115,  1117,  1119,  1121,  1123,  1127,  1131,  1140,  1148,
    1156,  1158,  1167,  1172,  1176,  1178,  1180,  1184,  1191,  1196,
    1212,  1214,  1216,  1220
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
  "OR", "AND", "'|'", "'^'", "'&'", "EQUAL", "NOT_EQUAL", "'<'", "'>'",
  "SMALLER_EQUAL", "GREATER_EQUAL", "OLDER", "YOUNGER", "SHL", "SHR",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "INC", "DEC", "'~'", "'['",
  "'`'", "'}'", "')'", "','", "'{'", "']'", "'('", "';'", "$accept",
  "input", "args", "break_ok", "break_stat", "continue_stat", "casttype",
  "backtick", "$@1", "closebrace", "$@2", "closepar", "$@3", "comma",
  "$@4", "comma_arglist", "comma_expr", "compound", "def_var_or_fun",
  "else_tail", "enterid", "entervarid", "err_expression", "$@5",
  "expression", "expr_code", "expr_list", "for", "for_stat", "funcdef",
  "func_or_var", "function", "funid", "funname", "funvars", "idexpr", "if",
  "if_stat", "initassign", "leave_key", "local_list", "locals", "makelist",
  "makelist_expr", "makelist_normal", "nesting", "ok", "older_younger",
  "$@6", "old_young", "one_arg_funs", "openpar", "$@7", "openbrace", "$@8",
  "opt_arglist", "opt_expression", "opt_expr_list", "optint_special",
  "optint_string", "opt_locals", "opt_parlist", "opt_gp_varType", "pars",
  "partype", "popdead", "pushdead", "return_stat", "return_tail",
  "semicol", "$@9", "statement", "statements", "stm", "string",
  "two_arg_funs", "three_arg_funs", "type_of_var", "vardefs", "varnames",
  "var_or_fun", "gp_varType", "voidtype", "while", "while_stat",
  "zero_arg_funs", "zeroframe", YY_NULLPTR
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
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   124,    94,    38,   325,   326,    60,    62,   327,   328,
     329,   330,   331,   332,    43,    45,    42,    47,    37,    33,
     333,   334,   126,    91,    96,   125,    41,    44,   123,    93,
      40,    59
};
# endif

#define YYPACT_NINF -308

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-308)))

#define YYTABLE_NINF -214

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -308,  -308,  -308,  -308,    32,  -308,     7,  -308,  -308,
      -4,  -308,  -308,   -67,   -64,     3,    12,  -308,  -308,  -308,
    -308,   -63,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   685,
    -308,   -12,   -46,    33,   -25,  -308,   -23,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,   -18,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,   685,   685,   685,   685,   685,   685,   685,   591,   728,
    -308,  -308,  -308,  -308,    24,  -308,  -308,  -308,    79,  -308,
    -308,  -308,   391,  -308,    39,    40,  -308,    33,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,   -22,   -22,   -22,
     -22,   -22,   -22,   728,  -308,  -308,  -308,    42,   728,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
    -308,  -308,   685,  -308,    43,    44,   -28,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,   -67,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,    46,  -308,
    -308,   685,  -308,  -308,  -308,  -308,  -308,    36,  -308,  -308,
    -308,  -308,  -308,  -308,   -12,  -308,    48,  -308,  -308,    50,
      51,  -308,    54,   685,  -308,   728,   728,   728,   728,   728,
     728,   728,   728,   728,   728,   728,   120,   227,   288,   376,
     476,   571,   571,   137,   137,   137,   137,   137,   137,    41,
      41,    -7,    -7,   -22,   -22,   -22,    31,  -308,    53,  -308,
    -308,    56,  -308,    -5,  -308,    45,    57,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,   391,  -308,  -308,  -308,  -308,   728,
    -308,    36,  -308,  -308,  -308,  -308,  -308,  -308,   -12,    55,
    -308,  -308,  -308,   -22,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
      58,  -308,  -308,  -308,  -308,  -308,   -12,  -308,    11,  -308,
    -308,  -308,  -308,  -308,    60,  -308,  -308,  -308,  -308,    59,
     492,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,   492,  -308,  -308,    44,  -308,  -308,  -308,   138,  -308,
    -308,   492,  -308,  -308,   492,  -308,  -308,  -308,  -308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     163,   204,   206,   205,   207,   163,     3,     0,   162,   197,
       0,     1,     2,     0,    29,   213,     0,   203,   143,   200,
     202,    18,    25,    98,    26,   118,   213,   101,   105,     0,
     213,   161,     0,     0,     0,   198,     0,   201,   129,   130,
     123,   156,   128,   127,   190,   189,   191,   131,   133,   134,
     132,   192,   153,   154,   125,   193,   194,   143,   136,   210,
     211,   212,    86,   143,   126,    75,   143,   135,   124,   155,
     188,   137,   139,   138,   195,   143,   196,   157,   140,   141,
     142,     0,     0,     0,     0,     0,     0,     0,     0,   102,
      77,    16,   143,    97,    18,   143,   143,   143,    74,   143,
     143,   143,     0,   176,     0,    18,   165,     0,   144,    29,
     199,    19,   173,    31,    31,    31,    31,    70,    65,    72,
      66,    68,    71,    12,     9,    10,    11,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    69,     0,    85,     0,    31,    31,   111,    31,    31,
      31,   187,    31,    31,    87,     0,     7,     8,   107,   168,
     168,   106,   168,   213,   213,   172,   172,    84,     0,   177,
      79,     0,   172,   143,   182,   143,   181,    31,   172,   175,
     174,   143,   180,   145,     0,   166,    18,     5,   115,    18,
      18,    78,     0,     0,    76,    33,    40,    41,    42,    43,
      44,    36,    39,    35,    37,    38,    45,    46,    55,    56,
      54,    47,    48,    49,    50,    51,    52,    62,    61,    57,
      58,    53,    59,    60,    63,    64,     0,    17,    18,    96,
     148,    18,    18,     0,    88,   213,   213,    18,    18,   186,
      82,   117,   103,   208,     0,   178,   184,   185,    15,    32,
     179,    31,    31,   170,   169,   171,   183,    31,   213,     0,
     164,    31,    13,    73,    34,   119,    31,   121,   122,   120,
      31,    92,    21,    31,    91,    23,    31,    31,    24,    81,
     151,   172,   152,    16,    16,   110,   158,   100,     0,   159,
     146,     4,    18,   116,    18,    22,    89,    18,    31,    31,
       0,     6,   109,   108,    31,   113,    31,    80,   149,   172,
     167,     0,   114,    90,    31,   168,   167,    16,   213,   209,
       6,     0,   167,    28,     0,    27,   104,   167,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,  -101,  -182,  -308,  -308,  -308,  -308,  -308,  -105,
    -308,  -119,  -308,   -20,  -308,  -308,  -308,  -308,   158,  -308,
      61,  -308,  -110,  -308,   197,  -261,  -308,  -308,  -308,   154,
    -308,  -308,  -308,  -308,  -308,   132,  -308,  -308,  -308,  -308,
    -140,  -308,  -308,  -308,  -143,  -161,    -3,  -112,  -308,  -308,
    -308,   -50,  -308,  -308,  -308,  -308,  -308,  -160,  -308,  -308,
    -308,  -308,  -308,  -308,   -27,  -307,  -157,  -308,  -308,  -168,
    -308,  -300,    -2,  -308,  -308,  -308,  -308,   -29,  -129,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,   -15
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   206,   331,   185,   186,   127,   211,   212,   187,
     188,   163,   164,   281,    34,   291,   294,   189,     6,   342,
      15,    16,   190,   191,    89,   192,   300,   193,   194,    17,
      90,    91,    18,    92,    30,    19,   195,   196,    29,   197,
     305,   306,    93,    94,   167,   260,    26,   252,   253,   289,
      95,    31,    32,   278,   279,   249,   329,   301,    96,    97,
     307,   104,     7,   105,   106,   335,   261,   198,   274,    35,
      36,   199,   102,   200,    98,    99,   100,     8,    20,    21,
      22,     9,    10,   201,   202,   101,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    33,   107,   207,   208,   207,   207,   113,    13,   214,
     299,    37,    13,   114,   209,   210,   115,   266,   267,   262,
     330,   263,     1,     2,   270,   116,     1,     2,    23,   339,
     276,   336,    11,     3,    25,   346,   -98,     3,  -172,    14,
     348,   345,   165,   109,   347,   168,   169,   170,     4,   172,
     173,   174,  -119,  -119,   108,   207,   251,   327,   254,   255,
     256,   -30,   257,   258,   248,   109,     1,     2,   160,   161,
      28,   162,   111,   299,   166,   287,   288,     3,   112,   157,
     158,   159,   -99,   160,   161,   204,   162,   273,     4,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
    -116,   160,   161,   171,   162,   155,   156,   157,   158,   159,
     284,   160,   161,   319,   162,   203,  -160,  -213,   213,   247,
    -213,   268,   290,   271,   -94,   272,   -93,   -95,   282,  -147,
     250,   277,  -112,   310,   293,   318,   -20,   341,   344,   298,
    -150,   334,   303,    12,    24,   110,   322,   304,   205,   265,
     325,   311,   259,   312,   337,   107,   313,   280,   338,   323,
     207,   264,   275,   315,   320,   321,   316,   317,     0,   314,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   328,
     160,   161,     0,   162,   332,     0,   333,     0,   340,   153,
     154,   155,   156,   157,   158,   159,     0,   160,   161,     0,
     162,   285,   286,     0,     0,     0,     0,   296,   297,     0,
     292,   295,     0,     0,     0,     0,     0,     0,     0,   308,
       0,     0,     0,     0,     0,     0,   302,     0,     0,     0,
       0,     0,     0,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   308,   117,   118,
     119,   120,   121,   122,   123,   128,     0,     0,     0,     0,
       0,     0,   324,     0,     0,     0,     0,   326,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,     0,   160,   161,   302,
     162,     0,     0,   343,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,     0,   246,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,   160,   161,
       0,   162,     0,     0,     0,     0,     0,     0,   269,     0,
       0,     0,   175,     0,   -31,   -31,   -31,   176,   -31,   -31,
     -31,   177,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     283,   -31,   -31,   -31,   178,   -31,   -31,   179,   -31,   -31,
     -31,   -31,   -31,   -31,   180,     0,     0,   -31,   -31,   -31,
     -31,   -31,   181,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   182,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,     0,   160,   161,     0,   162,
       0,     0,     0,     0,     0,   -31,   -31,     0,     0,     0,
     -31,   -31,   -31,   -31,     0,   -31,   -14,     0,     0,   183,
       0,   -31,   184,   175,     0,   -31,   -31,   -31,   176,   -31,
     -31,   -31,   177,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   178,   -31,   -31,   179,   -31,
     -31,   -31,   -31,   -31,   -31,   180,     0,     0,   -31,   -31,
     -31,   -31,   -31,   181,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   182,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,     0,   160,   161,     0,   162,
       0,     0,     0,     0,     0,     0,   -31,   -31,     0,     0,
       0,   -31,   -31,   -31,   -31,     0,   -31,     0,     0,     0,
     183,     0,   -31,   184,    38,    39,    40,     0,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
       0,    52,    53,    54,     0,    55,    56,     0,    57,    58,
      59,    60,    61,    62,     0,   124,   125,    63,    64,    65,
      66,    67,     0,    68,    69,    70,   126,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
       0,   160,   161,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    82,     0,     0,     0,
      83,    84,    85,    86,     0,    87,     0,     0,    38,    39,
      40,    88,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,     0,    52,    53,    54,     0,    55,
      56,     0,    57,    58,    59,    60,    61,    62,     0,     0,
       0,    63,    64,    65,    66,    67,     0,    68,    69,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
      82,     0,     0,     0,    83,    84,    85,    86,     0,    87,
       0,     0,     0,     0,     0,    88,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,   160,   161,
       0,   162
};

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   113,   114,   115,   116,    57,     1,   128,
     271,    26,     1,    63,   115,   116,    66,   185,   186,   180,
     320,   182,    34,    35,   192,    75,    34,    35,    32,   336,
     198,   331,     0,    45,   101,   342,   100,    45,   101,    32,
     347,   341,    92,    32,   344,    95,    96,    97,    56,    99,
     100,   101,    80,    81,   100,   165,   166,   318,   168,   169,
     170,    58,   172,   173,   165,    32,    34,    35,    90,    91,
      58,    93,    97,   334,    94,    80,    81,    45,   101,    86,
      87,    88,   100,    90,    91,   105,    93,   197,    56,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      96,    90,    91,    44,    93,    84,    85,    86,    87,    88,
      99,    90,    91,   301,    93,    96,    96,   101,    96,    96,
      96,    95,    97,   193,    96,   195,    96,    96,    94,    96,
     165,   201,    96,    98,    97,    97,    96,    19,   340,   264,
     101,   329,   272,     5,    10,    33,   306,   277,   107,   184,
     313,   281,   175,   285,   334,   204,   286,   204,   335,   308,
     290,   183,   197,   293,   303,   304,   296,   297,    -1,   290,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   319,
      90,    91,    -1,    93,   324,    -1,   326,    -1,   337,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    -1,
      93,   251,   252,    -1,    -1,    -1,    -1,   257,   258,    -1,
     255,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,
      -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,   312,    -1,    -1,    -1,    -1,   317,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,   334,
      93,    -1,    -1,   338,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    -1,    -1,   162,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     213,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,
      89,    90,    91,    92,    -1,    94,    95,    -1,    -1,    98,
      -1,   100,   101,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,
      -1,    89,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    -1,   100,   101,     3,     4,     5,    -1,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,
      89,    90,    91,    92,    -1,    94,    -1,    -1,     3,     4,
       5,   100,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    89,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      -1,    93
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    45,    56,   103,   120,   164,   179,   183,
     184,     0,   120,     1,    32,   122,   123,   131,   134,   137,
     180,   181,   182,    32,   131,   101,   148,   188,    58,   140,
     136,   153,   154,   115,   116,   171,   172,   188,     3,     4,
       5,     7,     8,     9,    11,    12,    13,    14,    15,    16,
      17,    18,    20,    21,    22,    24,    25,    27,    28,    29,
      30,    31,    32,    36,    37,    38,    39,    40,    42,    43,
      44,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    84,    85,    89,    90,    91,    92,    94,   100,   126,
     132,   133,   135,   144,   145,   152,   160,   161,   176,   177,
     178,   187,   174,   188,   163,   165,   166,   179,   100,    32,
     137,    97,   101,   153,   153,   153,   153,   126,   126,   126,
     126,   126,   126,   126,    34,    35,    45,   108,   126,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      90,    91,    93,   113,   114,   153,   115,   146,   153,   153,
     153,    44,   153,   153,   153,     1,     6,    10,    23,    26,
      33,    41,    57,    98,   101,   106,   107,   111,   112,   119,
     124,   125,   127,   129,   130,   138,   139,   141,   169,   173,
     175,   185,   186,    96,   115,   122,   104,   124,   124,   104,
     104,   109,   110,    96,   113,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,    96,   104,   157,
     188,   124,   149,   150,   124,   124,   124,   124,   124,   148,
     147,   168,   147,   147,   174,   188,   171,   171,    95,   126,
     171,   153,   153,   124,   170,   188,   171,   153,   155,   156,
     166,   115,    94,   126,    99,   115,   115,    80,    81,   151,
      97,   117,   188,    97,   118,   188,   115,   115,   111,   127,
     128,   159,   188,   124,   124,   142,   143,   162,   179,   188,
      98,   124,   149,   124,   104,   124,   124,   124,    97,   171,
     113,   113,   142,   180,   115,   146,   115,   127,   124,   158,
     173,   105,   124,   124,   171,   167,   173,   159,   168,   167,
     113,    19,   121,   188,   105,   173,   167,   173,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   104,   104,   105,   106,   107,   108,
     108,   108,   110,   109,   112,   111,   114,   113,   116,   115,
     117,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     123,   125,   124,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     128,   128,   129,   130,   131,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   135,
     136,   137,   137,   138,   139,   140,   141,   141,   142,   143,
     143,   144,   144,   144,   144,   145,   146,   147,   148,   150,
     149,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   154,   153,   156,   155,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   166,   167,   168,   169,
     170,   170,   172,   171,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   176,   176,   177,
     177,   177,   177,   177,   177,   177,   178,   179,   180,   181,
     181,   181,   182,   182,   183,   183,   183,   184,   185,   186,
     187,   187,   187,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     2,     0,     2,
       2,     1,     2,     1,     3,     2,     2,     2,     1,     1,
       1,     0,     2,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     1,     3,     1,     3,     1,
       3,     1,     2,    11,     4,     2,     1,     2,     3,     5,
       7,     4,     4,     3,     3,     3,     3,     1,     1,     1,
       5,     2,     3,     2,     9,     1,     1,     1,     2,     2,
       1,     2,     3,     6,     7,     3,     0,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     3,     1,     2,     0,     0,     2,
       1,     1,     0,     2,     1,     2,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     7,
       1,     1,     1,     0
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
#line 1661 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *firstarg(&(yyvsp[0]));
        }
#line 1669 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 131 "grammar" /* yacc.c:1646  */
    {
            gp_breakOK++;
        }
#line 1677 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 138 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *break_stmnt();
        }
#line 1685 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 145 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *continue_stmnt();
        }
#line 1693 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_backtick_expected; }
#line 1699 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 159 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_closebrace_expected; }
#line 1705 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_closepar_expected; }
#line 1711 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 161 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_comma_expected; }
#line 1717 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 166 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1725 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 176 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1733 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 187 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 1741 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 203 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1749 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 212 "grammar" /* yacc.c:1646  */
    {
            entervar();
        }
#line 1757 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 219 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1765 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 225 "grammar" /* yacc.c:1646  */
    {
            gp_parse_error = err_in_expression;
        }
#line 1773 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 229 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1781 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 238 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1789 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 246 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1797 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 253 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), multiply, "*=");
        }
#line 1805 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 260 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), divide, "/=");
        }
#line 1813 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 267 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), modulo, "%=");
        }
#line 1821 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 274 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), addition, "+=");
        }
#line 1829 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 281 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), subtract, "-=");
        }
#line 1837 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 288 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), band, "&=");
        }
#line 1845 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 295 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), bor, "|=");
        }
#line 1853 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 302 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), xor, "^=");
        }
#line 1861 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 309 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shl, "<<=");
        }
#line 1869 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 316 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shr, ">>=");
        }
#line 1877 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 323 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *or_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1885 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 330 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *and_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1893 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 337 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1901 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 344 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1909 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 351 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1917 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 358 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1925 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 365 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *sm_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1933 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 372 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *gr_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1941 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 379 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1949 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 386 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *band(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1957 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 393 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1965 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 400 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1973 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 407 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1981 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 414 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1989 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 421 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1997 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 428 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2005 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 435 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2013 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 442 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2021 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 449 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2029 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 456 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2037 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 462 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *negate(&(yyvsp[0]));
        }
#line 2045 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 468 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2053 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 474 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2061 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 480 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2069 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 486 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2077 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 492 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2085 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 498 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bnot(&(yyvsp[0]));
        }
#line 2093 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 504 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *not_boolean(&(yyvsp[0]));
        }
#line 2101 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 512 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2109 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 517 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_str | e_const);
        }
#line 2117 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 522 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
        }
#line 2125 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 529 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2133 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 538 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[-1]));
        }
#line 2141 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 545 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *expr_stmnt(&(yyvsp[0]));
        }
#line 2149 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 554 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2157 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 578 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *for_stmnt(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        }
#line 2165 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 588 "grammar" /* yacc.c:1646  */
    {
            close_fun(&(yyvsp[-1]));
        }
#line 2173 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 598 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *fetchvar();
        }
#line 2181 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 606 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *zeroargs((yyvsp[-1]).type);
        }
#line 2189 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 613 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2197 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 622 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *twoargs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2205 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 633 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *threeargs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2213 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 641 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *optint_string((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2221 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 649 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *optint_special((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2229 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 656 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *specials(f_printf, &(yyvsp[0]));
        }
#line 2237 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 663 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *exec_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2245 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 670 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *specials(f_strformat, &(yyvsp[0]));
        }
#line 2253 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 677 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *callfun((yyvsp[-2]).evalue, &(yyvsp[0]));
        }
#line 2261 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 686 "grammar" /* yacc.c:1646  */
    {
            open_fun();
        }
#line 2269 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 693 "grammar" /* yacc.c:1646  */
    {
            (yyval).evalue = fetchfun();
        }
#line 2277 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 705 "grammar" /* yacc.c:1646  */
    {
            make_frame();
            outbin((yyvsp[0]).code, (yyvsp[0]).codelen);
        }
#line 2286 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 721 "grammar" /* yacc.c:1646  */
    {
        gp_initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2295 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 742 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *if_stmnt(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        }
#line 2303 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 749 "grammar" /* yacc.c:1646  */
    {
        gp_initialization = 1;
    }
#line 2311 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 765 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2319 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 773 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-1]), &(yyvsp[0]));        /* cat initialization code */
    }
#line 2327 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 784 "grammar" /* yacc.c:1646  */
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
#line 2343 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 800 "grammar" /* yacc.c:1646  */
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
#line 2359 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 818 "grammar" /* yacc.c:1646  */
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
#line 2379 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 841 "grammar" /* yacc.c:1646  */
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
#line 2399 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 862 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2407 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 868 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        }
#line 2416 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 876 "grammar" /* yacc.c:1646  */
    {
            gp_nestLevel++;
        }
#line 2424 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 883 "grammar" /* yacc.c:1646  */
    {
            yyerrok;
        }
#line 2432 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 889 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_older_younger; }
#line 2438 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 891 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2446 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 944 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_openpar_expected; }
#line 2452 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 945 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_openbrace_expected; }
#line 2458 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 956 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        }
#line 2467 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 996 "grammar" /* yacc.c:1646  */
    {
            gp_varType = e_int;
        }
#line 2475 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1012 "grammar" /* yacc.c:1646  */
    {
            ++gp_nParams;
        }
#line 2483 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1018 "grammar" /* yacc.c:1646  */
    {
            pop_dead();
        }
#line 2491 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1024 "grammar" /* yacc.c:1646  */
    {
            push_dead();                    /* set new dead-level */
        }
#line 2499 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1034 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *return_stmnt((yyvsp[-1]).type, &(yyvsp[0]));
    }
#line 2507 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1045 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_semicol_expected; }
#line 2513 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1049 "grammar" /* yacc.c:1646  */
    {
        g_sem_err = 0;
    }
#line 2521 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1057 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cat_stmnt(&(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2529 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1069 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2537 "parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1098 "grammar" /* yacc.c:1646  */
    {
        g_stringbuf = xstrcat(g_stringbuf, g_lexstring);/* catenate the new string */
    }
#line 2545 "parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1103 "grammar" /* yacc.c:1646  */
    {
        free(g_stringbuf);                    /* free former string */
        g_stringbuf = xstrdup(g_lexstring);     /* duplicate initial string */
    }
#line 2554 "parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1132 "grammar" /* yacc.c:1646  */
    {
            gp_parse_error = err_identifier_expected;
            gp_varType = (yyvsp[0]).type;
        }
#line 2563 "parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1142 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);                    /* initialization code */
    }
#line 2571 "parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1151 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                        /* initialization code  */
        }
#line 2580 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1161 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2588 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1168 "grammar" /* yacc.c:1646  */
    {
            g_init = *catcode(&g_init, &(yyvsp[0]));
        }
#line 2596 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1185 "grammar" /* yacc.c:1646  */
    {
            gp_varType = 0;
        }
#line 2604 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1203 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *while_stmnt(&(yyvsp[-4]), &(yyvsp[-1]), 1);
        }
#line 2612 "parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1220 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(0);
        }
#line 2620 "parser.c" /* yacc.c:1646  */
    break;


#line 2624 "parser.c" /* yacc.c:1646  */
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
#line 1224 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
