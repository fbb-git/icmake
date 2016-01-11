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
    LISTFIND = 292,
    LISTLEN = 293,
    LISTUNION = 294,
    MAKELIST = 295,
    ECHO_TOKEN = 296,
    NUMBER = 297,
    PRINTF = 298,
    PUTENV = 299,
    RETURN = 300,
    STAT = 301,
    STRCHR = 302,
    STRING = 303,
    STRINGTYPE = 304,
    STRLEN = 305,
    STRLWR = 306,
    RESIZE = 307,
    STRUPR = 308,
    STRFIND = 309,
    STRFORMAT = 310,
    SUBSTR = 311,
    SYSTEM = 312,
    TRIM = 313,
    TRIMLEFT = 314,
    TRIMRIGHT = 315,
    VOID = 316,
    WHILE = 317,
    AND_IS = 318,
    OR_IS = 319,
    XOR_IS = 320,
    SHL_IS = 321,
    SHR_IS = 322,
    DIV_IS = 323,
    MINUS_IS = 324,
    MUL_IS = 325,
    MOD_IS = 326,
    PLUS_IS = 327,
    OR = 328,
    AND = 329,
    EQUAL = 330,
    NOT_EQUAL = 331,
    SMALLER_EQUAL = 332,
    GREATER_EQUAL = 333,
    OLDER = 334,
    YOUNGER = 335,
    SHL = 336,
    SHR = 337,
    INC = 338,
    DEC = 339
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

#line 208 "parse.c" /* yacc.c:358  */

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
#define YYLAST   891

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    96,     2,     2,     2,    95,    80,     2,
     106,   102,    93,    91,   103,    92,     2,    94,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,   107,
      83,    63,    84,    74,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   100,     2,   105,    79,     2,   104,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,    78,   101,    99,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    76,    77,
      81,    82,    85,    86,    87,    88,    89,    90,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   120,   124,   131,   137,   142,   148,   148,
     155,   155,   161,   161,   167,   175,   177,   180,   186,   193,
     199,   202,   207,   214,   221,   221,   230,   236,   238,   240,
     244,   250,   258,   261,   268,   268,   275,   282,   290,   297,
     304,   311,   318,   325,   332,   339,   346,   353,   360,   367,
     374,   381,   388,   397,   404,   411,   418,   425,   432,   439,
     446,   453,   460,   467,   474,   481,   488,   495,   502,   509,
     515,   521,   527,   533,   539,   545,   551,   557,   565,   570,
     575,   582,   584,   592,   600,   607,   611,   613,   615,   620,
     622,   629,   631,   635,   667,   672,   676,   680,   681,   686,
     696,   704,   713,   715,   717,   721,   723,   725,   727,   729,
     731,   733,   735,   737,   739,   741,   743,   745,   747,   749,
     751,   753,   755,   757,   759,   761,   765,   767,   769,   771,
     773,   775,   777,   779,   781,   783,   785,   789,   791,   793,
     797,   803,   807,   809,   813,   819,   823,   825,   829,   836,
     842,   849,   858,   869,   877,   885,   892,   899,   906,   913,
     916,   924,   930,   934,   956,   965,   972,   974,   978,   978,
     988,  1003,  1018,  1040,  1064,  1070,  1076,  1076,  1086,  1086,
    1092,  1097,  1102,  1104,  1108,  1113,  1117,  1127,  1127,  1133,
    1135,  1141,  1144,  1146,  1148,  1150,  1153,  1156,  1159,  1164,
    1166,  1170,  1176,  1184,  1191,  1199,  1201,  1203,  1207,  1214,
    1220,  1228,  1231,  1240,  1248,  1250,  1259,  1264,  1276
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
  "LISTFIND", "LISTLEN", "LISTUNION", "MAKELIST", "ECHO_TOKEN", "NUMBER",
  "PRINTF", "PUTENV", "RETURN", "STAT", "STRCHR", "STRING", "STRINGTYPE",
  "STRLEN", "STRLWR", "RESIZE", "STRUPR", "STRFIND", "STRFORMAT", "SUBSTR",
  "SYSTEM", "TRIM", "TRIMLEFT", "TRIMRIGHT", "VOID", "WHILE", "'='",
  "AND_IS", "OR_IS", "XOR_IS", "SHL_IS", "SHR_IS", "DIV_IS", "MINUS_IS",
  "MUL_IS", "MOD_IS", "PLUS_IS", "'?'", "':'", "OR", "AND", "'|'", "'^'",
  "'&'", "EQUAL", "NOT_EQUAL", "'<'", "'>'", "SMALLER_EQUAL",
  "GREATER_EQUAL", "OLDER", "YOUNGER", "SHL", "SHR", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "INC", "DEC", "'~'", "'['", "'}'", "')'", "','",
  "'`'", "']'", "'('", "';'", "'{'", "$accept", "input", "args",
  "break_ok", "break_stat", "closebrace", "$@1", "closepar", "$@2",
  "comma", "$@3", "compound", "condition", "continue_stat", "_voidtype",
  "def_var_or_fun", "enterid", "enter_varid", "err_expression", "$@4",
  "expr_code", "_p_casttype", "_string", "_func_or_var", "_backtick",
  "$@5", "expression", "_for", "_expr_list", "_opt_init_expression",
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
     315,   316,   317,    61,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,    63,    58,   328,   329,   124,    94,
      38,   330,   331,    60,    62,   332,   333,   334,   335,   336,
     337,    43,    45,    42,    47,    37,    33,   338,   339,   126,
      91,   125,    41,    44,    96,    93,    40,    59,   123
};
# endif

#define YYPACT_NINF -317

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-317)))

#define YYTABLE_NINF -219

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      48,  -317,  -317,  -317,  -317,    31,   -26,  -317,  -317,  -317,
      24,  -317,  -317,  -317,  -317,  -317,  -317,   -88,   -86,   -77,
       2,    13,  -317,  -317,   -39,  -317,    26,   -28,  -317,  -317,
    -317,  -317,   646,    46,   -22,   328,  -317,  -317,   -17,    -9,
      46,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   -10,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,   646,   646,   646,   646,   646,   646,   646,   542,    51,
    -317,   771,  -317,  -317,  -317,  -317,  -317,  -317,  -317,    -1,
    -317,  -317,  -317,  -317,   -86,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,     4,  -317,  -317,  -317,   646,
    -317,  -317,  -317,  -317,  -317,  -317,    -5,    -3,  -317,  -317,
    -317,  -317,    25,  -317,  -317,    26,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,   -80,   -80,   -80,   -80,   -80,   -80,   771,
    -317,  -317,  -317,    11,   771,  -317,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   646,   646,  -317,  -317,
     646,  -317,  -317,  -317,  -317,  -317,    16,  -317,    53,   -32,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
     771,  -317,     5,    26,   328,  -317,  -317,  -317,  -317,  -317,
    -317,    26,  -317,  -317,    54,  -317,  -317,    56,    57,  -317,
    -317,    58,   646,  -317,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   733,   314,   421,   524,   627,
     791,   225,   225,    75,    75,    75,    75,    75,    75,   117,
     117,   133,   133,   -80,   -80,   -80,   690,  -317,  -317,    12,
      68,    59,  -317,  -317,  -317,    72,  -317,   -24,  -317,    74,
    -317,  -317,  -317,  -317,  -317,  -317,    46,  -317,  -317,  -317,
    -317,  -317,   -80,   646,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,     0,   436,
    -317,    43,  -317,  -317,  -317,  -317,   190,  -317,  -317,    77,
    -317,  -317,  -317,  -317,  -317,  -317,   646,   436,  -317,  -317,
    -317,    16,  -317,   771,  -317,  -317,  -317,    74,  -317,  -317,
     141,  -317,  -317,   436,  -317,  -317,   436,  -317,  -317,  -317,
    -317
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   205,   207,   206,    18,     0,     0,     3,   187,   208,
       0,     1,     2,   100,   178,    21,    19,     0,     0,    22,
     218,     0,    20,   214,    12,   218,    98,     0,   188,   175,
     218,   211,     0,     0,     0,     0,   202,    96,    12,     0,
       0,   179,   215,   112,   113,   105,   138,   111,   110,   127,
     126,   128,   114,   116,   117,   115,   129,   106,   142,   143,
     107,   130,   131,   178,   119,   102,   103,   104,    33,   132,
     108,   133,   178,   109,    79,   178,   118,   137,   134,    31,
     120,   122,   136,   121,   135,   178,   178,   139,   123,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      81,   212,   178,   178,   178,   178,   178,   178,    10,    12,
     159,    22,   213,    13,     0,     7,    17,   185,   181,   181,
     184,   181,   218,   187,   101,     0,   189,   187,    26,     0,
     187,   178,   194,   178,   193,   218,     0,    24,   187,   199,
     201,   187,     0,   178,   192,     0,   176,    94,    24,    24,
      24,    24,    24,    74,    69,    76,    70,    72,    75,    34,
      27,    28,    29,     0,    10,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    73,
       0,   149,    24,    24,    24,    24,    24,    32,     0,    24,
     170,   198,    83,   174,   160,   216,   190,   196,     9,   197,
      25,   191,    24,    24,     0,   177,   182,   186,   183,   195,
     200,    24,    95,    99,    12,     5,   164,    12,    12,    12,
      82,     0,     0,    80,    36,    43,    44,    45,    46,    47,
      39,    42,    38,    40,    41,     0,    48,    49,    59,    60,
      58,    50,    51,    53,    54,    55,    56,    66,    65,    61,
      62,    57,    63,    64,    67,    68,     0,   150,    12,   218,
     218,    12,   158,   147,    11,    12,    12,     0,    85,    86,
     187,    87,    88,    10,    15,    16,     0,    14,    10,    24,
      24,    35,    77,     0,    37,    24,    24,   153,   141,    24,
     154,   145,   168,    24,   166,   167,   169,    24,    24,     0,
      23,   209,   203,     6,     4,    12,    52,   151,   140,    12,
      12,   165,    84,    89,   187,   180,     0,     0,    24,    24,
     172,    24,   181,   210,   180,   152,   173,    91,    10,    92,
     218,   217,     6,     0,   180,   162,     0,   161,   163,   180,
      93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -146,  -172,  -317,   -43,  -317,  -141,  -317,   -23,
    -317,  -317,   -49,  -317,  -317,   178,   -38,  -109,  -115,  -317,
    -163,  -317,  -317,  -317,  -317,  -317,   -47,  -317,  -153,  -317,
    -317,  -317,  -317,    44,  -317,  -317,  -317,  -317,   182,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -138,  -317,  -116,  -317,  -317,  -107,    83,
      55,  -317,   -33,  -317,  -316,  -143,  -317,  -317,  -317,  -114,
    -317,  -317,  -242,    65,  -317,     3,  -317,     6,  -317,   171,
    -317,  -317,  -317,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   234,   337,   123,   124,   125,   207,   208,   299,
      34,   126,   293,   127,     6,     7,    20,    21,   128,   129,
     130,   163,    99,   100,   240,   241,   101,   131,   289,   290,
     334,   348,   132,    37,    38,    39,    25,    14,    15,   102,
     103,   104,   105,   307,   106,   310,   282,   107,   108,   133,
     354,   134,   109,   210,   316,   286,   287,   110,   212,    30,
     135,   136,    26,    27,   342,   213,   227,   137,   138,    16,
      17,   139,   140,    35,   295,   141,     9,   142,   322,    23,
      24,   143,   144,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    33,   147,     8,   237,   238,    10,    13,     8,   217,
      42,    10,   214,   219,   215,   145,   221,   198,   199,    28,
     200,    29,   226,   243,   229,    18,    18,   230,   351,  -100,
     148,    11,    40,   235,   236,   235,   235,   239,   358,   149,
       1,     2,   150,   360,   153,   154,   155,   156,   157,   158,
     159,   164,   151,   152,     3,  -168,  -168,    19,   111,   288,
     281,     1,     2,   314,   315,   -23,     1,     2,  -204,   201,
     202,   203,   204,   205,   206,     3,    32,   335,    41,   111,
       3,   113,   220,     1,     2,   -97,   209,   277,   278,   279,
     280,   235,     4,   146,   285,   344,  -148,     3,   222,   165,
     223,  -165,   216,   225,  -218,   218,   336,   -90,   294,     4,
     231,   357,  -218,   242,   359,   306,   294,   228,  -218,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    40,   319,   276,   332,   284,  -156,   323,  -155,  -157,
     353,  -146,   301,   329,   191,   192,   193,   194,   195,   196,
     197,   309,   198,   199,  -171,   200,   318,   317,   288,  -144,
     356,   297,   298,    12,   324,   325,   283,   321,   347,   232,
     327,   328,    22,   340,   235,   302,   330,   211,   331,   350,
     224,   233,   292,   333,   112,     0,     0,   352,   193,   194,
     195,   196,   197,     0,   198,   199,   300,   200,     0,     0,
     341,     0,     0,   345,   346,   291,   195,   196,   197,   296,
     198,   199,     0,   200,     0,     0,     0,   296,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   305,   326,     0,   320,   308,
     311,     0,   312,   313,   177,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,   343,
     200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,     0,     0,     0,     0,   339,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   349,   198,   199,     0,   200,     0,     0,     0,   114,
     355,   -24,   -24,   -24,   115,   -24,   -24,   -24,   116,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   117,   -24,   -24,   118,   -24,   -24,   -24,   -24,
     -24,   -24,   119,     1,     2,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   120,   -24,   -24,   -24,     3,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     121,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,     0,   200,     0,     0,     0,     0,   -24,
     -24,     0,     0,     0,   -24,   -24,   -24,   -24,     0,    -8,
       0,     0,   -24,     0,   -24,   122,  -176,   114,     0,   -24,
     -24,   -24,   115,   -24,   -24,   -24,   116,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     117,   -24,   -24,   118,   -24,   -24,   -24,   -24,   -24,   -24,
     119,     1,     2,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   120,   -24,   -24,   -24,     3,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   121,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
       0,   200,     0,     0,     0,     0,     0,   -24,   -24,     0,
       0,     0,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,     0,   -24,   122,  -176,    43,    44,    45,     0,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,    61,    62,     0,
      63,    64,    65,    66,    67,    68,     0,   160,   161,    69,
      70,    71,    72,    73,    74,    75,    76,     0,    77,    78,
      79,   162,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,     0,     0,     0,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,    98,    43,
      44,    45,     0,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,    61,    62,     0,    63,    64,    65,    66,    67,    68,
       0,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,     0,    77,    78,    79,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,     0,
       0,     0,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,    98,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,     0,
     200,     0,     0,     0,     0,   304,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   303,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,     0,   200,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
       0,   200,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
       0,   200
};

static const yytype_int16 yycheck[] =
{
      20,    24,    40,     0,   150,   151,     0,    33,     5,   123,
      30,     5,   119,   127,   121,    38,   130,    97,    98,   107,
     100,   107,   137,   164,   138,     1,     1,   141,   344,   106,
      63,     0,    26,   148,   149,   150,   151,   152,   354,    72,
      35,    36,    75,   359,    91,    92,    93,    94,    95,    96,
      97,    98,    85,    86,    49,    87,    88,    33,    33,   222,
     206,    35,    36,    87,    88,    63,    35,    36,   107,   102,
     103,   104,   105,   106,   107,    49,    63,   319,   106,    33,
      49,   103,   129,    35,    36,   102,   109,   202,   203,   204,
     205,   206,    61,   102,   209,   337,   106,    49,   131,    48,
     133,   102,   122,   108,   107,   101,    63,   107,   223,    61,
     143,   353,   107,   102,   356,   103,   231,   137,   102,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   145,   293,   200,   317,   102,   102,   298,   102,   102,
      19,   102,   104,   309,    89,    90,    91,    92,    93,    94,
      95,   103,    97,    98,   102,   100,   290,   103,   341,   102,
     352,   224,   231,     5,   299,   300,   206,   296,   341,   145,
     305,   306,    10,   331,   309,   242,   312,   114,   313,   342,
     135,   146,   222,   318,    33,    -1,    -1,   348,    91,    92,
      93,    94,    95,    -1,    97,    98,   239,   100,    -1,    -1,
     334,    -1,    -1,   338,   339,   222,    93,    94,    95,   223,
      97,    98,    -1,   100,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,   303,    -1,   296,   279,
     280,    -1,   285,   286,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,   336,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,    -1,    -1,    -1,   330,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   341,    97,    98,    -1,   100,    -1,    -1,    -1,     1,
     350,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    -1,   100,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,    -1,   106,   107,   108,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,    -1,   106,   107,   108,     3,     4,     5,    -1,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,   106,     3,
       4,     5,    -1,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,    -1,   106,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    -1,
     100,    -1,    -1,    -1,    -1,   105,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    98,    -1,   100,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      -1,   100,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      -1,   100
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,    49,    61,   110,   123,   124,   184,   185,
     186,     0,   124,    33,   146,   147,   178,   179,     1,    33,
     125,   126,   147,   188,   189,   145,   171,   172,   107,   107,
     168,   192,    63,   118,   119,   182,   192,   142,   143,   144,
     186,   106,   192,     3,     4,     5,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    20,    21,    22,
      23,    25,    26,    28,    29,    30,    31,    32,    33,    37,
      38,    39,    40,    41,    42,    43,    44,    46,    47,    48,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    91,    92,    96,    97,    98,    99,   104,   106,   131,
     132,   135,   148,   149,   150,   151,   153,   156,   157,   161,
     166,    33,   188,   103,     1,     6,    10,    24,    27,    34,
      45,    62,   107,   113,   114,   115,   120,   122,   127,   128,
     129,   136,   141,   158,   160,   169,   170,   176,   177,   180,
     181,   184,   186,   190,   191,   118,   102,   125,   171,   171,
     171,   171,   171,   135,   135,   135,   135,   135,   135,   135,
      35,    36,    49,   130,   135,    48,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    97,    98,
     100,   171,   171,   171,   171,   171,   171,   116,   117,   118,
     162,   168,   167,   174,   167,   167,   192,   178,   101,   178,
     135,   178,   171,   171,   182,   108,   127,   175,   192,   178,
     178,   171,   142,   169,   111,   127,   127,   111,   111,   127,
     133,   134,   102,   116,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   127,   127,   127,
     127,   111,   155,   192,   102,   127,   164,   165,   129,   137,
     138,   184,   192,   121,   127,   183,   186,   114,   121,   118,
     118,   104,   135,    75,   105,   118,   103,   152,   192,   103,
     154,   192,   118,   118,    87,    88,   163,   103,   178,   116,
     125,   126,   187,   116,   127,   127,   135,   127,   127,   111,
     164,   127,   129,   127,   139,   181,    63,   112,   118,   118,
     162,   178,   173,   135,   181,   127,   127,   137,   140,   192,
     174,   173,   116,    19,   159,   192,   112,   181,   173,   181,
     173
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   112,   113,   115,   114,
     117,   116,   119,   118,   120,   121,   121,   122,   123,   124,
     124,   124,   125,   126,   128,   127,   129,   130,   130,   130,
     131,   131,   132,   132,   134,   133,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   137,   137,   138,   138,   138,   139,
     139,   140,   140,   141,   142,   143,   143,   144,   144,   145,
     146,   147,   148,   148,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   159,   159,   160,   161,   162,   163,   163,   165,   164,
     166,   166,   166,   166,   167,   168,   170,   169,   172,   171,
     173,   174,   175,   175,   176,   176,   177,   179,   178,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   181,
     181,   182,   182,   183,   184,   185,   185,   185,   186,   187,
     187,   188,   188,   189,   189,   189,   190,   191,   192
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     1,     2,
       3,     5,     7,     4,     4,     3,     3,     3,     3,     1,
       2,     2,     1,     9,     3,     0,     1,     1,     0,     2,
       2,     3,     6,     7,     1,     1,     0,     2,     0,     2,
       0,     0,     1,     1,     1,     1,     2,     0,     2,     1,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       3,     2,     3,     3,     1,     3,     2,     7,     0
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
#line 127 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_multipleArgs(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 1687 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 132 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_firstArg(&(yyvsp[0]));
    }
#line 1695 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 137 "grammar" /* yacc.c:1646  */
    {
        gp_breakOK++;
    }
#line 1703 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 143 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_break();
    }
#line 1711 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 148 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closebrace_expected;
        symtab_pop();
    }
#line 1720 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 155 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closepar_expected; 
    }
#line 1728 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 161 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_comma_expected; 
    }
#line 1736 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 170 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 1744 "parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 181 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_continue();
    }
#line 1752 "parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 187 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1760 "parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 195 "grammar" /* yacc.c:1646  */
    {
        gp_init = *p_catCode(&gp_init, &(yyvsp[-1]));
    }
#line 1768 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 208 "grammar" /* yacc.c:1646  */
    {
        p_defineVar();    /* the first n variables of a function, up to the
                            end of the parameter list are the parameters. */
    }
#line 1777 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 215 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1785 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 221 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1793 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 225 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1801 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 231 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(&(yyvsp[0]));
    }
#line 1809 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 246 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        gp_stringbuf = rss_strcat(gp_stringbuf, util_string());
    }
#line 1817 "parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 251 "grammar" /* yacc.c:1646  */
    {
        free(gp_stringbuf);                  /* free former string */
        gp_stringbuf = rss_strdup(util_string()); /* duplicate initial string */
    }
#line 1826 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 262 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1834 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1842 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 278 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1850 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 286 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1858 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 293 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_multiply, "*=");
        }
#line 1866 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 300 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_divide, "/=");
        }
#line 1874 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 307 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_modulo, "%=");
        }
#line 1882 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 314 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_addition, "+=");
        }
#line 1890 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 321 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_subtract, "-=");
        }
#line 1898 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 328 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_and, "&=");
        }
#line 1906 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 335 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_or, "|=");
        }
#line 1914 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 342 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_xor, "^=");
        }
#line 1922 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 349 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shl, "<<=");
        }
#line 1930 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 356 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shr, ">>=");
        }
#line 1938 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 363 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_orBool(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1946 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 370 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_andBoolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1954 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 377 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1962 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 384 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1970 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 393 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1978 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 400 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1986 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 407 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1994 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 414 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2002 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 421 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_grEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2010 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 428 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2018 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 435 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_and(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2026 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 442 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_or(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2034 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 449 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2042 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 456 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2050 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 463 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2058 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 470 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2066 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 477 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2074 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 484 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2082 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 491 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2090 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 498 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2098 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 505 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2106 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 511 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_negate(&(yyvsp[0]));
        }
#line 2114 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 517 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2122 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 523 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2130 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 529 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2138 "parse.c" /* yacc.c:1646  */
    break;

  case 73:
#line 535 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2146 "parse.c" /* yacc.c:1646  */
    break;

  case 74:
#line 541 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2154 "parse.c" /* yacc.c:1646  */
    break;

  case 75:
#line 547 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_not(&(yyvsp[0]));
        }
#line 2162 "parse.c" /* yacc.c:1646  */
    break;

  case 76:
#line 553 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_notBoolean(&(yyvsp[0]));
        }
#line 2170 "parse.c" /* yacc.c:1646  */
    break;

  case 77:
#line 561 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2178 "parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 566 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_str | e_const);
        }
#line 2186 "parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 571 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_int | e_const);
        }
#line 2194 "parse.c" /* yacc.c:1646  */
    break;

  case 80:
#line 578 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2202 "parse.c" /* yacc.c:1646  */
    break;

  case 82:
#line 587 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_oneArg(f_backtick, &(yyvsp[-1]));
        }
#line 2210 "parse.c" /* yacc.c:1646  */
    break;

  case 83:
#line 594 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2218 "parse.c" /* yacc.c:1646  */
    break;

  case 84:
#line 603 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2226 "parse.c" /* yacc.c:1646  */
    break;

  case 90:
#line 622 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2235 "parse.c" /* yacc.c:1646  */
    break;

  case 93:
#line 646 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_for(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2243 "parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 690 "grammar" /* yacc.c:1646  */
    {
        symtab_setFunParams(); /* the # variables so far are the parameters */
    }
#line 2251 "parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 697 "grammar" /* yacc.c:1646  */
    {
        p_beginFunction();
    }
#line 2259 "parse.c" /* yacc.c:1646  */
    break;

  case 101:
#line 708 "grammar" /* yacc.c:1646  */
    {
        p_endFunction(&(yyvsp[-1]));
    }
#line 2267 "parse.c" /* yacc.c:1646  */
    break;

  case 140:
#line 799 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2275 "parse.c" /* yacc.c:1646  */
    break;

  case 144:
#line 815 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2283 "parse.c" /* yacc.c:1646  */
    break;

  case 148:
#line 830 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = p_functionIdx();
    }
#line 2291 "parse.c" /* yacc.c:1646  */
    break;

  case 149:
#line 838 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_zeroArgs((yyvsp[-1]).type);
    }
#line 2299 "parse.c" /* yacc.c:1646  */
    break;

  case 150:
#line 845 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_oneArg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2307 "parse.c" /* yacc.c:1646  */
    break;

  case 151:
#line 854 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_twoArgs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2315 "parse.c" /* yacc.c:1646  */
    break;

  case 152:
#line 865 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_threeArgs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2323 "parse.c" /* yacc.c:1646  */
    break;

  case 153:
#line 873 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntString((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2331 "parse.c" /* yacc.c:1646  */
    break;

  case 154:
#line 881 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntSpecial((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2339 "parse.c" /* yacc.c:1646  */
    break;

  case 155:
#line 888 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_printf, &(yyvsp[0]));
    }
#line 2347 "parse.c" /* yacc.c:1646  */
    break;

  case 156:
#line 895 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2355 "parse.c" /* yacc.c:1646  */
    break;

  case 157:
#line 902 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_strformat, &(yyvsp[0]));
    }
#line 2363 "parse.c" /* yacc.c:1646  */
    break;

  case 158:
#line 909 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_callFunction((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2371 "parse.c" /* yacc.c:1646  */
    break;

  case 160:
#line 918 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2379 "parse.c" /* yacc.c:1646  */
    break;

  case 161:
#line 926 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2387 "parse.c" /* yacc.c:1646  */
    break;

  case 163:
#line 943 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_if(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        symtab_pop();
    }
#line 2396 "parse.c" /* yacc.c:1646  */
    break;

  case 164:
#line 959 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2404 "parse.c" /* yacc.c:1646  */
    break;

  case 165:
#line 965 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = IS_FILE;
    }
#line 2413 "parse.c" /* yacc.c:1646  */
    break;

  case 168:
#line 978 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2421 "parse.c" /* yacc.c:1646  */
    break;

  case 169:
#line 982 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2429 "parse.c" /* yacc.c:1646  */
    break;

  case 170:
#line 990 "grammar" /* yacc.c:1646  */
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
#line 2445 "parse.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1006 "grammar" /* yacc.c:1646  */
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
#line 2461 "parse.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1024 "grammar" /* yacc.c:1646  */
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
#line 2481 "parse.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1047 "grammar" /* yacc.c:1646  */
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
#line 2501 "parse.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1065 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2509 "parse.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1071 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2517 "parse.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1076 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2525 "parse.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1080 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2533 "parse.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1086 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2541 "parse.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1092 "grammar" /* yacc.c:1646  */
    {
        p_popDead();
    }
#line 2549 "parse.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1097 "grammar" /* yacc.c:1646  */
    {
        p_pushDead();                    /* set new dead-level */
    }
#line 2557 "parse.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1109 "grammar" /* yacc.c:1646  */
    {
        msg("saw return");
    }
#line 2565 "parse.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1119 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_return((yyvsp[-1]).type, &(yyvsp[0]));
        msg("SAW return stmt");
    }
#line 2574 "parse.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1127 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2582 "parse.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1137 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2590 "parse.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1172 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catStmnts(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2598 "parse.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1186 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2606 "parse.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1193 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2614 "parse.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1208 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2623 "parse.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1215 "grammar" /* yacc.c:1646  */
    {
        p_generateCode(&(yyvsp[0]), op_push_imm, 0);
        (yyval) = (yyvsp[0]);
    }
#line 2632 "parse.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1223 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));    /* explicit initialization */
    }
#line 2640 "parse.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1234 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(p_assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2648 "parse.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1243 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2657 "parse.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1253 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2665 "parse.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1271 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_while(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2673 "parse.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1276 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(0);   /* by default initializes a variable to 0 */
    }
#line 2681 "parse.c" /* yacc.c:1646  */
    break;


#line 2685 "parse.c" /* yacc.c:1646  */
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
#line 1281 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
