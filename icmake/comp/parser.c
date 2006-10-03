/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     G_PATH = 270,
     ELEMENT = 271,
     ELSE = 272,
     EXEC = 273,
     EXECUTE = 274,
     EXISTS = 275,
     EXIT = 276,
     FGETS = 277,
     FIELDS = 278,
     FOR = 279,
     FPRINTF = 280,
     GETCH = 281,
     GETPID = 282,
     GETS = 283,
     IDENTIFIER = 284,
     IF = 285,
     INT = 286,
     LIST = 287,
     MAKELIST = 288,
     M_ECHO = 289,
     NUMBER = 290,
     PRINTF = 291,
     PUTENV = 292,
     RETURN = 293,
     SIZEOFLIST = 294,
     STAT = 295,
     STRING = 296,
     STRINGTYPE = 297,
     STRLEN = 298,
     STRLWR = 299,
     STRUPR = 300,
     SUBSTR = 301,
     SYSTEM = 302,
     VOID = 303,
     WHILE = 304,
     PLUS_IS = 305,
     MOD_IS = 306,
     MUL_IS = 307,
     MINUS_IS = 308,
     DIV_IS = 309,
     SHR_IS = 310,
     SHL_IS = 311,
     XOR_IS = 312,
     OR_IS = 313,
     AND_IS = 314,
     OR = 315,
     AND = 316,
     NOT_EQUAL = 317,
     EQUAL = 318,
     YOUNGER = 319,
     OLDER = 320,
     GREATER_EQUAL = 321,
     SMALLER_EQUAL = 322,
     SHR = 323,
     SHL = 324,
     DEC = 325,
     INC = 326
   };
#endif
/* Tokens.  */
#define ARG_HEAD 258
#define ARG_TAIL 259
#define ASCII 260
#define BREAK 261
#define CHDIR 262
#define CMD_HEAD 263
#define CMD_TAIL 264
#define C_BASE 265
#define C_EXT 266
#define C_PATH 267
#define G_BASE 268
#define G_EXT 269
#define G_PATH 270
#define ELEMENT 271
#define ELSE 272
#define EXEC 273
#define EXECUTE 274
#define EXISTS 275
#define EXIT 276
#define FGETS 277
#define FIELDS 278
#define FOR 279
#define FPRINTF 280
#define GETCH 281
#define GETPID 282
#define GETS 283
#define IDENTIFIER 284
#define IF 285
#define INT 286
#define LIST 287
#define MAKELIST 288
#define M_ECHO 289
#define NUMBER 290
#define PRINTF 291
#define PUTENV 292
#define RETURN 293
#define SIZEOFLIST 294
#define STAT 295
#define STRING 296
#define STRINGTYPE 297
#define STRLEN 298
#define STRLWR 299
#define STRUPR 300
#define SUBSTR 301
#define SYSTEM 302
#define VOID 303
#define WHILE 304
#define PLUS_IS 305
#define MOD_IS 306
#define MUL_IS 307
#define MINUS_IS 308
#define DIV_IS 309
#define SHR_IS 310
#define SHL_IS 311
#define XOR_IS 312
#define OR_IS 313
#define AND_IS 314
#define OR 315
#define AND 316
#define NOT_EQUAL 317
#define EQUAL 318
#define YOUNGER 319
#define OLDER 320
#define GREATER_EQUAL 321
#define SMALLER_EQUAL 322
#define SHR 323
#define SHL 324
#define DEC 325
#define INC 326




/* Copy the first part of user declarations.  */
#line 4 "parser"


#include "iccomp.h"



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 254 "parser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   730

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNRULES -- Number of states.  */
#define YYNSTATES  317

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,     2,     2,    80,    65,     2,
      89,    86,    78,    76,    87,    77,     2,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    90,
      68,    50,    69,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,    63,    85,    82,     2,     2,     2,
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
      45,    46,    47,    48,    49,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    66,    67,    70,
      71,    72,    73,    74,    75,    83,    84
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    14,    15,    17,    19,
      21,    23,    24,    27,    28,    31,    32,    35,    38,    40,
      43,    45,    49,    52,    55,    58,    60,    62,    63,    66,
      70,    74,    78,    82,    86,    90,    94,    98,   102,   106,
     110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
     150,   154,   158,   162,   166,   170,   174,   178,   182,   186,
     190,   193,   196,   199,   202,   205,   208,   211,   214,   219,
     221,   223,   227,   229,   231,   235,   237,   240,   252,   257,
     260,   262,   265,   269,   275,   280,   285,   289,   293,   297,
     299,   303,   305,   307,   313,   316,   326,   328,   330,   333,
     336,   338,   341,   345,   352,   360,   364,   365,   367,   369,
     370,   373,   375,   377,   379,   381,   383,   385,   387,   389,
     391,   393,   395,   397,   399,   401,   403,   404,   407,   408,
     411,   413,   415,   417,   418,   420,   422,   424,   426,   428,
     430,   432,   434,   435,   437,   438,   440,   441,   445,   447,
     450,   451,   452,   455,   457,   459,   460,   463,   465,   468,
     470,   472,   475,   478,   480,   482,   484,   487,   490,   493,
     496,   498,   500,   502,   504,   506,   508,   510,   512,   514,
     516,   518,   521,   525,   527,   530,   532,   534,   536,   538,
     540,   542,   545,   553,   555,   557,   559
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    92,   106,    -1,   106,    -1,    93,   101,
     109,    -1,   109,    -1,    -1,     6,    -1,    31,    -1,    32,
      -1,    42,    -1,    -1,    98,    85,    -1,    -1,   100,    86,
      -1,    -1,   102,    87,    -1,    87,    93,    -1,   171,    -1,
      87,   109,    -1,   171,    -1,    88,   157,    97,    -1,   147,
     165,    -1,   167,   116,    -1,    17,   156,    -1,   171,    -1,
      29,    -1,    -1,   110,   111,    -1,   111,    50,   111,    -1,
     111,    53,   111,    -1,   111,    55,   111,    -1,   111,    52,
     111,    -1,   111,    51,   111,    -1,   111,    54,   111,    -1,
     111,    60,   111,    -1,   111,    59,   111,    -1,   111,    58,
     111,    -1,   111,    57,   111,    -1,   111,    56,   111,    -1,
     111,    61,   111,    -1,   111,    62,   111,    -1,   111,    67,
     111,    -1,   111,    66,   111,    -1,   111,    68,   111,    -1,
     111,    69,   111,    -1,   111,    73,   111,    -1,   111,    72,
     111,    -1,   111,    76,   111,    -1,   111,    65,   111,    -1,
     111,    63,   111,    -1,   111,    64,   111,    -1,   111,    75,
     111,    -1,   111,    74,   111,    -1,   111,    77,   111,    -1,
     111,    78,   111,    -1,   111,    70,   111,    -1,   111,    71,
     111,    -1,   111,    79,   111,    -1,   111,    80,   111,    -1,
      77,   111,    -1,    84,   111,    -1,   111,    84,    -1,    83,
     111,    -1,   111,    83,    -1,    76,   111,    -1,    82,   111,
      -1,    81,   111,    -1,    89,    96,    86,   111,    -1,   159,
      -1,    35,    -1,    89,   111,    99,    -1,   117,    -1,   109,
      -1,   113,    87,   112,    -1,   112,    -1,    24,   130,    -1,
     114,   136,   142,   154,   141,   154,   142,    99,    94,   156,
     150,    -1,   119,   121,   157,    97,    -1,   118,    99,    -1,
      29,    -1,   170,   136,    -1,   135,   136,   109,    -1,   161,
     136,   109,   101,   109,    -1,   144,   136,   109,   104,    -1,
     143,   136,   109,   103,    -1,    36,   136,    93,    -1,    25,
     136,    93,    -1,   120,   136,   140,    -1,   127,    -1,   160,
     136,   109,    -1,    29,    -1,    29,    -1,   136,   146,    86,
     138,   145,    -1,    30,   130,    -1,   122,   136,   109,    99,
     156,   150,   151,   107,   150,    -1,    38,    -1,    21,    -1,
     162,   163,    -1,   126,   125,    -1,   125,    -1,   128,   129,
      -1,   128,   101,   109,    -1,   128,   101,   132,   101,   109,
     129,    -1,   128,   101,   109,   101,   132,   101,   109,    -1,
      33,   136,   109,    -1,    -1,   151,    -1,    90,    -1,    -1,
     133,   134,    -1,    71,    -1,    70,    -1,     5,    -1,    39,
      -1,    20,    -1,    34,    -1,     9,    -1,     8,    -1,     3,
      -1,     4,    -1,    13,    -1,    15,    -1,    14,    -1,    37,
      -1,    43,    -1,    -1,   137,    89,    -1,    -1,   139,    88,
      -1,    93,    -1,   171,    -1,   109,    -1,    -1,   113,    -1,
     171,    -1,    18,    -1,    19,    -1,    40,    -1,     7,    -1,
      47,    -1,   126,    -1,    -1,   148,    -1,    -1,   162,    -1,
      -1,   148,   101,   149,    -1,   149,    -1,   162,   108,    -1,
      -1,    -1,   124,   153,    -1,   109,    -1,   171,    -1,    -1,
     155,    90,    -1,   158,    -1,   157,   156,    -1,   171,    -1,
     105,    -1,    90,   171,    -1,   112,   154,    -1,   169,    -1,
     123,    -1,   115,    -1,   152,   154,    -1,    95,   154,    -1,
       1,   131,    -1,   159,    41,    -1,    41,    -1,    45,    -1,
      44,    -1,    11,    -1,    10,    -1,    12,    -1,    16,    -1,
      22,    -1,    23,    -1,    46,    -1,   166,    -1,   164,   154,
      -1,   164,   101,   108,    -1,   108,    -1,     1,   131,    -1,
     163,    -1,   116,    -1,    31,    -1,    42,    -1,    32,    -1,
      48,    -1,    49,   130,    -1,   168,   136,   109,    99,    94,
     156,   150,    -1,    26,    -1,    27,    -1,    28,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   107,   112,   119,   126,   132,   139,   141,
     143,   146,   146,   147,   147,   148,   148,   151,   157,   161,
     167,   171,   180,   183,   189,   195,   199,   206,   206,   216,
     223,   230,   237,   244,   251,   258,   265,   272,   279,   286,
     293,   300,   307,   314,   321,   328,   335,   342,   349,   356,
     363,   370,   377,   384,   391,   398,   405,   412,   419,   426,
     433,   439,   445,   451,   457,   463,   469,   475,   481,   489,
     494,   499,   506,   510,   517,   524,   528,   533,   550,   560,
     563,   570,   576,   583,   592,   600,   608,   615,   622,   629,
     631,   640,   647,   654,   668,   673,   690,   692,   696,   701,
     704,   709,   724,   739,   761,   786,   795,   802,   809,   816,
     816,   824,   826,   830,   832,   834,   836,   838,   840,   842,
     844,   846,   848,   850,   852,   854,   857,   857,   858,   858,
     861,   863,   867,   869,   876,   878,   882,   884,   888,   890,
     892,   896,   897,   901,   902,   906,   908,   914,   918,   922,
     930,   936,   944,   952,   954,   957,   957,   960,   967,   973,
     977,   979,   985,   988,   990,   992,   994,   997,  1000,  1005,
    1011,  1019,  1021,  1026,  1028,  1030,  1032,  1034,  1036,  1038,
    1042,  1051,  1056,  1060,  1062,  1067,  1069,  1073,  1075,  1077,
    1081,  1088,  1093,  1109,  1111,  1113,  1117
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARG_HEAD", "ARG_TAIL", "ASCII", "BREAK",
  "CHDIR", "CMD_HEAD", "CMD_TAIL", "C_BASE", "C_EXT", "C_PATH", "G_BASE",
  "G_EXT", "G_PATH", "ELEMENT", "ELSE", "EXEC", "EXECUTE", "EXISTS",
  "EXIT", "FGETS", "FIELDS", "FOR", "FPRINTF", "GETCH", "GETPID", "GETS",
  "IDENTIFIER", "IF", "INT", "LIST", "MAKELIST", "M_ECHO", "NUMBER",
  "PRINTF", "PUTENV", "RETURN", "SIZEOFLIST", "STAT", "STRING",
  "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR", "SUBSTR", "SYSTEM", "VOID",
  "WHILE", "'='", "PLUS_IS", "MOD_IS", "MUL_IS", "MINUS_IS", "DIV_IS",
  "SHR_IS", "SHL_IS", "XOR_IS", "OR_IS", "AND_IS", "OR", "AND", "'|'",
  "'^'", "'&'", "NOT_EQUAL", "EQUAL", "'<'", "'>'", "YOUNGER", "OLDER",
  "GREATER_EQUAL", "SMALLER_EQUAL", "SHR", "SHL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "'~'", "DEC", "INC", "'}'", "')'", "','", "'{'",
  "'('", "';'", "$accept", "input", "args", "break_ok", "break_stat",
  "casttype", "closebrace", "@1", "closepar", "@2", "comma", "@3",
  "comma_arglist", "comma_expr", "compound", "def_var_or_fun", "else_tail",
  "enterid", "err_expression", "@4", "expression", "expr_code",
  "expr_list", "for", "for_stat", "funcdef", "func_or_var", "function",
  "funid", "funname", "funvars", "if", "if_stat", "leave_key",
  "local_list", "locals", "makelist", "makelist_expr", "makelist_normal",
  "nesting", "ok", "older_younger", "@5", "old_young", "one_arg_funs",
  "openpar", "@6", "openbrace", "@7", "opt_arglist", "opt_expression",
  "opt_expr_list", "optint_special", "optint_string", "opt_locals",
  "opt_parlist", "opt_vartype", "pars", "partype", "popdead", "pushdead",
  "return_stat", "return_tail", "semicol", "@8", "statement", "statements",
  "stm", "string", "strupr_lwr", "two_arg_funs", "type_of_var", "vardefs",
  "varnames", "var_or_fun", "vartype", "voidtype", "while", "while_stat",
  "zero_arg_funs", "zeroframe", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      61,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   124,    94,    38,   317,   318,    60,    62,
     319,   320,   321,   322,   323,   324,    43,    45,    42,    47,
      37,    33,   126,   325,   326,   125,    41,    44,   123,    40,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    94,    95,    96,    96,
      96,    98,    97,   100,    99,   102,   101,   103,   103,   104,
     104,   105,   106,   106,   107,   107,   108,   110,   109,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   112,   113,   113,   114,   115,   116,   117,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   121,   122,   123,   124,   124,   125,   126,
     126,   127,   127,   127,   127,   128,   129,   130,   131,   133,
     132,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   137,   136,   139,   138,
     140,   140,   141,   141,   142,   142,   143,   143,   144,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     150,   151,   152,   153,   153,   155,   154,   156,   157,   157,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   159,
     159,   160,   160,   161,   161,   161,   161,   161,   161,   161,
     162,   163,   164,   164,   164,   165,   165,   166,   166,   166,
     167,   168,   169,   170,   170,   170,   171
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     2,     2,     1,     2,
       1,     3,     2,     2,     2,     1,     1,     0,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     1,
       1,     3,     1,     1,     3,     1,     2,    11,     4,     2,
       1,     2,     3,     5,     4,     4,     3,     3,     3,     1,
       3,     1,     1,     5,     2,     9,     1,     1,     2,     2,
       1,     2,     3,     6,     7,     3,     0,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     1,     0,     3,     1,     2,
       0,     0,     2,     1,     1,     0,     2,     1,     2,     1,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     7,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     146,   187,   189,   188,   190,   146,     3,     0,   145,   180,
       0,     1,     2,     0,    26,   183,   186,   126,   185,    15,
      22,    91,    23,   108,   184,   196,   144,     0,     0,     0,
     181,     0,     0,   159,     0,    15,   148,     0,   127,    26,
     182,    16,   156,     0,     7,    97,   151,   151,    96,   151,
     196,   196,   155,    78,     0,   160,    73,     0,   155,   126,
     165,   126,   164,    27,   155,   158,   157,   126,   163,   128,
       0,   149,   168,    76,   107,    94,   191,     0,   161,   167,
      12,   119,   120,   113,   139,   118,   117,   174,   173,   175,
     121,   123,   122,   176,   136,   137,   115,   177,   178,   126,
     193,   194,   195,    80,   126,   116,    70,   126,   124,   114,
     138,   170,   125,   172,   171,   179,   140,     0,     0,     0,
       0,     0,     0,     0,    28,    72,    13,   126,    89,    15,
     126,   126,   126,    69,   126,   126,   126,   162,    27,    27,
     153,   152,   154,   166,    27,   142,     0,   147,    21,    27,
      27,    27,    65,    60,    67,    66,    63,    61,     8,     9,
      10,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    62,    79,     0,    27,    27,
     101,    27,    27,    27,   169,    27,    27,    81,    75,   134,
     155,   135,    13,    13,   100,   141,    93,     0,   129,    15,
       5,   105,    15,     0,    71,    29,    33,    32,    30,    34,
      31,    39,    38,    37,    36,    35,    40,    41,    50,    51,
      49,    43,    42,    44,    45,    56,    57,    47,    46,    53,
      52,    48,    54,    55,    58,    59,    14,    15,    88,   131,
      15,    15,     0,    82,   196,   196,    90,    15,    27,    27,
       0,     6,    99,    98,    27,    68,   109,    27,   112,   111,
     110,    27,    85,    18,    27,    84,    20,    27,    74,   132,
     155,   150,     0,     4,    15,   106,    15,    19,    83,    27,
     151,   150,    27,   103,    13,   196,   192,   104,     6,     0,
     150,    25,     0,    24,    95,   150,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   219,   292,    52,   161,    53,    54,   196,   197,
     274,    29,   282,   285,    55,     6,   310,    15,    56,    57,
     124,    58,   209,    59,    60,    16,   125,   126,    17,   127,
      25,    61,    62,    63,   214,   215,   128,   129,   200,    73,
      24,   261,   262,   280,   130,    26,    27,   145,   146,   258,
     290,   210,   131,   132,   216,    34,     7,    35,    36,   300,
      74,    64,   141,    30,    31,    65,    32,    66,   133,   134,
     135,     8,    18,    19,    20,     9,    10,    67,    68,   136,
      33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -285
static const yytype_int16 yypact[] =
{
      -7,  -285,  -285,  -285,  -285,     7,  -285,     8,  -285,  -285,
     -14,  -285,  -285,   -70,   -67,  -285,  -285,  -285,  -285,   -61,
    -285,  -285,  -285,  -285,  -285,  -285,    47,   -53,     4,   -44,
    -285,   -45,   345,  -285,   -42,   -38,  -285,     4,  -285,  -285,
    -285,  -285,  -285,   -70,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,   -34,  -285,  -285,   606,  -285,  -285,
    -285,  -285,  -285,   -17,  -285,  -285,  -285,  -285,  -285,  -285,
      47,  -285,  -285,  -285,  -285,  -285,  -285,   345,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,   -13,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,   606,   606,   606,
     606,   606,   606,   523,   646,  -285,  -285,  -285,  -285,    -3,
    -285,  -285,  -285,    45,  -285,  -285,  -285,  -285,   -17,  -285,
    -285,  -285,  -285,  -285,  -285,    47,     2,  -285,  -285,  -285,
    -285,  -285,   -56,   -56,   -56,   -56,   -56,   -56,  -285,  -285,
    -285,     5,   646,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,  -285,  -285,  -285,     9,    10,    11,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,     6,
    -285,  -285,  -285,  -285,  -285,    47,  -285,    13,  -285,    15,
    -285,  -285,    16,   606,  -285,   646,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   104,   129,   212,    -9,
     329,   417,   417,    39,    39,    39,    39,    39,    39,    48,
      48,    58,    58,   -56,   -56,   -56,  -285,    20,  -285,  -285,
      25,  -285,    14,  -285,    33,    42,  -285,  -285,  -285,    22,
     435,  -285,  -285,  -285,  -285,   -56,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,   435,  -285,  -285,  -285,    44,  -285,  -285,    10,
    -285,  -285,  -285,  -285,  -285,    77,  -285,  -285,  -285,   435,
    -285,  -285,   435,  -285,  -285,  -285,  -285
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,  -146,  -175,  -285,  -285,    62,  -285,  -159,  -285,
     -19,  -285,  -285,  -285,  -285,   135,  -285,   -18,   -52,  -285,
     139,  -134,  -285,  -285,  -285,   133,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,   -71,  -285,  -285,  -285,  -143,   -26,
     112,  -120,  -285,  -285,  -285,   -27,  -285,  -285,  -285,  -285,
    -285,  -142,  -285,  -285,  -285,  -285,  -285,  -285,    88,  -284,
    -141,  -285,  -285,   -46,  -285,  -262,   110,  -285,  -285,  -285,
    -285,   -24,   -55,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
     -50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -197
static const yytype_int16 yytable[] =
{
      28,    78,    37,   224,   208,   222,    79,    11,   291,    13,
      40,   140,   137,   142,    13,    21,    70,   306,   143,    71,
      23,    75,   -91,    76,     1,     2,   314,   194,   195,  -155,
     301,   316,   138,    39,   139,     3,    38,    14,     1,     2,
     144,     4,    39,    41,    69,    42,    37,   313,  -143,     3,
     315,    80,   257,   270,   271,     4,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   149,  -196,   194,   195,   -92,   150,     1,     2,
     151,  -109,  -109,  -106,   278,   279,   204,   212,   211,     3,
     218,   223,   213,   268,   309,   256,  -196,   220,   221,   220,
     198,   -87,   -86,   201,   202,   203,  -130,   205,   206,   207,
     199,  -102,  -133,   187,   188,   189,   190,   191,   192,   193,
     281,   217,   194,   195,   189,   190,   191,   192,   193,   284,
     -17,   194,   195,   312,   288,   296,   191,   192,   193,   148,
      12,   194,   195,    22,   272,   308,   220,   260,   259,   263,
     264,   265,   303,   266,   267,    72,   294,   304,   147,   305,
      77,     0,   273,     0,   269,   208,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,     0,     0,   194,   195,     0,
       0,   217,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
       0,     0,   194,   195,   283,   286,     0,   289,     0,     0,
       0,     0,   293,     0,     0,   295,     0,     0,     0,   220,
       0,     0,   297,     0,     0,   298,     0,     0,     0,     0,
       0,   276,   277,     0,   299,     0,     0,     0,   287,   211,
     307,     0,     0,     0,     0,   311,   152,   153,   154,   155,
     156,   157,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   302,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,     0,     0,   194,   195,     0,     0,     0,
       0,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,   -27,   -27,
     -27,    44,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   275,   -27,   -27,   -27,    45,   -27,   -27,    46,
     -27,   -27,   -27,   -27,   -27,    47,     0,     0,   -27,   -27,
     -27,   -27,   -27,    48,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,    49,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
       0,     0,   194,   195,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,     0,     0,     0,   -27,   -27,   -27,   -27,
     -11,     0,     0,    50,   -27,    51,    43,     0,   -27,   -27,
     -27,    44,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,    45,   -27,   -27,    46,
     -27,   -27,   -27,   -27,   -27,    47,     0,     0,   -27,   -27,
     -27,   -27,   -27,    48,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,    49,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,     0,     0,
     194,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,     0,     0,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,    50,   -27,    51,    81,    82,    83,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       0,    94,    95,    96,     0,    97,    98,     0,    99,   100,
     101,   102,   103,     0,   158,   159,   104,   105,   106,   107,
     108,     0,   109,   110,   111,   160,   112,   113,   114,   115,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,     0,     0,     0,   119,   120,   121,   122,     0,    81,
      82,    83,   123,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     0,    94,    95,    96,     0,    97,    98,
       0,    99,   100,   101,   102,   103,     0,     0,     0,   104,
     105,   106,   107,   108,     0,   109,   110,   111,     0,   112,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,   118,     0,     0,     0,   119,   120,   121,
     122,     0,     0,     0,     0,   123,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,     0,     0,   194,
     195
};

static const yytype_int16 yycheck[] =
{
      19,    51,    26,   162,   138,   151,    52,     0,   270,     1,
      28,    63,    58,    63,     1,    29,    35,   301,    64,    37,
      90,    47,    89,    49,    31,    32,   310,    83,    84,    90,
     292,   315,    59,    29,    61,    42,    89,    29,    31,    32,
      67,    48,    29,    87,    86,    90,    70,   309,    86,    42,
     312,    85,   198,   212,   213,    48,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    99,    90,    83,    84,    89,   104,    31,    32,
     107,    70,    71,    86,    70,    71,    41,   139,   138,    42,
      88,    86,   144,    87,    17,    86,    86,   149,   150,   151,
     127,    86,    86,   130,   131,   132,    86,   134,   135,   136,
     129,    86,    90,    74,    75,    76,    77,    78,    79,    80,
      87,   145,    83,    84,    76,    77,    78,    79,    80,    87,
      86,    83,    84,   308,   268,   281,    78,    79,    80,    77,
       5,    83,    84,    10,   215,   304,   198,   199,   198,   201,
     202,   203,   295,   205,   206,    43,   276,   299,    70,   300,
      50,    -1,   217,    -1,   210,   299,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    -1,
      -1,   215,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    84,   264,   265,    -1,   269,    -1,    -1,
      -1,    -1,   274,    -1,    -1,   277,    -1,    -1,    -1,   281,
      -1,    -1,   284,    -1,    -1,   287,    -1,    -1,    -1,    -1,
      -1,   260,   261,    -1,   290,    -1,    -1,    -1,   267,   299,
     302,    -1,    -1,    -1,    -1,   305,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   223,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    -1,    49,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    -1,    49,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    -1,    88,    89,    90,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    -1,     3,
       4,     5,    89,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    89,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    42,    48,    92,   106,   147,   162,   166,
     167,     0,   106,     1,    29,   108,   116,   119,   163,   164,
     165,    29,   116,    90,   131,   121,   136,   137,   101,   102,
     154,   155,   157,   171,   146,   148,   149,   162,    89,    29,
     108,    87,    90,     1,     6,    21,    24,    30,    38,    49,
      88,    90,    95,    97,    98,   105,   109,   110,   112,   114,
     115,   122,   123,   124,   152,   156,   158,   168,   169,    86,
     101,   108,   131,   130,   151,   130,   130,   157,   171,   154,
      85,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    22,    23,    25,
      26,    27,    28,    29,    33,    34,    35,    36,    37,    39,
      40,    41,    43,    44,    45,    46,    47,    76,    77,    81,
      82,    83,    84,    89,   111,   117,   118,   120,   127,   128,
     135,   143,   144,   159,   160,   161,   170,   154,   136,   136,
     109,   153,   171,   154,   136,   138,   139,   149,    97,   136,
     136,   136,   111,   111,   111,   111,   111,   111,    31,    32,
      42,    96,   111,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    83,    84,    99,   100,   136,   101,
     129,   136,   136,   136,    41,   136,   136,   136,   112,   113,
     142,   171,   109,   109,   125,   126,   145,   162,    88,    93,
     109,   109,    93,    86,    99,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,    86,    93,   140,   171,
     109,   132,   133,   109,   109,   109,   109,   109,    87,   154,
      99,    99,   125,   163,   101,   111,   101,   101,    70,    71,
     134,    87,   103,   171,    87,   104,   171,   101,   112,   109,
     141,   156,    94,   109,   132,   109,    93,   109,   109,   154,
     150,   156,   101,   129,   142,   151,   150,   109,    99,    17,
     107,   171,    94,   156,   150,   156,   150
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 115 "parser"
    {
            (yyval) = *multargs(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 5:
#line 120 "parser"
    {
            (yyval) = *firstarg(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 6:
#line 126 "parser"
    {
            break_ok++;
        ;}
    break;

  case 7:
#line 133 "parser"
    {
            (yyval) = *break_stmnt();
        ;}
    break;

  case 11:
#line 146 "parser"
    {parse_error = err_closebrace_expected; ;}
    break;

  case 13:
#line 147 "parser"
    {parse_error = err_closepar_expected; ;}
    break;

  case 15:
#line 148 "parser"
    {parse_error = err_comma_expected; ;}
    break;

  case 17:
#line 153 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 19:
#line 163 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 21:
#line 174 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 24:
#line 191 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 26:
#line 200 "parser"
    {
            entervar();
        ;}
    break;

  case 27:
#line 206 "parser"
    {
            parse_error = err_in_expression;
        ;}
    break;

  case 28:
#line 210 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 29:
#line 219 "parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 30:
#line 226 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        ;}
    break;

  case 31:
#line 233 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        ;}
    break;

  case 32:
#line 240 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        ;}
    break;

  case 33:
#line 247 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        ;}
    break;

  case 34:
#line 254 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        ;}
    break;

  case 35:
#line 261 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        ;}
    break;

  case 36:
#line 268 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        ;}
    break;

  case 37:
#line 275 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        ;}
    break;

  case 38:
#line 282 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        ;}
    break;

  case 39:
#line 289 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        ;}
    break;

  case 40:
#line 296 "parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 41:
#line 303 "parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 42:
#line 310 "parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 43:
#line 317 "parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 44:
#line 324 "parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 45:
#line 331 "parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 46:
#line 338 "parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 47:
#line 345 "parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 48:
#line 352 "parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 49:
#line 359 "parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 50:
#line 366 "parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 51:
#line 373 "parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 52:
#line 380 "parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 53:
#line 387 "parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 54:
#line 394 "parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 55:
#line 401 "parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 56:
#line 408 "parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 57:
#line 415 "parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 58:
#line 422 "parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 59:
#line 429 "parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 60:
#line 435 "parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 61:
#line 441 "parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 62:
#line 447 "parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 63:
#line 453 "parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 64:
#line 459 "parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 65:
#line 465 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 66:
#line 471 "parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 67:
#line 477 "parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 68:
#line 485 "parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 69:
#line 490 "parser"
    {
            (yyval) = stackframe(e_str | e_const);
        ;}
    break;

  case 70:
#line 495 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
        ;}
    break;

  case 71:
#line 502 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 73:
#line 511 "parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 74:
#line 520 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 77:
#line 544 "parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        ;}
    break;

  case 78:
#line 554 "parser"
    {
            close_fun(&(yyvsp[(3) - (4)]));
        ;}
    break;

  case 80:
#line 564 "parser"
    {
            (yyval) = fetchvar();
        ;}
    break;

  case 81:
#line 572 "parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        ;}
    break;

  case 82:
#line 579 "parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 83:
#line 588 "parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        ;}
    break;

  case 84:
#line 596 "parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 85:
#line 604 "parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 86:
#line 611 "parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 87:
#line 618 "parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 88:
#line 625 "parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 90:
#line 634 "parser"
    {
            (yyval) = *strupr_lwr((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));  /* string conversion */
        ;}
    break;

  case 91:
#line 641 "parser"
    {
            open_fun();
        ;}
    break;

  case 92:
#line 648 "parser"
    {
            (yyval).evalue = fetchfun();
        ;}
    break;

  case 93:
#line 659 "parser"
    {
            make_frame();
        ;}
    break;

  case 95:
#line 682 "parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        ;}
    break;

  case 101:
#line 711 "parser"
    {
            (yyval) = *makelist
                 (
                     multargs
                     (
                         firstarg(&(yyvsp[(2) - (2)])),     /* O_FILE is passed */
                         &(yyvsp[(1) - (2)])                /* expression is passed */
                     ),
                     op_hlt                 /* not op_younger or op_older */
                 );
        ;}
    break;

  case 102:
#line 727 "parser"
    {
            (yyval) = *makelist
                 (
                     multargs
                     (
                         firstarg(&(yyvsp[(1) - (3)])),     /* fileattribute is passed */
                         &(yyvsp[(3) - (3)])                /* expression is passed */
                     ),
                     op_hlt                 /* not op_younger or op_older */
                 );
        ;}
    break;

  case 103:
#line 745 "parser"
    {
            (yyval) = *makelist
                 (
                    multargs
                    (
                        multargs
                        (
                            firstarg(&(yyvsp[(6) - (6)])),  /* O_FILE   is passed */
                            &(yyvsp[(1) - (6)])             /* 1st expression is passed */
                        ),
                        &(yyvsp[(5) - (6)])                 /* 2nd expression is passed */
                     ),
                     (yyvsp[(3) - (6)]).type                /* older/younger */
                 );
        ;}
    break;

  case 104:
#line 768 "parser"
    {
            (yyval) = *makelist
                 (
                    multargs
                    (
                        multargs
                        (
                            firstarg(&(yyvsp[(1) - (7)])),  /* attribute is passed */
                            &(yyvsp[(3) - (7)])             /* 2nd expression is passed */
                        ),
                        &(yyvsp[(7) - (7)])                 /* 3rd expression is passed */
                     ),
                     (yyvsp[(5) - (7)]).type                /* older/younger */
                 );
        ;}
    break;

  case 105:
#line 789 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 106:
#line 795 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        ;}
    break;

  case 107:
#line 803 "parser"
    {
            nestlevel++;
        ;}
    break;

  case 108:
#line 810 "parser"
    {
            yyerrok;
        ;}
    break;

  case 109:
#line 816 "parser"
    {parse_error = err_older_younger; ;}
    break;

  case 110:
#line 818 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 126:
#line 857 "parser"
    {parse_error = err_openpar_expected; ;}
    break;

  case 128:
#line 858 "parser"
    {parse_error = err_openbrace_expected; ;}
    break;

  case 133:
#line 869 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = 1;
        ;}
    break;

  case 146:
#line 908 "parser"
    {
            vartype = e_int;
        ;}
    break;

  case 149:
#line 924 "parser"
    {
            n_params++;
        ;}
    break;

  case 150:
#line 930 "parser"
    {
            pop_dead();
        ;}
    break;

  case 151:
#line 936 "parser"
    {
            push_dead();                    /* set new dead-level */
        ;}
    break;

  case 152:
#line 946 "parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 155:
#line 957 "parser"
    {parse_error = err_semicol_expected; ;}
    break;

  case 157:
#line 961 "parser"
    {
            sem_err = 0;
        ;}
    break;

  case 158:
#line 969 "parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 161:
#line 981 "parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        ;}
    break;

  case 169:
#line 1007 "parser"
    {
        stringbuf = xstrcat(stringbuf, string);/* catenate the new string */
    ;}
    break;

  case 170:
#line 1012 "parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(string);        /* duplicate initial string */
    ;}
    break;

  case 180:
#line 1043 "parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        ;}
    break;

  case 190:
#line 1082 "parser"
    {
            vartype = 0;
        ;}
    break;

  case 192:
#line 1100 "parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        ;}
    break;

  case 196:
#line 1117 "parser"
    {
            (yyval) = stackframe(0);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2611 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1121 "parser"


int yywrap()
{
    return (1);
}

