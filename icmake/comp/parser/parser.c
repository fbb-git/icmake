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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   849

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

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
     102,    98,    88,    86,    99,    87,     2,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,   103,
      78,    58,    79,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,     2,   101,    74,     2,    96,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,    73,    97,    94,     2,     2,     2,
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
       0,   111,   111,   114,   118,   125,   132,   138,   145,   152,
     154,   156,   159,   159,   160,   160,   161,   161,   162,   162,
     165,   171,   175,   181,   185,   194,   197,   202,   208,   212,
     219,   226,   226,   236,   243,   251,   258,   265,   272,   279,
     286,   293,   300,   307,   314,   321,   328,   335,   342,   349,
     358,   365,   372,   379,   386,   393,   400,   407,   414,   421,
     428,   435,   442,   449,   456,   463,   470,   476,   482,   488,
     494,   500,   506,   512,   518,   526,   531,   536,   543,   545,
     554,   561,   568,   572,   577,   594,   604,   607,   614,   620,
     627,   636,   647,   655,   663,   670,   677,   684,   691,   695,
     702,   709,   722,   725,   734,   739,   754,   756,   760,   768,
     774,   779,   794,   809,   831,   856,   865,   872,   879,   886,
     886,   894,   896,   900,   902,   904,   906,   908,   910,   912,
     914,   916,   918,   920,   922,   924,   926,   928,   930,   932,
     934,   936,   938,   941,   941,   942,   942,   945,   947,   951,
     953,   960,   962,   966,   968,   972,   974,   976,   980,   982,
     986,   987,   991,   995,   999,  1007,  1013,  1019,  1027,  1029,
    1032,  1032,  1035,  1042,  1048,  1052,  1054,  1060,  1063,  1065,
    1067,  1069,  1072,  1075,  1078,  1083,  1089,  1097,  1099,  1101,
    1103,  1105,  1107,  1109,  1113,  1117,  1125,  1133,  1141,  1143,
    1152,  1157,  1161,  1163,  1165,  1169,  1176,  1181,  1194,  1196,
    1198,  1202
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
  "'~'", "'['", "'`'", "'}'", "')'", "','", "'{'", "']'", "'('", "';'",
  "$accept", "input", "args", "break_ok", "break_stat", "continue_stat",
  "casttype", "backtick", "$@1", "closebrace", "$@2", "closepar", "$@3",
  "comma", "$@4", "comma_arglist", "comma_expr", "compound",
  "def_var_or_fun", "else_tail", "enterid", "entervarid", "err_expression",
  "$@5", "expression", "expr_code", "expr_list", "for", "for_stat",
  "funcdef", "func_or_var", "function", "funid", "funname", "funvars",
  "idexpr", "if", "if_stat", "leave_key", "local_list", "locals",
  "makelist", "makelist_expr", "makelist_normal", "nesting", "ok",
  "older_younger", "$@6", "old_young", "one_arg_funs", "openpar", "$@7",
  "openbrace", "$@8", "opt_arglist", "opt_expression", "opt_expr_list",
  "optint_special", "optint_string", "opt_locals", "opt_parlist", "pars",
  "partype", "popdead", "pushdead", "return_stat", "return_tail",
  "semicol", "$@9", "statement", "statements", "stm", "string",
  "two_arg_funs", "three_arg_funs", "type_of_var", "vardefs", "varnames",
  "var_or_fun", "varType", "voidtype", "while", "while_stat",
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
     314,   315,   316,   317,   318,   319,   320,   321,   322,    63,
      58,   323,   324,   124,    94,    38,   325,   326,    60,    62,
     327,   328,   329,   330,   331,   332,    43,    45,    42,    47,
      37,    33,   333,   334,   126,    91,    96,   125,    41,    44,
     123,    93,    40,    59
};
# endif

#define YYPACT_NINF -317

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-317)))

#define YYTABLE_NINF -212

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -18,  -317,  -317,  -317,  -317,    21,  -317,    19,  -317,    -8,
    -317,  -317,   -89,   -84,   -17,     5,  -317,  -317,  -317,  -317,
     -53,  -317,  -317,  -317,  -317,  -317,  -317,   671,  -317,    -5,
     -49,    35,   -25,  -317,   -28,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
     -26,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   671,
     671,   671,   671,   671,   671,   671,   575,   754,  -317,  -317,
    -317,  -317,   -20,  -317,  -317,  -317,    43,  -317,  -317,  -317,
     371,  -317,    24,    25,  -317,    35,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,   -61,   -61,   -61,   -61,   -61,
     -61,   754,  -317,  -317,  -317,    27,   754,   671,   671,   671,
     671,   671,   671,   671,   671,   671,   671,   671,   671,   671,
     671,   671,   671,   671,   671,   671,   671,   671,   671,   671,
     671,   671,   671,   671,   671,   671,   671,   671,   671,  -317,
    -317,   671,  -317,    28,    29,   -13,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,   -89,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,    31,  -317,  -317,
     671,  -317,  -317,  -317,  -317,  -317,    26,  -317,  -317,  -317,
    -317,  -317,  -317,    -5,  -317,    57,  -317,  -317,    64,    66,
    -317,    70,   671,  -317,   754,   754,   754,   754,   754,   754,
     754,   754,   754,   754,   754,   716,    59,   228,   355,   457,
     555,   204,   204,   643,   643,   643,   643,   643,   643,    -7,
      -7,    68,    68,   -61,   -61,   -61,   269,  -317,    69,  -317,
    -317,    73,  -317,   -11,  -317,    74,    78,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,   371,  -317,  -317,  -317,  -317,   754,
    -317,    26,  -317,  -317,  -317,  -317,  -317,  -317,    -5,    72,
    -317,  -317,  -317,   -61,   671,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,    79,  -317,  -317,  -317,  -317,  -317,    -5,  -317,    22,
    -317,  -317,  -317,   123,  -317,  -317,    81,  -317,  -317,  -317,
    -317,    65,   474,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,   474,  -317,  -317,    29,  -317,  -317,  -317,
     162,  -317,  -317,   474,  -317,  -317,   474,  -317,  -317,  -317,
    -317
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   202,   204,   203,   205,     0,     3,     0,   195,     0,
       1,     2,     0,    29,   211,     0,   201,   143,   198,   200,
      18,    25,    99,    26,   118,   211,   102,     0,   211,   161,
       0,     0,     0,   196,     0,   199,   129,   130,   123,   156,
     128,   127,   188,   187,   189,   131,   133,   134,   132,   190,
     153,   154,   125,   191,   192,   143,   136,   208,   209,   210,
      87,   143,   126,    76,   143,   135,   124,   155,   186,   137,
     139,   138,   193,   143,   194,   157,   140,   141,   142,     0,
       0,     0,     0,     0,     0,     0,     0,   103,    78,    16,
     143,    98,    18,   143,   143,   143,    75,   143,   143,   143,
       0,   174,     0,    18,   163,     0,   144,    29,   197,    19,
     171,    31,    31,    31,    31,    71,    66,    73,    67,    69,
      72,    12,     9,    10,    11,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      70,     0,    86,     0,    31,    31,   111,    31,    31,    31,
     185,    31,    31,    88,     0,     7,     8,   107,   166,   166,
     106,   166,   211,   211,   170,   170,    85,     0,   175,    80,
       0,   170,   143,   180,   143,   179,    31,   170,   173,   172,
     143,   178,   145,     0,   164,    18,     5,   115,    18,    18,
      79,     0,     0,    77,    33,    40,    41,    42,    43,    44,
      36,    39,    35,    37,    38,     0,    45,    46,    56,    57,
      55,    47,    48,    50,    51,    52,    53,    63,    62,    58,
      59,    54,    60,    61,    64,    65,     0,    17,    18,    97,
     148,    18,    18,     0,    89,   211,   211,    18,    18,   184,
      83,   117,   104,   206,     0,   176,   182,   183,    15,    32,
     177,    31,    31,   168,   167,   169,   181,    31,   211,     0,
     162,    31,    13,    74,     0,    34,   119,    31,   121,   122,
     120,    31,    93,    21,    31,    92,    23,    31,    31,    24,
      82,   151,   170,   152,    16,    16,   110,   158,   101,     0,
     159,   146,     4,    49,    18,   116,    18,    22,    90,    18,
      31,    31,     0,     6,   109,   108,    31,   113,    31,    81,
     149,   170,   165,     0,   114,    91,    31,   166,   165,    16,
     211,   207,     6,     0,   165,    28,     0,    27,   105,   165,
      84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -105,  -159,  -317,  -317,  -317,  -317,  -317,   -79,
    -317,  -116,  -317,   -19,  -317,  -317,  -317,  -317,   188,  -317,
     112,  -317,  -107,  -317,   -37,  -268,  -317,  -317,  -317,   211,
    -317,  -317,  -317,  -317,  -317,   191,  -317,  -317,  -317,   -83,
    -317,  -317,  -317,   -90,  -144,    52,   -59,  -317,  -317,  -317,
     173,  -317,  -317,  -317,  -317,  -317,  -106,  -317,  -317,  -317,
    -317,  -317,    32,  -316,  -108,  -317,  -317,  -172,  -317,  -307,
      49,  -317,  -317,  -317,  -317,   -27,   -73,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   205,   333,   184,   185,   125,   210,   211,   186,
     187,   162,   163,   281,    32,   292,   295,   188,     6,   344,
      14,    15,   189,   190,    87,   191,   301,   192,   193,    16,
      88,    89,    17,    90,    28,    18,   194,   195,   196,   306,
     307,    91,    92,   166,   260,    25,   252,   253,   290,    93,
      29,    30,   278,   279,   249,   331,   302,    94,    95,   308,
     102,   103,   104,   337,   261,   197,   274,    33,    34,   198,
     100,   199,    96,    97,    98,     7,    19,    20,    21,     8,
       9,   200,   201,    99,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    31,   105,   300,   206,   207,   206,   206,   208,   209,
     213,    35,   266,   267,    24,   332,     1,     2,   -99,   270,
      12,    10,   341,    12,    22,   276,   338,     3,   348,     1,
       2,   159,   160,   350,   161,   262,   347,   263,     4,   349,
       3,   -30,   115,   116,   117,   118,   119,   120,   121,   126,
    -170,    13,   329,   106,   107,     1,     2,   206,   251,   248,
     254,   255,   256,    27,   257,   258,     3,   107,   300,  -119,
    -119,   288,   289,   165,   109,   110,  -100,     4,  -116,   154,
     155,   156,   157,   158,   203,   159,   160,   170,   161,   273,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   202,  -160,   246,   212,   247,  -211,   268,  -211,
     321,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     250,   159,   160,   269,   161,   -95,   156,   157,   158,   336,
     159,   160,   -94,   161,   -96,   304,   282,  -147,  -150,   265,
     305,  -112,   311,   291,   312,   283,   105,   294,   320,   -20,
     315,   343,   275,   346,   206,   299,   316,   317,   322,   323,
     318,   319,   138,    11,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   330,   159,   160,   204,   161,   334,
      23,   335,   108,   342,   324,   327,   259,   314,   111,   340,
     339,   264,   286,   287,   112,   280,   325,   113,   297,   298,
       0,   293,   296,     0,     0,     0,   114,   313,     0,     0,
       0,   309,     0,     0,     0,     0,     0,   303,     0,     0,
       0,     0,     0,   164,   310,     0,   167,   168,   169,     0,
     171,   172,   173,     0,     0,     0,     0,     0,     0,     0,
     309,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   326,   159,   160,     0,   161,
     328,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     0,
     159,   160,   303,   161,     0,     0,   345,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       0,   159,   160,     0,   161,   271,     0,   272,     0,     0,
     285,     0,   174,   277,   -31,   -31,   -31,   175,   -31,   -31,
     -31,   176,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   177,   -31,   -31,   178,   -31,   -31,
     -31,   -31,   -31,   -31,   179,     0,     0,   -31,   -31,   -31,
     -31,   -31,   180,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   181,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,   159,   160,     0,
     161,     0,     0,     0,     0,     0,     0,   -31,   -31,     0,
       0,     0,   -31,   -31,   -31,   -31,     0,   -31,   -14,     0,
       0,   182,     0,   -31,   183,   174,     0,   -31,   -31,   -31,
     175,   -31,   -31,   -31,   176,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   177,   -31,   -31,
     178,   -31,   -31,   -31,   -31,   -31,   -31,   179,     0,     0,
     -31,   -31,   -31,   -31,   -31,   180,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   181,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     0,   159,
     160,     0,   161,     0,     0,     0,     0,     0,     0,     0,
     -31,   -31,     0,     0,     0,   -31,   -31,   -31,   -31,     0,
     -31,     0,     0,     0,   182,     0,   -31,   183,    36,    37,
      38,     0,    39,    40,    41,     0,    42,    43,    44,    45,
      46,    47,    48,    49,     0,    50,    51,    52,     0,    53,
      54,     0,    55,    56,    57,    58,    59,    60,     0,   122,
     123,    61,    62,    63,    64,    65,     0,    66,    67,    68,
     124,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,   159,   160,     0,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,     0,     0,     0,    81,    82,    83,    84,
       0,    85,     0,     0,    36,    37,    38,    86,    39,    40,
      41,     0,    42,    43,    44,    45,    46,    47,    48,    49,
       0,    50,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,    61,    62,    63,
      64,    65,     0,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,   152,   153,   154,
     155,   156,   157,   158,     0,   159,   160,     0,   161,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,     0,
       0,     0,    81,    82,    83,    84,     0,    85,     0,     0,
       0,     0,     0,    86,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   284,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     0,   159,   160,
       0,   161,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,   159,   160,     0,   161
};

static const yytype_int16 yycheck[] =
{
      14,    20,    29,   271,   111,   112,   113,   114,   113,   114,
     126,    25,   184,   185,   103,   322,    34,    35,   102,   191,
       1,     0,   338,     1,    32,   197,   333,    45,   344,    34,
      35,    92,    93,   349,    95,   179,   343,   181,    56,   346,
      45,    58,    79,    80,    81,    82,    83,    84,    85,    86,
     103,    32,   320,   102,    32,    34,    35,   164,   165,   164,
     167,   168,   169,    58,   171,   172,    45,    32,   336,    82,
      83,    82,    83,    92,    99,   103,   102,    56,    98,    86,
      87,    88,    89,    90,   103,    92,    93,    44,    95,   196,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    98,    98,   161,    98,    98,    98,    97,   103,
     302,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     164,    92,    93,   190,    95,    98,    88,    89,    90,   331,
      92,    93,    98,    95,    98,   272,    96,    98,   103,   183,
     277,    98,   100,    99,   281,   212,   203,    99,    99,    98,
     287,    19,   196,   342,   291,   264,   291,   294,   304,   305,
     297,   298,    69,     5,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   321,    92,    93,   105,    95,   326,
       9,   328,    31,   339,   307,   315,   174,   286,    55,   337,
     336,   182,   251,   252,    61,   203,   309,    64,   257,   258,
      -1,   255,   256,    -1,    -1,    -1,    73,   284,    -1,    -1,
      -1,   278,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    -1,    90,   278,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,   314,    92,    93,    -1,    95,
     319,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,   336,    95,    -1,    -1,   340,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,   192,    -1,   194,    -1,    -1,
     101,    -1,     1,   200,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    96,    97,    -1,
      -1,   100,    -1,   102,   103,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    -1,    -1,    -1,   100,    -1,   102,   103,     3,     4,
       5,    -1,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    96,    -1,    -1,     3,     4,     5,   102,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    96,    -1,    -1,
      -1,    -1,    -1,   102,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    45,    56,   105,   122,   179,   183,   184,
       0,   122,     1,    32,   124,   125,   133,   136,   139,   180,
     181,   182,    32,   133,   103,   149,   188,    58,   138,   154,
     155,   117,   118,   171,   172,   188,     3,     4,     5,     7,
       8,     9,    11,    12,    13,    14,    15,    16,    17,    18,
      20,    21,    22,    24,    25,    27,    28,    29,    30,    31,
      32,    36,    37,    38,    39,    40,    42,    43,    44,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    86,
      87,    91,    92,    93,    94,    96,   102,   128,   134,   135,
     137,   145,   146,   153,   161,   162,   176,   177,   178,   187,
     174,   188,   164,   165,   166,   179,   102,    32,   139,    99,
     103,   154,   154,   154,   154,   128,   128,   128,   128,   128,
     128,   128,    34,    35,    45,   110,   128,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    92,
      93,    95,   115,   116,   154,   117,   147,   154,   154,   154,
      44,   154,   154,   154,     1,     6,    10,    23,    26,    33,
      41,    57,   100,   103,   108,   109,   113,   114,   121,   126,
     127,   129,   131,   132,   140,   141,   142,   169,   173,   175,
     185,   186,    98,   117,   124,   106,   126,   126,   106,   106,
     111,   112,    98,   115,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,    98,   106,   158,
     188,   126,   150,   151,   126,   126,   126,   126,   126,   149,
     148,   168,   148,   148,   174,   188,   171,   171,    97,   128,
     171,   154,   154,   126,   170,   188,   171,   154,   156,   157,
     166,   117,    96,   128,    70,   101,   117,   117,    82,    83,
     152,    99,   119,   188,    99,   120,   188,   117,   117,   113,
     129,   130,   160,   188,   126,   126,   143,   144,   163,   179,
     188,   100,   126,   128,   150,   126,   106,   126,   126,   126,
      99,   171,   115,   115,   143,   180,   117,   147,   117,   129,
     126,   159,   173,   107,   126,   126,   171,   167,   173,   160,
     168,   167,   115,    19,   123,   188,   107,   173,   167,   173,
     167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   107,   108,   109,   110,
     110,   110,   112,   111,   114,   113,   116,   115,   118,   117,
     119,   119,   120,   120,   121,   122,   122,   123,   123,   124,
     125,   127,   126,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   130,   130,   131,   132,   133,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     137,   138,   139,   139,   140,   141,   142,   142,   143,   144,
     144,   145,   145,   145,   145,   146,   147,   148,   149,   151,
     150,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   155,   154,   157,   156,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   167,   168,   169,   170,   170,
     172,   171,   173,   174,   174,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   177,   177,   177,
     177,   177,   177,   177,   178,   179,   180,   181,   181,   181,
     182,   182,   183,   183,   183,   184,   185,   186,   187,   187,
     187,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     2,     0,     2,
       2,     1,     2,     1,     3,     2,     2,     2,     1,     1,
       1,     0,     2,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     1,     3,     1,     3,
       1,     3,     1,     2,    11,     4,     2,     1,     2,     3,
       5,     7,     4,     4,     3,     3,     3,     3,     1,     1,
       1,     5,     2,     3,     2,     9,     1,     1,     2,     2,
       1,     2,     3,     6,     7,     3,     0,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     1,     2,     0,     0,     2,     1,     1,
       0,     2,     1,     2,     1,     1,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
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
#line 121 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *multargs(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1668 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 126 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *firstarg(&(yyvsp[0]));
        }
#line 1676 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 132 "grammar" /* yacc.c:1646  */
    {
            gp_breakOK++;
        }
#line 1684 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *break_stmnt();
        }
#line 1692 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 146 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *continue_stmnt();
        }
#line 1700 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_backtick_expected; }
#line 1706 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 160 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_closebrace_expected; }
#line 1712 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 161 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_closepar_expected; }
#line 1718 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 162 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_comma_expected; }
#line 1724 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1732 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1740 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 188 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 1748 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 204 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1756 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 213 "grammar" /* yacc.c:1646  */
    {
            entervar();
        }
#line 1764 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 220 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1772 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 226 "grammar" /* yacc.c:1646  */
    {
            gp_parse_error = err_in_expression;
        }
#line 1780 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 230 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 1788 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 239 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1796 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 247 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1804 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 254 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), multiply, "*=");
        }
#line 1812 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 261 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), divide, "/=");
        }
#line 1820 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 268 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), modulo, "%=");
        }
#line 1828 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 275 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), addition, "+=");
        }
#line 1836 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 282 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), subtract, "-=");
        }
#line 1844 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 289 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), band, "&=");
        }
#line 1852 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 296 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), bor, "|=");
        }
#line 1860 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 303 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), xor, "^=");
        }
#line 1868 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 310 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shl, "<<=");
        }
#line 1876 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 317 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shr, ">>=");
        }
#line 1884 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 324 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *or_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1892 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 331 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *and_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1900 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 338 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1908 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 345 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1916 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 354 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1924 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 361 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1932 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 368 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1940 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 375 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *sm_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1948 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 382 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *gr_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1956 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 389 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1964 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 396 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *band(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1972 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 403 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1980 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 410 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1988 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 417 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1996 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 424 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2004 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 431 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2012 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 438 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2020 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 445 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2028 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 452 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2036 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 459 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2044 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 466 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2052 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 472 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *negate(&(yyvsp[0]));
        }
#line 2060 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 478 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2068 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 484 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2076 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 490 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2084 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 496 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2092 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 502 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2100 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 508 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bnot(&(yyvsp[0]));
        }
#line 2108 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 514 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *not_boolean(&(yyvsp[0]));
        }
#line 2116 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 522 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2124 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 527 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_str | e_const);
        }
#line 2132 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 532 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
        }
#line 2140 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 539 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2148 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 548 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[-1]));
        }
#line 2156 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 555 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *expr_stmnt(&(yyvsp[0]));
        }
#line 2164 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 564 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2172 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 588 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *for_stmnt(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        }
#line 2180 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 598 "grammar" /* yacc.c:1646  */
    {
            close_fun(&(yyvsp[-1]));
        }
#line 2188 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 608 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *fetchvar();
        }
#line 2196 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 616 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *zeroargs((yyvsp[-1]).type);
        }
#line 2204 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 623 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2212 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 632 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *twoargs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2220 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 643 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *threeargs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2228 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 651 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *optint_string((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2236 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 659 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *optint_special((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2244 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 666 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *specials(f_printf, &(yyvsp[0]));
        }
#line 2252 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 673 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *exec_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2260 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 680 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *specials(f_strformat, &(yyvsp[0]));
        }
#line 2268 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 687 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *callfun((yyvsp[-2]).evalue, &(yyvsp[0]));
        }
#line 2276 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 696 "grammar" /* yacc.c:1646  */
    {
            open_fun();
        }
#line 2284 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 703 "grammar" /* yacc.c:1646  */
    {
            (yyval).evalue = fetchfun();
        }
#line 2292 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 715 "grammar" /* yacc.c:1646  */
    {
            make_frame();
            outbin((yyvsp[0]).code, (yyvsp[0]).codelen);
        }
#line 2301 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 728 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2309 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 748 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *if_stmnt(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        }
#line 2317 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 762 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2325 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 770 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-1]), &(yyvsp[0]));        /* cat initialization code */
    }
#line 2333 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 781 "grammar" /* yacc.c:1646  */
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
#line 2349 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 797 "grammar" /* yacc.c:1646  */
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
#line 2365 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 815 "grammar" /* yacc.c:1646  */
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
#line 2385 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 838 "grammar" /* yacc.c:1646  */
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
#line 2405 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 859 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2413 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 865 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        }
#line 2422 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 873 "grammar" /* yacc.c:1646  */
    {
            gp_nestLevel++;
        }
#line 2430 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 880 "grammar" /* yacc.c:1646  */
    {
            yyerrok;
        }
#line 2438 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 886 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_older_younger; }
#line 2444 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 888 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2452 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 941 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_openpar_expected; }
#line 2458 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 942 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_openbrace_expected; }
#line 2464 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 953 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        }
#line 2473 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1001 "grammar" /* yacc.c:1646  */
    {
            ++gp_nParams;
        }
#line 2481 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1007 "grammar" /* yacc.c:1646  */
    {
            pop_dead();
        }
#line 2489 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1013 "grammar" /* yacc.c:1646  */
    {
            push_dead();                    /* set new dead-level */
        }
#line 2497 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1021 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *return_stmnt((yyvsp[-1]).type, &(yyvsp[0]));
    }
#line 2505 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1032 "grammar" /* yacc.c:1646  */
    {gp_parse_error = err_semicol_expected; }
#line 2511 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1036 "grammar" /* yacc.c:1646  */
    {
        g_sem_err = 0;
    }
#line 2519 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1044 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cat_stmnt(&(yyvsp[-1]), &(yyvsp[0]));
        }
#line 2527 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1056 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2535 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1085 "grammar" /* yacc.c:1646  */
    {
        g_stringbuf = xstrcat(g_stringbuf, g_lexstring);/* catenate the new string */
    }
#line 2543 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1090 "grammar" /* yacc.c:1646  */
    {
        free(g_stringbuf);                    /* free former string */
        g_stringbuf = xstrdup(g_lexstring);     /* duplicate initial string */
    }
#line 2552 "parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1118 "grammar" /* yacc.c:1646  */
    {
            gp_parse_error = err_identifier_expected;
            gp_varType = (yyvsp[0]).type;
        }
#line 2561 "parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1127 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);                    /* initialization code */
    }
#line 2569 "parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1136 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                        /* initialization code  */
        }
#line 2578 "parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1146 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2586 "parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1153 "grammar" /* yacc.c:1646  */
    {
            g_init = *catcode(&g_init, &(yyvsp[0]));
        }
#line 2594 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1170 "grammar" /* yacc.c:1646  */
    {
            gp_varType = 0;
        }
#line 2602 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1188 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *while_stmnt(&(yyvsp[-4]), &(yyvsp[-1]), 1);
        }
#line 2610 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1202 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(0);
        }
#line 2618 "parser.c" /* yacc.c:1646  */
    break;


#line 2622 "parser.c" /* yacc.c:1646  */
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
#line 1206 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
