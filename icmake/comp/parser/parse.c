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
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  356

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
     148,   148,   154,   154,   160,   168,   170,   173,   179,   186,
     189,   216,   223,   230,   230,   239,   245,   247,   249,   253,
     259,   267,   270,   277,   277,   284,   291,   299,   306,   313,
     320,   327,   334,   341,   348,   355,   362,   369,   376,   383,
     390,   397,   406,   413,   420,   427,   434,   441,   448,   455,
     462,   469,   476,   483,   490,   497,   504,   511,   518,   524,
     530,   536,   542,   548,   554,   560,   566,   574,   579,   584,
     591,   593,   601,   609,   616,   620,   622,   624,   629,   631,
     638,   640,   644,   676,   681,   685,   689,   690,   695,   705,
     713,   722,   724,   726,   730,   732,   734,   736,   738,   740,
     742,   744,   746,   748,   750,   752,   754,   756,   758,   760,
     762,   764,   766,   768,   772,   774,   776,   778,   780,   782,
     784,   788,   790,   792,   796,   802,   806,   808,   812,   818,
     822,   824,   828,   835,   841,   848,   857,   868,   876,   884,
     891,   898,   905,   912,   915,   923,   929,   933,   955,   964,
     971,   973,   977,   977,   987,  1002,  1017,  1039,  1063,  1069,
    1075,  1075,  1085,  1085,  1091,  1096,  1101,  1103,  1107,  1109,
    1113,  1122,  1122,  1128,  1130,  1136,  1139,  1141,  1143,  1145,
    1148,  1151,  1154,  1159,  1164,  1168,  1174,  1177,  1184,  1192,
    1194,  1196,  1200,  1207,  1213,  1255,  1258,  1267,  1275,  1277,
    1291,  1297,  1300,  1305,  1317
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
  "$@1", "closepar", "$@2", "comma", "$@3", "compound", "condition",
  "continue_stat", "_voidtype", "def_var_or_fun", "enterid", "enter_varid",
  "err_expression", "$@4", "expr_code", "_casttype", "_string",
  "_func_or_var", "_backtick", "$@5", "expression", "_for", "_expr_list",
  "_opt_init_expression", "_opt_cond_expression", "_opt_inc_expression",
  "for_stat", "_partype", "_pars", "_opt_parlist", "_funvars", "_funid",
  "funcdef", "_zero_arg_funs", "_one_arg_funs", "_two_arg_funs",
  "_optint_string", "_comma_expr", "_optint_special", "_comma_arglist",
  "_opt_arglist", "_funname", "function", "_if", "_else", "if_stat",
  "_makelist_expr", "_makelist_normal", "_old_young", "_older_younger",
  "$@6", "makelist", "nesting", "ok", "openbrace", "$@7", "openpar", "$@8",
  "popdead", "pushdead", "_return_tail", "_leave", "return_stat",
  "semicol", "$@9", "_stm", "statement", "statements", "typed_condition",
  "typed_varlist", "_varType", "type_of_var", "var_condition", "var_expr",
  "var_expr_list", "var_or_fun", "_while", "while_stat", "zeroframe", YY_NULLPTR
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

#define YYPACT_NINF -320

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-320)))

#define YYTABLE_NINF -215

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,  -320,  -320,  -320,  -320,    16,    -1,  -320,  -320,    23,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,    24,  -320,  -320,
      -2,   -61,  -320,   -54,   -48,  -320,    -6,     1,  -320,   -38,
     399,  -320,  -320,   -27,   -24,    34,  -320,  -320,  -320,  -320,
    -320,   702,    34,   -17,   -48,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,   -10,  -320,  -320,  -320,   702,
    -320,  -320,  -320,  -320,  -320,  -320,   -34,   -14,  -320,  -320,
    -320,  -320,  -320,  -320,    -2,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,   -16,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,   702,   702,   702,   702,   702,   702,   702,   603,    45,
    -320,   827,  -320,  -320,  -320,  -320,  -320,  -320,  -320,    -5,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,   827,  -320,   -11,    -2,   399,  -320,  -320,  -320,
    -320,  -320,  -320,    -2,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,   -56,   -56,   -56,   -56,   -56,   -56,   827,  -320,  -320,
    -320,    -4,   827,  -320,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   702,  -320,  -320,   702,  -320,
    -320,  -320,  -320,  -320,    -3,  -320,     2,   -37,  -320,  -320,
       8,  -320,  -320,  -320,  -320,  -320,  -320,    34,  -320,  -320,
       3,  -320,  -320,    10,    11,  -320,  -320,    13,   702,  -320,
     827,   827,   827,   827,   827,   827,   827,   827,   827,   827,
     827,   789,   488,   586,    55,   207,   385,   240,   240,   102,
     102,   102,   102,   102,   102,    87,    87,   -13,   -13,   -56,
     -56,   -56,   746,  -320,  -320,    12,    21,    25,  -320,  -320,
    -320,    26,  -320,   -20,  -320,     7,   502,  -320,    37,  -320,
    -320,  -320,  -320,  -320,   -56,   702,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,   702,   502,  -320,  -320,   301,  -320,  -320,
      27,  -320,  -320,    -3,  -320,   827,  -320,  -320,  -320,  -320,
       8,  -320,  -320,   101,  -320,  -320,  -320,  -320,   502,  -320,
    -320,   502,  -320,  -320,  -320,  -320
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   199,   201,   200,    18,     0,     0,     3,   202,     0,
       1,     2,    99,   172,    20,   211,   181,     0,    19,   214,
      97,     0,   210,     0,     0,    21,   214,     0,   208,    12,
       0,   196,    95,    12,     0,     0,   173,   182,   169,   214,
     205,     0,     0,     0,     0,     7,    17,   179,   175,   175,
     178,   175,   214,   181,   100,     0,   183,   181,    25,     0,
     181,   172,   188,   172,   187,   214,     0,    23,   181,   193,
     195,   181,   172,   186,     0,   170,    93,   209,   110,   111,
     104,   132,   109,   108,   125,   124,   126,   112,   114,   115,
     113,   127,   136,   137,   106,   128,   129,   172,   117,   101,
     102,   103,    32,   172,   107,    78,   172,   116,   105,   131,
      30,   118,   120,   119,   130,   172,   172,   133,   121,   122,
     123,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      80,   206,   172,   172,   172,   172,   172,   172,    10,    12,
     153,   207,    13,   192,    82,   168,   154,   212,   184,   190,
       9,   191,    24,   185,    23,    23,     0,   171,   176,   180,
     177,   189,   194,    23,    94,    98,    23,    23,    23,    23,
      23,    73,    68,    75,    69,    71,    74,    33,    26,    27,
      28,     0,    10,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    72,     0,   143,
      23,    23,    23,    23,    23,    31,     0,    23,   164,    84,
      85,   181,    86,    87,    10,    15,    16,     0,    14,    10,
      12,     5,   158,    12,    12,    12,    81,     0,     0,    79,
      35,    42,    43,    44,    45,    46,    38,    41,    37,    39,
      40,     0,    47,    48,    58,    59,    57,    49,    50,    52,
      53,    54,    55,    65,    64,    60,    61,    56,    62,    63,
      66,    67,     0,   144,    12,   214,   214,    12,   152,   141,
      11,    12,    12,     0,    23,    23,     0,    22,   203,   197,
       6,    23,    23,    34,    76,     0,    36,    23,    23,   147,
     135,    23,   148,   139,   162,    23,   160,   161,   163,    83,
      88,   181,   174,     0,     0,     4,    12,    51,   145,   134,
      12,    12,   159,    23,   175,   204,   174,    23,    23,   166,
      90,    10,    91,   214,   213,   146,   167,     6,     0,   174,
     156,     0,   155,   157,   174,    92
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,  -157,  -226,  -320,   -30,  -320,  -174,  -320,   -28,
    -320,  -320,   -36,  -320,  -320,   120,   -31,   -88,   -65,  -320,
    -148,  -320,  -320,  -320,  -320,  -320,   153,  -320,  -182,  -320,
    -320,  -320,  -320,    78,  -320,  -320,  -320,  -320,   144,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -171,  -320,  -151,  -320,  -320,   -29,   121,
      91,  -320,   -19,  -320,  -319,  -166,  -320,  -320,  -320,   -50,
    -320,  -320,  -277,   104,  -320,     6,  -320,     9,  -320,   128,
    -320,  -320,  -320,  -320,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   240,   324,    53,    54,    55,   225,   226,   301,
      43,    56,   234,    57,     6,     7,    26,    27,    58,    59,
      60,   181,   129,   130,   246,   247,   131,    61,   230,   231,
     321,   341,    62,    32,    33,    34,    19,    13,    14,   132,
     133,   134,   135,   309,   136,   312,   288,   137,   138,    63,
     349,    64,   139,   228,   318,   292,   293,   140,   144,    39,
      65,    66,    20,    21,   334,   145,   159,    67,    68,    22,
      23,    69,    70,    30,   236,    71,     8,    17,   299,    28,
      29,    18,    72,    73,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    42,   158,   149,    76,    74,   229,   151,   249,     9,
     153,   243,   244,    77,     9,    16,    10,   344,   161,   322,
     146,   162,   147,     1,     2,    24,   148,     1,     2,    35,
     353,    12,     1,     2,     3,   355,   216,   217,     3,   218,
      36,   160,   154,     3,   155,  -162,  -162,   336,    37,     4,
       1,     2,   -22,   163,    38,    12,    25,     1,     2,    41,
     296,     3,   316,   317,  -198,   300,    25,   287,     3,   157,
     -96,   352,     4,    75,   354,   213,   214,   215,   166,   216,
     217,   142,   218,    35,   167,  -142,   150,   168,  -214,   183,
     235,  -214,  -159,   248,  -214,   323,   169,   170,   235,   290,
    -150,   241,   242,   241,   241,   245,   294,  -149,  -151,   -89,
     308,   227,   303,   219,   220,   221,   222,   223,   224,   311,
     348,   351,  -140,  -165,  -138,    11,   238,   239,   233,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   319,   216,   217,   298,
     218,   340,   164,    15,   330,   283,   284,   285,   286,   241,
     232,   339,   291,   331,   237,   143,   165,   347,   343,   156,
     141,     0,   237,   211,   212,   213,   214,   215,     0,   216,
     217,   295,   218,     0,     0,   229,   209,   210,   211,   212,
     213,   214,   215,     0,   216,   217,     0,   218,   289,     0,
       0,     0,     0,     0,     0,     0,   297,     0,     0,     0,
       0,     0,   152,     0,     0,     0,     0,   302,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     320,     0,     0,     0,     0,     0,   325,   326,     0,     0,
       0,     0,   328,   329,     0,     0,   241,     0,     0,     0,
     332,     0,     0,     0,     0,     0,   307,     0,     0,   310,
     313,     0,     0,   314,   315,     0,     0,     0,     0,     0,
       0,   333,   345,   346,   171,   172,   173,   174,   175,   176,
     177,   182,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   337,   216,
     217,     0,   218,   338,     0,     0,     0,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   350,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,     0,   216,   217,     0,   218,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,     0,
     195,   282,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,     0,   216,   217,     0,   218,     0,     0,     0,
      44,   304,   -23,   -23,   -23,    45,   -23,   -23,   -23,    46,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,    47,   -23,   -23,    48,   -23,   -23,   -23,   -23,
     -23,   -23,    49,     1,     2,   -23,   -23,   -23,   -23,   -23,
      50,   -23,   -23,   -23,     3,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,    51,     0,   327,     0,
       0,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   335,   216,   217,     0,
     218,     0,     0,     0,     0,   -23,   -23,     0,     0,     0,
     -23,   -23,   -23,   -23,     0,    -8,     0,     0,   -23,     0,
     -23,    52,  -170,    44,     0,   -23,   -23,   -23,    45,   -23,
     -23,   -23,    46,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,   -23,    47,   -23,   -23,    48,   -23,
     -23,   -23,   -23,   -23,   -23,    49,     1,     2,   -23,   -23,
     -23,   -23,   -23,    50,   -23,   -23,   -23,     3,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,    51,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,     0,   218,     0,     0,     0,     0,   -23,   -23,
       0,     0,     0,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,   -23,     0,   -23,    52,  -170,    78,    79,    80,     0,
      81,    82,    83,     0,    84,    85,    86,    87,    88,    89,
      90,    91,     0,    92,    93,    94,     0,    95,    96,     0,
      97,    98,    99,   100,   101,   102,     0,   178,   179,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   180,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,     0,   216,   217,
       0,   218,     0,     0,     0,     0,     0,     0,     0,   121,
     122,     0,     0,     0,   123,   124,   125,   126,     0,     0,
       0,     0,   127,     0,   128,    78,    79,    80,     0,    81,
      82,    83,     0,    84,    85,    86,    87,    88,    89,    90,
      91,     0,    92,    93,    94,     0,    95,    96,     0,    97,
      98,    99,   100,   101,   102,     0,     0,     0,   103,   104,
     105,   106,   107,     0,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
       0,     0,     0,   123,   124,   125,   126,     0,     0,     0,
       0,   127,     0,   128,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,     0,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,     0,   216,   217,
       0,   218,     0,     0,     0,     0,   306,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   305,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
       0,   216,   217,     0,   218,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,     0,   216,
     217,     0,   218
};

static const yytype_int16 yycheck[] =
{
      26,    29,    67,    53,    35,    33,   154,    57,   182,     0,
      60,   168,   169,    39,     5,     9,     0,   336,    68,   296,
      49,    71,    51,    34,    35,     1,    52,    34,    35,    20,
     349,    32,    34,    35,    45,   354,    92,    93,    45,    95,
     101,    67,    61,    45,    63,    82,    83,   324,   102,    56,
      34,    35,    58,    72,   102,    32,    32,    34,    35,    58,
     234,    45,    82,    83,   102,   239,    32,   224,    45,   103,
      97,   348,    56,    97,   351,    88,    89,    90,    97,    92,
      93,    98,    95,    74,   103,   101,    96,   106,   102,    44,
     155,   102,    97,    97,    97,    58,   115,   116,   163,    97,
      97,   166,   167,   168,   169,   170,    98,    97,    97,   102,
      98,   139,    99,   132,   133,   134,   135,   136,   137,    98,
      19,   347,    97,    97,    97,     5,   156,   163,   154,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,   294,    92,    93,   237,
      95,   333,    74,     9,   311,   220,   221,   222,   223,   224,
     154,   332,   227,   314,   155,    44,    75,   341,   334,    65,
      42,    -1,   163,    86,    87,    88,    89,    90,    -1,    92,
      93,   231,    95,    -1,    -1,   333,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,   224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     295,    -1,    -1,    -1,    -1,    -1,   301,   302,    -1,    -1,
      -1,    -1,   307,   308,    -1,    -1,   311,    -1,    -1,    -1,
     315,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,   285,
     286,    -1,    -1,   291,   292,    -1,    -1,    -1,    -1,    -1,
      -1,   321,   337,   338,   121,   122,   123,   124,   125,   126,
     127,   128,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   326,    92,
      93,    -1,    95,   331,    -1,    -1,    -1,   333,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    -1,    95,    -1,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,    -1,
      69,   218,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    -1,
       1,   248,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    -1,   305,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,   323,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,   103,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,   101,   102,   103,     3,     4,     5,    -1,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,   101,     3,     4,     5,    -1,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,   101,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,   100,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    45,    56,   105,   118,   119,   180,   181,
       0,   119,    32,   141,   142,   142,   179,   181,   185,   140,
     166,   167,   173,   174,     1,    32,   120,   121,   183,   184,
     177,   188,   137,   138,   139,   181,   101,   102,   102,   163,
     188,    58,   113,   114,     1,     6,    10,    23,    26,    33,
      41,    57,   102,   108,   109,   110,   115,   117,   122,   123,
     124,   131,   136,   153,   155,   164,   165,   171,   172,   175,
     176,   179,   186,   187,   113,    97,   120,   188,     3,     4,
       5,     7,     8,     9,    11,    12,    13,    14,    15,    16,
      17,    18,    20,    21,    22,    24,    25,    27,    28,    29,
      30,    31,    32,    36,    37,    38,    39,    40,    42,    43,
      44,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    86,    87,    91,    92,    93,    94,    99,   101,   126,
     127,   130,   143,   144,   145,   146,   148,   151,   152,   156,
     161,   183,    98,   163,   162,   169,   162,   162,   188,   173,
      96,   173,   130,   173,   166,   166,   177,   103,   122,   170,
     188,   173,   173,   166,   137,   164,   166,   166,   166,   166,
     166,   130,   130,   130,   130,   130,   130,   130,    34,    35,
      45,   125,   130,    44,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    92,    93,    95,   166,
     166,   166,   166,   166,   166,   111,   112,   113,   157,   124,
     132,   133,   179,   188,   116,   122,   178,   181,   109,   116,
     106,   122,   122,   106,   106,   122,   128,   129,    97,   111,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   122,   122,   122,   122,   106,   150,   188,
      97,   122,   159,   160,    98,   173,   111,   120,   121,   182,
     111,   113,   113,    99,   130,    70,   100,   113,    98,   147,
     188,    98,   149,   188,   113,   113,    82,    83,   158,   124,
     122,   134,   176,    58,   107,   122,   122,   130,   122,   122,
     106,   159,   122,   173,   168,   130,   176,   113,   113,   157,
     132,   135,   188,   169,   168,   122,   122,   111,    19,   154,
     188,   107,   176,   168,   176,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   107,   108,   110,   109,
     112,   111,   114,   113,   115,   116,   116,   117,   118,   119,
     119,   120,   121,   123,   122,   124,   125,   125,   125,   126,
     126,   127,   127,   129,   128,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   131,   132,   132,   133,   133,   133,   134,   134,
     135,   135,   136,   137,   138,   138,   139,   139,   140,   141,
     142,   143,   143,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   153,   154,   154,   155,   156,   157,
     158,   158,   160,   159,   161,   161,   161,   161,   162,   163,
     165,   164,   167,   166,   168,   169,   170,   170,   171,   171,
     172,   174,   173,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   176,   176,   177,   177,   178,   179,   180,
     180,   180,   181,   182,   182,   183,   183,   184,   184,   184,
     185,   185,   186,   187,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     0,     2,
       0,     2,     0,     2,     3,     1,     1,     1,     1,     2,
       2,     1,     1,     0,     2,     1,     1,     1,     1,     2,
       1,     2,     1,     0,     2,     3,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     1,     3,
       1,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       1,     1,    11,     2,     3,     1,     1,     0,     4,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     2,     3,     5,     7,     4,     4,     3,
       3,     3,     3,     1,     2,     2,     1,     9,     3,     0,
       1,     1,     0,     2,     2,     3,     6,     7,     1,     1,
       0,     2,     0,     2,     0,     0,     1,     1,     1,     1,
       2,     0,     2,     1,     2,     2,     1,     1,     1,     2,
       2,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     3,     2,     3,     3,     1,     3,
       2,     1,     2,     7,     0
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

  case 17:
#line 174 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *continue_stmnt();
    }
#line 1747 "parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 180 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1755 "parse.c" /* yacc.c:1646  */
    break;

  case 21:
#line 217 "grammar" /* yacc.c:1646  */
    {
        defineVar();    /* the first n variables of a function, up to the
                            end of the parameter list are the parameters. */
    }
#line 1764 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 224 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1772 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 230 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1780 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 234 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1788 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 240 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(&(yyvsp[0]));
    }
#line 1796 "parse.c" /* yacc.c:1646  */
    break;

  case 29:
#line 255 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        gp_stringbuf = rss_strcat(gp_stringbuf, util_string());
    }
#line 1804 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 260 "grammar" /* yacc.c:1646  */
    {
        free(gp_stringbuf);                  /* free former string */
        gp_stringbuf = rss_strdup(util_string()); /* duplicate initial string */
    }
#line 1813 "parse.c" /* yacc.c:1646  */
    break;

  case 32:
#line 271 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1821 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 277 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1829 "parse.c" /* yacc.c:1646  */
    break;

  case 35:
#line 287 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1837 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 295 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1845 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 302 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), multiply, "*=");
        }
#line 1853 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 309 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), divide, "/=");
        }
#line 1861 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 316 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), modulo, "%=");
        }
#line 1869 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 323 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), addition, "+=");
        }
#line 1877 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 330 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), subtract, "-=");
        }
#line 1885 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 337 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), band, "&=");
        }
#line 1893 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 344 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), bor, "|=");
        }
#line 1901 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 351 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), xor, "^=");
        }
#line 1909 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 358 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shl, "<<=");
        }
#line 1917 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 365 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shr, ">>=");
        }
#line 1925 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 372 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *or_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1933 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 379 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *and_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1941 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 386 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1949 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 393 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1957 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 402 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1965 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 409 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1973 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 416 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1981 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 423 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *sm_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1989 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 430 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *gr_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1997 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 437 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2005 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 444 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *band(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2013 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 451 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2021 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 458 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2029 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 465 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2037 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 472 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2045 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 479 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2053 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 486 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2061 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 493 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2069 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 500 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2077 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 507 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2085 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 514 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2093 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 520 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *negate(&(yyvsp[0]));
        }
#line 2101 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 526 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2109 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 532 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2117 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 538 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2125 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 544 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2133 "parse.c" /* yacc.c:1646  */
    break;

  case 73:
#line 550 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2141 "parse.c" /* yacc.c:1646  */
    break;

  case 74:
#line 556 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bnot(&(yyvsp[0]));
        }
#line 2149 "parse.c" /* yacc.c:1646  */
    break;

  case 75:
#line 562 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *not_boolean(&(yyvsp[0]));
        }
#line 2157 "parse.c" /* yacc.c:1646  */
    break;

  case 76:
#line 570 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2165 "parse.c" /* yacc.c:1646  */
    break;

  case 77:
#line 575 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_str | e_const);
        }
#line 2173 "parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 580 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
        }
#line 2181 "parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 587 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2189 "parse.c" /* yacc.c:1646  */
    break;

  case 81:
#line 596 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[-1]));
        }
#line 2197 "parse.c" /* yacc.c:1646  */
    break;

  case 82:
#line 603 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2205 "parse.c" /* yacc.c:1646  */
    break;

  case 83:
#line 612 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2213 "parse.c" /* yacc.c:1646  */
    break;

  case 89:
#line 631 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2222 "parse.c" /* yacc.c:1646  */
    break;

  case 92:
#line 655 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *for_stmnt(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2230 "parse.c" /* yacc.c:1646  */
    break;

  case 98:
#line 699 "grammar" /* yacc.c:1646  */
    {
        symtab_setFunParams(); /* the # variables so far are the parameters */
    }
#line 2238 "parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 706 "grammar" /* yacc.c:1646  */
    {
        open_fun();
    }
#line 2246 "parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 717 "grammar" /* yacc.c:1646  */
    {
        close_fun(&(yyvsp[-1]));
    }
#line 2254 "parse.c" /* yacc.c:1646  */
    break;

  case 134:
#line 798 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2262 "parse.c" /* yacc.c:1646  */
    break;

  case 138:
#line 814 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2270 "parse.c" /* yacc.c:1646  */
    break;

  case 142:
#line 829 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = functionIdx();
    }
#line 2278 "parse.c" /* yacc.c:1646  */
    break;

  case 143:
#line 837 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *zeroargs((yyvsp[-1]).type);
    }
#line 2286 "parse.c" /* yacc.c:1646  */
    break;

  case 144:
#line 844 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *onearg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2294 "parse.c" /* yacc.c:1646  */
    break;

  case 145:
#line 853 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *twoargs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2302 "parse.c" /* yacc.c:1646  */
    break;

  case 146:
#line 864 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *threeargs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2310 "parse.c" /* yacc.c:1646  */
    break;

  case 147:
#line 872 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_string((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2318 "parse.c" /* yacc.c:1646  */
    break;

  case 148:
#line 880 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_special((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2326 "parse.c" /* yacc.c:1646  */
    break;

  case 149:
#line 887 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_printf, &(yyvsp[0]));
    }
#line 2334 "parse.c" /* yacc.c:1646  */
    break;

  case 150:
#line 894 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *exec_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2342 "parse.c" /* yacc.c:1646  */
    break;

  case 151:
#line 901 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_strformat, &(yyvsp[0]));
    }
#line 2350 "parse.c" /* yacc.c:1646  */
    break;

  case 152:
#line 908 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *callfun((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2358 "parse.c" /* yacc.c:1646  */
    break;

  case 154:
#line 917 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2366 "parse.c" /* yacc.c:1646  */
    break;

  case 155:
#line 925 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2374 "parse.c" /* yacc.c:1646  */
    break;

  case 157:
#line 942 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *if_stmnt(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        symtab_pop();
    }
#line 2383 "parse.c" /* yacc.c:1646  */
    break;

  case 158:
#line 958 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2391 "parse.c" /* yacc.c:1646  */
    break;

  case 159:
#line 964 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = O_FILE;
    }
#line 2400 "parse.c" /* yacc.c:1646  */
    break;

  case 162:
#line 977 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2408 "parse.c" /* yacc.c:1646  */
    break;

  case 163:
#line 981 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2416 "parse.c" /* yacc.c:1646  */
    break;

  case 164:
#line 989 "grammar" /* yacc.c:1646  */
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
#line 2432 "parse.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1005 "grammar" /* yacc.c:1646  */
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
#line 2448 "parse.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1023 "grammar" /* yacc.c:1646  */
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
#line 2468 "parse.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1046 "grammar" /* yacc.c:1646  */
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
#line 2488 "parse.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1064 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2496 "parse.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1070 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2504 "parse.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1075 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2512 "parse.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1079 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2520 "parse.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1085 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2528 "parse.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1091 "grammar" /* yacc.c:1646  */
    {
        pop_dead();
    }
#line 2536 "parse.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1096 "grammar" /* yacc.c:1646  */
    {
        push_dead();                    /* set new dead-level */
    }
#line 2544 "parse.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1115 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *return_stmnt((yyvsp[-1]).type, &(yyvsp[0]));
    }
#line 2552 "parse.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1122 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2560 "parse.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1132 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2568 "parse.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1160 "grammar" /* yacc.c:1646  */
    {
        util_resetSemErr();
    }
#line 2576 "parse.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1170 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *cat_stmnt(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2584 "parse.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1179 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2592 "parse.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1186 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2600 "parse.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1201 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2609 "parse.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1208 "grammar" /* yacc.c:1646  */
    {
        gencode(&(yyvsp[0]), op_push_imm, 0);
        (yyval) = (yyvsp[0]);
    }
#line 2618 "parse.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1216 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));    /* explicit initialization */
    }
#line 2626 "parse.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1261 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2634 "parse.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1270 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2643 "parse.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1280 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2651 "parse.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1293 "grammar" /* yacc.c:1646  */
    {
        gp_init = *catcode(&gp_init, &(yyvsp[-1]));
    }
#line 2659 "parse.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1312 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *while_stmnt(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2667 "parse.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1317 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(0);   /* by default initializes a variable to 0 */
    }
#line 2675 "parse.c" /* yacc.c:1646  */
    break;


#line 2679 "parse.c" /* yacc.c:1646  */
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
#line 1322 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
