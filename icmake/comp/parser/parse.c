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
#define YYLAST   893

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

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
     196,   196,   205,   211,   213,   215,   219,   225,   233,   236,
     243,   243,   250,   257,   265,   272,   279,   286,   293,   300,
     307,   314,   321,   328,   335,   342,   349,   356,   363,   372,
     379,   386,   393,   400,   407,   414,   421,   428,   435,   442,
     449,   456,   463,   470,   477,   484,   490,   496,   502,   508,
     514,   520,   526,   532,   540,   545,   550,   557,   559,   567,
     575,   582,   586,   588,   590,   595,   597,   604,   606,   610,
     642,   647,   651,   655,   656,   661,   671,   679,   688,   690,
     692,   696,   698,   700,   702,   704,   706,   708,   710,   712,
     714,   716,   718,   720,   722,   724,   726,   728,   730,   732,
     734,   738,   740,   742,   744,   746,   748,   750,   754,   756,
     758,   762,   768,   772,   774,   778,   784,   788,   790,   794,
     801,   807,   814,   823,   834,   842,   850,   857,   864,   871,
     878,   881,   886,   892,   896,   911,   920,   927,   929,   933,
     933,   943,   958,   973,   995,  1019,  1025,  1031,  1031,  1041,
    1041,  1047,  1052,  1057,  1059,  1063,  1065,  1069,  1078,  1078,
    1084,  1086,  1092,  1095,  1097,  1099,  1101,  1104,  1107,  1110,
    1115,  1120,  1123,  1129,  1132,  1134,  1136,  1140,  1147,  1154,
    1157,  1166,  1174,  1176,  1184,  1192,  1196,  1201,  1204,  1209,
    1221
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
  "_voidtype", "def_var_or_fun", "enterid", "err_expression", "$@4",
  "expr_code", "_casttype", "_string", "_func_or_var", "_backtick", "$@5",
  "expression", "_for", "_expr_list", "_opt_init_expression",
  "_opt_cond_expression", "_opt_inc_expression", "for_stat", "_partype",
  "_pars", "_opt_parlist", "_funvars", "_funid", "funcdef",
  "_zero_arg_funs", "_one_arg_funs", "_two_arg_funs", "_optint_string",
  "_comma_expr", "_optint_special", "_comma_arglist", "_opt_arglist",
  "_funname", "function", "_if", "_else", "if_stat", "_makelist_expr",
  "_makelist_normal", "_old_young", "_older_younger", "$@6", "makelist",
  "nesting", "ok", "openbrace", "$@7", "openpar", "$@8", "popdead",
  "pushdead", "_return_tail", "_leave", "return_stat", "semicol", "$@9",
  "_stm", "statement", "statements", "_varType", "type_of_var",
  "_entervarid", "_idexpr", "vardefs", "embedded_varlist", "varlist",
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

#define YYPACT_NINF -289

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-289)))

#define YYTABLE_NINF -211

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,  -289,  -289,  -289,  -289,    15,   -26,  -289,  -289,    10,
    -289,  -289,  -289,  -289,  -289,  -289,    20,  -289,  -289,  -289,
    -289,     3,   -83,   -69,  -289,   -19,   -17,  -289,   -51,  -289,
     -48,   370,  -289,  -289,   -40,   -38,    32,  -289,  -289,  -289,
    -289,   673,    32,   -32,  -289,   -69,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,   -29,  -289,  -289,  -289,
     673,  -289,  -289,  -289,  -289,  -289,  -289,   -34,   -30,  -289,
    -289,  -289,  -289,  -289,  -289,     3,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,   -14,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,   673,   673,   673,   673,   673,   673,   673,   574,
      45,  -289,   798,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
       1,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,   798,  -289,   -18,  -289,   370,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,   -63,   -63,   -63,   -63,   -63,   -63,   798,  -289,  -289,
    -289,     2,   798,  -289,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,  -289,  -289,   673,  -289,
    -289,  -289,  -289,  -289,     8,  -289,     9,    -6,  -289,  -289,
      11,  -289,  -289,  -289,  -289,  -289,  -289,    13,  -289,  -289,
      14,    36,  -289,  -289,    37,   673,  -289,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   798,   798,   760,   558,
     201,   108,    39,   352,   651,   651,    58,    58,    58,    58,
      58,    58,    76,    76,    -7,    -7,   -63,   -63,   -63,   717,
    -289,  -289,    40,    42,    38,  -289,  -289,  -289,    44,  -289,
      -4,  -289,     6,   473,  -289,  -289,  -289,  -289,   -63,   673,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,   473,  -289,  -289,
     460,  -289,  -289,    55,  -289,  -289,     8,  -289,  -289,  -289,
    -289,  -289,    11,  -289,  -289,    88,  -289,  -289,  -289,  -289,
     473,  -289,  -289,   473,  -289,  -289,  -289,  -289
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   194,   196,   195,    16,     0,     0,     3,   197,     0,
       1,     2,    96,   169,    18,   207,     0,   178,   206,    17,
     210,    94,     0,     0,    19,   210,     0,   202,    12,   205,
       0,     0,   193,    92,    12,     0,     0,   170,   166,   210,
     199,     0,     0,     0,   179,     0,     7,    15,   176,   172,
     172,   175,   172,   210,   178,    97,     0,   180,   178,    22,
       0,   178,   169,   185,   169,   184,   210,     0,    20,   178,
     190,   192,   191,   169,   183,     0,   167,    90,   203,   107,
     108,   101,   129,   106,   105,   122,   121,   123,   109,   111,
     112,   110,   124,   133,   134,   103,   125,   126,   169,   114,
      98,    99,   100,    29,   169,   104,    75,   169,   113,   102,
     128,    27,   115,   117,   116,   127,   169,   169,   130,   118,
     119,   120,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    77,   200,   169,   169,   169,   169,   169,   169,    10,
      12,   150,   201,    13,   189,    79,   165,   151,   208,   181,
     187,     9,   188,    21,   182,    20,    20,     0,   168,   173,
     177,   174,   186,    20,    91,    95,    20,    20,    20,    20,
      20,    70,    65,    72,    66,    68,    71,    30,    23,    24,
      25,     0,    10,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    69,     0,   140,
      20,    20,    20,    20,    20,    28,     0,    20,   161,    81,
      82,   178,    83,    84,    10,    14,    10,    12,     5,   155,
      12,    12,    12,    78,     0,     0,    76,    32,    39,    40,
      41,    42,    43,    35,    38,    34,    36,    37,     0,    44,
      45,    55,    56,    54,    46,    47,    49,    50,    51,    52,
      62,    61,    57,    58,    53,    59,    60,    63,    64,     0,
     141,    12,   210,   210,    12,   149,   138,    11,    12,    12,
       0,    20,    20,     0,     6,    20,    20,    31,    73,     0,
      33,    20,    20,   144,   132,    20,   145,   136,   159,    20,
     157,   158,   160,    80,    85,   178,   171,     0,     4,    12,
      48,   142,   131,    12,    12,   156,    20,   172,   171,    20,
      20,   163,    87,    10,    88,   210,   209,   143,   164,     6,
       0,   171,   153,     0,   152,   154,   171,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -289,  -289,  -156,  -227,  -289,   -20,  -289,  -173,  -289,   -27,
    -289,  -289,  -289,  -289,   154,   131,   -66,  -289,  -152,  -289,
    -289,  -289,  -289,  -289,   144,  -289,  -154,  -289,  -289,  -289,
    -289,    95,  -289,  -289,  -289,  -289,   164,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -150,  -289,  -132,  -289,  -289,   -16,   132,   102,  -289,
     -42,  -289,  -288,  -148,  -289,  -289,  -289,   -50,  -289,  -289,
    -270,   114,  -289,     5,  -289,   160,  -289,    50,   197,  -289,
    -289,  -289,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   237,   317,    54,    55,    56,   225,   226,   295,
      43,    57,    58,     6,     7,    25,    59,    60,    61,   181,
     130,   131,   243,   244,   132,    62,   230,   231,   315,   333,
      63,    33,    34,    35,    20,    13,    14,   133,   134,   135,
     136,   303,   137,   306,   285,   138,   139,    64,   341,    65,
     140,   228,   312,   289,   290,   141,   145,    39,    66,    67,
      21,    22,   327,   146,   160,    68,    69,    29,    30,    70,
      71,    31,     8,    16,    26,    27,    28,    17,    72,    19,
      73,    74,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    42,   159,   229,   150,     9,    12,    75,   152,   246,
       9,   154,   240,   241,    78,    10,     1,     2,    37,   162,
     155,    23,   156,   316,     1,     2,    36,     3,   149,   216,
     217,   163,   218,    38,   147,     3,   148,     1,     2,  -198,
     336,    41,    12,   161,     1,     2,     4,   328,     3,     1,
       2,  -204,    24,   345,    44,     3,   166,   -93,   347,    76,
       3,   293,   167,   294,    24,   168,   143,   151,   284,   158,
     344,     4,  -210,   346,   169,   170,  -159,  -159,   310,   311,
      36,   213,   214,   215,  -210,   216,   217,  -139,   218,   183,
     234,   219,   220,   221,   222,   223,   224,   236,  -156,   245,
     238,   239,   238,   238,   242,  -210,   287,   340,   -86,   291,
    -147,  -146,   343,   227,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     233,   216,   217,  -148,   218,  -137,   297,   235,   302,   313,
     305,  -162,   209,   210,   211,   212,   213,   214,   215,   323,
     216,   217,  -135,   218,   280,   281,   282,   283,   238,    11,
     339,   288,   211,   212,   213,   214,   215,    77,   216,   217,
     164,   218,   332,    15,   229,   331,   324,   144,   165,   335,
     157,   292,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   286,
     216,   217,   142,   218,   153,   232,    18,     0,     0,     0,
       0,     0,     0,     0,     0,   296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,   318,
     319,     0,     0,     0,     0,   321,   322,     0,     0,   238,
       0,     0,     0,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   301,     0,     0,   304,   307,     0,
       0,   308,   309,   337,   338,   326,   171,   172,   173,   174,
     175,   176,   177,   182,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   329,   216,   217,     0,   218,   330,     0,     0,
       0,   334,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,     0,   279,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,   -20,   -20,   -20,    46,   -20,   -20,   -20,
      47,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   298,
     -20,   -20,   -20,    48,   -20,   -20,    49,   -20,   -20,   -20,
     -20,   -20,   -20,    50,     1,     2,   -20,   -20,   -20,   -20,
     -20,    51,   -20,   -20,   -20,     3,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,    52,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   320,   216,   217,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,   -20,   -20,     0,     0,
       0,   -20,   -20,   -20,   -20,     0,    -8,     0,     0,   -20,
       0,   -20,    53,  -167,    45,     0,   -20,   -20,   -20,    46,
     -20,   -20,   -20,    47,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,    48,   -20,   -20,    49,
     -20,   -20,   -20,   -20,   -20,   -20,    50,     1,     2,   -20,
     -20,   -20,   -20,   -20,    51,   -20,   -20,   -20,     3,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   195,
      52,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,     0,   216,   217,     0,   218,     0,     0,     0,   -20,
     -20,     0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,
       0,     0,   -20,     0,   -20,    53,  -167,    79,    80,    81,
       0,    82,    83,    84,     0,    85,    86,    87,    88,    89,
      90,    91,    92,     0,    93,    94,    95,     0,    96,    97,
       0,    98,    99,   100,   101,   102,   103,     0,   178,   179,
     104,   105,   106,   107,   108,     0,   109,   110,   111,   180,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,     0,   218,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,     0,   124,   125,   126,   127,     0,
       0,     0,     0,   128,     0,   129,    79,    80,    81,     0,
      82,    83,    84,     0,    85,    86,    87,    88,    89,    90,
      91,    92,     0,    93,    94,    95,     0,    96,    97,     0,
      98,    99,   100,   101,   102,   103,     0,     0,     0,   104,
     105,   106,   107,   108,     0,   109,   110,   111,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,     0,   216,   217,     0,   218,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,     0,   124,   125,   126,   127,     0,     0,
       0,     0,   128,     0,   129,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,     0,   216,
     217,     0,   218,     0,     0,     0,     0,   300,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     299,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,     0,   216,   217,     0,   218,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     0,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,     0,   218
};

static const yytype_int16 yycheck[] =
{
      25,    28,    68,   155,    54,     0,    32,    34,    58,   182,
       5,    61,   168,   169,    39,     0,    34,    35,   101,    69,
      62,     1,    64,   293,    34,    35,    21,    45,    53,    92,
      93,    73,    95,   102,    50,    45,    52,    34,    35,    58,
     328,    58,    32,    68,    34,    35,    56,   317,    45,    34,
      35,   102,    32,   341,   102,    45,    98,    97,   346,    97,
      45,   234,   104,   236,    32,   107,    98,    96,   224,   103,
     340,    56,   102,   343,   116,   117,    82,    83,    82,    83,
      75,    88,    89,    90,   102,    92,    93,   101,    95,    44,
     156,   133,   134,   135,   136,   137,   138,   163,    97,    97,
     166,   167,   168,   169,   170,    97,    97,    19,   102,    98,
      97,    97,   339,   140,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     155,    92,    93,    97,    95,    97,    99,   157,    98,   291,
      98,    97,    84,    85,    86,    87,    88,    89,    90,   305,
      92,    93,    97,    95,   220,   221,   222,   223,   224,     5,
     333,   227,    86,    87,    88,    89,    90,    36,    92,    93,
      75,    95,   326,     9,   326,   325,   308,    45,    76,   327,
      66,   231,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   224,
      92,    93,    42,    95,    60,   155,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,   295,
     296,    -1,    -1,    -1,    -1,   301,   302,    -1,    -1,   305,
      -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,    -1,    -1,   282,   283,    -1,
      -1,   288,   289,   329,   330,   315,   122,   123,   124,   125,
     126,   127,   128,   129,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,   319,    92,    93,    -1,    95,   324,    -1,    -1,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
      -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   245,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   299,    92,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,   103,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    69,
      57,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    -1,    95,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,   101,   102,   103,     3,     4,     5,
      -1,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,   101,     3,     4,     5,    -1,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,   101,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    -1,    -1,   100,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    -1,    95,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    45,    56,   105,   117,   118,   176,   177,
       0,   118,    32,   139,   140,   140,   177,   181,   182,   183,
     138,   164,   165,     1,    32,   119,   178,   179,   180,   171,
     172,   175,   186,   135,   136,   137,   177,   101,   102,   161,
     186,    58,   113,   114,   102,     1,     6,    10,    23,    26,
      33,    41,    57,   102,   108,   109,   110,   115,   116,   120,
     121,   122,   129,   134,   151,   153,   162,   163,   169,   170,
     173,   174,   182,   184,   185,   113,    97,   119,   186,     3,
       4,     5,     7,     8,     9,    11,    12,    13,    14,    15,
      16,    17,    18,    20,    21,    22,    24,    25,    27,    28,
      29,    30,    31,    32,    36,    37,    38,    39,    40,    42,
      43,    44,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    86,    87,    91,    92,    93,    94,    99,   101,
     124,   125,   128,   141,   142,   143,   144,   146,   149,   150,
     154,   159,   179,    98,   161,   160,   167,   160,   160,   186,
     171,    96,   171,   128,   171,   164,   164,   175,   103,   120,
     168,   186,   171,   164,   135,   162,   164,   164,   164,   164,
     164,   128,   128,   128,   128,   128,   128,   128,    34,    35,
      45,   123,   128,    44,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    92,    93,    95,   164,
     164,   164,   164,   164,   164,   111,   112,   113,   155,   122,
     130,   131,   181,   186,   120,   109,   120,   106,   120,   120,
     106,   106,   120,   126,   127,    97,   111,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     120,   120,   120,   120,   106,   148,   186,    97,   120,   157,
     158,    98,   171,   111,   111,   113,   113,    99,   128,    70,
     100,   113,    98,   145,   186,    98,   147,   186,   113,   113,
      82,    83,   156,   122,   120,   132,   174,   107,   120,   120,
     128,   120,   120,   106,   157,   120,   171,   166,   174,   113,
     113,   155,   130,   133,   186,   167,   166,   120,   120,   111,
      19,   152,   186,   107,   174,   166,   174,   166
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
     130,   130,   131,   131,   131,   132,   132,   133,   133,   134,
     135,   136,   136,   137,   137,   138,   139,   140,   141,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   143,   143,   143,   143,   144,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   152,   152,   153,   154,   155,   156,   156,   158,
     157,   159,   159,   159,   159,   160,   161,   163,   162,   165,
     164,   166,   167,   168,   168,   169,   169,   170,   172,   171,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     174,   174,   175,   175,   176,   176,   176,   177,   178,   179,
     179,   180,   180,   180,   181,   182,   183,   183,   184,   185,
     186
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
       3,     1,     1,     1,     1,     1,     0,     1,     1,    11,
       2,     3,     1,     1,     0,     4,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     3,     5,     7,     4,     4,     3,     3,     3,     3,
       1,     2,     2,     1,     9,     3,     0,     1,     1,     0,
       2,     2,     3,     6,     7,     1,     1,     0,     2,     0,
       2,     0,     0,     1,     1,     1,     1,     2,     0,     2,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     1,     3,     2,     2,     1,     1,     2,     7,
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
#line 120 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *multargs(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 1673 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *firstarg(&(yyvsp[0]));
    }
#line 1681 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 130 "grammar" /* yacc.c:1646  */
    {
        gp_breakOK++;
    }
#line 1689 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 136 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *break_stmnt();
    }
#line 1697 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 141 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closebrace_expected;
        symtab_pop();
    }
#line 1706 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closepar_expected; 
    }
#line 1714 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 154 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_comma_expected; 
    }
#line 1722 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 163 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 1730 "parse.c" /* yacc.c:1646  */
    break;

  case 15:
#line 169 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *continue_stmnt();
    }
#line 1738 "parse.c" /* yacc.c:1646  */
    break;

  case 16:
#line 175 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1746 "parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 190 "grammar" /* yacc.c:1646  */
    {
        defineVar();    /* the first n variables of a function, up to the
                            end of the parameter list are the parameters. */
    }
#line 1755 "parse.c" /* yacc.c:1646  */
    break;

  case 20:
#line 196 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1763 "parse.c" /* yacc.c:1646  */
    break;

  case 21:
#line 200 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1771 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 206 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(&(yyvsp[0]));
    }
#line 1779 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 221 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        gp_stringbuf = rss_strcat(gp_stringbuf, util_string());
    }
#line 1787 "parse.c" /* yacc.c:1646  */
    break;

  case 27:
#line 226 "grammar" /* yacc.c:1646  */
    {
        free(gp_stringbuf);                  /* free former string */
        gp_stringbuf = rss_strdup(util_string()); /* duplicate initial string */
    }
#line 1796 "parse.c" /* yacc.c:1646  */
    break;

  case 29:
#line 237 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 1804 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 243 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1812 "parse.c" /* yacc.c:1646  */
    break;

  case 32:
#line 253 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1820 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 261 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1828 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), multiply, "*=");
        }
#line 1836 "parse.c" /* yacc.c:1646  */
    break;

  case 35:
#line 275 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), divide, "/=");
        }
#line 1844 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 282 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), modulo, "%=");
        }
#line 1852 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 289 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), addition, "+=");
        }
#line 1860 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 296 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), subtract, "-=");
        }
#line 1868 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 303 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), band, "&=");
        }
#line 1876 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 310 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), bor, "|=");
        }
#line 1884 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 317 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), xor, "^=");
        }
#line 1892 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 324 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shl, "<<=");
        }
#line 1900 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 331 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *math_ass(&(yyvsp[-2]), &(yyvsp[0]), shr, ">>=");
        }
#line 1908 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 338 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *or_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1916 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 345 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *and_boolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1924 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 352 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1932 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 359 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1940 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 368 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1948 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 375 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1956 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 382 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1964 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 389 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *sm_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1972 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 396 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *gr_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1980 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 403 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1988 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 410 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *band(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1996 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 417 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2004 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 424 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2012 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 431 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2020 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 438 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2028 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 445 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2036 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 452 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2044 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 459 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2052 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 466 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2060 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 473 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2068 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 480 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2076 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 486 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *negate(&(yyvsp[0]));
        }
#line 2084 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 492 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2092 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 498 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2100 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 504 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2108 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 510 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2116 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 516 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2124 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 522 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *bnot(&(yyvsp[0]));
        }
#line 2132 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 528 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *not_boolean(&(yyvsp[0]));
        }
#line 2140 "parse.c" /* yacc.c:1646  */
    break;

  case 73:
#line 536 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2148 "parse.c" /* yacc.c:1646  */
    break;

  case 74:
#line 541 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_str | e_const);
        }
#line 2156 "parse.c" /* yacc.c:1646  */
    break;

  case 75:
#line 546 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *stackframe(e_int | e_const);
        }
#line 2164 "parse.c" /* yacc.c:1646  */
    break;

  case 76:
#line 553 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2172 "parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 562 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[-1]));
        }
#line 2180 "parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 569 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2188 "parse.c" /* yacc.c:1646  */
    break;

  case 80:
#line 578 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2196 "parse.c" /* yacc.c:1646  */
    break;

  case 86:
#line 597 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2205 "parse.c" /* yacc.c:1646  */
    break;

  case 89:
#line 621 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *for_stmnt(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2213 "parse.c" /* yacc.c:1646  */
    break;

  case 95:
#line 665 "grammar" /* yacc.c:1646  */
    {
        symtab_setFunParams(); /* the # variables so far are the parameters */
    }
#line 2221 "parse.c" /* yacc.c:1646  */
    break;

  case 96:
#line 672 "grammar" /* yacc.c:1646  */
    {
        open_fun();
    }
#line 2229 "parse.c" /* yacc.c:1646  */
    break;

  case 97:
#line 683 "grammar" /* yacc.c:1646  */
    {
        close_fun(&(yyvsp[-1]));
    }
#line 2237 "parse.c" /* yacc.c:1646  */
    break;

  case 131:
#line 764 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2245 "parse.c" /* yacc.c:1646  */
    break;

  case 135:
#line 780 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2253 "parse.c" /* yacc.c:1646  */
    break;

  case 139:
#line 795 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = functionIdx();
    }
#line 2261 "parse.c" /* yacc.c:1646  */
    break;

  case 140:
#line 803 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *zeroargs((yyvsp[-1]).type);
    }
#line 2269 "parse.c" /* yacc.c:1646  */
    break;

  case 141:
#line 810 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *onearg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2277 "parse.c" /* yacc.c:1646  */
    break;

  case 142:
#line 819 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *twoargs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2285 "parse.c" /* yacc.c:1646  */
    break;

  case 143:
#line 830 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *threeargs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2293 "parse.c" /* yacc.c:1646  */
    break;

  case 144:
#line 838 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_string((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2301 "parse.c" /* yacc.c:1646  */
    break;

  case 145:
#line 846 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *optint_special((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2309 "parse.c" /* yacc.c:1646  */
    break;

  case 146:
#line 853 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_printf, &(yyvsp[0]));
    }
#line 2317 "parse.c" /* yacc.c:1646  */
    break;

  case 147:
#line 860 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *exec_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2325 "parse.c" /* yacc.c:1646  */
    break;

  case 148:
#line 867 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *specials(f_strformat, &(yyvsp[0]));
    }
#line 2333 "parse.c" /* yacc.c:1646  */
    break;

  case 149:
#line 874 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *callfun((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2341 "parse.c" /* yacc.c:1646  */
    break;

  case 152:
#line 888 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2349 "parse.c" /* yacc.c:1646  */
    break;

  case 154:
#line 905 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *if_stmnt(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2357 "parse.c" /* yacc.c:1646  */
    break;

  case 155:
#line 914 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2365 "parse.c" /* yacc.c:1646  */
    break;

  case 156:
#line 920 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(e_int | e_const);
        (yyval).evalue = O_FILE;
    }
#line 2374 "parse.c" /* yacc.c:1646  */
    break;

  case 159:
#line 933 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2382 "parse.c" /* yacc.c:1646  */
    break;

  case 160:
#line 937 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2390 "parse.c" /* yacc.c:1646  */
    break;

  case 161:
#line 945 "grammar" /* yacc.c:1646  */
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
#line 2406 "parse.c" /* yacc.c:1646  */
    break;

  case 162:
#line 961 "grammar" /* yacc.c:1646  */
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
#line 2422 "parse.c" /* yacc.c:1646  */
    break;

  case 163:
#line 979 "grammar" /* yacc.c:1646  */
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
#line 2442 "parse.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1002 "grammar" /* yacc.c:1646  */
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
#line 2462 "parse.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1020 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2470 "parse.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1026 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2478 "parse.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1031 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2486 "parse.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1035 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2494 "parse.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1041 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2502 "parse.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1047 "grammar" /* yacc.c:1646  */
    {
        pop_dead();
    }
#line 2510 "parse.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1052 "grammar" /* yacc.c:1646  */
    {
        push_dead();                    /* set new dead-level */
    }
#line 2518 "parse.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1071 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *return_stmnt((yyvsp[-1]).type, &(yyvsp[0]));
    }
#line 2526 "parse.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1078 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2534 "parse.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1088 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2542 "parse.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1116 "grammar" /* yacc.c:1646  */
    {
        util_resetSemErr();
    }
#line 2550 "parse.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1125 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *cat_stmnt(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2558 "parse.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1141 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2567 "parse.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1148 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *fetchvar();
    }
#line 2575 "parse.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1160 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *expr_stmnt(assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2583 "parse.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1169 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *catcode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2592 "parse.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1179 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2600 "parse.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1186 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2608 "parse.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1197 "grammar" /* yacc.c:1646  */
    {
        gp_init = *catcode(&gp_init, &(yyvsp[0]));
    }
#line 2616 "parse.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1216 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *while_stmnt(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2624 "parse.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1221 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *stackframe(0);   /* by default initializes a variable to 0 */
    }
#line 2632 "parse.c" /* yacc.c:1646  */
    break;


#line 2636 "parse.c" /* yacc.c:1646  */
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
#line 1226 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
