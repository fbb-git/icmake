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
     GETENV = 281,
     GETCH = 282,
     GETPID = 283,
     GETS = 284,
     IDENTIFIER = 285,
     IF = 286,
     INT = 287,
     LIST = 288,
     MAKELIST = 289,
     M_ECHO = 290,
     NUMBER = 291,
     PRINTF = 292,
     PUTENV = 293,
     RETURN = 294,
     SIZEOFLIST = 295,
     STAT = 296,
     STRING = 297,
     STRINGTYPE = 298,
     STRLEN = 299,
     STRLWR = 300,
     STRUPR = 301,
     STRFIND = 302,
     SUBSTR = 303,
     SYSTEM = 304,
     VOID = 305,
     WHILE = 306,
     PLUS_IS = 307,
     MOD_IS = 308,
     MUL_IS = 309,
     MINUS_IS = 310,
     DIV_IS = 311,
     SHR_IS = 312,
     SHL_IS = 313,
     XOR_IS = 314,
     OR_IS = 315,
     AND_IS = 316,
     OR = 317,
     AND = 318,
     NOT_EQUAL = 319,
     EQUAL = 320,
     YOUNGER = 321,
     OLDER = 322,
     GREATER_EQUAL = 323,
     SMALLER_EQUAL = 324,
     SHR = 325,
     SHL = 326,
     DEC = 327,
     INC = 328
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
#define GETENV 281
#define GETCH 282
#define GETPID 283
#define GETS 284
#define IDENTIFIER 285
#define IF 286
#define INT 287
#define LIST 288
#define MAKELIST 289
#define M_ECHO 290
#define NUMBER 291
#define PRINTF 292
#define PUTENV 293
#define RETURN 294
#define SIZEOFLIST 295
#define STAT 296
#define STRING 297
#define STRINGTYPE 298
#define STRLEN 299
#define STRLWR 300
#define STRUPR 301
#define STRFIND 302
#define SUBSTR 303
#define SYSTEM 304
#define VOID 305
#define WHILE 306
#define PLUS_IS 307
#define MOD_IS 308
#define MUL_IS 309
#define MINUS_IS 310
#define DIV_IS 311
#define SHR_IS 312
#define SHL_IS 313
#define XOR_IS 314
#define OR_IS 315
#define AND_IS 316
#define OR 317
#define AND 318
#define NOT_EQUAL 319
#define EQUAL 320
#define YOUNGER 321
#define OLDER 322
#define GREATER_EQUAL 323
#define SMALLER_EQUAL 324
#define SHR 325
#define SHL 326
#define DEC 327
#define INC 328




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
#line 258 "parser.c"

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
#define YYLAST   737

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNRULES -- Number of states.  */
#define YYNSTATES  336

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,     2,     2,    82,    67,     2,
      92,    89,    80,    78,    90,    79,     2,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    93,
      70,    52,    71,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,    65,    88,    84,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    68,
      69,    72,    73,    74,    75,    76,    77,    85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    14,    15,    17,    19,
      21,    23,    24,    27,    28,    31,    32,    35,    36,    39,
      42,    44,    47,    49,    53,    56,    59,    62,    64,    66,
      68,    69,    72,    76,    80,    84,    88,    92,    96,   100,
     104,   108,   112,   116,   120,   124,   128,   132,   136,   140,
     144,   148,   152,   156,   160,   164,   168,   172,   176,   180,
     184,   188,   192,   196,   199,   202,   205,   208,   211,   214,
     217,   220,   225,   227,   229,   233,   235,   239,   241,   245,
     247,   250,   262,   267,   270,   272,   275,   279,   285,   293,
     298,   303,   307,   311,   315,   317,   319,   321,   327,   330,
     334,   337,   347,   349,   351,   353,   356,   359,   361,   364,
     368,   375,   383,   387,   388,   390,   392,   393,   396,   398,
     400,   402,   404,   406,   408,   410,   412,   414,   416,   418,
     420,   422,   424,   426,   428,   430,   432,   433,   436,   437,
     440,   442,   444,   446,   447,   449,   451,   453,   455,   457,
     459,   461,   463,   465,   467,   468,   470,   471,   475,   477,
     480,   481,   482,   485,   487,   489,   490,   493,   495,   498,
     500,   502,   505,   508,   510,   512,   514,   517,   520,   523,
     526,   528,   530,   532,   534,   536,   538,   540,   542,   544,
     546,   549,   553,   555,   559,   561,   563,   565,   567,   569,
     571,   574,   582,   584,   586,   588
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    95,   111,    -1,   111,    -1,    96,   106,
     115,    -1,   115,    -1,    -1,     6,    -1,    32,    -1,    33,
      -1,    43,    -1,    -1,   101,    87,    -1,    -1,   103,    88,
      -1,    -1,   105,    89,    -1,    -1,   107,    90,    -1,    90,
      96,    -1,   179,    -1,    90,   115,    -1,   179,    -1,    91,
     165,   102,    -1,   155,   173,    -1,   175,   122,    -1,    17,
     164,    -1,   179,    -1,    30,    -1,   113,    -1,    -1,   116,
     117,    -1,   117,    52,   117,    -1,   117,    55,   117,    -1,
     117,    57,   117,    -1,   117,    54,   117,    -1,   117,    53,
     117,    -1,   117,    56,   117,    -1,   117,    62,   117,    -1,
     117,    61,   117,    -1,   117,    60,   117,    -1,   117,    59,
     117,    -1,   117,    58,   117,    -1,   117,    63,   117,    -1,
     117,    64,   117,    -1,   117,    69,   117,    -1,   117,    68,
     117,    -1,   117,    70,   117,    -1,   117,    71,   117,    -1,
     117,    75,   117,    -1,   117,    74,   117,    -1,   117,    78,
     117,    -1,   117,    67,   117,    -1,   117,    65,   117,    -1,
     117,    66,   117,    -1,   117,    77,   117,    -1,   117,    76,
     117,    -1,   117,    79,   117,    -1,   117,    80,   117,    -1,
     117,    72,   117,    -1,   117,    73,   117,    -1,   117,    81,
     117,    -1,   117,    82,   117,    -1,    79,   117,    -1,    86,
     117,    -1,   117,    86,    -1,    85,   117,    -1,   117,    85,
      -1,    78,   117,    -1,    84,   117,    -1,    83,   117,    -1,
      92,    99,    89,   117,    -1,   167,    -1,    36,    -1,    92,
     117,   104,    -1,   123,    -1,    87,   117,   100,    -1,   115,
      -1,   119,    90,   118,    -1,   118,    -1,    24,   138,    -1,
     120,   144,   150,   162,   149,   162,   150,   104,    97,   164,
     158,    -1,   125,   127,   165,   102,    -1,   124,   104,    -1,
      30,    -1,   178,   144,    -1,   143,   144,   115,    -1,   168,
     144,   115,   106,   115,    -1,   169,   144,   115,   106,   115,
     106,   115,    -1,   152,   144,   115,   109,    -1,   151,   144,
     115,   108,    -1,    37,   144,    96,    -1,    25,   144,    96,
      -1,   126,   144,   148,    -1,   135,    -1,    30,    -1,    30,
      -1,   144,   154,    89,   146,   153,    -1,   113,   179,    -1,
     114,   131,   117,    -1,    31,   138,    -1,   129,   144,   115,
     104,   164,   158,   159,   112,   158,    -1,    52,    -1,    39,
      -1,    21,    -1,   170,   171,    -1,   134,   133,    -1,   133,
      -1,   136,   137,    -1,   136,   106,   115,    -1,   136,   106,
     140,   106,   115,   137,    -1,   136,   106,   115,   106,   140,
     106,   115,    -1,    34,   144,   115,    -1,    -1,   159,    -1,
      93,    -1,    -1,   141,   142,    -1,    73,    -1,    72,    -1,
       5,    -1,    40,    -1,    20,    -1,    35,    -1,     9,    -1,
       8,    -1,     3,    -1,     4,    -1,    13,    -1,    15,    -1,
      14,    -1,    38,    -1,    26,    -1,    44,    -1,    46,    -1,
      45,    -1,    -1,   145,    92,    -1,    -1,   147,    91,    -1,
      96,    -1,   179,    -1,   115,    -1,    -1,   119,    -1,   179,
      -1,    18,    -1,    19,    -1,    41,    -1,     7,    -1,    49,
      -1,   134,    -1,   179,    -1,   156,    -1,    -1,   170,    -1,
      -1,   156,   106,   157,    -1,   157,    -1,   170,   113,    -1,
      -1,    -1,   132,   161,    -1,   115,    -1,   179,    -1,    -1,
     163,    93,    -1,   166,    -1,   165,   164,    -1,   179,    -1,
     110,    -1,    93,   179,    -1,   118,   162,    -1,   177,    -1,
     130,    -1,   121,    -1,   160,   162,    -1,    98,   162,    -1,
       1,   139,    -1,   167,    42,    -1,    42,    -1,    11,    -1,
      10,    -1,    12,    -1,    16,    -1,    22,    -1,    23,    -1,
      47,    -1,    48,    -1,   174,    -1,   172,   162,    -1,   172,
     106,   128,    -1,   128,    -1,     1,   139,   179,    -1,   171,
      -1,   122,    -1,    32,    -1,    43,    -1,    33,    -1,    50,
      -1,    51,   138,    -1,   176,   144,   115,   104,    97,   164,
     158,    -1,    27,    -1,    28,    -1,    29,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   109,   114,   121,   128,   134,   141,   143,
     145,   148,   148,   149,   149,   150,   150,   151,   151,   154,
     160,   164,   170,   174,   183,   186,   191,   197,   201,   208,
     215,   215,   225,   232,   239,   246,   253,   260,   267,   274,
     281,   288,   295,   302,   309,   316,   323,   330,   337,   344,
     351,   358,   365,   372,   379,   386,   393,   400,   407,   414,
     421,   428,   435,   442,   448,   454,   460,   466,   472,   478,
     484,   490,   498,   503,   508,   515,   517,   526,   533,   540,
     544,   549,   566,   576,   579,   586,   592,   599,   608,   619,
     627,   635,   642,   649,   656,   660,   667,   674,   689,   692,
     702,   707,   722,   731,   733,   737,   745,   751,   756,   771,
     786,   808,   833,   842,   849,   856,   863,   863,   871,   873,
     877,   879,   881,   883,   885,   887,   889,   891,   893,   895,
     897,   899,   901,   903,   905,   907,   910,   910,   911,   911,
     914,   916,   920,   922,   929,   931,   935,   937,   941,   943,
     945,   949,   951,   955,   956,   960,   962,   968,   972,   976,
     984,   990,   998,  1006,  1008,  1011,  1011,  1014,  1021,  1027,
    1031,  1033,  1039,  1042,  1044,  1046,  1048,  1051,  1054,  1059,
    1065,  1074,  1076,  1078,  1080,  1082,  1084,  1086,  1090,  1094,
    1103,  1111,  1119,  1121,  1130,  1135,  1139,  1141,  1143,  1147,
    1154,  1159,  1175,  1177,  1179,  1183
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
  "EXIT", "FGETS", "FIELDS", "FOR", "FPRINTF", "GETENV", "GETCH", "GETPID",
  "GETS", "IDENTIFIER", "IF", "INT", "LIST", "MAKELIST", "M_ECHO",
  "NUMBER", "PRINTF", "PUTENV", "RETURN", "SIZEOFLIST", "STAT", "STRING",
  "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR", "STRFIND", "SUBSTR",
  "SYSTEM", "VOID", "WHILE", "'='", "PLUS_IS", "MOD_IS", "MUL_IS",
  "MINUS_IS", "DIV_IS", "SHR_IS", "SHL_IS", "XOR_IS", "OR_IS", "AND_IS",
  "OR", "AND", "'|'", "'^'", "'&'", "NOT_EQUAL", "EQUAL", "'<'", "'>'",
  "YOUNGER", "OLDER", "GREATER_EQUAL", "SMALLER_EQUAL", "SHR", "SHL",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "DEC", "INC", "'`'",
  "'}'", "')'", "','", "'{'", "'('", "';'", "$accept", "input", "args",
  "break_ok", "break_stat", "casttype", "backtick", "@1", "closebrace",
  "@2", "closepar", "@3", "comma", "@4", "comma_arglist", "comma_expr",
  "compound", "def_var_or_fun", "else_tail", "enterid", "entervarid",
  "err_expression", "@5", "expression", "expr_code", "expr_list", "for",
  "for_stat", "funcdef", "func_or_var", "function", "funid", "funname",
  "funvars", "idexpr", "if", "if_stat", "initassign", "leave_key",
  "local_list", "locals", "makelist", "makelist_expr", "makelist_normal",
  "nesting", "ok", "older_younger", "@6", "old_young", "one_arg_funs",
  "openpar", "@7", "openbrace", "@8", "opt_arglist", "opt_expression",
  "opt_expr_list", "optint_special", "optint_string", "opt_locals",
  "opt_parlist", "opt_vartype", "pars", "partype", "popdead", "pushdead",
  "return_stat", "return_tail", "semicol", "@9", "statement", "statements",
  "stm", "string", "two_arg_funs", "three_arg_funs", "type_of_var",
  "vardefs", "varnames", "var_or_fun", "vartype", "voidtype", "while",
  "while_stat", "zero_arg_funs", "zeroframe", 0
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
     305,   306,    61,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   124,    94,    38,   319,   320,
      60,    62,   321,   322,   323,   324,   325,   326,    43,    45,
      42,    47,    37,    33,   126,   327,   328,    96,   125,    41,
      44,   123,    40,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    96,    96,    97,    98,    99,    99,
      99,   101,   100,   103,   102,   105,   104,   107,   106,   108,
     108,   109,   109,   110,   111,   111,   112,   112,   113,   114,
     116,   115,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   119,   119,
     120,   121,   122,   123,   123,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   127,   128,   128,
     129,   130,   131,   132,   132,   133,   134,   134,   135,   135,
     135,   135,   136,   137,   138,   139,   141,   140,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   145,   144,   147,   146,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     158,   159,   160,   161,   161,   163,   162,   164,   165,   165,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     167,   168,   168,   168,   168,   168,   168,   168,   169,   170,
     171,   172,   172,   172,   173,   173,   174,   174,   174,   175,
     176,   177,   178,   178,   178,   179
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     2,     0,     2,     2,
       1,     2,     1,     3,     2,     2,     2,     1,     1,     1,
       0,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     1,     1,     3,     1,     3,     1,     3,     1,
       2,    11,     4,     2,     1,     2,     3,     5,     7,     4,
       4,     3,     3,     3,     1,     1,     1,     5,     2,     3,
       2,     9,     1,     1,     1,     2,     2,     1,     2,     3,
       6,     7,     3,     0,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     3,     1,     2,
       0,     0,     2,     1,     1,     0,     2,     1,     2,     1,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     7,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     156,   196,   198,   197,   199,   156,     3,     0,   155,   189,
       0,     1,     2,     0,    28,   205,     0,   195,   136,   192,
     194,    17,    24,    95,    25,   115,   205,    98,   102,     0,
     205,   154,     0,     0,     0,   190,     0,   193,   126,   127,
     120,   149,   125,   124,   182,   181,   183,   128,   130,   129,
     184,   146,   147,   122,   185,   186,   136,   132,   202,   203,
     204,    84,   136,   123,    73,   136,   131,   121,   148,   180,
     133,   135,   134,   187,   188,   150,     0,     0,     0,     0,
       0,     0,     0,     0,    99,    75,    15,   136,    94,    17,
     136,   136,   136,    72,   136,   136,   136,     0,   169,     0,
      17,   158,     0,   137,    28,   191,    18,   166,    30,    30,
      30,    68,    63,    70,    69,    66,    64,    11,     8,     9,
      10,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    65,    83,     0,    30,    30,
     108,    30,    30,    30,   179,    30,    30,    85,     0,     7,
     104,   161,   161,   103,   161,   205,   205,   165,    82,     0,
     170,    77,     0,   165,   136,   175,   136,   174,    30,   165,
     168,   167,   136,   173,   138,     0,   159,    17,     5,   112,
      17,    76,     0,     0,    74,    32,    36,    35,    33,    37,
      34,    42,    41,    40,    39,    38,    43,    44,    53,    54,
      52,    46,    45,    47,    48,    59,    60,    50,    49,    56,
      55,    51,    57,    58,    61,    62,    16,    17,    93,   141,
      17,    17,     0,    86,   205,   205,    17,    17,   178,    80,
     114,   100,   200,     0,   171,   177,    14,    31,   172,    30,
      30,   163,   162,   164,   176,    30,   205,     0,   157,    30,
      12,    71,   116,    30,   119,   118,   117,    30,    90,    20,
      30,    89,    22,    30,    30,    23,    79,   144,   165,   145,
      15,    15,   107,   151,    97,     0,   152,   139,     4,    17,
     113,    17,    21,    87,    17,    30,    30,     0,     6,   106,
     105,    30,   110,    30,    78,   142,   165,   160,     0,   111,
      88,    30,   161,   160,    15,   205,   201,     6,     0,   160,
      27,     0,    26,   101,   160,    81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   197,   318,   177,   121,   201,   202,   178,   179,
     156,   157,   269,    34,   278,   281,   180,     6,   329,    15,
      16,   181,   182,    84,   183,   287,   184,   185,    17,    85,
      86,    18,    87,    30,    19,   186,   187,    29,   188,   292,
     293,    88,    89,   160,   249,    26,   241,   242,   276,    90,
      31,    32,   266,   267,   238,   316,   288,    91,    92,   294,
      99,     7,   100,   101,   322,   250,   189,   262,    35,    36,
     190,    97,   191,    93,    94,    95,     8,    20,    21,    22,
       9,    10,   192,   193,    96,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -303
static const yytype_int16 yypact[] =
{
     -10,  -303,  -303,  -303,  -303,    31,  -303,     8,  -303,  -303,
     -13,  -303,  -303,   -73,   -63,   -18,    -5,  -303,  -303,  -303,
    -303,   -56,  -303,  -303,  -303,  -303,  -303,  -303,  -303,   645,
    -303,    -8,   -50,    32,   -25,  -303,   -23,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,   -19,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,   645,   645,   645,   645,
     645,   645,   645,   559,    33,  -303,  -303,  -303,  -303,    -7,
    -303,  -303,  -303,    42,  -303,  -303,  -303,   375,  -303,    27,
      44,  -303,    32,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,   -34,   -34,   -34,   -34,   -34,   -34,    33,  -303,  -303,
    -303,    45,    33,   645,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   645,  -303,  -303,  -303,    48,    52,     4,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,   -73,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,    51,
    -303,  -303,   645,  -303,  -303,  -303,  -303,  -303,    49,  -303,
    -303,  -303,  -303,  -303,  -303,    -8,  -303,    55,  -303,  -303,
      65,  -303,    72,   645,  -303,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,   117,   222,   277,   360,
     452,    50,    50,    71,    71,    71,    71,    71,    71,   133,
     133,   -14,   -14,   -34,   -34,   -34,  -303,    69,  -303,  -303,
      73,  -303,     6,  -303,    75,    77,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,   375,  -303,  -303,  -303,    33,  -303,    49,
    -303,  -303,  -303,  -303,  -303,  -303,    -8,    78,  -303,  -303,
    -303,   -34,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,    80,  -303,  -303,
    -303,  -303,  -303,    -8,  -303,    13,  -303,  -303,  -303,  -303,
    -303,    74,  -303,  -303,  -303,  -303,    87,   468,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,   468,  -303,
    -303,    52,  -303,  -303,  -303,   154,  -303,  -303,   468,  -303,
    -303,   468,  -303,  -303,  -303,  -303
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,  -303,  -103,  -127,  -303,  -303,  -303,  -303,   -49,  -303,
    -114,  -303,   -20,  -303,  -303,  -303,  -303,   200,  -303,   105,
    -303,  -105,  -303,   189,  -246,  -303,  -303,  -303,   199,  -303,
    -303,  -303,  -303,  -303,   183,  -303,  -303,  -303,  -303,   -76,
    -303,  -303,  -303,   -78,  -144,    56,   -47,  -303,  -303,  -303,
     -46,  -303,  -303,  -303,  -303,  -303,   -98,  -303,  -303,  -303,
    -303,  -303,  -303,    36,  -302,   -94,  -303,  -303,  -171,  -303,
    -292,    57,  -303,  -303,  -303,  -303,   -29,   -62,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -206
static const yytype_int16 yytable[] =
{
      27,    33,   102,   198,   199,   198,   255,   200,   204,    13,
     108,    37,   258,   286,    13,   317,   109,    23,   264,   110,
      25,   326,     1,     2,     1,     2,   323,   333,   251,   -95,
     252,    11,   335,     3,   -29,     3,   332,  -165,    14,   334,
       4,   158,   103,   104,   161,   162,   163,    28,   165,   166,
     167,   154,   155,   198,   240,   237,   243,   244,   245,   314,
     246,   247,   104,     1,     2,   106,   151,   152,   153,   159,
     107,   154,   155,   -96,     3,   286,  -116,  -116,   274,   275,
     195,     4,  -113,   261,   164,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   194,   306,   154,   155,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,  -153,   203,   154,   155,   236,   259,   256,
     260,  -205,  -205,   239,   -92,   321,   265,   147,   148,   149,
     150,   151,   152,   153,   -91,   290,   154,   155,  -140,   270,
     291,   254,  -109,   -19,   298,   277,   102,   280,   300,   297,
     305,   328,   198,   263,   301,   302,   307,   308,   303,   304,
    -143,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     331,   315,   154,   155,   285,    12,   319,   196,   320,    24,
     327,   149,   150,   151,   152,   153,   105,   309,   154,   155,
     272,   273,   312,   324,   248,   299,   283,   284,   325,   279,
     282,   268,   253,   310,     0,     0,     0,   295,     0,     0,
       0,     0,     0,     0,   289,     0,     0,     0,     0,     0,
       0,   296,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,   111,   112,   113,   114,   115,
     116,   117,   122,     0,     0,     0,     0,     0,     0,   311,
       0,     0,     0,     0,   313,     0,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,   289,   154,   155,     0,
     330,     0,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,   257,     0,     0,     0,     0,   168,     0,   -30,   -30,
     -30,   169,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   271,   -30,   -30,   -30,   170,   -30,   -30,   171,
     -30,   -30,   -30,   -30,   -30,   -30,   172,     0,     0,   -30,
     -30,   -30,   -30,   -30,   173,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   174,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -13,     0,     0,   175,   -30,   176,   168,
       0,   -30,   -30,   -30,   169,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   170,
     -30,   -30,   171,   -30,   -30,   -30,   -30,   -30,   -30,   172,
       0,     0,   -30,   -30,   -30,   -30,   -30,   173,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   174,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,   -30,   -30,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,   175,
     -30,   176,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,    51,    52,    53,
       0,    54,    55,     0,    56,    57,    58,    59,    60,    61,
       0,   118,   119,    62,    63,    64,    65,    66,     0,    67,
      68,    69,   120,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    77,     0,
       0,     0,    78,    79,    80,    81,    82,     0,    38,    39,
      40,    83,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,    51,    52,    53,     0,    54,    55,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,     0,     0,     0,    78,    79,
      80,    81,    82,     0,     0,     0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   108,   109,   110,   177,   110,   122,     1,
      56,    26,   183,   259,     1,   307,    62,    30,   189,    65,
      93,   323,    32,    33,    32,    33,   318,   329,   172,    92,
     174,     0,   334,    43,    52,    43,   328,    93,    30,   331,
      50,    87,    92,    30,    90,    91,    92,    52,    94,    95,
      96,    85,    86,   158,   159,   158,   161,   162,   163,   305,
     165,   166,    30,    32,    33,    90,    80,    81,    82,    89,
      93,    85,    86,    92,    43,   321,    72,    73,    72,    73,
     100,    50,    89,   188,    42,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    89,   288,    85,    86,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    89,    89,    85,    86,    89,   184,    88,
     186,    89,    93,   158,    89,   316,   192,    76,    77,    78,
      79,    80,    81,    82,    89,   260,    85,    86,    89,    87,
     265,   176,    89,    89,   269,    90,   195,    90,   273,    91,
      90,    17,   277,   188,   277,   280,   290,   291,   283,   284,
      93,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
     327,   306,    85,    86,   253,     5,   311,   102,   313,    10,
     324,    78,    79,    80,    81,    82,    33,   293,    85,    86,
     240,   241,   300,   321,   168,   272,   246,   247,   322,   244,
     245,   195,   175,   295,    -1,    -1,    -1,   266,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,   299,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,   321,    85,    86,    -1,
     325,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   203,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    49,    -1,    51,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,    -1,    91,    92,    93,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    -1,    51,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    -1,    -1,    -1,    91,
      92,    93,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    -1,     3,     4,
       5,    92,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    43,    50,    95,   111,   155,   170,   174,
     175,     0,   111,     1,    30,   113,   114,   122,   125,   128,
     171,   172,   173,    30,   122,    93,   139,   179,    52,   131,
     127,   144,   145,   106,   107,   162,   163,   179,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    22,    23,    25,    26,    27,    28,
      29,    30,    34,    35,    36,    37,    38,    40,    41,    42,
      44,    45,    46,    47,    48,    49,    78,    79,    83,    84,
      85,    86,    87,    92,   117,   123,   124,   126,   135,   136,
     143,   151,   152,   167,   168,   169,   178,   165,   179,   154,
     156,   157,   170,    92,    30,   128,    90,    93,   144,   144,
     144,   117,   117,   117,   117,   117,   117,   117,    32,    33,
      43,    99,   117,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    85,    86,   104,   105,   144,   106,
     137,   144,   144,   144,    42,   144,   144,   144,     1,     6,
      21,    24,    31,    39,    51,    91,    93,    98,   102,   103,
     110,   115,   116,   118,   120,   121,   129,   130,   132,   160,
     164,   166,   176,   177,    89,   106,   113,    96,   115,   115,
      96,   100,   101,    89,   104,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,    89,    96,   148,   179,
     115,   140,   141,   115,   115,   115,   115,   115,   139,   138,
     159,   138,   138,   165,   179,   162,    88,   117,   162,   144,
     144,   115,   161,   179,   162,   144,   146,   147,   157,   106,
      87,   117,   106,   106,    72,    73,   142,    90,   108,   179,
      90,   109,   179,   106,   106,   102,   118,   119,   150,   179,
     115,   115,   133,   134,   153,   170,   179,    91,   115,   140,
     115,    96,   115,   115,   115,    90,   162,   104,   104,   133,
     171,   106,   137,   106,   118,   115,   149,   164,    97,   115,
     115,   162,   158,   164,   150,   159,   158,   104,    17,   112,
     179,    97,   164,   158,   164,   158
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
#line 117 "parser"
    {
            (yyval) = *multargs(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 5:
#line 122 "parser"
    {
            (yyval) = *firstarg(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 6:
#line 128 "parser"
    {
            break_ok++;
        ;}
    break;

  case 7:
#line 135 "parser"
    {
            (yyval) = *break_stmnt();
        ;}
    break;

  case 11:
#line 148 "parser"
    {parse_error = err_backtick_expected; ;}
    break;

  case 13:
#line 149 "parser"
    {parse_error = err_closebrace_expected; ;}
    break;

  case 15:
#line 150 "parser"
    {parse_error = err_closepar_expected; ;}
    break;

  case 17:
#line 151 "parser"
    {parse_error = err_comma_expected; ;}
    break;

  case 19:
#line 156 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 21:
#line 166 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 23:
#line 177 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 26:
#line 193 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 28:
#line 202 "parser"
    {
            entervar();
        ;}
    break;

  case 29:
#line 209 "parser"
    {
        (yyval) = fetchvar();
    ;}
    break;

  case 30:
#line 215 "parser"
    {
            parse_error = err_in_expression;
        ;}
    break;

  case 31:
#line 219 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 32:
#line 228 "parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 33:
#line 235 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        ;}
    break;

  case 34:
#line 242 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        ;}
    break;

  case 35:
#line 249 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        ;}
    break;

  case 36:
#line 256 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        ;}
    break;

  case 37:
#line 263 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        ;}
    break;

  case 38:
#line 270 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        ;}
    break;

  case 39:
#line 277 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        ;}
    break;

  case 40:
#line 284 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        ;}
    break;

  case 41:
#line 291 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        ;}
    break;

  case 42:
#line 298 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        ;}
    break;

  case 43:
#line 305 "parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 44:
#line 312 "parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 45:
#line 319 "parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 46:
#line 326 "parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 47:
#line 333 "parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 48:
#line 340 "parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 49:
#line 347 "parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 50:
#line 354 "parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 51:
#line 361 "parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 52:
#line 368 "parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 53:
#line 375 "parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 54:
#line 382 "parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 55:
#line 389 "parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 56:
#line 396 "parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 57:
#line 403 "parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 58:
#line 410 "parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 59:
#line 417 "parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 60:
#line 424 "parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 61:
#line 431 "parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 62:
#line 438 "parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 63:
#line 444 "parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 64:
#line 450 "parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 65:
#line 456 "parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 66:
#line 462 "parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 67:
#line 468 "parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 68:
#line 474 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 69:
#line 480 "parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 70:
#line 486 "parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 71:
#line 494 "parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 72:
#line 499 "parser"
    {
            (yyval) = stackframe(e_str | e_const);
        ;}
    break;

  case 73:
#line 504 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
        ;}
    break;

  case 74:
#line 511 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 76:
#line 520 "parser"
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[(2) - (3)]));
        ;}
    break;

  case 77:
#line 527 "parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 78:
#line 536 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 81:
#line 560 "parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        ;}
    break;

  case 82:
#line 570 "parser"
    {
            close_fun(&(yyvsp[(3) - (4)]));
        ;}
    break;

  case 84:
#line 580 "parser"
    {
            (yyval) = fetchvar();
        ;}
    break;

  case 85:
#line 588 "parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        ;}
    break;

  case 86:
#line 595 "parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 87:
#line 604 "parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        ;}
    break;

  case 88:
#line 615 "parser"
    {
            (yyval) = *threeargs((yyvsp[(1) - (7)]).type, &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(7) - (7)]));
        ;}
    break;

  case 89:
#line 623 "parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 90:
#line 631 "parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 91:
#line 638 "parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 92:
#line 645 "parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 93:
#line 652 "parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 95:
#line 661 "parser"
    {
            open_fun();
        ;}
    break;

  case 96:
#line 668 "parser"
    {
            (yyval).evalue = fetchfun();
        ;}
    break;

  case 97:
#line 679 "parser"
    {
            make_frame();
            outbin((yyvsp[(5) - (5)]).code, (yyvsp[(5) - (5)]).codelen);
        ;}
    break;

  case 99:
#line 695 "parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    ;}
    break;

  case 101:
#line 716 "parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        ;}
    break;

  case 102:
#line 723 "parser"
    {
        initialization = 1;
    ;}
    break;

  case 105:
#line 739 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 106:
#line 747 "parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    ;}
    break;

  case 108:
#line 758 "parser"
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

  case 109:
#line 774 "parser"
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

  case 110:
#line 792 "parser"
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

  case 111:
#line 815 "parser"
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

  case 112:
#line 836 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 113:
#line 842 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        ;}
    break;

  case 114:
#line 850 "parser"
    {
            nestlevel++;
        ;}
    break;

  case 115:
#line 857 "parser"
    {
            yyerrok;
        ;}
    break;

  case 116:
#line 863 "parser"
    {parse_error = err_older_younger; ;}
    break;

  case 117:
#line 865 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 136:
#line 910 "parser"
    {parse_error = err_openpar_expected; ;}
    break;

  case 138:
#line 911 "parser"
    {parse_error = err_openbrace_expected; ;}
    break;

  case 143:
#line 922 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = 1;
        ;}
    break;

  case 156:
#line 962 "parser"
    {
            vartype = e_int;
        ;}
    break;

  case 159:
#line 978 "parser"
    {
            n_params++;
        ;}
    break;

  case 160:
#line 984 "parser"
    {
            pop_dead();
        ;}
    break;

  case 161:
#line 990 "parser"
    {
            push_dead();                    /* set new dead-level */
        ;}
    break;

  case 162:
#line 1000 "parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 165:
#line 1011 "parser"
    {parse_error = err_semicol_expected; ;}
    break;

  case 167:
#line 1015 "parser"
    {
            sem_err = 0;
        ;}
    break;

  case 168:
#line 1023 "parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 171:
#line 1035 "parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        ;}
    break;

  case 179:
#line 1061 "parser"
    {
        stringbuf = xstrcat(stringbuf, string);/* catenate the new string */
    ;}
    break;

  case 180:
#line 1066 "parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(string);        /* duplicate initial string */
    ;}
    break;

  case 189:
#line 1095 "parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        ;}
    break;

  case 190:
#line 1105 "parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    ;}
    break;

  case 191:
#line 1114 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        ;}
    break;

  case 193:
#line 1124 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 194:
#line 1131 "parser"
    {
            global_init = *catcode(&global_init, &(yyvsp[(1) - (1)]));
        ;}
    break;

  case 199:
#line 1148 "parser"
    {
            vartype = 0;
        ;}
    break;

  case 201:
#line 1166 "parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        ;}
    break;

  case 205:
#line 1183 "parser"
    {
            (yyval) = stackframe(0);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2707 "parser.c"
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


#line 1187 "parser"


int yywrap()
{
    return (1);
}

