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
    RESIZE = 304,
    STRUPR = 305,
    STRFIND = 306,
    STRFORMAT = 307,
    SUBSTR = 308,
    SYSTEM = 309,
    TRIM = 310,
    TRIMLEFT = 311,
    TRIMRIGHT = 312,
    VOID = 313,
    WHILE = 314,
    AND_IS = 315,
    OR_IS = 316,
    XOR_IS = 317,
    SHL_IS = 318,
    SHR_IS = 319,
    DIV_IS = 320,
    MINUS_IS = 321,
    MUL_IS = 322,
    MOD_IS = 323,
    PLUS_IS = 324,
    OR = 325,
    AND = 326,
    EQUAL = 327,
    NOT_EQUAL = 328,
    SMALLER_EQUAL = 329,
    GREATER_EQUAL = 330,
    OLDER = 331,
    YOUNGER = 332,
    SHL = 333,
    SHR = 334,
    INC = 335,
    DEC = 336
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

#line 205 "parse.c" /* yacc.c:358  */

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
#define YYLAST   905

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,     2,     2,     2,    92,    77,     2,
     103,    99,    90,    88,   100,    89,     2,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,   104,
      80,    60,    81,    71,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    97,     2,   102,    76,     2,   101,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   105,    75,    98,    96,     2,     2,     2,
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
      55,    56,    57,    58,    59,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    73,    74,    78,    79,    82,
      83,    84,    85,    86,    87,    94,    95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   117,   121,   128,   134,   139,   145,   145,
     152,   152,   158,   158,   164,   172,   174,   177,   183,   190,
     196,   199,   204,   211,   218,   218,   227,   233,   235,   237,
     241,   247,   255,   258,   265,   265,   272,   279,   287,   294,
     301,   308,   315,   322,   329,   336,   343,   350,   357,   364,
     371,   378,   385,   394,   401,   408,   415,   422,   429,   436,
     443,   450,   457,   464,   471,   478,   485,   492,   499,   506,
     512,   518,   524,   530,   536,   542,   548,   554,   562,   567,
     572,   579,   581,   589,   597,   604,   608,   610,   612,   617,
     619,   626,   628,   632,   664,   669,   673,   677,   678,   683,
     693,   701,   710,   712,   714,   718,   720,   722,   724,   726,
     728,   730,   732,   734,   736,   738,   740,   742,   744,   746,
     748,   750,   752,   754,   756,   758,   762,   764,   766,   768,
     770,   772,   774,   776,   780,   782,   784,   788,   794,   798,
     800,   804,   810,   814,   816,   820,   827,   833,   840,   849,
     860,   868,   876,   883,   890,   897,   904,   907,   915,   921,
     925,   947,   956,   963,   965,   969,   969,   979,   994,  1009,
    1031,  1055,  1061,  1067,  1067,  1077,  1077,  1083,  1088,  1093,
    1095,  1099,  1104,  1108,  1118,  1118,  1124,  1126,  1132,  1135,
    1137,  1139,  1141,  1144,  1147,  1150,  1155,  1161,  1165,  1171,
    1179,  1186,  1194,  1196,  1198,  1202,  1209,  1215,  1223,  1226,
    1235,  1243,  1245,  1254,  1259,  1271
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
  "RETURN", "STAT", "STRING", "STRINGTYPE", "STRLEN", "STRLWR",
  "RESIZE", "STRUPR", "STRFIND", "STRFORMAT", "SUBSTR", "SYSTEM",
  "TRIM", "TRIMLEFT", "TRIMRIGHT", "VOID", "WHILE", "'='", "AND_IS",
  "OR_IS", "XOR_IS", "SHL_IS", "SHR_IS", "DIV_IS", "MINUS_IS", "MUL_IS",
  "MOD_IS", "PLUS_IS", "'?'", "':'", "OR", "AND", "'|'", "'^'", "'&'",
  "EQUAL", "NOT_EQUAL", "'<'", "'>'", "SMALLER_EQUAL", "GREATER_EQUAL",
  "OLDER", "YOUNGER", "SHL", "SHR", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "INC", "DEC", "'~'", "'['", "'}'", "')'", "','", "'`'", "']'",
  "'('", "';'", "'{'", "$accept", "input", "args", "break_ok",
  "break_stat", "closebrace", "$@1", "closepar", "$@2", "comma", "$@3",
  "compound", "condition", "continue_stat", "_voidtype", "def_var_or_fun",
  "enterid", "enter_varid", "err_expression", "$@4", "expr_code",
  "_p_casttype", "_string", "_func_or_var", "_backtick", "$@5",
  "expression", "_for", "_expr_list", "_opt_init_expression",
  "_opt_cond_expression", "_opt_inc_expression", "for_stat", "_partype",
  "_pars", "_opt_parlist", "_funvars", "_funid", "funcdef",
  "_zero_arg_funs", "_one_arg_funs", "_two_arg_funs", "_optint_string",
  "_comma_expr", "_optint_special", "_comma_arglist", "_opt_arglist",
  "_funname", "function", "_if", "_else", "if_stat", "_p_makeList_expr",
  "_p_makeList_normal", "_old_young", "_older_younger", "$@6",
  "p_makeList", "nesting", "ok", "openbrace", "$@7", "openpar", "$@8",
  "popdead", "pushdead", "_return_tail", "_leave", "return_stat",
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      61,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,    63,    58,   325,   326,   124,    94,    38,   327,   328,
      60,    62,   329,   330,   331,   332,   333,   334,    43,    45,
      42,    47,    37,    33,   335,   336,   126,    91,   125,    41,
      44,    96,    93,    40,    59,   123
};
# endif

#define YYPACT_NINF -317

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-317)))

#define YYTABLE_NINF -216

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,  -317,  -317,  -317,  -317,    27,   -29,  -317,  -317,  -317,
      17,  -317,  -317,  -317,  -317,  -317,  -317,   -97,   -67,   -42,
       4,    11,  -317,  -317,   -28,  -317,    34,   -25,  -317,  -317,
    -317,  -317,   663,    48,   -13,   354,  -317,  -317,   -11,    -6,
      48,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,    -5,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   663,   663,
     663,   663,   663,   663,   663,   562,    62,  -317,   788,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,    13,  -317,  -317,  -317,
    -317,   -67,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,    12,  -317,  -317,  -317,   663,  -317,  -317,  -317,
    -317,  -317,  -317,     8,    49,  -317,  -317,  -317,  -317,    20,
    -317,  -317,    34,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
     -61,   -61,   -61,   -61,   -61,   -61,   788,  -317,  -317,  -317,
      16,   788,  -317,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,  -317,  -317,   663,  -317,  -317,
    -317,  -317,  -317,    55,  -317,    56,   -33,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,   788,  -317,   -22,
      34,   354,  -317,  -317,  -317,  -317,  -317,  -317,    34,  -317,
    -317,    58,  -317,  -317,    59,    60,  -317,  -317,    61,   663,
    -317,   788,   788,   788,   788,   788,   788,   788,   788,   788,
     788,   788,   750,   340,   444,   544,   644,   808,   254,   254,
      14,    14,    14,    14,    14,    14,    90,    90,     0,     0,
     -61,   -61,   -61,   707,  -317,  -317,    68,    69,    71,  -317,
    -317,  -317,    72,  -317,   -10,  -317,    74,  -317,  -317,  -317,
    -317,  -317,  -317,    48,  -317,  -317,  -317,  -317,  -317,   -61,
     663,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,    57,   459,  -317,   100,  -317,
    -317,  -317,  -317,   190,  -317,  -317,    77,  -317,  -317,  -317,
    -317,  -317,  -317,   663,   459,  -317,  -317,  -317,    55,  -317,
     788,  -317,  -317,  -317,    74,  -317,  -317,   158,  -317,  -317,
     459,  -317,  -317,   459,  -317,  -317,  -317,  -317
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   202,   204,   203,    18,     0,     0,     3,   184,   205,
       0,     1,     2,   100,   175,    21,    19,     0,     0,    22,
     215,     0,    20,   211,    12,   215,    98,     0,   185,   172,
     215,   208,     0,     0,     0,     0,   199,    96,    12,     0,
       0,   176,   212,   112,   113,   105,   135,   111,   110,   127,
     126,   128,   114,   116,   117,   115,   129,   106,   139,   140,
     107,   130,   131,   175,   119,   102,   103,   104,    33,   108,
     175,   109,    79,   175,   118,   134,    31,   120,   122,   133,
     121,   132,   175,   175,   136,   123,   124,   125,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    81,   209,   175,
     175,   175,   175,   175,   175,    10,    12,   156,    22,   210,
      13,     0,     7,    17,   182,   178,   178,   181,   178,   215,
     184,   101,     0,   186,   184,    26,     0,   184,   175,   191,
     175,   190,   215,     0,    24,   184,   196,   198,   184,     0,
     175,   189,     0,   173,    94,    24,    24,    24,    24,    24,
      74,    69,    76,    70,    72,    75,    34,    27,    28,    29,
       0,    10,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    73,     0,   146,    24,
      24,    24,    24,    24,    32,     0,    24,   167,   195,    83,
     171,   157,   213,   187,   193,     9,   194,    25,   188,    24,
      24,     0,   174,   179,   183,   180,   192,   197,    24,    95,
      99,    12,     5,   161,    12,    12,    12,    82,     0,     0,
      80,    36,    43,    44,    45,    46,    47,    39,    42,    38,
      40,    41,     0,    48,    49,    59,    60,    58,    50,    51,
      53,    54,    55,    56,    66,    65,    61,    62,    57,    63,
      64,    67,    68,     0,   147,    12,   215,   215,    12,   155,
     144,    11,    12,    12,     0,    85,    86,   184,    87,    88,
      10,    15,    16,     0,    14,    10,    24,    24,    35,    77,
       0,    37,    24,    24,   150,   138,    24,   151,   142,   165,
      24,   163,   164,   166,    24,    24,     0,    23,   206,   200,
       6,     4,    12,    52,   148,   137,    12,    12,   162,    84,
      89,   184,   177,     0,     0,    24,    24,   169,    24,   178,
     207,   177,   149,   170,    91,    10,    92,   215,   214,     6,
       0,   177,   159,     0,   158,   160,   177,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -131,  -163,  -317,   -32,  -317,  -139,  -317,   -23,
    -317,  -317,   -40,  -317,  -317,   185,   -38,  -102,    18,  -317,
    -165,  -317,  -317,  -317,  -317,  -317,   -47,  -317,  -145,  -317,
    -317,  -317,  -317,    52,  -317,  -317,  -317,  -317,   186,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -133,  -317,  -112,  -317,  -317,   -88,    87,
      64,  -317,   -44,  -317,  -316,  -138,  -317,  -317,  -317,  -115,
    -317,  -317,  -285,    70,  -317,     3,  -317,     6,  -317,   167,
    -317,  -317,  -317,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   231,   334,   120,   121,   122,   204,   205,   296,
      34,   123,   290,   124,     6,     7,    20,    21,   125,   126,
     127,   160,    96,    97,   237,   238,    98,   128,   286,   287,
     331,   345,   129,    37,    38,    39,    25,    14,    15,    99,
     100,   101,   102,   304,   103,   307,   279,   104,   105,   130,
     351,   131,   106,   207,   313,   283,   284,   107,   209,    30,
     132,   133,    26,    27,   339,   210,   224,   134,   135,    16,
      17,   136,   137,    35,   292,   138,     9,   139,   319,    23,
      24,   140,   141,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    33,   144,     8,    13,   214,    10,    28,     8,   216,
      42,    10,   218,     1,     2,   142,   234,   235,    18,   145,
     226,    18,   240,   227,     3,   348,   146,    11,   211,   147,
     212,   332,    40,   195,   196,   355,   197,    29,   148,   149,
     357,   150,   151,   152,   153,   154,   155,   156,   161,   341,
      19,  -165,  -165,   108,   285,   198,   199,   200,   201,   202,
     203,  -100,     1,     2,   -23,   354,     1,     2,   356,     1,
       2,    32,   278,     3,   311,   312,  -201,     3,    41,   217,
       3,   108,  -215,   206,   219,     4,   220,   110,   -97,     4,
     192,   193,   194,   143,   195,   196,   228,   197,  -145,   213,
     188,   189,   190,   191,   192,   193,   194,   162,   195,   196,
     215,   197,  -162,   222,   225,   239,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    40,   329,
     273,   316,   223,  -215,  -215,   281,   320,  -153,  -152,  -154,
     333,   -90,   298,   232,   233,   232,   232,   236,   303,   306,
    -143,  -168,   315,   285,   314,   326,  -141,   350,   190,   191,
     192,   193,   194,   280,   195,   196,   353,   197,   295,   294,
      12,   318,   299,   344,   229,   337,    22,   327,   208,   289,
     109,   347,   221,     0,     0,     0,   349,   230,     0,     0,
       0,     0,     0,   297,     0,     0,   338,   274,   275,   276,
     277,   232,   288,     0,   282,     0,   293,     0,     0,     0,
       0,     0,     0,     0,   293,     0,     0,     0,   291,     0,
       0,     0,     0,     0,     0,     0,   291,     0,     0,     0,
       0,     0,   302,   323,     0,   317,   305,   308,     0,   309,
     310,   174,     0,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,     0,   195,   196,   340,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
       0,     0,     0,     0,   336,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   321,   322,     0,     0,   346,     0,
     324,   325,     0,     0,   232,     0,     0,   352,   328,     0,
       0,     0,     0,   330,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   195,   196,
       0,   197,     0,   342,   343,   111,     0,   -24,   -24,   -24,
     112,   -24,   -24,   -24,   113,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   114,   -24,
     -24,   115,   -24,   -24,   -24,   -24,   -24,   -24,   116,     1,
       2,   -24,   -24,   -24,   -24,   -24,   -24,   117,   -24,   -24,
       3,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   118,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,     0,   195,   196,     0,   197,     0,     0,
       0,     0,   -24,   -24,     0,     0,     0,   -24,   -24,   -24,
     -24,     0,    -8,     0,     0,   -24,     0,   -24,   119,  -173,
     111,     0,   -24,   -24,   -24,   112,   -24,   -24,   -24,   113,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   114,   -24,   -24,   115,   -24,   -24,   -24,
     -24,   -24,   -24,   116,     1,     2,   -24,   -24,   -24,   -24,
     -24,   -24,   117,   -24,   -24,     3,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   118,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   195,   196,
       0,   197,     0,     0,     0,     0,     0,   -24,   -24,     0,
       0,     0,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,     0,   -24,   119,  -173,    43,    44,    45,     0,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,    61,    62,     0,
      63,    64,    65,    66,    67,    68,     0,   157,   158,    69,
      70,    71,    72,    73,    74,     0,    75,    76,   159,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   195,   196,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,     0,     0,     0,    90,    91,    92,    93,     0,
       0,     0,     0,    94,     0,    95,    43,    44,    45,     0,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,     0,    61,    62,
       0,    63,    64,    65,    66,    67,    68,     0,     0,     0,
      69,    70,    71,    72,    73,    74,     0,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   195,   196,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,     0,     0,     0,    90,    91,    92,    93,
       0,     0,     0,     0,    94,     0,    95,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,     0,   197,     0,     0,     0,     0,   301,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   300,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,     0,   195,   196,     0,   197,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
       0,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,     0,   197,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,     0,   197
};

static const yytype_int16 yycheck[] =
{
      20,    24,    40,     0,    33,   120,     0,   104,     5,   124,
      30,     5,   127,    35,    36,    38,   147,   148,     1,    63,
     135,     1,   161,   138,    46,   341,    70,     0,   116,    73,
     118,   316,    26,    94,    95,   351,    97,   104,    82,    83,
     356,    88,    89,    90,    91,    92,    93,    94,    95,   334,
      33,    84,    85,    33,   219,    99,   100,   101,   102,   103,
     104,   103,    35,    36,    60,   350,    35,    36,   353,    35,
      36,    60,   203,    46,    84,    85,   104,    46,   103,   126,
      46,    33,   104,   106,   128,    58,   130,   100,    99,    58,
      90,    91,    92,    99,    94,    95,   140,    97,   103,   119,
      86,    87,    88,    89,    90,    91,    92,    45,    94,    95,
      98,    97,    99,   105,   134,    99,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   142,   314,
     197,   290,   134,   104,    99,    99,   295,    99,    99,    99,
      60,   104,   101,   145,   146,   147,   148,   149,   100,   100,
      99,    99,   287,   338,   100,   306,    99,    19,    88,    89,
      90,    91,    92,   203,    94,    95,   349,    97,   228,   221,
       5,   293,   239,   338,   142,   328,    10,   309,   111,   219,
      33,   339,   132,    -1,    -1,    -1,   345,   143,    -1,    -1,
      -1,    -1,    -1,   236,    -1,    -1,   331,   199,   200,   201,
     202,   203,   219,    -1,   206,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,   275,   300,    -1,   293,   276,   277,    -1,   282,
     283,    71,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    94,    95,   333,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,    -1,    -1,   338,    -1,
     302,   303,    -1,    -1,   306,    -1,    -1,   347,   310,    -1,
      -1,    -1,    -1,   315,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      -1,    97,    -1,   335,   336,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    94,    95,    -1,    97,    -1,    -1,
      -1,    -1,    88,    89,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,   103,   104,   105,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
     101,    -1,   103,   104,   105,     3,     4,     5,    -1,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,   101,    -1,   103,     3,     4,     5,    -1,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    -1,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,   101,    -1,   103,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    94,    95,    -1,    97,    -1,    -1,    -1,    -1,   102,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    94,    95,    -1,    97,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    94,    95,    -1,    97,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    94,    95,    -1,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,    46,    58,   107,   120,   121,   181,   182,
     183,     0,   121,    33,   143,   144,   175,   176,     1,    33,
     122,   123,   144,   185,   186,   142,   168,   169,   104,   104,
     165,   189,    60,   115,   116,   179,   189,   139,   140,   141,
     183,   103,   189,     3,     4,     5,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    20,    21,    22,
      23,    25,    26,    28,    29,    30,    31,    32,    33,    37,
      38,    39,    40,    41,    42,    44,    45,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    88,    89,
      93,    94,    95,    96,   101,   103,   128,   129,   132,   145,
     146,   147,   148,   150,   153,   154,   158,   163,    33,   185,
     100,     1,     6,    10,    24,    27,    34,    43,    59,   104,
     110,   111,   112,   117,   119,   124,   125,   126,   133,   138,
     155,   157,   166,   167,   173,   174,   177,   178,   181,   183,
     187,   188,   115,    99,   122,   168,   168,   168,   168,   168,
     132,   132,   132,   132,   132,   132,   132,    35,    36,    46,
     127,   132,    45,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    94,    95,    97,   168,   168,
     168,   168,   168,   168,   113,   114,   115,   159,   165,   164,
     171,   164,   164,   189,   175,    98,   175,   132,   175,   168,
     168,   179,   105,   124,   172,   189,   175,   175,   168,   139,
     166,   108,   124,   124,   108,   108,   124,   130,   131,    99,
     113,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   124,   124,   124,   124,   108,   152,
     189,    99,   124,   161,   162,   126,   134,   135,   181,   189,
     118,   124,   180,   183,   111,   118,   115,   115,   101,   132,
      72,   102,   115,   100,   149,   189,   100,   151,   189,   115,
     115,    84,    85,   160,   100,   175,   113,   122,   123,   184,
     113,   124,   124,   132,   124,   124,   108,   161,   124,   126,
     124,   136,   178,    60,   109,   115,   115,   159,   175,   170,
     132,   178,   124,   124,   134,   137,   189,   171,   170,   113,
      19,   156,   189,   109,   178,   170,   178,   170
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   107,   108,   108,   109,   110,   112,   111,
     114,   113,   116,   115,   117,   118,   118,   119,   120,   121,
     121,   121,   122,   123,   125,   124,   126,   127,   127,   127,
     128,   128,   129,   129,   131,   130,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   134,   134,   135,   135,   135,   136,
     136,   137,   137,   138,   139,   140,   140,   141,   141,   142,
     143,   144,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   147,   147,   147,   147,
     147,   147,   147,   147,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   156,   156,
     157,   158,   159,   160,   160,   162,   161,   163,   163,   163,
     163,   164,   165,   167,   166,   169,   168,   170,   171,   172,
     172,   173,   173,   174,   176,   175,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   179,   179,
     180,   181,   182,   182,   182,   183,   184,   184,   185,   185,
     186,   186,   186,   187,   188,   189
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
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     2,     3,     5,     7,
       4,     4,     3,     3,     3,     3,     1,     2,     2,     1,
       9,     3,     0,     1,     1,     0,     2,     2,     3,     6,
       7,     1,     1,     0,     2,     0,     2,     0,     0,     1,
       1,     1,     1,     2,     0,     2,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     3,     2,     3,
       3,     1,     3,     2,     7,     0
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
#line 124 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_multipleArgs(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 1683 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 129 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_firstArg(&(yyvsp[0]));
    }
#line 1691 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "grammar" /* yacc.c:1646  */
    {
        gp_breakOK++;
    }
#line 1699 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 140 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_break();
    }
#line 1707 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 145 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closebrace_expected;
        symtab_pop();
    }
#line 1716 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 152 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closepar_expected; 
    }
#line 1724 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_comma_expected; 
    }
#line 1732 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 167 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 1740 "parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_continue();
    }
#line 1748 "parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 184 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1756 "parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 192 "grammar" /* yacc.c:1646  */
    {
        gp_init = *p_catCode(&gp_init, &(yyvsp[-1]));
    }
#line 1764 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 205 "grammar" /* yacc.c:1646  */
    {
        p_defineVar();    /* the first n variables of a function, up to the
                            end of the parameter list are the parameters. */
    }
#line 1773 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 212 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1781 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 218 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1789 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1797 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 228 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(&(yyvsp[0]));
    }
#line 1805 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 243 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        gp_stringbuf = rss_strcat(gp_stringbuf, util_string());
    }
#line 1813 "parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 248 "grammar" /* yacc.c:1646  */
    {
        free(gp_stringbuf);                  /* free former string */
        gp_stringbuf = rss_strdup(util_string()); /* duplicate initial string */
    }
#line 1822 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 259 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1830 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 265 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1838 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 275 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1846 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 283 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1854 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 290 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_multiply, "*=");
        }
#line 1862 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 297 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_divide, "/=");
        }
#line 1870 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 304 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_modulo, "%=");
        }
#line 1878 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 311 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_addition, "+=");
        }
#line 1886 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 318 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_subtract, "-=");
        }
#line 1894 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 325 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_and, "&=");
        }
#line 1902 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_or, "|=");
        }
#line 1910 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 339 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_xor, "^=");
        }
#line 1918 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 346 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shl, "<<=");
        }
#line 1926 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 353 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shr, ">>=");
        }
#line 1934 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 360 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_orBool(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1942 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 367 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_andBoolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1950 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 374 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1958 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 381 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1966 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 390 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1974 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 397 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1982 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 404 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1990 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 411 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1998 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 418 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_grEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2006 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 425 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2014 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 432 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_and(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2022 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 439 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_or(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2030 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 446 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2038 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 453 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2046 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 460 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2054 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 467 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2062 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 474 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2070 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 481 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2078 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 488 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2086 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 495 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2094 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 502 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2102 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 508 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_negate(&(yyvsp[0]));
        }
#line 2110 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 514 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2118 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 520 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2126 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 526 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2134 "parse.c" /* yacc.c:1646  */
    break;

  case 73:
#line 532 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2142 "parse.c" /* yacc.c:1646  */
    break;

  case 74:
#line 538 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2150 "parse.c" /* yacc.c:1646  */
    break;

  case 75:
#line 544 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_not(&(yyvsp[0]));
        }
#line 2158 "parse.c" /* yacc.c:1646  */
    break;

  case 76:
#line 550 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_notBoolean(&(yyvsp[0]));
        }
#line 2166 "parse.c" /* yacc.c:1646  */
    break;

  case 77:
#line 558 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2174 "parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 563 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_str | e_const);
        }
#line 2182 "parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 568 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_int | e_const);
        }
#line 2190 "parse.c" /* yacc.c:1646  */
    break;

  case 80:
#line 575 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2198 "parse.c" /* yacc.c:1646  */
    break;

  case 82:
#line 584 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_oneArg(f_backtick, &(yyvsp[-1]));
        }
#line 2206 "parse.c" /* yacc.c:1646  */
    break;

  case 83:
#line 591 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2214 "parse.c" /* yacc.c:1646  */
    break;

  case 84:
#line 600 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2222 "parse.c" /* yacc.c:1646  */
    break;

  case 90:
#line 619 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2231 "parse.c" /* yacc.c:1646  */
    break;

  case 93:
#line 643 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_for(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2239 "parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 687 "grammar" /* yacc.c:1646  */
    {
        symtab_setFunParams(); /* the # variables so far are the parameters */
    }
#line 2247 "parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 694 "grammar" /* yacc.c:1646  */
    {
        p_beginFunction();
    }
#line 2255 "parse.c" /* yacc.c:1646  */
    break;

  case 101:
#line 705 "grammar" /* yacc.c:1646  */
    {
        p_endFunction(&(yyvsp[-1]));
    }
#line 2263 "parse.c" /* yacc.c:1646  */
    break;

  case 137:
#line 790 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2271 "parse.c" /* yacc.c:1646  */
    break;

  case 141:
#line 806 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2279 "parse.c" /* yacc.c:1646  */
    break;

  case 145:
#line 821 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = p_functionIdx();
    }
#line 2287 "parse.c" /* yacc.c:1646  */
    break;

  case 146:
#line 829 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_zeroArgs((yyvsp[-1]).type);
    }
#line 2295 "parse.c" /* yacc.c:1646  */
    break;

  case 147:
#line 836 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_oneArg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2303 "parse.c" /* yacc.c:1646  */
    break;

  case 148:
#line 845 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_twoArgs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2311 "parse.c" /* yacc.c:1646  */
    break;

  case 149:
#line 856 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_threeArgs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2319 "parse.c" /* yacc.c:1646  */
    break;

  case 150:
#line 864 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntString((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2327 "parse.c" /* yacc.c:1646  */
    break;

  case 151:
#line 872 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntSpecial((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2335 "parse.c" /* yacc.c:1646  */
    break;

  case 152:
#line 879 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_printf, &(yyvsp[0]));
    }
#line 2343 "parse.c" /* yacc.c:1646  */
    break;

  case 153:
#line 886 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2351 "parse.c" /* yacc.c:1646  */
    break;

  case 154:
#line 893 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_strformat, &(yyvsp[0]));
    }
#line 2359 "parse.c" /* yacc.c:1646  */
    break;

  case 155:
#line 900 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_callFunction((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2367 "parse.c" /* yacc.c:1646  */
    break;

  case 157:
#line 909 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2375 "parse.c" /* yacc.c:1646  */
    break;

  case 158:
#line 917 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2383 "parse.c" /* yacc.c:1646  */
    break;

  case 160:
#line 934 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_if(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        symtab_pop();
    }
#line 2392 "parse.c" /* yacc.c:1646  */
    break;

  case 161:
#line 950 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2400 "parse.c" /* yacc.c:1646  */
    break;

  case 162:
#line 956 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = IS_FILE;
    }
#line 2409 "parse.c" /* yacc.c:1646  */
    break;

  case 165:
#line 969 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2417 "parse.c" /* yacc.c:1646  */
    break;

  case 166:
#line 973 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2425 "parse.c" /* yacc.c:1646  */
    break;

  case 167:
#line 981 "grammar" /* yacc.c:1646  */
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
#line 2441 "parse.c" /* yacc.c:1646  */
    break;

  case 168:
#line 997 "grammar" /* yacc.c:1646  */
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
#line 2457 "parse.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1015 "grammar" /* yacc.c:1646  */
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
#line 2477 "parse.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1038 "grammar" /* yacc.c:1646  */
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
#line 2497 "parse.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1056 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2505 "parse.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1062 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2513 "parse.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1067 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2521 "parse.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1071 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2529 "parse.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1077 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2537 "parse.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1083 "grammar" /* yacc.c:1646  */
    {
        p_popDead();
    }
#line 2545 "parse.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1088 "grammar" /* yacc.c:1646  */
    {
        p_pushDead();                    /* set new dead-level */
    }
#line 2553 "parse.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1100 "grammar" /* yacc.c:1646  */
    {
        msg("saw return");
    }
#line 2561 "parse.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1110 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_return((yyvsp[-1]).type, &(yyvsp[0]));
        msg("SAW return stmt");
    }
#line 2570 "parse.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1118 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2578 "parse.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1128 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2586 "parse.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1156 "grammar" /* yacc.c:1646  */
    {
        msg("saw statement(.5)");
        util_resetSemErr();
    }
#line 2595 "parse.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1167 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catStmnts(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2603 "parse.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1181 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2611 "parse.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1188 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2619 "parse.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1203 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2628 "parse.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1210 "grammar" /* yacc.c:1646  */
    {
        p_generateCode(&(yyvsp[0]), op_push_imm, 0);
        (yyval) = (yyvsp[0]);
    }
#line 2637 "parse.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1218 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));    /* explicit initialization */
    }
#line 2645 "parse.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1229 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(p_assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2653 "parse.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1238 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2662 "parse.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1248 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2670 "parse.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1266 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_while(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2678 "parse.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1271 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(0);   /* by default initializes a variable to 0 */
    }
#line 2686 "parse.c" /* yacc.c:1646  */
    break;


#line 2690 "parse.c" /* yacc.c:1646  */
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
#line 1276 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
