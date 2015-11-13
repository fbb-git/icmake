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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   918

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
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
     192,   195,   200,   207,   214,   214,   223,   229,   231,   233,
     237,   243,   251,   254,   261,   261,   268,   275,   283,   290,
     297,   304,   311,   318,   325,   332,   339,   346,   353,   360,
     367,   374,   381,   390,   397,   404,   411,   418,   425,   432,
     439,   446,   453,   460,   467,   474,   481,   488,   495,   502,
     508,   514,   520,   526,   532,   538,   544,   550,   558,   563,
     568,   575,   577,   585,   593,   600,   604,   606,   608,   613,
     615,   622,   624,   628,   660,   665,   669,   673,   674,   679,
     689,   697,   706,   708,   710,   714,   716,   718,   720,   722,
     724,   726,   728,   730,   732,   734,   736,   738,   740,   742,
     744,   746,   748,   750,   752,   756,   758,   760,   762,   764,
     766,   768,   772,   774,   776,   780,   786,   790,   792,   796,
     802,   806,   808,   812,   819,   825,   832,   841,   852,   860,
     868,   875,   882,   889,   896,   899,   907,   913,   917,   939,
     948,   955,   957,   961,   961,   971,   986,  1001,  1023,  1047,
    1053,  1059,  1059,  1069,  1069,  1075,  1080,  1085,  1087,  1091,
    1093,  1097,  1106,  1106,  1112,  1114,  1120,  1123,  1125,  1127,
    1129,  1132,  1135,  1138,  1143,  1148,  1152,  1158,  1161,  1168,
    1176,  1178,  1180,  1184,  1191,  1197,  1205,  1208,  1217,  1225,
    1227,  1236,  1241,  1253
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
     305,   306,   307,   308,   309,   310,   311,   312,    61,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    63,
      58,   323,   324,   124,    94,    38,   325,   326,    60,    62,
     327,   328,   329,   330,   331,   332,    43,    45,    42,    47,
      37,    33,   333,   334,   126,    91,   125,    41,    44,    96,
      93,    40,    59,   123
};
# endif

#define YYPACT_NINF -319

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-319)))

#define YYTABLE_NINF -214

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,  -319,  -319,  -319,  -319,    28,   -28,  -319,  -319,  -319,
      18,  -319,  -319,  -319,  -319,  -319,  -319,   -95,   -77,   -71,
      -4,     0,  -319,  -319,   -24,  -319,   -21,   -27,  -319,  -319,
    -319,  -319,   678,    47,   -18,   375,  -319,  -319,   -14,   -12,
      47,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,   -13,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,   678,   678,   678,   678,
     678,   678,   678,   579,    43,  -319,   803,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,    -6,  -319,  -319,  -319,  -319,   -77,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
      12,  -319,  -319,  -319,   678,  -319,  -319,  -319,  -319,  -319,
    -319,   -11,     8,  -319,  -319,  -319,  -319,    21,  -319,  -319,
     -21,  -319,  -319,  -319,  -319,  -319,  -319,  -319,   -36,   -36,
     -36,   -36,   -36,   -36,   803,  -319,  -319,  -319,    -1,   803,
    -319,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,  -319,  -319,   678,  -319,  -319,  -319,  -319,
    -319,    16,  -319,    52,   -49,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,   803,  -319,    -8,   -21,   375,
    -319,  -319,  -319,  -319,  -319,  -319,   -21,  -319,  -319,    54,
    -319,  -319,    69,    72,  -319,  -319,    -9,   678,  -319,   803,
     803,   803,   803,   803,   803,   803,   803,   803,   803,   803,
     765,   464,   562,   660,   193,   823,    75,    75,    14,    14,
      14,    14,    14,    14,   106,   106,   115,   115,   -36,   -36,
     -36,   722,  -319,  -319,    13,    73,    79,  -319,  -319,  -319,
      80,  -319,    -7,  -319,    81,  -319,  -319,  -319,  -319,  -319,
    -319,    47,  -319,  -319,  -319,  -319,  -319,   -36,   678,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,    76,   478,  -319,   122,  -319,  -319,  -319,
    -319,   362,  -319,  -319,    85,  -319,  -319,  -319,  -319,  -319,
    -319,   678,   478,  -319,  -319,  -319,    16,  -319,   803,  -319,
    -319,  -319,    81,  -319,  -319,   164,  -319,  -319,   478,  -319,
    -319,   478,  -319,  -319,  -319,  -319
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   200,   202,   201,    18,     0,     0,     3,   182,   203,
       0,     1,     2,   100,   173,    21,    19,     0,     0,    22,
     213,     0,    20,   209,    12,   213,    98,     0,   183,   170,
     213,   206,     0,     0,     0,     0,   197,    96,    12,     0,
       0,   174,   210,   111,   112,   105,   133,   110,   109,   126,
     125,   127,   113,   115,   116,   114,   128,   137,   138,   107,
     129,   130,   173,   118,   102,   103,   104,    33,   173,   108,
      79,   173,   117,   106,   132,    31,   119,   121,   120,   131,
     173,   173,   134,   122,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    81,   207,   173,   173,   173,
     173,   173,   173,    10,    12,   154,    22,   208,    13,     0,
       7,    17,   180,   176,   176,   179,   176,   213,   182,   101,
       0,   184,   182,    26,     0,   182,   173,   189,   173,   188,
     213,     0,    24,   182,   194,   196,   182,     0,   173,   187,
       0,   171,    94,    24,    24,    24,    24,    24,    74,    69,
      76,    70,    72,    75,    34,    27,    28,    29,     0,    10,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    73,     0,   144,    24,    24,    24,
      24,    24,    32,     0,    24,   165,   193,    83,   169,   155,
     211,   185,   191,     9,   192,    25,   186,    24,    24,     0,
     172,   177,   181,   178,   190,   195,    24,    95,    99,    12,
       5,   159,    12,    12,    12,    82,     0,     0,    80,    36,
      43,    44,    45,    46,    47,    39,    42,    38,    40,    41,
       0,    48,    49,    59,    60,    58,    50,    51,    53,    54,
      55,    56,    66,    65,    61,    62,    57,    63,    64,    67,
      68,     0,   145,    12,   213,   213,    12,   153,   142,    11,
      12,    12,     0,    85,    86,   182,    87,    88,    10,    15,
      16,     0,    14,    10,    24,    24,    35,    77,     0,    37,
      24,    24,   148,   136,    24,   149,   140,   163,    24,   161,
     162,   164,    24,    24,     0,    23,   204,   198,     6,     4,
      12,    52,   146,   135,    12,    12,   160,    84,    89,   182,
     175,     0,     0,    24,    24,   167,    24,   176,   205,   175,
     147,   168,    91,    10,    92,   213,   212,     6,     0,   175,
     157,     0,   156,   158,   175,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -319,  -319,  -129,  -158,  -319,   -19,  -319,  -141,  -319,   -23,
    -319,  -319,   -35,  -319,  -319,   201,   -38,   -82,    41,  -319,
    -162,  -319,  -319,  -319,  -319,  -319,   -47,  -319,  -124,  -319,
    -319,  -319,  -319,    74,  -319,  -319,  -319,  -319,   203,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -111,  -319,   -90,  -319,  -319,   -65,   109,
      78,  -319,   -33,  -319,  -318,  -116,  -319,  -319,  -319,  -113,
    -319,  -319,  -262,    92,  -319,     3,  -319,     6,  -319,   190,
    -319,  -319,  -319,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   229,   332,   118,   119,   120,   202,   203,   294,
      34,   121,   288,   122,     6,     7,    20,    21,   123,   124,
     125,   158,    94,    95,   235,   236,    96,   126,   284,   285,
     329,   343,   127,    37,    38,    39,    25,    14,    15,    97,
      98,    99,   100,   302,   101,   305,   277,   102,   103,   128,
     349,   129,   104,   205,   311,   281,   282,   105,   207,    30,
     130,   131,    26,    27,   337,   208,   222,   132,   133,    16,
      17,   134,   135,    35,   290,   136,     9,   137,   317,    23,
      24,   138,   139,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    33,   142,     8,    13,   212,    10,    28,     8,   214,
      42,    10,   216,     1,     2,   140,   232,   233,   238,    18,
     224,   346,    18,   225,     3,    29,     1,     2,    11,   143,
    -100,   353,    40,  -163,  -163,   144,   355,     3,   145,   148,
     149,   150,   151,   152,   153,   154,   159,   146,   147,   209,
      19,   210,   330,   106,   -23,   283,   193,   194,    32,   195,
       1,     2,     1,     2,   196,   197,   198,   199,   200,   201,
     339,     3,   276,     3,    41,   309,   310,   215,  -199,   106,
     108,   204,     4,   -97,     4,   141,   352,   160,  -143,   354,
     296,  -160,   220,   217,  -213,   218,   237,   211,   186,   187,
     188,   189,   190,   191,   192,   226,   193,   194,   213,   195,
    -213,   301,   223,  -213,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    40,   314,   271,   279,
     327,  -151,   318,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,  -150,   193,   194,  -152,
     195,   304,   313,   221,   283,   324,  -141,  -166,   -90,   312,
     331,   278,  -139,   348,   230,   231,   230,   230,   234,   351,
     297,   293,   188,   189,   190,   191,   192,   287,   193,   194,
     292,   195,   347,   190,   191,   192,    12,   193,   194,   316,
     195,   295,   342,    22,   227,   335,   336,   325,   206,   228,
     286,   345,   219,   107,   291,     0,     0,     0,     0,     0,
       0,     0,   291,     0,     0,     0,     0,     0,   272,   273,
     274,   275,   230,     0,     0,   280,     0,     0,     0,     0,
     300,   321,     0,   315,   303,   306,     0,   307,   308,   289,
       0,     0,     0,     0,     0,     0,     0,   289,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   338,   193,   194,     0,   195,     0,
       0,     0,     0,     0,     0,     0,     0,   333,     0,     0,
       0,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,   320,     0,     0,     0,
       0,   322,   323,     0,     0,   230,     0,     0,     0,   326,
       0,     0,     0,     0,   328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   109,     0,   -24,   -24,
     -24,   110,   -24,   -24,   -24,   111,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   112,   -24,
     -24,   113,   -24,   -24,   -24,   -24,   -24,   -24,   114,     1,
       2,   -24,   -24,   -24,   -24,   -24,   115,   -24,   -24,   -24,
       3,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   172,   116,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,   194,     0,   195,     0,     0,
       0,   -24,   -24,     0,     0,     0,   -24,   -24,   -24,   -24,
       0,    -8,     0,     0,   -24,     0,   -24,   117,  -171,   109,
       0,   -24,   -24,   -24,   110,   -24,   -24,   -24,   111,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   112,   -24,   -24,   113,   -24,   -24,   -24,   -24,   -24,
     -24,   114,     1,     2,   -24,   -24,   -24,   -24,   -24,   115,
     -24,   -24,   -24,     3,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   116,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   193,   194,     0,   195,
       0,     0,     0,     0,   -24,   -24,     0,     0,     0,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,   -24,     0,   -24,
     117,  -171,    43,    44,    45,     0,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,     0,    57,
      58,    59,     0,    60,    61,     0,    62,    63,    64,    65,
      66,    67,     0,   155,   156,    68,    69,    70,    71,    72,
       0,    73,    74,    75,   157,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,   194,     0,   195,     0,     0,
       0,     0,     0,     0,     0,    86,    87,     0,     0,     0,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
      93,    43,    44,    45,     0,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,     0,    60,    61,     0,    62,    63,    64,    65,    66,
      67,     0,     0,     0,    68,    69,    70,    71,    72,     0,
      73,    74,    75,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   193,   194,     0,   195,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,    88,
      89,    90,    91,     0,     0,     0,     0,    92,     0,    93,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   193,   194,     0,   195,     0,     0,
       0,     0,   299,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   298,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,   193,   194,     0,
     195,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,     0,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,   194,     0,   195,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   193,   194,     0,   195
};

static const yytype_int16 yycheck[] =
{
      20,    24,    40,     0,    32,   118,     0,   102,     5,   122,
      30,     5,   125,    34,    35,    38,   145,   146,   159,     1,
     133,   339,     1,   136,    45,   102,    34,    35,     0,    62,
     101,   349,    26,    82,    83,    68,   354,    45,    71,    86,
      87,    88,    89,    90,    91,    92,    93,    80,    81,   114,
      32,   116,   314,    32,    58,   217,    92,    93,    58,    95,
      34,    35,    34,    35,    97,    98,    99,   100,   101,   102,
     332,    45,   201,    45,   101,    82,    83,   124,   102,    32,
      98,   104,    56,    97,    56,    97,   348,    44,   101,   351,
      99,    97,   103,   126,   102,   128,    97,   117,    84,    85,
      86,    87,    88,    89,    90,   138,    92,    93,    96,    95,
     102,    98,   132,    97,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   140,   288,   195,    97,
     312,    97,   293,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    97,    92,    93,    97,
      95,    98,   285,   132,   336,   304,    97,    97,   102,    98,
      58,   201,    97,    19,   143,   144,   145,   146,   147,   347,
     237,   226,    86,    87,    88,    89,    90,   217,    92,    93,
     219,    95,   343,    88,    89,    90,     5,    92,    93,   291,
      95,   234,   336,    10,   140,   326,   329,   307,   109,   141,
     217,   337,   130,    33,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,   197,   198,
     199,   200,   201,    -1,    -1,   204,    -1,    -1,    -1,    -1,
     273,   298,    -1,   291,   274,   275,    -1,   280,   281,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   331,    92,    93,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    -1,    -1,    -1,
      -1,   300,   301,    -1,    -1,   304,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   333,   334,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    69,    57,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,   103,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,   101,
     102,   103,     3,     4,     5,    -1,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,
     101,     3,     4,     5,    -1,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,   101,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,
      -1,    -1,   100,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    35,    45,    56,   105,   118,   119,   179,   180,
     181,     0,   119,    32,   141,   142,   173,   174,     1,    32,
     120,   121,   142,   183,   184,   140,   166,   167,   102,   102,
     163,   187,    58,   113,   114,   177,   187,   137,   138,   139,
     181,   101,   187,     3,     4,     5,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    20,    21,    22,
      24,    25,    27,    28,    29,    30,    31,    32,    36,    37,
      38,    39,    40,    42,    43,    44,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    86,    87,    91,    92,
      93,    94,    99,   101,   126,   127,   130,   143,   144,   145,
     146,   148,   151,   152,   156,   161,    32,   183,    98,     1,
       6,    10,    23,    26,    33,    41,    57,   102,   108,   109,
     110,   115,   117,   122,   123,   124,   131,   136,   153,   155,
     164,   165,   171,   172,   175,   176,   179,   181,   185,   186,
     113,    97,   120,   166,   166,   166,   166,   166,   130,   130,
     130,   130,   130,   130,   130,    34,    35,    45,   125,   130,
      44,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    92,    93,    95,   166,   166,   166,   166,
     166,   166,   111,   112,   113,   157,   163,   162,   169,   162,
     162,   187,   173,    96,   173,   130,   173,   166,   166,   177,
     103,   122,   170,   187,   173,   173,   166,   137,   164,   106,
     122,   122,   106,   106,   122,   128,   129,    97,   111,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   122,   122,   122,   122,   106,   150,   187,    97,
     122,   159,   160,   124,   132,   133,   179,   187,   116,   122,
     178,   181,   109,   116,   113,   113,    99,   130,    70,   100,
     113,    98,   147,   187,    98,   149,   187,   113,   113,    82,
      83,   158,    98,   173,   111,   120,   121,   182,   111,   122,
     122,   130,   122,   122,   106,   159,   122,   124,   122,   134,
     176,    58,   107,   113,   113,   157,   173,   168,   130,   176,
     122,   122,   132,   135,   187,   169,   168,   111,    19,   154,
     187,   107,   176,   168,   176,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   107,   108,   110,   109,
     112,   111,   114,   113,   115,   116,   116,   117,   118,   119,
     119,   119,   120,   121,   123,   122,   124,   125,   125,   125,
     126,   126,   127,   127,   129,   128,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   132,   132,   133,   133,   133,   134,
     134,   135,   135,   136,   137,   138,   138,   139,   139,   140,
     141,   142,   143,   143,   143,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   153,   154,   154,   155,   156,
     157,   158,   158,   160,   159,   161,   161,   161,   161,   162,
     163,   165,   164,   167,   166,   168,   169,   170,   170,   171,
     171,   172,   174,   173,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   177,   177,   178,   179,
     180,   180,   180,   181,   182,   182,   183,   183,   184,   184,
     184,   185,   186,   187
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
       1,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     2,     3,     5,     7,     4,     4,
       3,     3,     3,     3,     1,     2,     2,     1,     9,     3,
       0,     1,     1,     0,     2,     2,     3,     6,     7,     1,
       1,     0,     2,     0,     2,     0,     0,     1,     1,     1,
       1,     2,     0,     2,     1,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     3,     2,     3,     3,     1,
       3,     2,     7,     0
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
        (yyval) = *p_multipleArgs(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 1680 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_firstArg(&(yyvsp[0]));
    }
#line 1688 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 130 "grammar" /* yacc.c:1646  */
    {
        gp_breakOK++;
    }
#line 1696 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 136 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_break();
    }
#line 1704 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 141 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closebrace_expected;
        symtab_pop();
    }
#line 1713 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_closepar_expected; 
    }
#line 1721 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 154 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_comma_expected; 
    }
#line 1729 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 163 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 1737 "parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 174 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_continue();
    }
#line 1745 "parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 180 "grammar" /* yacc.c:1646  */
    {
        gp_varType = 0;
    }
#line 1753 "parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "grammar" /* yacc.c:1646  */
    {
        gp_init = *p_catCode(&gp_init, &(yyvsp[-1]));
    }
#line 1761 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 201 "grammar" /* yacc.c:1646  */
    {
        p_defineVar();    /* the first n variables of a function, up to the
                            end of the parameter list are the parameters. */
    }
#line 1770 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 208 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1778 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 214 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_in_expression;
    }
#line 1786 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 218 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 1794 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 224 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(&(yyvsp[0]));
    }
#line 1802 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 239 "grammar" /* yacc.c:1646  */
    {                                       /* catenate the new string */
        gp_stringbuf = rss_strcat(gp_stringbuf, util_string());
    }
#line 1810 "parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 244 "grammar" /* yacc.c:1646  */
    {
        free(gp_stringbuf);                  /* free former string */
        gp_stringbuf = rss_strdup(util_string()); /* duplicate initial string */
    }
#line 1819 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fetchVar();
    }
#line 1827 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 261 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_backtick_expected;
    }
#line 1835 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 271 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1843 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 279 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_indexOp(&(yyvsp[-3]), &(yyvsp[-1]));
        }
#line 1851 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 286 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_multiply, "*=");
        }
#line 1859 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 293 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_divide, "/=");
        }
#line 1867 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 300 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_modulo, "%=");
        }
#line 1875 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 307 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_addition, "+=");
        }
#line 1883 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 314 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_subtract, "-=");
        }
#line 1891 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 321 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_and, "&=");
        }
#line 1899 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 328 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_or, "|=");
        }
#line 1907 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 335 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_xor, "^=");
        }
#line 1915 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 342 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shl, "<<=");
        }
#line 1923 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 349 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_compoundAss(&(yyvsp[-2]), &(yyvsp[0]), p_shr, ">>=");
        }
#line 1931 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 356 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_orBool(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1939 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 363 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_andBoolean(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1947 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 370 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_equal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1955 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 377 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_unequal(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1963 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 386 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_ternary(&(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1971 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 393 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smaller(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1979 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 400 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_greater(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1987 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 407 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_smEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 1995 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 414 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_grEqual(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2003 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 421 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_addition(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2011 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 428 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_and(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2019 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 435 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_or(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2027 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 442 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_xor(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2035 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 449 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shl(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2043 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 456 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_shr(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2051 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 463 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_subtract(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2059 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 470 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_multiply(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2067 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 477 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_young(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2075 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 484 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_old(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2083 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 491 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_divide(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2091 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 498 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_modulo(&(yyvsp[-2]), &(yyvsp[0]));
        }
#line 2099 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 504 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_negate(&(yyvsp[0]));
        }
#line 2107 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 510 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_inc, &(yyvsp[0]));
        }
#line 2115 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 516 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_inc, &(yyvsp[-1]));
        }
#line 2123 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 522 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(pre_op, op_dec, &(yyvsp[0]));
        }
#line 2131 "parse.c" /* yacc.c:1646  */
    break;

  case 73:
#line 528 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_incDec(post_op, op_dec, &(yyvsp[-1]));
        }
#line 2139 "parse.c" /* yacc.c:1646  */
    break;

  case 74:
#line 534 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2147 "parse.c" /* yacc.c:1646  */
    break;

  case 75:
#line 540 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_not(&(yyvsp[0]));
        }
#line 2155 "parse.c" /* yacc.c:1646  */
    break;

  case 76:
#line 546 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_not(&(yyvsp[0]));
        }
#line 2163 "parse.c" /* yacc.c:1646  */
    break;

  case 77:
#line 554 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_cast((yyvsp[-2]).type, &(yyvsp[0]));
        }
#line 2171 "parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 559 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_str | e_const);
        }
#line 2179 "parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 564 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_stackFrame(e_int | e_const);
        }
#line 2187 "parse.c" /* yacc.c:1646  */
    break;

  case 80:
#line 571 "grammar" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[-1]);
        }
#line 2195 "parse.c" /* yacc.c:1646  */
    break;

  case 82:
#line 580 "grammar" /* yacc.c:1646  */
    {
            (yyval) = *p_oneArg(f_backtick, &(yyvsp[-1]));
        }
#line 2203 "parse.c" /* yacc.c:1646  */
    break;

  case 83:
#line 587 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2211 "parse.c" /* yacc.c:1646  */
    break;

  case 84:
#line 596 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2219 "parse.c" /* yacc.c:1646  */
    break;

  case 90:
#line 615 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = 1;
    }
#line 2228 "parse.c" /* yacc.c:1646  */
    break;

  case 93:
#line 639 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_for(&(yyvsp[-8]), &(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
    }
#line 2236 "parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 683 "grammar" /* yacc.c:1646  */
    {
        symtab_setFunParams(); /* the # variables so far are the parameters */
    }
#line 2244 "parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 690 "grammar" /* yacc.c:1646  */
    {
        p_beginFunction();
    }
#line 2252 "parse.c" /* yacc.c:1646  */
    break;

  case 101:
#line 701 "grammar" /* yacc.c:1646  */
    {
        p_endFunction(&(yyvsp[-1]));
    }
#line 2260 "parse.c" /* yacc.c:1646  */
    break;

  case 135:
#line 782 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2268 "parse.c" /* yacc.c:1646  */
    break;

  case 139:
#line 798 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2276 "parse.c" /* yacc.c:1646  */
    break;

  case 143:
#line 813 "grammar" /* yacc.c:1646  */
    {
        (yyval).evalue = p_functionIdx();
    }
#line 2284 "parse.c" /* yacc.c:1646  */
    break;

  case 144:
#line 821 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_zeroArgs((yyvsp[-1]).type);
    }
#line 2292 "parse.c" /* yacc.c:1646  */
    break;

  case 145:
#line 828 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_oneArg((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2300 "parse.c" /* yacc.c:1646  */
    break;

  case 146:
#line 837 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_twoArgs((yyvsp[-4]).type, &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2308 "parse.c" /* yacc.c:1646  */
    break;

  case 147:
#line 848 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_threeArgs((yyvsp[-6]).type, &(yyvsp[-4]), &(yyvsp[-2]), &(yyvsp[0]));
    }
#line 2316 "parse.c" /* yacc.c:1646  */
    break;

  case 148:
#line 856 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntString((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2324 "parse.c" /* yacc.c:1646  */
    break;

  case 149:
#line 864 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_optIntSpecial((yyvsp[-3]).type, &(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2332 "parse.c" /* yacc.c:1646  */
    break;

  case 150:
#line 871 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_printf, &(yyvsp[0]));
    }
#line 2340 "parse.c" /* yacc.c:1646  */
    break;

  case 151:
#line 878 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_fprintf((yyvsp[-2]).type, &(yyvsp[0]));
    }
#line 2348 "parse.c" /* yacc.c:1646  */
    break;

  case 152:
#line 885 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_specials(f_strformat, &(yyvsp[0]));
    }
#line 2356 "parse.c" /* yacc.c:1646  */
    break;

  case 153:
#line 892 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_callFunction((yyvsp[-2]).evalue, &(yyvsp[0]));
    }
#line 2364 "parse.c" /* yacc.c:1646  */
    break;

  case 155:
#line 901 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2372 "parse.c" /* yacc.c:1646  */
    break;

  case 156:
#line 909 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2380 "parse.c" /* yacc.c:1646  */
    break;

  case 158:
#line 926 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_if(&(yyvsp[-6]), &(yyvsp[-4]), &(yyvsp[-1]));
        symtab_pop();
    }
#line 2389 "parse.c" /* yacc.c:1646  */
    break;

  case 159:
#line 942 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2397 "parse.c" /* yacc.c:1646  */
    break;

  case 160:
#line 948 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(e_int | e_const);
        (yyval).evalue = O_FILE;
    }
#line 2406 "parse.c" /* yacc.c:1646  */
    break;

  case 163:
#line 961 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_older_younger; 
    }
#line 2414 "parse.c" /* yacc.c:1646  */
    break;

  case 164:
#line 965 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2422 "parse.c" /* yacc.c:1646  */
    break;

  case 165:
#line 973 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_makeList
             (
                 p_multipleArgs
                 (
                     p_firstArg(&(yyvsp[0])),     /* O_FILE is passed */
                     &(yyvsp[-1])                /* expression is passed */
                 ),
                 op_hlt                 /* not op_younger or op_older */
             );
    }
#line 2438 "parse.c" /* yacc.c:1646  */
    break;

  case 166:
#line 989 "grammar" /* yacc.c:1646  */
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
#line 2454 "parse.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1007 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_makeList
             (
                p_multipleArgs
                (
                    p_multipleArgs
                    (
                        p_firstArg(&(yyvsp[0])),  /* O_FILE   is passed */
                        &(yyvsp[-5])             /* 1st expression is passed */
                    ),
                    &(yyvsp[-1])                 /* 2nd expression is passed */
                 ),
                 (yyvsp[-3]).type                /* older/younger */
             );
    }
#line 2474 "parse.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1030 "grammar" /* yacc.c:1646  */
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
#line 2494 "parse.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1048 "grammar" /* yacc.c:1646  */
    {
        gp_nestLevel++;
    }
#line 2502 "parse.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1054 "grammar" /* yacc.c:1646  */
    {
        yyerrok;
    }
#line 2510 "parse.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1059 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openbrace_expected;
    }
#line 2518 "parse.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1063 "grammar" /* yacc.c:1646  */
    {
        symtab_push();
    }
#line 2526 "parse.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1069 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_openpar_expected;
    }
#line 2534 "parse.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1075 "grammar" /* yacc.c:1646  */
    {
        p_popDead();
    }
#line 2542 "parse.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1080 "grammar" /* yacc.c:1646  */
    {
        p_pushDead();                    /* set new dead-level */
    }
#line 2550 "parse.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1099 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_return((yyvsp[-1]).type, &(yyvsp[0]));
    }
#line 2558 "parse.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1106 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_semicol_expected; 
    }
#line 2566 "parse.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1116 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
    }
#line 2574 "parse.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1144 "grammar" /* yacc.c:1646  */
    {
        util_resetSemErr();
    }
#line 2582 "parse.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1154 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catStmnts(&(yyvsp[-1]), &(yyvsp[0]));
    }
#line 2590 "parse.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1163 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2598 "parse.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1170 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2606 "parse.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1185 "grammar" /* yacc.c:1646  */
    {
        gp_parse_error = err_identifier_expected;
        gp_varType = (yyvsp[0]).type;
    }
#line 2615 "parse.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1192 "grammar" /* yacc.c:1646  */
    {
        p_generateCode(&(yyvsp[0]), op_push_imm, 0);
        (yyval) = (yyvsp[0]);
    }
#line 2624 "parse.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1200 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_assign(&(yyvsp[-2]), &(yyvsp[0]));    /* explicit initialization */
    }
#line 2632 "parse.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1211 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_expression(p_assign(&(yyvsp[-2]), &(yyvsp[0])));    /* explicit initialization */
    }
#line 2640 "parse.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1220 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_catCode(&(yyvsp[-2]), &(yyvsp[0]));    /* catenate variable    */
                                    /* initialization code  */
    }
#line 2649 "parse.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1230 "grammar" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[0]);
    }
#line 2657 "parse.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1248 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_while(&(yyvsp[-4]), &(yyvsp[-1]), 1);
    }
#line 2665 "parse.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1253 "grammar" /* yacc.c:1646  */
    {
        (yyval) = *p_stackFrame(0);   /* by default initializes a variable to 0 */
    }
#line 2673 "parse.c" /* yacc.c:1646  */
    break;


#line 2677 "parse.c" /* yacc.c:1646  */
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
#line 1258 "grammar" /* yacc.c:1906  */


int yywrap(void)
{
    return 1;
}
