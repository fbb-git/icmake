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
#define YYLAST   729

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNRULES -- Number of states.  */
#define YYNSTATES  334

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
      91,    88,    80,    78,    89,    79,     2,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    92,
      70,    52,    71,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    65,    87,    84,     2,     2,     2,
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
      21,    23,    24,    27,    28,    31,    32,    35,    38,    40,
      43,    45,    49,    52,    55,    58,    60,    62,    64,    65,
      68,    72,    76,    80,    84,    88,    92,    96,   100,   104,
     108,   112,   116,   120,   124,   128,   132,   136,   140,   144,
     148,   152,   156,   160,   164,   168,   172,   176,   180,   184,
     188,   192,   195,   198,   201,   204,   207,   210,   213,   216,
     221,   223,   225,   229,   231,   233,   237,   239,   242,   254,
     259,   262,   264,   267,   271,   277,   285,   290,   295,   299,
     303,   307,   309,   313,   315,   317,   323,   326,   330,   333,
     343,   345,   347,   349,   352,   355,   357,   360,   364,   371,
     379,   383,   384,   386,   388,   389,   392,   394,   396,   398,
     400,   402,   404,   406,   408,   410,   412,   414,   416,   418,
     420,   422,   424,   425,   428,   429,   432,   434,   436,   438,
     439,   441,   443,   445,   447,   449,   451,   453,   455,   457,
     459,   460,   462,   463,   467,   469,   472,   473,   474,   477,
     479,   481,   482,   485,   487,   490,   492,   494,   497,   500,
     502,   504,   506,   509,   512,   515,   518,   520,   522,   524,
     526,   528,   530,   532,   534,   536,   538,   540,   542,   545,
     549,   551,   555,   557,   559,   561,   563,   565,   567,   570,
     578,   580,   582,   584
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    94,   108,    -1,   108,    -1,    95,   103,
     112,    -1,   112,    -1,    -1,     6,    -1,    32,    -1,    33,
      -1,    43,    -1,    -1,   100,    87,    -1,    -1,   102,    88,
      -1,    -1,   104,    89,    -1,    89,    95,    -1,   177,    -1,
      89,   112,    -1,   177,    -1,    90,   162,    99,    -1,   152,
     171,    -1,   173,   119,    -1,    17,   161,    -1,   177,    -1,
      30,    -1,   110,    -1,    -1,   113,   114,    -1,   114,    52,
     114,    -1,   114,    55,   114,    -1,   114,    57,   114,    -1,
     114,    54,   114,    -1,   114,    53,   114,    -1,   114,    56,
     114,    -1,   114,    62,   114,    -1,   114,    61,   114,    -1,
     114,    60,   114,    -1,   114,    59,   114,    -1,   114,    58,
     114,    -1,   114,    63,   114,    -1,   114,    64,   114,    -1,
     114,    69,   114,    -1,   114,    68,   114,    -1,   114,    70,
     114,    -1,   114,    71,   114,    -1,   114,    75,   114,    -1,
     114,    74,   114,    -1,   114,    78,   114,    -1,   114,    67,
     114,    -1,   114,    65,   114,    -1,   114,    66,   114,    -1,
     114,    77,   114,    -1,   114,    76,   114,    -1,   114,    79,
     114,    -1,   114,    80,   114,    -1,   114,    72,   114,    -1,
     114,    73,   114,    -1,   114,    81,   114,    -1,   114,    82,
     114,    -1,    79,   114,    -1,    86,   114,    -1,   114,    86,
      -1,    85,   114,    -1,   114,    85,    -1,    78,   114,    -1,
      84,   114,    -1,    83,   114,    -1,    91,    98,    88,   114,
      -1,   164,    -1,    36,    -1,    91,   114,   101,    -1,   120,
      -1,   112,    -1,   116,    89,   115,    -1,   115,    -1,    24,
     135,    -1,   117,   141,   147,   159,   146,   159,   147,   101,
      96,   161,   155,    -1,   122,   124,   162,    99,    -1,   121,
     101,    -1,    30,    -1,   176,   141,    -1,   140,   141,   112,
      -1,   166,   141,   112,   103,   112,    -1,   167,   141,   112,
     103,   112,   103,   112,    -1,   149,   141,   112,   106,    -1,
     148,   141,   112,   105,    -1,    37,   141,    95,    -1,    25,
     141,    95,    -1,   123,   141,   145,    -1,   132,    -1,   165,
     141,   112,    -1,    30,    -1,    30,    -1,   141,   151,    88,
     143,   150,    -1,   110,   177,    -1,   111,   128,   114,    -1,
      31,   135,    -1,   126,   141,   112,   101,   161,   155,   156,
     109,   155,    -1,    52,    -1,    39,    -1,    21,    -1,   168,
     169,    -1,   131,   130,    -1,   130,    -1,   133,   134,    -1,
     133,   103,   112,    -1,   133,   103,   137,   103,   112,   134,
      -1,   133,   103,   112,   103,   137,   103,   112,    -1,    34,
     141,   112,    -1,    -1,   156,    -1,    92,    -1,    -1,   138,
     139,    -1,    73,    -1,    72,    -1,     5,    -1,    40,    -1,
      20,    -1,    35,    -1,     9,    -1,     8,    -1,     3,    -1,
       4,    -1,    13,    -1,    15,    -1,    14,    -1,    38,    -1,
      26,    -1,    44,    -1,    -1,   142,    91,    -1,    -1,   144,
      90,    -1,    95,    -1,   177,    -1,   112,    -1,    -1,   116,
      -1,   177,    -1,    18,    -1,    19,    -1,    41,    -1,     7,
      -1,    49,    -1,   131,    -1,   177,    -1,   153,    -1,    -1,
     168,    -1,    -1,   153,   103,   154,    -1,   154,    -1,   168,
     110,    -1,    -1,    -1,   129,   158,    -1,   112,    -1,   177,
      -1,    -1,   160,    92,    -1,   163,    -1,   162,   161,    -1,
     177,    -1,   107,    -1,    92,   177,    -1,   115,   159,    -1,
     175,    -1,   127,    -1,   118,    -1,   157,   159,    -1,    97,
     159,    -1,     1,   136,    -1,   164,    42,    -1,    42,    -1,
      46,    -1,    45,    -1,    11,    -1,    10,    -1,    12,    -1,
      16,    -1,    22,    -1,    23,    -1,    47,    -1,    48,    -1,
     172,    -1,   170,   159,    -1,   170,   103,   125,    -1,   125,
      -1,     1,   136,   177,    -1,   169,    -1,   119,    -1,    32,
      -1,    43,    -1,    33,    -1,    50,    -1,    51,   135,    -1,
     174,   141,   112,   101,    96,   161,   155,    -1,    27,    -1,
      28,    -1,    29,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   109,   114,   121,   128,   134,   141,   143,
     145,   148,   148,   149,   149,   150,   150,   153,   159,   163,
     169,   173,   182,   185,   190,   196,   200,   207,   214,   214,
     224,   231,   238,   245,   252,   259,   266,   273,   280,   287,
     294,   301,   308,   315,   322,   329,   336,   343,   350,   357,
     364,   371,   378,   385,   392,   399,   406,   413,   420,   427,
     434,   441,   447,   453,   459,   465,   471,   477,   483,   489,
     497,   502,   507,   514,   518,   525,   532,   536,   541,   558,
     568,   571,   578,   584,   591,   600,   611,   619,   627,   634,
     641,   648,   650,   659,   666,   673,   688,   691,   701,   706,
     721,   730,   732,   736,   744,   750,   755,   770,   785,   807,
     832,   841,   848,   855,   862,   862,   870,   872,   876,   878,
     880,   882,   884,   886,   888,   890,   892,   894,   896,   898,
     900,   902,   905,   905,   906,   906,   909,   911,   915,   917,
     924,   926,   930,   932,   936,   938,   940,   944,   946,   950,
     951,   955,   957,   963,   967,   971,   979,   985,   993,  1001,
    1003,  1006,  1006,  1009,  1016,  1022,  1026,  1028,  1034,  1037,
    1039,  1041,  1043,  1046,  1049,  1054,  1060,  1068,  1070,  1075,
    1077,  1079,  1081,  1083,  1085,  1087,  1091,  1095,  1104,  1112,
    1120,  1122,  1131,  1133,  1137,  1139,  1141,  1145,  1152,  1157,
    1173,  1175,  1177,  1181
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
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "DEC", "INC", "'}'",
  "')'", "','", "'{'", "'('", "';'", "$accept", "input", "args",
  "break_ok", "break_stat", "casttype", "closebrace", "@1", "closepar",
  "@2", "comma", "@3", "comma_arglist", "comma_expr", "compound",
  "def_var_or_fun", "else_tail", "enterid", "entervarid", "err_expression",
  "@4", "expression", "expr_code", "expr_list", "for", "for_stat",
  "funcdef", "func_or_var", "function", "funid", "funname", "funvars",
  "idexpr", "if", "if_stat", "initassign", "leave_key", "local_list",
  "locals", "makelist", "makelist_expr", "makelist_normal", "nesting",
  "ok", "older_younger", "@5", "old_young", "one_arg_funs", "openpar",
  "@6", "openbrace", "@7", "opt_arglist", "opt_expression",
  "opt_expr_list", "optint_special", "optint_string", "opt_locals",
  "opt_parlist", "opt_vartype", "pars", "partype", "popdead", "pushdead",
  "return_stat", "return_tail", "semicol", "@8", "statement", "statements",
  "stm", "string", "strupr_lwr", "two_arg_funs", "three_arg_funs",
  "type_of_var", "vardefs", "varnames", "var_or_fun", "vartype",
  "voidtype", "while", "while_stat", "zero_arg_funs", "zeroframe", 0
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
      42,    47,    37,    33,   126,   327,   328,   125,    41,    44,
     123,    40,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    97,    98,    98,
      98,   100,    99,   102,   101,   104,   103,   105,   105,   106,
     106,   107,   108,   108,   109,   109,   110,   111,   113,   112,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   115,   116,   116,   117,   118,   119,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   123,   124,   125,   125,   126,   127,
     128,   129,   129,   130,   131,   131,   132,   132,   132,   132,
     133,   134,   135,   136,   138,   137,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   142,   141,   144,   143,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   155,   156,   157,   158,
     158,   160,   159,   161,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   165,   165,   166,
     166,   166,   166,   166,   166,   166,   167,   168,   169,   170,
     170,   170,   171,   171,   172,   172,   172,   173,   174,   175,
     176,   176,   176,   177
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
       2,     1,     2,     3,     5,     7,     4,     4,     3,     3,
       3,     1,     3,     1,     1,     5,     2,     3,     2,     9,
       1,     1,     1,     2,     2,     1,     2,     3,     6,     7,
       3,     0,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     3,     1,     2,     0,     0,     2,     1,
       1,     0,     2,     1,     2,     1,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     7,
       1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     152,   194,   196,   195,   197,   152,     3,     0,   151,   187,
       0,     1,     2,     0,    26,   203,     0,   193,   132,   190,
     192,    15,    22,    93,    23,   113,   203,    96,   100,     0,
     203,   150,     0,     0,     0,   188,     0,   191,   124,   125,
     118,   145,   123,   122,   180,   179,   181,   126,   128,   127,
     182,   142,   143,   120,   183,   184,   132,   130,   200,   201,
     202,    81,   132,   121,    71,   132,   129,   119,   144,   176,
     131,   178,   177,   185,   186,   146,     0,     0,     0,     0,
       0,     0,     0,    97,    73,    13,   132,    91,    15,   132,
     132,   132,    70,   132,   132,   132,   132,     0,   165,     0,
      15,   154,     0,   133,    26,   189,    16,   162,    28,    28,
      28,    66,    61,    68,    67,    64,    62,     8,     9,    10,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    63,    80,     0,    28,    28,   106,
      28,    28,    28,   175,    28,    28,    28,    82,     0,     7,
     102,   157,   157,   101,   157,   203,   203,   161,    79,     0,
     166,    74,     0,   161,   132,   171,   132,   170,    28,   161,
     164,   163,   132,   169,   134,     0,   155,    15,     5,   110,
      15,     0,    72,    30,    34,    33,    31,    35,    32,    40,
      39,    38,    37,    36,    41,    42,    51,    52,    50,    44,
      43,    45,    46,    57,    58,    48,    47,    54,    53,    49,
      55,    56,    59,    60,    14,    15,    90,   137,    15,    15,
       0,    83,   203,   203,    92,    15,    15,   174,    77,   112,
      98,   198,     0,   167,   173,    12,    29,   168,    28,    28,
     159,   158,   160,   172,    28,   203,     0,   153,    28,    69,
     114,    28,   117,   116,   115,    28,    87,    18,    28,    86,
      20,    28,    28,    21,    76,   140,   161,   141,    13,    13,
     105,   147,    95,     0,   148,   135,     4,    15,   111,    15,
      19,    84,    15,    28,    28,     0,     6,   104,   103,    28,
     108,    28,    75,   138,   161,   156,     0,   109,    85,    28,
     157,   156,    13,   203,   199,     6,     0,   156,    25,     0,
      24,    99,   156,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   197,   316,   177,   120,   178,   179,   155,   156,
     268,    34,   276,   279,   180,     6,   327,    15,    16,   181,
     182,    83,   183,   285,   184,   185,    17,    84,    85,    18,
      86,    30,    19,   186,   187,    29,   188,   290,   291,    87,
      88,   159,   248,    26,   239,   240,   274,    89,    31,    32,
     265,   266,   236,   314,   286,    90,    91,   292,    99,     7,
     100,   101,   320,   249,   189,   261,    35,    36,   190,    97,
     191,    92,    93,    94,    95,     8,    20,    21,    22,     9,
      10,   192,   193,    96,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -292
static const yytype_int16 yypact[] =
{
     -10,  -292,  -292,  -292,  -292,    31,  -292,    11,  -292,  -292,
     -13,  -292,  -292,   -68,   -62,   -18,   -16,  -292,  -292,  -292,
    -292,   -60,  -292,  -292,  -292,  -292,  -292,  -292,  -292,   638,
    -292,    -6,   -25,    37,    28,  -292,   -23,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,    42,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,   638,   638,   638,   638,
     638,   638,   553,    33,  -292,  -292,  -292,  -292,    46,  -292,
    -292,  -292,    96,  -292,  -292,  -292,  -292,   371,  -292,    52,
      53,  -292,    37,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,   -65,   -65,   -65,   -65,   -65,   -65,  -292,  -292,  -292,
      55,    33,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,  -292,  -292,  -292,    58,    66,   -21,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,   -68,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,    72,
    -292,  -292,   638,  -292,  -292,  -292,  -292,  -292,    70,  -292,
    -292,  -292,  -292,  -292,  -292,    -6,  -292,    75,  -292,  -292,
      77,   638,  -292,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,   116,   220,   274,   356,   447,    50,
      50,    71,    71,    71,    71,    71,    71,    -3,    -3,   130,
     130,   -65,   -65,   -65,  -292,    81,  -292,  -292,    82,  -292,
       0,  -292,    69,    83,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,   371,  -292,  -292,  -292,    33,  -292,    70,  -292,
    -292,  -292,  -292,  -292,  -292,    -6,    89,  -292,  -292,   -65,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,   110,  -292,  -292,  -292,  -292,
    -292,    -6,  -292,    15,  -292,  -292,  -292,  -292,  -292,   115,
    -292,  -292,  -292,  -292,   112,   463,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,   463,  -292,  -292,    66,
    -292,  -292,  -292,   189,  -292,  -292,   463,  -292,  -292,   463,
    -292,  -292,  -292,  -292
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,  -107,  -117,  -292,  -292,   -39,  -292,  -113,  -292,
     -20,  -292,  -292,  -292,  -292,   209,  -292,   118,  -292,  -104,
    -292,   187,  -248,  -292,  -292,  -292,   207,  -292,  -292,  -292,
    -292,  -292,   188,  -292,  -292,  -292,  -292,   -69,  -292,  -292,
    -292,   -75,  -144,    56,   -41,  -292,  -292,  -292,   -47,  -292,
    -292,  -292,  -292,  -292,   -89,  -292,  -292,  -292,  -292,  -292,
    -292,    36,  -262,   -88,  -292,  -292,  -170,  -292,  -291,    59,
    -292,  -292,  -292,  -292,  -292,   -29,   -58,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -204
static const yytype_int16 yytable[] =
{
      27,    33,   102,   200,   198,   199,   198,   254,   202,   108,
     284,    37,    13,   257,   315,   109,    13,    23,   110,   263,
     153,   154,     1,     2,    25,   321,     1,     2,   250,   -93,
     251,    11,  -161,     3,   -27,   330,    28,     3,   332,   157,
       4,    14,   160,   161,   162,   104,   164,   165,   166,   167,
     235,  -114,  -114,   198,   238,   312,   241,   242,   243,   324,
     244,   245,   246,     1,     2,   331,   103,   104,   158,   107,
     333,   284,   272,   273,     3,   148,   149,   150,   151,   152,
     195,     4,   153,   154,   260,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   304,   106,   153,   154,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   -94,  -111,   153,   154,   258,   163,   259,
     194,  -149,   237,   201,   319,   264,   234,   146,   147,   148,
     149,   150,   151,   152,  -203,   288,   153,   154,   275,   255,
     289,   253,  -203,   -89,   296,   -88,   102,   298,   299,  -136,
    -107,   198,   278,   262,   300,   305,   306,   301,   302,   295,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   303,
     313,   153,   154,   -17,  -139,   317,   326,   318,   329,   325,
     150,   151,   152,   283,    12,   153,   154,    24,   270,   271,
     196,   105,   307,   310,   247,   281,   282,   277,   280,   297,
     322,   267,   323,     0,   252,   308,   293,     0,     0,     0,
       0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
     294,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   293,   111,   112,   113,   114,   115,   116,   121,
       0,     0,     0,     0,     0,     0,     0,   309,     0,     0,
       0,     0,   311,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,     0,   287,   153,   154,     0,   328,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,   256,
       0,     0,   168,     0,   -28,   -28,   -28,   169,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   269,   -28,
     -28,   -28,   170,   -28,   -28,   171,   -28,   -28,   -28,   -28,
     -28,   -28,   172,     0,     0,   -28,   -28,   -28,   -28,   -28,
     173,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   174,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
       0,   153,   154,     0,     0,     0,     0,     0,     0,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,   -28,   -11,     0,
       0,   175,   -28,   176,   168,     0,   -28,   -28,   -28,   169,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   170,   -28,   -28,   171,   -28,   -28,
     -28,   -28,   -28,   -28,   172,     0,     0,   -28,   -28,   -28,
     -28,   -28,   173,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   174,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,   153,   154,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,     0,     0,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,   175,   -28,   176,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,    51,    52,    53,     0,    54,    55,     0,    56,    57,
      58,    59,    60,    61,     0,   117,   118,    62,    63,    64,
      65,    66,     0,    67,    68,    69,   119,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,     0,     0,     0,    78,    79,    80,    81,
       0,    38,    39,    40,    82,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     0,    51,    52,    53,     0,
      54,    55,     0,    56,    57,    58,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,     0,    67,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,    78,    79,    80,    81,     0,     0,     0,     0,    82
};

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   110,   108,   109,   110,   177,   121,    56,
     258,    26,     1,   183,   305,    62,     1,    30,    65,   189,
      85,    86,    32,    33,    92,   316,    32,    33,   172,    91,
     174,     0,    92,    43,    52,   326,    52,    43,   329,    86,
      50,    30,    89,    90,    91,    30,    93,    94,    95,    96,
     157,    72,    73,   157,   158,   303,   160,   161,   162,   321,
     164,   165,   166,    32,    33,   327,    91,    30,    88,    92,
     332,   319,    72,    73,    43,    78,    79,    80,    81,    82,
     100,    50,    85,    86,   188,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,   286,    89,    85,    86,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    91,    88,    85,    86,   184,    42,   186,
      88,    88,   157,    88,   314,   192,    88,    76,    77,    78,
      79,    80,    81,    82,    88,   259,    85,    86,    89,    87,
     264,   176,    92,    88,   268,    88,   195,   271,   275,    88,
      88,   275,    89,   188,   278,   288,   289,   281,   282,    90,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    89,
     304,    85,    86,    88,    92,   309,    17,   311,   325,   322,
      80,    81,    82,   252,     5,    85,    86,    10,   238,   239,
     102,    33,   291,   298,   168,   245,   246,   242,   243,   270,
     319,   195,   320,    -1,   175,   293,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,   302,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,   319,    85,    86,    -1,   323,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   201,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    -1,    51,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    83,    84,    85,    86,    87,    -1,
      -1,    90,    91,    92,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    -1,    51,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    91,    92,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,     3,     4,     5,    91,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    43,    50,    94,   108,   152,   168,   172,
     173,     0,   108,     1,    30,   110,   111,   119,   122,   125,
     169,   170,   171,    30,   119,    92,   136,   177,    52,   128,
     124,   141,   142,   103,   104,   159,   160,   177,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    22,    23,    25,    26,    27,    28,
      29,    30,    34,    35,    36,    37,    38,    40,    41,    42,
      44,    45,    46,    47,    48,    49,    78,    79,    83,    84,
      85,    86,    91,   114,   120,   121,   123,   132,   133,   140,
     148,   149,   164,   165,   166,   167,   176,   162,   177,   151,
     153,   154,   168,    91,    30,   125,    89,    92,   141,   141,
     141,   114,   114,   114,   114,   114,   114,    32,    33,    43,
      98,   114,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    85,    86,   101,   102,   141,   103,   134,
     141,   141,   141,    42,   141,   141,   141,   141,     1,     6,
      21,    24,    31,    39,    51,    90,    92,    97,    99,   100,
     107,   112,   113,   115,   117,   118,   126,   127,   129,   157,
     161,   163,   174,   175,    88,   103,   110,    95,   112,   112,
      95,    88,   101,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,    88,    95,   145,   177,   112,   137,
     138,   112,   112,   112,   112,   112,   112,   136,   135,   156,
     135,   135,   162,   177,   159,    87,   114,   159,   141,   141,
     112,   158,   177,   159,   141,   143,   144,   154,   103,   114,
     103,   103,    72,    73,   139,    89,   105,   177,    89,   106,
     177,   103,   103,    99,   115,   116,   147,   177,   112,   112,
     130,   131,   150,   168,   177,    90,   112,   137,   112,    95,
     112,   112,   112,    89,   159,   101,   101,   130,   169,   103,
     134,   103,   115,   112,   146,   161,    96,   112,   112,   159,
     155,   161,   147,   156,   155,   101,    17,   109,   177,    96,
     161,   155,   161,   155
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
    {parse_error = err_closebrace_expected; ;}
    break;

  case 13:
#line 149 "parser"
    {parse_error = err_closepar_expected; ;}
    break;

  case 15:
#line 150 "parser"
    {parse_error = err_comma_expected; ;}
    break;

  case 17:
#line 155 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 19:
#line 165 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 21:
#line 176 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 24:
#line 192 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 26:
#line 201 "parser"
    {
            entervar();
        ;}
    break;

  case 27:
#line 208 "parser"
    {
        (yyval) = fetchvar();
    ;}
    break;

  case 28:
#line 214 "parser"
    {
            parse_error = err_in_expression;
        ;}
    break;

  case 29:
#line 218 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 30:
#line 227 "parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 31:
#line 234 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        ;}
    break;

  case 32:
#line 241 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        ;}
    break;

  case 33:
#line 248 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        ;}
    break;

  case 34:
#line 255 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        ;}
    break;

  case 35:
#line 262 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        ;}
    break;

  case 36:
#line 269 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        ;}
    break;

  case 37:
#line 276 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        ;}
    break;

  case 38:
#line 283 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        ;}
    break;

  case 39:
#line 290 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        ;}
    break;

  case 40:
#line 297 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        ;}
    break;

  case 41:
#line 304 "parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 42:
#line 311 "parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 43:
#line 318 "parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 44:
#line 325 "parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 45:
#line 332 "parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 46:
#line 339 "parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 47:
#line 346 "parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 48:
#line 353 "parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 49:
#line 360 "parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 50:
#line 367 "parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 51:
#line 374 "parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 52:
#line 381 "parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 53:
#line 388 "parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 54:
#line 395 "parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 55:
#line 402 "parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 56:
#line 409 "parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 57:
#line 416 "parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 58:
#line 423 "parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 59:
#line 430 "parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 60:
#line 437 "parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 61:
#line 443 "parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 62:
#line 449 "parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 63:
#line 455 "parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 64:
#line 461 "parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 65:
#line 467 "parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 66:
#line 473 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 67:
#line 479 "parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 68:
#line 485 "parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 69:
#line 493 "parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 70:
#line 498 "parser"
    {
            (yyval) = stackframe(e_str | e_const);
        ;}
    break;

  case 71:
#line 503 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
        ;}
    break;

  case 72:
#line 510 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 74:
#line 519 "parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 75:
#line 528 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 78:
#line 552 "parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        ;}
    break;

  case 79:
#line 562 "parser"
    {
            close_fun(catcode(&(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)])));
        ;}
    break;

  case 81:
#line 572 "parser"
    {
            (yyval) = fetchvar();
        ;}
    break;

  case 82:
#line 580 "parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        ;}
    break;

  case 83:
#line 587 "parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 84:
#line 596 "parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        ;}
    break;

  case 85:
#line 607 "parser"
    {
            (yyval) = *threeargs((yyvsp[(1) - (7)]).type, &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(7) - (7)]));
        ;}
    break;

  case 86:
#line 615 "parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 87:
#line 623 "parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 88:
#line 630 "parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 89:
#line 637 "parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 90:
#line 644 "parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 92:
#line 653 "parser"
    {
            (yyval) = *strupr_lwr((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));  /* string conversion */
        ;}
    break;

  case 93:
#line 660 "parser"
    {
            open_fun();
        ;}
    break;

  case 94:
#line 667 "parser"
    {
            (yyval).evalue = fetchfun();
        ;}
    break;

  case 95:
#line 678 "parser"
    {
            make_frame();
            (yyval) = (yyvsp[(5) - (5)]);                    /* code of local initializations */
        ;}
    break;

  case 97:
#line 694 "parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    ;}
    break;

  case 99:
#line 715 "parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        ;}
    break;

  case 100:
#line 722 "parser"
    {
        initialization = 1;
    ;}
    break;

  case 103:
#line 738 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 104:
#line 746 "parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    ;}
    break;

  case 106:
#line 757 "parser"
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

  case 107:
#line 773 "parser"
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

  case 108:
#line 791 "parser"
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

  case 109:
#line 814 "parser"
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

  case 110:
#line 835 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 111:
#line 841 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        ;}
    break;

  case 112:
#line 849 "parser"
    {
            nestlevel++;
        ;}
    break;

  case 113:
#line 856 "parser"
    {
            yyerrok;
        ;}
    break;

  case 114:
#line 862 "parser"
    {parse_error = err_older_younger; ;}
    break;

  case 115:
#line 864 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 132:
#line 905 "parser"
    {parse_error = err_openpar_expected; ;}
    break;

  case 134:
#line 906 "parser"
    {parse_error = err_openbrace_expected; ;}
    break;

  case 139:
#line 917 "parser"
    {
            (yyval) = stackframe(e_int | e_const);
            (yyval).evalue = 1;
        ;}
    break;

  case 152:
#line 957 "parser"
    {
            vartype = e_int;
        ;}
    break;

  case 155:
#line 973 "parser"
    {
            n_params++;
        ;}
    break;

  case 156:
#line 979 "parser"
    {
            pop_dead();
        ;}
    break;

  case 157:
#line 985 "parser"
    {
            push_dead();                    /* set new dead-level */
        ;}
    break;

  case 158:
#line 995 "parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 161:
#line 1006 "parser"
    {parse_error = err_semicol_expected; ;}
    break;

  case 163:
#line 1010 "parser"
    {
            sem_err = 0;
        ;}
    break;

  case 164:
#line 1018 "parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 167:
#line 1030 "parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        ;}
    break;

  case 175:
#line 1056 "parser"
    {
        stringbuf = xstrcat(stringbuf, string);/* catenate the new string */
    ;}
    break;

  case 176:
#line 1061 "parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(string);        /* duplicate initial string */
    ;}
    break;

  case 187:
#line 1096 "parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        ;}
    break;

  case 188:
#line 1106 "parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    ;}
    break;

  case 189:
#line 1115 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        ;}
    break;

  case 191:
#line 1125 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 197:
#line 1146 "parser"
    {
            vartype = 0;
        ;}
    break;

  case 199:
#line 1164 "parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        ;}
    break;

  case 203:
#line 1181 "parser"
    {
            (yyval) = stackframe(0);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2693 "parser.c"
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


#line 1185 "parser"


int yywrap()
{
    return (1);
}

