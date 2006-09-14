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
#define YYLAST   682

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNRULES -- Number of states.  */
#define YYNSTATES  325

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
      43,    45,    49,    52,    55,    58,    60,    62,    64,    65,
      68,    72,    76,    80,    84,    88,    92,    96,   100,   104,
     108,   112,   116,   120,   124,   128,   132,   136,   140,   144,
     148,   152,   156,   160,   164,   168,   172,   176,   180,   184,
     188,   192,   195,   198,   201,   204,   207,   210,   213,   216,
     221,   223,   225,   229,   231,   233,   237,   239,   242,   254,
     259,   262,   264,   267,   271,   277,   282,   287,   291,   295,
     299,   301,   305,   307,   309,   315,   318,   322,   325,   335,
     337,   339,   341,   344,   347,   349,   352,   356,   363,   371,
     375,   376,   378,   380,   381,   384,   386,   388,   390,   392,
     394,   396,   398,   400,   402,   404,   406,   408,   410,   412,
     414,   415,   418,   419,   422,   424,   426,   428,   429,   431,
     433,   435,   437,   439,   441,   443,   445,   447,   449,   450,
     452,   453,   457,   459,   462,   463,   464,   467,   469,   471,
     472,   475,   477,   480,   482,   484,   487,   490,   492,   494,
     496,   499,   502,   505,   508,   510,   512,   514,   516,   518,
     520,   522,   524,   526,   528,   530,   533,   537,   539,   543,
     545,   547,   549,   551,   553,   555,   558,   566,   568,   570,
     572
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    92,   106,    -1,   106,    -1,    93,   101,
     110,    -1,   110,    -1,    -1,     6,    -1,    31,    -1,    32,
      -1,    42,    -1,    -1,    98,    85,    -1,    -1,   100,    86,
      -1,    -1,   102,    87,    -1,    87,    93,    -1,   174,    -1,
      87,   110,    -1,   174,    -1,    88,   160,    97,    -1,   150,
     168,    -1,   170,   117,    -1,    17,   159,    -1,   174,    -1,
      29,    -1,   108,    -1,    -1,   111,   112,    -1,   112,    50,
     112,    -1,   112,    53,   112,    -1,   112,    55,   112,    -1,
     112,    52,   112,    -1,   112,    51,   112,    -1,   112,    54,
     112,    -1,   112,    60,   112,    -1,   112,    59,   112,    -1,
     112,    58,   112,    -1,   112,    57,   112,    -1,   112,    56,
     112,    -1,   112,    61,   112,    -1,   112,    62,   112,    -1,
     112,    67,   112,    -1,   112,    66,   112,    -1,   112,    68,
     112,    -1,   112,    69,   112,    -1,   112,    73,   112,    -1,
     112,    72,   112,    -1,   112,    76,   112,    -1,   112,    65,
     112,    -1,   112,    63,   112,    -1,   112,    64,   112,    -1,
     112,    75,   112,    -1,   112,    74,   112,    -1,   112,    77,
     112,    -1,   112,    78,   112,    -1,   112,    70,   112,    -1,
     112,    71,   112,    -1,   112,    79,   112,    -1,   112,    80,
     112,    -1,    77,   112,    -1,    84,   112,    -1,   112,    84,
      -1,    83,   112,    -1,   112,    83,    -1,    76,   112,    -1,
      82,   112,    -1,    81,   112,    -1,    89,    96,    86,   112,
      -1,   162,    -1,    35,    -1,    89,   112,    99,    -1,   118,
      -1,   110,    -1,   114,    87,   113,    -1,   113,    -1,    24,
     133,    -1,   115,   139,   145,   157,   144,   157,   145,    99,
      94,   159,   153,    -1,   120,   122,   160,    97,    -1,   119,
      99,    -1,    29,    -1,   173,   139,    -1,   138,   139,   110,
      -1,   164,   139,   110,   101,   110,    -1,   147,   139,   110,
     104,    -1,   146,   139,   110,   103,    -1,    36,   139,    93,
      -1,    25,   139,    93,    -1,   121,   139,   143,    -1,   130,
      -1,   163,   139,   110,    -1,    29,    -1,    29,    -1,   139,
     149,    86,   141,   148,    -1,   108,   174,    -1,   109,   126,
     113,    -1,    30,   133,    -1,   124,   139,   110,    99,   159,
     153,   154,   107,   153,    -1,    50,    -1,    38,    -1,    21,
      -1,   165,   166,    -1,   129,   128,    -1,   128,    -1,   131,
     132,    -1,   131,   101,   110,    -1,   131,   101,   135,   101,
     110,   132,    -1,   131,   101,   110,   101,   135,   101,   110,
      -1,    33,   139,   110,    -1,    -1,   154,    -1,    90,    -1,
      -1,   136,   137,    -1,    71,    -1,    70,    -1,     5,    -1,
      39,    -1,    20,    -1,    34,    -1,     9,    -1,     8,    -1,
       3,    -1,     4,    -1,    13,    -1,    15,    -1,    14,    -1,
      37,    -1,    43,    -1,    -1,   140,    89,    -1,    -1,   142,
      88,    -1,    93,    -1,   174,    -1,   110,    -1,    -1,   114,
      -1,   174,    -1,    18,    -1,    19,    -1,    40,    -1,     7,
      -1,    47,    -1,   129,    -1,   174,    -1,   151,    -1,    -1,
     165,    -1,    -1,   151,   101,   152,    -1,   152,    -1,   165,
     108,    -1,    -1,    -1,   127,   156,    -1,   110,    -1,   174,
      -1,    -1,   158,    90,    -1,   161,    -1,   160,   159,    -1,
     174,    -1,   105,    -1,    90,   174,    -1,   113,   157,    -1,
     172,    -1,   125,    -1,   116,    -1,   155,   157,    -1,    95,
     157,    -1,     1,   134,    -1,   162,    41,    -1,    41,    -1,
      45,    -1,    44,    -1,    11,    -1,    10,    -1,    12,    -1,
      16,    -1,    22,    -1,    23,    -1,    46,    -1,   169,    -1,
     167,   157,    -1,   167,   101,   123,    -1,   123,    -1,     1,
     134,   174,    -1,   166,    -1,   117,    -1,    31,    -1,    42,
      -1,    32,    -1,    48,    -1,    49,   133,    -1,   171,   139,
     110,    99,    94,   159,   153,    -1,    26,    -1,    27,    -1,
      28,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   107,   112,   119,   126,   132,   139,   141,
     143,   146,   146,   147,   147,   148,   148,   151,   157,   161,
     167,   171,   180,   183,   188,   194,   198,   205,   212,   212,
     222,   229,   236,   243,   250,   257,   264,   271,   278,   285,
     292,   299,   306,   313,   320,   327,   334,   341,   348,   355,
     362,   369,   376,   383,   390,   397,   404,   411,   418,   425,
     432,   439,   445,   451,   457,   463,   469,   475,   481,   487,
     495,   500,   505,   512,   516,   523,   530,   534,   539,   556,
     566,   569,   576,   582,   589,   598,   606,   614,   621,   628,
     635,   637,   646,   653,   660,   675,   678,   688,   693,   708,
     717,   719,   723,   731,   737,   742,   757,   772,   794,   819,
     828,   835,   842,   849,   849,   857,   859,   863,   865,   867,
     869,   871,   873,   875,   877,   879,   881,   883,   885,   887,
     890,   890,   891,   891,   894,   896,   900,   902,   909,   911,
     915,   917,   921,   923,   925,   929,   931,   935,   936,   940,
     942,   948,   952,   956,   964,   970,   978,   986,   988,   991,
     991,   994,  1001,  1007,  1011,  1013,  1019,  1022,  1024,  1026,
    1028,  1031,  1034,  1039,  1045,  1053,  1055,  1060,  1062,  1064,
    1066,  1068,  1070,  1072,  1076,  1085,  1093,  1101,  1103,  1112,
    1114,  1118,  1120,  1122,  1126,  1133,  1138,  1154,  1156,  1158,
    1162
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
  "enterid", "entervarid", "err_expression", "@4", "expression",
  "expr_code", "expr_list", "for", "for_stat", "funcdef", "func_or_var",
  "function", "funid", "funname", "funvars", "idexpr", "if", "if_stat",
  "initassign", "leave_key", "local_list", "locals", "makelist",
  "makelist_expr", "makelist_normal", "nesting", "ok", "older_younger",
  "@5", "old_young", "one_arg_funs", "openpar", "@6", "openbrace", "@7",
  "opt_arglist", "opt_expression", "opt_expr_list", "optint_special",
  "optint_string", "opt_locals", "opt_parlist", "opt_vartype", "pars",
  "partype", "popdead", "pushdead", "return_stat", "return_tail",
  "semicol", "@8", "statement", "statements", "stm", "string",
  "strupr_lwr", "two_arg_funs", "type_of_var", "vardefs", "varnames",
  "var_or_fun", "vartype", "voidtype", "while", "while_stat",
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
     104,   105,   106,   106,   107,   107,   108,   109,   111,   110,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   114,   114,   115,   116,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   120,   121,   122,   123,   123,   124,   125,   126,
     127,   127,   128,   129,   129,   130,   130,   130,   130,   131,
     132,   133,   134,   136,   135,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     140,   139,   142,   141,   143,   143,   144,   144,   145,   145,
     146,   146,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   153,   154,   155,   156,   156,   158,
     157,   159,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   165,   166,   167,   167,   167,   168,
     168,   169,   169,   169,   170,   171,   172,   173,   173,   173,
     174
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     2,     2,     1,     2,
       1,     3,     2,     2,     2,     1,     1,     1,     0,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       1,     1,     3,     1,     1,     3,     1,     2,    11,     4,
       2,     1,     2,     3,     5,     4,     4,     3,     3,     3,
       1,     3,     1,     1,     5,     2,     3,     2,     9,     1,
       1,     1,     2,     2,     1,     2,     3,     6,     7,     3,
       0,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     3,     1,     2,     0,     0,     2,     1,     1,     0,
       2,     1,     2,     1,     1,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     7,     1,     1,     1,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     150,   191,   193,   192,   194,   150,     3,     0,   149,   184,
       0,     1,     2,     0,    26,   200,     0,   190,   130,   187,
     189,    15,    22,    92,    23,   112,   200,    95,    99,    28,
     200,   148,     0,     0,     0,   185,     0,   188,    74,     0,
      96,     0,   163,     0,    15,   152,     0,   131,    26,   186,
      16,   160,   123,   124,   117,   143,   122,   121,   178,   177,
     179,   125,   127,   126,   180,   140,   141,   119,   181,   182,
     130,   197,   198,   199,    81,   130,   120,    71,   130,   128,
     118,   142,   174,   129,   176,   175,   183,   144,     0,     0,
       0,     0,     0,     0,     0,    29,    73,    13,   130,    90,
      15,   130,   130,   130,    70,   130,   130,   130,     0,     7,
     101,   155,   155,   100,   155,   200,   200,   159,    79,     0,
     164,   159,   130,   169,   130,   168,    28,   159,   162,   161,
     130,   167,   132,     0,   153,    28,    28,    28,    66,    61,
      68,    67,    64,    62,     8,     9,    10,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    63,    80,     0,    28,    28,   105,    28,    28,    28,
     173,    28,    28,    82,   172,    77,   111,    97,   195,     0,
     165,   171,    12,   166,    28,    28,   157,   156,   158,   170,
      28,   200,     0,   151,    15,     5,   109,    15,     0,    72,
      30,    34,    33,    31,    35,    32,    40,    39,    38,    37,
      36,    41,    42,    51,    52,    50,    44,    43,    45,    46,
      57,    58,    48,    47,    54,    53,    49,    55,    56,    59,
      60,    14,    15,    89,   135,    15,    15,     0,    83,   200,
     200,    91,    15,    21,    76,   138,   159,   139,    13,    13,
     104,   145,    94,     0,   146,   133,    28,    69,   113,    28,
     116,   115,   114,    28,    86,    18,    28,    85,    20,    28,
      28,    28,     0,     6,   103,   102,     4,    15,   110,    15,
      19,    84,    75,   136,   159,   154,     0,    28,   107,    28,
     155,   154,   108,    13,   200,   196,     6,     0,   154,    25,
       0,    24,    98,   154,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   214,   306,   117,   147,   118,   119,   182,   183,
     276,    34,   284,   287,   120,     6,   318,    15,    16,    38,
      39,    95,   121,   265,   122,   123,    17,    96,    97,    18,
      98,    30,    19,   124,   125,    29,   126,   270,   271,    99,
     100,   186,   195,    26,   256,   257,   282,   101,    31,    32,
     211,   212,   253,   304,   266,   102,   103,   272,    43,     7,
      44,    45,   310,   196,   127,   207,    35,    36,   128,    41,
     129,   104,   105,   106,     8,    20,    21,    22,     9,    10,
     130,   131,   107,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -295
static const yytype_int16 yypact[] =
{
      18,  -295,  -295,  -295,  -295,     5,  -295,    11,  -295,  -295,
     -21,  -295,  -295,   -63,   -59,   -18,   -12,  -295,  -295,  -295,
    -295,   -55,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,    -9,   -48,    17,   -35,  -295,   -42,  -295,  -295,   558,
    -295,   297,  -295,   -31,   -30,  -295,    17,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,   -22,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,   558,   558,
     558,   558,   558,   558,   475,   598,  -295,  -295,  -295,  -295,
     -16,  -295,  -295,  -295,    33,  -295,  -295,  -295,   -63,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,    -8,
    -295,  -295,  -295,  -295,  -295,  -295,   -11,  -295,  -295,  -295,
    -295,  -295,  -295,    -9,  -295,  -295,  -295,  -295,   -39,   -39,
     -39,   -39,   -39,   -39,  -295,  -295,  -295,    -1,   598,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
    -295,  -295,  -295,     6,     7,    -6,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,   297,
    -295,  -295,  -295,  -295,   -11,  -295,  -295,  -295,  -295,  -295,
    -295,    -9,    12,  -295,    21,  -295,  -295,    23,   558,  -295,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   285,   374,   459,   541,   181,    44,    44,   104,   104,
     104,   104,   104,   104,    19,    19,     4,     4,   -39,   -39,
     -39,  -295,    24,  -295,  -295,    39,  -295,    20,  -295,    45,
      46,  -295,  -295,  -295,  -295,    47,  -295,  -295,  -295,  -295,
    -295,    -9,  -295,    14,  -295,  -295,  -295,   -39,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,    15,   387,  -295,  -295,  -295,  -295,  -295,  -295,    40,
    -295,  -295,  -295,  -295,  -295,  -295,   387,  -295,  -295,     7,
    -295,  -295,  -295,  -295,    87,  -295,  -295,   387,  -295,  -295,
     387,  -295,  -295,  -295,  -295
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -133,  -210,  -295,  -295,   -68,  -295,  -139,  -295,
     -19,  -295,  -295,  -295,  -295,   130,  -295,    97,  -295,  -116,
    -295,    48,   -28,  -295,  -295,  -295,   134,  -295,  -295,  -295,
    -295,  -295,   112,  -295,  -295,  -295,  -295,  -125,  -295,  -295,
    -295,  -151,   -96,    41,  -130,  -295,  -295,  -295,   -44,  -295,
    -295,  -295,  -295,  -295,  -158,  -295,  -295,  -295,  -295,  -295,
    -295,    22,  -294,  -157,  -295,  -295,  -114,  -295,  -278,    42,
    -295,  -295,  -295,  -295,   -25,  -119,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -201
static const yytype_int16 yytable[] =
{
      27,    40,    33,   201,   217,    11,    46,   203,    23,   219,
     206,    37,    13,   209,   305,    13,   197,   315,   198,   215,
     216,   215,     1,     2,   322,   133,   135,    25,   311,   324,
     -92,   136,   -27,     3,   137,  -159,     1,     2,    28,   321,
      14,    47,   323,    48,   180,   181,    48,     3,    51,     1,
       2,   252,    50,     4,   184,   132,  -147,   187,   188,   189,
       3,   191,   192,   193,  -113,  -113,     4,   -93,   215,   255,
    -110,   258,   259,   260,   190,   261,   262,   202,   204,  -200,
     205,   185,   177,   178,   179,   218,   210,   180,   181,   268,
     280,   281,   251,  -200,   269,   175,   176,   177,   178,   179,
     275,   200,   180,   181,   317,  -137,   320,   -88,    46,   -87,
    -134,   208,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,  -106,   -17,   180,   181,   292,
     293,   263,   283,   286,   290,    12,   138,   139,   140,   141,
     142,   143,   148,   134,    24,    49,   294,   308,   297,   194,
     299,   313,   291,   314,   295,   213,     0,   199,     0,     0,
     296,     0,     0,   298,     0,     0,     0,   215,     0,   254,
     300,     0,     0,   301,   316,   303,   264,     0,   173,   174,
     175,   176,   177,   178,   179,     0,   273,   180,   181,   267,
     309,   312,     0,     0,     0,     0,   274,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,     0,     0,
       0,     0,     0,     0,     0,     0,   278,   279,     0,     0,
       0,     0,     0,   289,   285,   288,   273,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   302,     0,   180,   181,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
       0,   264,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,     0,   108,   319,
     -28,   -28,   -28,   109,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   110,   -28,
     -28,   111,   -28,   -28,   -28,   -28,   -28,   112,     0,     0,
     -28,   -28,   -28,   -28,   -28,   113,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,   114,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,     0,   180,   181,
       0,     0,     0,   -28,   -28,     0,     0,     0,   -28,   -28,
     -28,   -28,   -11,     0,     0,   115,   -28,   116,   108,     0,
     -28,   -28,   -28,   109,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   110,   -28,
     -28,   111,   -28,   -28,   -28,   -28,   -28,   112,     0,     0,
     -28,   -28,   -28,   -28,   -28,   113,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,   114,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,     0,     0,   180,   181,     0,
       0,     0,     0,   -28,   -28,     0,     0,     0,   -28,   -28,
     -28,   -28,     0,     0,     0,   115,   -28,   116,    52,    53,
      54,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,    65,    66,    67,     0,    68,    69,     0,
      70,    71,    72,    73,    74,     0,   144,   145,    75,    76,
      77,    78,    79,     0,    80,    81,    82,   146,    83,    84,
      85,    86,    87,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,   180,   181,     0,     0,     0,     0,     0,     0,
       0,    88,    89,     0,     0,     0,    90,    91,    92,    93,
       0,    52,    53,    54,    94,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,    72,    73,    74,     0,     0,
       0,    75,    76,    77,    78,    79,     0,    80,    81,    82,
       0,    83,    84,    85,    86,    87,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,     0,     0,     0,    90,
      91,    92,    93,     0,     0,     0,     0,    94,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,     0,
       0,   180,   181
};

static const yytype_int16 yycheck[] =
{
      15,    29,    21,   117,   137,     0,    31,   121,    29,   148,
     126,    26,     1,   127,   292,     1,   112,   311,   114,   135,
     136,   137,    31,    32,   318,    44,    70,    90,   306,   323,
      89,    75,    50,    42,    78,    90,    31,    32,    50,   317,
      29,    89,   320,    29,    83,    84,    29,    42,    90,    31,
      32,   184,    87,    48,    98,    86,    86,   101,   102,   103,
      42,   105,   106,   107,    70,    71,    48,    89,   184,   185,
      86,   187,   188,   189,    41,   191,   192,    85,   122,    90,
     124,   100,    78,    79,    80,    86,   130,    83,    84,   205,
      70,    71,    86,    86,   210,    76,    77,    78,    79,    80,
      88,   116,    83,    84,    17,    90,   316,    86,   133,    86,
      86,   126,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    86,    86,    83,    84,   268,
     269,   199,    87,    87,    87,     5,    88,    89,    90,    91,
      92,    93,    94,    46,    10,    33,   271,   298,   278,   108,
     283,   309,   266,   310,   273,   133,    -1,   115,    -1,    -1,
     276,    -1,    -1,   279,    -1,    -1,    -1,   283,    -1,   184,
     286,    -1,    -1,   289,   313,   291,   204,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,   211,    83,    84,   204,
     304,   307,    -1,    -1,    -1,    -1,   211,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,   256,    -1,    -1,
      -1,    -1,    -1,   262,   259,   260,   271,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   290,    -1,    83,    84,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,     1,   314,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    -1,    49,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    -1,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    -1,    49,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,    88,    89,    90,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,     3,     4,     5,    89,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    89,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    42,    48,    92,   106,   150,   165,   169,
     170,     0,   106,     1,    29,   108,   109,   117,   120,   123,
     166,   167,   168,    29,   117,    90,   134,   174,    50,   126,
     122,   139,   140,   101,   102,   157,   158,   174,   110,   111,
     113,   160,   174,   149,   151,   152,   165,    89,    29,   123,
      87,    90,     3,     4,     5,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    22,    23,
      25,    26,    27,    28,    29,    33,    34,    35,    36,    37,
      39,    40,    41,    43,    44,    45,    46,    47,    76,    77,
      81,    82,    83,    84,    89,   112,   118,   119,   121,   130,
     131,   138,   146,   147,   162,   163,   164,   173,     1,     6,
      21,    24,    30,    38,    49,    88,    90,    95,    97,    98,
     105,   113,   115,   116,   124,   125,   127,   155,   159,   161,
     171,   172,    86,   101,   108,   139,   139,   139,   112,   112,
     112,   112,   112,   112,    31,    32,    42,    96,   112,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      83,    84,    99,   100,   139,   101,   132,   139,   139,   139,
      41,   139,   139,   139,   134,   133,   154,   133,   133,   160,
     174,   157,    85,   157,   139,   139,   110,   156,   174,   157,
     139,   141,   142,   152,    93,   110,   110,    93,    86,    99,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,    86,    93,   143,   174,   110,   135,   136,   110,   110,
     110,   110,   110,    97,   113,   114,   145,   174,   110,   110,
     128,   129,   148,   165,   174,    88,   101,   112,   101,   101,
      70,    71,   137,    87,   103,   174,    87,   104,   174,   101,
      87,   157,    99,    99,   128,   166,   110,   135,   110,    93,
     110,   110,   113,   110,   144,   159,    94,   101,   132,   157,
     153,   159,   110,   145,   154,   153,    99,    17,   107,   174,
      94,   159,   153,   159,   153
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
#line 190 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 26:
#line 199 "parser"
    {
            entervar();
        ;}
    break;

  case 27:
#line 206 "parser"
    {
        (yyval) = fetchvar();
    ;}
    break;

  case 28:
#line 212 "parser"
    {
            parse_error = err_in_expression;
        ;}
    break;

  case 29:
#line 216 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 30:
#line 225 "parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 31:
#line 232 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        ;}
    break;

  case 32:
#line 239 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        ;}
    break;

  case 33:
#line 246 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        ;}
    break;

  case 34:
#line 253 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        ;}
    break;

  case 35:
#line 260 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        ;}
    break;

  case 36:
#line 267 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        ;}
    break;

  case 37:
#line 274 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        ;}
    break;

  case 38:
#line 281 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        ;}
    break;

  case 39:
#line 288 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        ;}
    break;

  case 40:
#line 295 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        ;}
    break;

  case 41:
#line 302 "parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 42:
#line 309 "parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 43:
#line 316 "parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 44:
#line 323 "parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 45:
#line 330 "parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 46:
#line 337 "parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 47:
#line 344 "parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 48:
#line 351 "parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 49:
#line 358 "parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 50:
#line 365 "parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 51:
#line 372 "parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 52:
#line 379 "parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 53:
#line 386 "parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 54:
#line 393 "parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 55:
#line 400 "parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 56:
#line 407 "parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 57:
#line 414 "parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 58:
#line 421 "parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 59:
#line 428 "parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 60:
#line 435 "parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 61:
#line 441 "parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 62:
#line 447 "parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 63:
#line 453 "parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 64:
#line 459 "parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 65:
#line 465 "parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 66:
#line 471 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 67:
#line 477 "parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 68:
#line 483 "parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 69:
#line 491 "parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 70:
#line 496 "parser"
    {
            (yyval) = stackframe(e_str | e_const);
        ;}
    break;

  case 71:
#line 501 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
        ;}
    break;

  case 72:
#line 508 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 74:
#line 517 "parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 75:
#line 526 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 78:
#line 550 "parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        ;}
    break;

  case 79:
#line 560 "parser"
    {
            close_fun(catcode(&(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)])));
        ;}
    break;

  case 81:
#line 570 "parser"
    {
            (yyval) = fetchvar();
        ;}
    break;

  case 82:
#line 578 "parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        ;}
    break;

  case 83:
#line 585 "parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 84:
#line 594 "parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        ;}
    break;

  case 85:
#line 602 "parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 86:
#line 610 "parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 87:
#line 617 "parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 88:
#line 624 "parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 89:
#line 631 "parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 91:
#line 640 "parser"
    {
            (yyval) = *strupr_lwr((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));  /* string conversion */
        ;}
    break;

  case 92:
#line 647 "parser"
    {
            open_fun();
        ;}
    break;

  case 93:
#line 654 "parser"
    {
            (yyval).evalue = fetchfun();
        ;}
    break;

  case 94:
#line 665 "parser"
    {
            make_frame();
            (yyval) = (yyvsp[(5) - (5)]);                    /* code of local initializations */
        ;}
    break;

  case 96:
#line 681 "parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    ;}
    break;

  case 98:
#line 702 "parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        ;}
    break;

  case 99:
#line 709 "parser"
    {
        initialization = 1;
    ;}
    break;

  case 102:
#line 725 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 103:
#line 733 "parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    ;}
    break;

  case 105:
#line 744 "parser"
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

  case 106:
#line 760 "parser"
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

  case 107:
#line 778 "parser"
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

  case 108:
#line 801 "parser"
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

  case 109:
#line 822 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 110:
#line 828 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        ;}
    break;

  case 111:
#line 836 "parser"
    {
            nestlevel++;
        ;}
    break;

  case 112:
#line 843 "parser"
    {
            yyerrok;
        ;}
    break;

  case 113:
#line 849 "parser"
    {parse_error = err_older_younger; ;}
    break;

  case 114:
#line 851 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 130:
#line 890 "parser"
    {parse_error = err_openpar_expected; ;}
    break;

  case 132:
#line 891 "parser"
    {parse_error = err_openbrace_expected; ;}
    break;

  case 137:
#line 902 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = 1;
        ;}
    break;

  case 150:
#line 942 "parser"
    {
            vartype = e_int;
        ;}
    break;

  case 153:
#line 958 "parser"
    {
            n_params++;
        ;}
    break;

  case 154:
#line 964 "parser"
    {
            pop_dead();
        ;}
    break;

  case 155:
#line 970 "parser"
    {
            push_dead();                    /* set new dead-level */
        ;}
    break;

  case 156:
#line 980 "parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 159:
#line 991 "parser"
    {parse_error = err_semicol_expected; ;}
    break;

  case 161:
#line 995 "parser"
    {
            sem_err = 0;
        ;}
    break;

  case 162:
#line 1003 "parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 165:
#line 1015 "parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        ;}
    break;

  case 173:
#line 1041 "parser"
    {
        stringbuf = xstrcat(stringbuf, string);/* catenate the new string */
    ;}
    break;

  case 174:
#line 1046 "parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(string);        /* duplicate initial string */
    ;}
    break;

  case 184:
#line 1077 "parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        ;}
    break;

  case 185:
#line 1087 "parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    ;}
    break;

  case 186:
#line 1096 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        ;}
    break;

  case 188:
#line 1106 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 194:
#line 1127 "parser"
    {
            vartype = 0;
        ;}
    break;

  case 196:
#line 1145 "parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        ;}
    break;

  case 200:
#line 1162 "parser"
    {
            (yyval) = stackframe(0);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2670 "parser.c"
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


#line 1166 "parser"


int yywrap()
{
    return (1);
}

