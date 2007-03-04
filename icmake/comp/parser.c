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
#line 3 "parser"


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
#define YYLAST   785

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNRULES -- Number of states.  */
#define YYNSTATES  339

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
      94,    90,    80,    78,    91,    79,     2,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    95,
      70,    52,    71,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    87,     2,    93,    66,     2,    88,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    65,    89,    84,     2,     2,     2,
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
      68,    69,    72,    76,    81,    85,    89,    93,    97,   101,
     105,   109,   113,   117,   121,   125,   129,   133,   137,   141,
     145,   149,   153,   157,   161,   165,   169,   173,   177,   181,
     185,   189,   193,   197,   201,   204,   207,   210,   213,   216,
     219,   222,   225,   230,   232,   234,   238,   240,   244,   246,
     250,   252,   255,   267,   272,   275,   277,   280,   284,   290,
     298,   303,   308,   312,   316,   320,   322,   324,   326,   332,
     335,   339,   342,   352,   354,   356,   358,   361,   364,   366,
     369,   373,   380,   388,   392,   393,   395,   397,   398,   401,
     403,   405,   407,   409,   411,   413,   415,   417,   419,   421,
     423,   425,   427,   429,   431,   433,   435,   437,   438,   441,
     442,   445,   447,   449,   451,   452,   454,   456,   458,   460,
     462,   464,   466,   468,   470,   472,   473,   475,   476,   480,
     482,   485,   486,   487,   490,   492,   494,   495,   498,   500,
     503,   505,   507,   510,   513,   515,   517,   519,   522,   525,
     528,   531,   533,   535,   537,   539,   541,   543,   545,   547,
     549,   551,   554,   558,   560,   564,   566,   568,   570,   572,
     574,   576,   579,   587,   589,   591,   593
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      97,     0,    -1,    97,   113,    -1,   113,    -1,    98,   108,
     117,    -1,   117,    -1,    -1,     6,    -1,    32,    -1,    33,
      -1,    43,    -1,    -1,   103,    88,    -1,    -1,   105,    89,
      -1,    -1,   107,    90,    -1,    -1,   109,    91,    -1,    91,
      98,    -1,   181,    -1,    91,   117,    -1,   181,    -1,    92,
     167,   104,    -1,   157,   175,    -1,   177,   124,    -1,    17,
     166,    -1,   181,    -1,    30,    -1,   115,    -1,    -1,   118,
     119,    -1,   119,    52,   119,    -1,   119,    87,   119,    93,
      -1,   119,    55,   119,    -1,   119,    57,   119,    -1,   119,
      54,   119,    -1,   119,    53,   119,    -1,   119,    56,   119,
      -1,   119,    62,   119,    -1,   119,    61,   119,    -1,   119,
      60,   119,    -1,   119,    59,   119,    -1,   119,    58,   119,
      -1,   119,    63,   119,    -1,   119,    64,   119,    -1,   119,
      69,   119,    -1,   119,    68,   119,    -1,   119,    70,   119,
      -1,   119,    71,   119,    -1,   119,    75,   119,    -1,   119,
      74,   119,    -1,   119,    78,   119,    -1,   119,    67,   119,
      -1,   119,    65,   119,    -1,   119,    66,   119,    -1,   119,
      77,   119,    -1,   119,    76,   119,    -1,   119,    79,   119,
      -1,   119,    80,   119,    -1,   119,    72,   119,    -1,   119,
      73,   119,    -1,   119,    81,   119,    -1,   119,    82,   119,
      -1,    79,   119,    -1,    86,   119,    -1,   119,    86,    -1,
      85,   119,    -1,   119,    85,    -1,    78,   119,    -1,    84,
     119,    -1,    83,   119,    -1,    94,   101,    90,   119,    -1,
     169,    -1,    36,    -1,    94,   119,   106,    -1,   125,    -1,
      88,   119,   102,    -1,   117,    -1,   121,    91,   120,    -1,
     120,    -1,    24,   140,    -1,   122,   146,   152,   164,   151,
     164,   152,   106,    99,   166,   160,    -1,   127,   129,   167,
     104,    -1,   126,   106,    -1,    30,    -1,   180,   146,    -1,
     145,   146,   117,    -1,   170,   146,   117,   108,   117,    -1,
     171,   146,   117,   108,   117,   108,   117,    -1,   154,   146,
     117,   111,    -1,   153,   146,   117,   110,    -1,    37,   146,
      98,    -1,    25,   146,    98,    -1,   128,   146,   150,    -1,
     137,    -1,    30,    -1,    30,    -1,   146,   156,    90,   148,
     155,    -1,   115,   181,    -1,   116,   133,   119,    -1,    31,
     140,    -1,   131,   146,   117,   106,   166,   160,   161,   114,
     160,    -1,    52,    -1,    39,    -1,    21,    -1,   172,   173,
      -1,   136,   135,    -1,   135,    -1,   138,   139,    -1,   138,
     108,   117,    -1,   138,   108,   142,   108,   117,   139,    -1,
     138,   108,   117,   108,   142,   108,   117,    -1,    34,   146,
     117,    -1,    -1,   161,    -1,    95,    -1,    -1,   143,   144,
      -1,    73,    -1,    72,    -1,     5,    -1,    40,    -1,    20,
      -1,    35,    -1,     9,    -1,     8,    -1,     3,    -1,     4,
      -1,    13,    -1,    15,    -1,    14,    -1,    38,    -1,    26,
      -1,    44,    -1,    46,    -1,    45,    -1,    -1,   147,    94,
      -1,    -1,   149,    92,    -1,    98,    -1,   181,    -1,   117,
      -1,    -1,   121,    -1,   181,    -1,    18,    -1,    19,    -1,
      41,    -1,     7,    -1,    49,    -1,   136,    -1,   181,    -1,
     158,    -1,    -1,   172,    -1,    -1,   158,   108,   159,    -1,
     159,    -1,   172,   115,    -1,    -1,    -1,   134,   163,    -1,
     117,    -1,   181,    -1,    -1,   165,    95,    -1,   168,    -1,
     167,   166,    -1,   181,    -1,   112,    -1,    95,   181,    -1,
     120,   164,    -1,   179,    -1,   132,    -1,   123,    -1,   162,
     164,    -1,   100,   164,    -1,     1,   141,    -1,   169,    42,
      -1,    42,    -1,    11,    -1,    10,    -1,    12,    -1,    16,
      -1,    22,    -1,    23,    -1,    47,    -1,    48,    -1,   176,
      -1,   174,   164,    -1,   174,   108,   130,    -1,   130,    -1,
       1,   141,   181,    -1,   173,    -1,   124,    -1,    32,    -1,
      43,    -1,    33,    -1,    50,    -1,    51,   140,    -1,   178,
     146,   117,   106,    99,   166,   160,    -1,    27,    -1,    28,
      -1,    29,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   110,   115,   122,   129,   135,   142,   144,
     146,   149,   149,   150,   150,   151,   151,   152,   152,   155,
     161,   165,   171,   175,   184,   187,   192,   198,   202,   209,
     216,   216,   226,   233,   241,   248,   255,   262,   269,   276,
     283,   290,   297,   304,   311,   318,   325,   332,   339,   346,
     353,   360,   367,   374,   381,   388,   395,   402,   409,   416,
     423,   430,   437,   444,   451,   457,   463,   469,   475,   481,
     487,   493,   499,   507,   512,   517,   524,   526,   535,   542,
     549,   553,   558,   575,   585,   588,   595,   601,   608,   617,
     628,   636,   644,   651,   658,   665,   669,   676,   683,   698,
     701,   711,   716,   731,   740,   742,   746,   754,   760,   765,
     780,   795,   817,   842,   851,   858,   865,   872,   872,   880,
     882,   886,   888,   890,   892,   894,   896,   898,   900,   902,
     904,   906,   908,   910,   912,   914,   916,   919,   919,   920,
     920,   923,   925,   929,   931,   938,   940,   944,   946,   950,
     952,   954,   958,   960,   964,   965,   969,   971,   977,   981,
     985,   993,   999,  1007,  1015,  1017,  1020,  1020,  1023,  1030,
    1036,  1040,  1042,  1048,  1051,  1053,  1055,  1057,  1060,  1063,
    1068,  1074,  1083,  1085,  1087,  1089,  1091,  1093,  1095,  1099,
    1103,  1112,  1120,  1128,  1130,  1139,  1144,  1148,  1150,  1152,
    1156,  1163,  1168,  1184,  1186,  1188,  1192
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
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "DEC", "INC", "'['",
  "'`'", "'}'", "')'", "','", "'{'", "']'", "'('", "';'", "$accept",
  "input", "args", "break_ok", "break_stat", "casttype", "backtick", "@1",
  "closebrace", "@2", "closepar", "@3", "comma", "@4", "comma_arglist",
  "comma_expr", "compound", "def_var_or_fun", "else_tail", "enterid",
  "entervarid", "err_expression", "@5", "expression", "expr_code",
  "expr_list", "for", "for_stat", "funcdef", "func_or_var", "function",
  "funid", "funname", "funvars", "idexpr", "if", "if_stat", "initassign",
  "leave_key", "local_list", "locals", "makelist", "makelist_expr",
  "makelist_normal", "nesting", "ok", "older_younger", "@6", "old_young",
  "one_arg_funs", "openpar", "@7", "openbrace", "@8", "opt_arglist",
  "opt_expression", "opt_expr_list", "optint_special", "optint_string",
  "opt_locals", "opt_parlist", "opt_vartype", "pars", "partype", "popdead",
  "pushdead", "return_stat", "return_tail", "semicol", "@9", "statement",
  "statements", "stm", "string", "two_arg_funs", "three_arg_funs",
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
      42,    47,    37,    33,   126,   327,   328,    91,    96,   125,
      41,    44,   123,    93,    40,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,   100,   101,   101,
     101,   103,   102,   105,   104,   107,   106,   109,   108,   110,
     110,   111,   111,   112,   113,   113,   114,   114,   115,   116,
     118,   117,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   121,
     121,   122,   123,   124,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   128,   129,   130,
     130,   131,   132,   133,   134,   134,   135,   136,   136,   137,
     137,   137,   137,   138,   139,   140,   141,   143,   142,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   147,   146,   149,
     148,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   160,   161,   162,   163,   163,   165,   164,   166,   167,
     167,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   170,   170,   170,   170,   170,   170,   170,   171,
     172,   173,   174,   174,   174,   175,   175,   176,   176,   176,
     177,   178,   179,   180,   180,   180,   181
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     2,     0,     2,     2,
       1,     2,     1,     3,     2,     2,     2,     1,     1,     1,
       0,     2,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     1,     3,     1,     3,     1,     3,
       1,     2,    11,     4,     2,     1,     2,     3,     5,     7,
       4,     4,     3,     3,     3,     1,     1,     1,     5,     2,
       3,     2,     9,     1,     1,     1,     2,     2,     1,     2,
       3,     6,     7,     3,     0,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     3,     1,
       2,     0,     0,     2,     1,     1,     0,     2,     1,     2,
       1,     1,     2,     2,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     7,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     157,   197,   199,   198,   200,   157,     3,     0,   156,   190,
       0,     1,     2,     0,    28,   206,     0,   196,   137,   193,
     195,    17,    24,    96,    25,   116,   206,    99,   103,     0,
     206,   155,     0,     0,     0,   191,     0,   194,   127,   128,
     121,   150,   126,   125,   183,   182,   184,   129,   131,   130,
     185,   147,   148,   123,   186,   187,   137,   133,   203,   204,
     205,    85,   137,   124,    74,   137,   132,   122,   149,   181,
     134,   136,   135,   188,   189,   151,     0,     0,     0,     0,
       0,     0,     0,     0,   100,    76,    15,   137,    95,    17,
     137,   137,   137,    73,   137,   137,   137,     0,   170,     0,
      17,   159,     0,   138,    28,   192,    18,   167,    30,    30,
      30,    69,    64,    71,    70,    67,    65,    11,     8,     9,
      10,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    66,     0,    84,     0,    30,
      30,   109,    30,    30,    30,   180,    30,    30,    86,     0,
       7,   105,   162,   162,   104,   162,   206,   206,   166,    83,
       0,   171,    78,     0,   166,   137,   176,   137,   175,    30,
     166,   169,   168,   137,   174,   139,     0,   160,    17,     5,
     113,    17,    77,     0,     0,    75,    32,    37,    36,    34,
      38,    35,    43,    42,    41,    40,    39,    44,    45,    54,
      55,    53,    47,    46,    48,    49,    60,    61,    51,    50,
      57,    56,    52,    58,    59,    62,    63,     0,    16,    17,
      94,   142,    17,    17,     0,    87,   206,   206,    17,    17,
     179,    81,   115,   101,   201,     0,   172,   178,    14,    31,
     173,    30,    30,   164,   163,   165,   177,    30,   206,     0,
     158,    30,    12,    72,    33,   117,    30,   120,   119,   118,
      30,    91,    20,    30,    90,    22,    30,    30,    23,    80,
     145,   166,   146,    15,    15,   108,   152,    98,     0,   153,
     140,     4,    17,   114,    17,    21,    88,    17,    30,    30,
       0,     6,   107,   106,    30,   111,    30,    79,   143,   166,
     161,     0,   112,    89,    30,   162,   161,    15,   206,   202,
       6,     0,   161,    27,     0,    26,   102,   161,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   198,   321,   178,   121,   202,   203,   179,   180,
     157,   158,   271,    34,   281,   284,   181,     6,   332,    15,
      16,   182,   183,    84,   184,   290,   185,   186,    17,    85,
      86,    18,    87,    30,    19,   187,   188,    29,   189,   295,
     296,    88,    89,   161,   251,    26,   243,   244,   279,    90,
      31,    32,   268,   269,   240,   319,   291,    91,    92,   297,
      99,     7,   100,   101,   325,   252,   190,   264,    35,    36,
     191,    97,   192,    93,    94,    95,     8,    20,    21,    22,
       9,    10,   193,   194,    96,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -299
static const yytype_int16 yypact[] =
{
      -3,  -299,  -299,  -299,  -299,    22,  -299,     2,  -299,  -299,
      -9,  -299,  -299,   -64,   -60,   -14,     1,  -299,  -299,  -299,
    -299,   -52,  -299,  -299,  -299,  -299,  -299,  -299,  -299,   655,
    -299,    -8,   -28,    40,   -24,  -299,   -22,  -299,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,   -23,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,  -299,   655,   655,   655,   655,
     655,   655,   655,   567,   698,  -299,  -299,  -299,  -299,   -13,
    -299,  -299,  -299,    33,  -299,  -299,  -299,   379,  -299,    -7,
      -6,  -299,    40,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,   -59,   -59,   -59,   -59,   -59,   -59,   698,  -299,  -299,
    -299,    -5,   698,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,  -299,  -299,   655,  -299,    -2,    30,
     -55,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,   -64,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
      42,  -299,  -299,   655,  -299,  -299,  -299,  -299,  -299,   -19,
    -299,  -299,  -299,  -299,  -299,  -299,    -8,  -299,    45,  -299,
    -299,    46,  -299,    -1,   655,  -299,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698,   698,   225,   284,   365,
     118,   458,   547,   547,   139,   139,   139,   139,   139,   139,
      47,    47,    70,    70,   -59,   -59,   -59,    37,  -299,    48,
    -299,  -299,    50,  -299,   -21,  -299,   -10,    51,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,   379,  -299,  -299,  -299,   698,
    -299,   -19,  -299,  -299,  -299,  -299,  -299,  -299,    -8,    53,
    -299,  -299,  -299,   -59,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
      52,  -299,  -299,  -299,  -299,  -299,    -8,  -299,    12,  -299,
    -299,  -299,  -299,  -299,    56,  -299,  -299,  -299,  -299,    58,
     474,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,   474,  -299,  -299,    30,  -299,  -299,  -299,    65,  -299,
    -299,   474,  -299,  -299,   474,  -299,  -299,  -299,  -299
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -299,  -299,  -101,  -193,  -299,  -299,  -299,  -299,  -107,  -299,
    -118,  -299,   -20,  -299,  -299,  -299,  -299,   149,  -299,    59,
    -299,  -103,  -299,   192,  -246,  -299,  -299,  -299,   148,  -299,
    -299,  -299,  -299,  -299,   127,  -299,  -299,  -299,  -299,  -133,
    -299,  -299,  -299,  -138,  -136,     0,  -109,  -299,  -299,  -299,
     -46,  -299,  -299,  -299,  -299,  -299,  -154,  -299,  -299,  -299,
    -299,  -299,  -299,   -25,  -258,  -153,  -299,  -299,  -170,  -299,
    -298,     5,  -299,  -299,  -299,  -299,   -29,  -120,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -207
static const yytype_int16 yytable[] =
{
      27,    33,   102,    13,   205,   199,   200,   199,   257,   201,
     108,    37,   320,    13,   260,   289,   109,  -117,  -117,   110,
     266,    23,    11,   326,     1,     2,   154,   155,   156,     1,
       2,    25,    14,   335,   -96,     3,   337,   253,   -29,   254,
       3,   159,   104,  -166,   162,   163,   164,     4,   166,   167,
     168,   277,   278,    28,     1,     2,   199,   242,   239,   245,
     246,   247,   317,   248,   249,     3,   103,   106,   329,   160,
     104,   -97,     4,   107,   336,   165,  -206,  -114,   289,   338,
     196,   280,   331,   195,  -154,   204,   263,   272,   238,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    -206,   309,   154,   155,   156,   149,   150,   151,   152,   153,
     274,   258,   154,   155,   156,   -93,   -92,   334,  -141,   261,
    -110,   262,   283,   308,   241,   300,   -19,   267,   288,   324,
     151,   152,   153,  -144,    12,   154,   155,   156,    24,   293,
     105,   197,   256,   312,   294,   315,   302,   102,   301,   250,
     327,   270,   328,   303,   265,   310,   311,   199,   313,   304,
     305,   255,     0,   306,   307,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,   154,   155,   156,   318,     0,     0,   330,
       0,   322,     0,   323,     0,   147,   148,   149,   150,   151,
     152,   153,   275,   276,   154,   155,   156,     0,   286,   287,
       0,   282,   285,     0,     0,     0,     0,     0,     0,   298,
       0,     0,     0,     0,     0,     0,   292,     0,     0,     0,
       0,     0,     0,   299,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   298,   111,   112,
     113,   114,   115,   116,   117,   122,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,     0,   316,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,   292,
     154,   155,   156,   333,     0,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,   237,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     155,   156,     0,     0,     0,   259,     0,     0,     0,     0,
     169,     0,   -30,   -30,   -30,   170,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   273,   -30,   -30,   -30,
     171,   -30,   -30,   172,   -30,   -30,   -30,   -30,   -30,   -30,
     173,     0,     0,   -30,   -30,   -30,   -30,   -30,   174,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     175,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
     154,   155,   156,     0,     0,     0,     0,   -30,   -30,     0,
       0,     0,   -30,   -30,   -30,   -30,     0,   -30,   -13,     0,
       0,   176,     0,   -30,   177,   169,     0,   -30,   -30,   -30,
     170,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   171,   -30,   -30,   172,   -30,
     -30,   -30,   -30,   -30,   -30,   173,     0,     0,   -30,   -30,
     -30,   -30,   -30,   174,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   175,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,   154,   155,   156,     0,     0,     0,     0,
       0,     0,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,     0,   -30,     0,     0,     0,   176,     0,   -30,   177,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,    51,    52,    53,     0,    54,
      55,     0,    56,    57,    58,    59,    60,    61,     0,   118,
     119,    62,    63,    64,    65,    66,     0,    67,    68,    69,
     120,    70,    71,    72,    73,    74,    75,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,     0,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,     0,     0,     0,
      78,    79,    80,    81,     0,    82,     0,     0,    38,    39,
      40,    83,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,    51,    52,    53,     0,    54,    55,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,     0,     0,     0,    78,    79,
      80,    81,     0,    82,     0,     0,     0,     0,     0,    83,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,   154,   155,   156
};

static const yytype_int16 yycheck[] =
{
      15,    21,    31,     1,   122,   108,   109,   110,   178,   110,
      56,    26,   310,     1,   184,   261,    62,    72,    73,    65,
     190,    30,     0,   321,    32,    33,    85,    86,    87,    32,
      33,    95,    30,   331,    94,    43,   334,   173,    52,   175,
      43,    87,    30,    95,    90,    91,    92,    50,    94,    95,
      96,    72,    73,    52,    32,    33,   159,   160,   159,   162,
     163,   164,   308,   166,   167,    43,    94,    91,   326,    89,
      30,    94,    50,    95,   332,    42,    95,    90,   324,   337,
     100,    91,    17,    90,    90,    90,   189,    88,    90,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      90,   291,    85,    86,    87,    78,    79,    80,    81,    82,
      93,    89,    85,    86,    87,    90,    90,   330,    90,   185,
      90,   187,    91,    91,   159,    92,    90,   193,   255,   319,
      80,    81,    82,    95,     5,    85,    86,    87,    10,   262,
      33,   102,   177,   296,   267,   303,   275,   196,   271,   169,
     324,   196,   325,   276,   189,   293,   294,   280,   298,   280,
     283,   176,    -1,   286,   287,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87,   309,    -1,    -1,   327,
      -1,   314,    -1,   316,    -1,    76,    77,    78,    79,    80,
      81,    82,   242,   243,    85,    86,    87,    -1,   248,   249,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,    -1,   268,
      -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,   302,    -1,    -1,    -1,    -1,   307,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,   324,
      85,    86,    87,   328,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,    -1,   156,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   204,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    49,    -1,
      51,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    83,    84,    85,    86,    -1,    88,    89,    -1,
      -1,    92,    -1,    94,    95,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    -1,    51,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    88,    -1,    -1,    -1,    92,    -1,    94,    95,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    88,    -1,    -1,     3,     4,
       5,    94,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    43,    50,    97,   113,   157,   172,   176,
     177,     0,   113,     1,    30,   115,   116,   124,   127,   130,
     173,   174,   175,    30,   124,    95,   141,   181,    52,   133,
     129,   146,   147,   108,   109,   164,   165,   181,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    22,    23,    25,    26,    27,    28,
      29,    30,    34,    35,    36,    37,    38,    40,    41,    42,
      44,    45,    46,    47,    48,    49,    78,    79,    83,    84,
      85,    86,    88,    94,   119,   125,   126,   128,   137,   138,
     145,   153,   154,   169,   170,   171,   180,   167,   181,   156,
     158,   159,   172,    94,    30,   130,    91,    95,   146,   146,
     146,   119,   119,   119,   119,   119,   119,   119,    32,    33,
      43,   101,   119,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    85,    86,    87,   106,   107,   146,
     108,   139,   146,   146,   146,    42,   146,   146,   146,     1,
       6,    21,    24,    31,    39,    51,    92,    95,   100,   104,
     105,   112,   117,   118,   120,   122,   123,   131,   132,   134,
     162,   166,   168,   178,   179,    90,   108,   115,    98,   117,
     117,    98,   102,   103,    90,   106,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,    90,    98,
     150,   181,   117,   142,   143,   117,   117,   117,   117,   117,
     141,   140,   161,   140,   140,   167,   181,   164,    89,   119,
     164,   146,   146,   117,   163,   181,   164,   146,   148,   149,
     159,   108,    88,   119,    93,   108,   108,    72,    73,   144,
      91,   110,   181,    91,   111,   181,   108,   108,   104,   120,
     121,   152,   181,   117,   117,   135,   136,   155,   172,   181,
      92,   117,   142,   117,    98,   117,   117,   117,    91,   164,
     106,   106,   135,   173,   108,   139,   108,   120,   117,   151,
     166,    99,   117,   117,   164,   160,   166,   152,   161,   160,
     106,    17,   114,   181,    99,   166,   160,   166,   160
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
#line 118 "parser"
    {
            (yyval) = *multargs(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 5:
#line 123 "parser"
    {
            (yyval) = *firstarg(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 6:
#line 129 "parser"
    {
            break_ok++;
        ;}
    break;

  case 7:
#line 136 "parser"
    {
            (yyval) = *break_stmnt();
        ;}
    break;

  case 11:
#line 149 "parser"
    {parse_error = err_backtick_expected; ;}
    break;

  case 13:
#line 150 "parser"
    {parse_error = err_closebrace_expected; ;}
    break;

  case 15:
#line 151 "parser"
    {parse_error = err_closepar_expected; ;}
    break;

  case 17:
#line 152 "parser"
    {parse_error = err_comma_expected; ;}
    break;

  case 19:
#line 157 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 21:
#line 167 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 23:
#line 178 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 26:
#line 194 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 28:
#line 203 "parser"
    {
            entervar();
        ;}
    break;

  case 29:
#line 210 "parser"
    {
        (yyval) = *fetchvar();
    ;}
    break;

  case 30:
#line 216 "parser"
    {
            parse_error = err_in_expression;
        ;}
    break;

  case 31:
#line 220 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 32:
#line 229 "parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 33:
#line 237 "parser"
    {
            (yyval) = *indexOp(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]));
        ;}
    break;

  case 34:
#line 244 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        ;}
    break;

  case 35:
#line 251 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        ;}
    break;

  case 36:
#line 258 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        ;}
    break;

  case 37:
#line 265 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        ;}
    break;

  case 38:
#line 272 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        ;}
    break;

  case 39:
#line 279 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        ;}
    break;

  case 40:
#line 286 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        ;}
    break;

  case 41:
#line 293 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        ;}
    break;

  case 42:
#line 300 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        ;}
    break;

  case 43:
#line 307 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        ;}
    break;

  case 44:
#line 314 "parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 45:
#line 321 "parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 46:
#line 328 "parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 47:
#line 335 "parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 48:
#line 342 "parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 49:
#line 349 "parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 50:
#line 356 "parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 51:
#line 363 "parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 52:
#line 370 "parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 53:
#line 377 "parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 54:
#line 384 "parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 55:
#line 391 "parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 56:
#line 398 "parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 57:
#line 405 "parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 58:
#line 412 "parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 59:
#line 419 "parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 60:
#line 426 "parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 61:
#line 433 "parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 62:
#line 440 "parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 63:
#line 447 "parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 64:
#line 453 "parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 65:
#line 459 "parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 66:
#line 465 "parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 67:
#line 471 "parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 68:
#line 477 "parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        ;}
    break;

  case 69:
#line 483 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 70:
#line 489 "parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 71:
#line 495 "parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        ;}
    break;

  case 72:
#line 503 "parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 73:
#line 508 "parser"
    {
            (yyval) = *stackframe(e_str | e_const);
        ;}
    break;

  case 74:
#line 513 "parser"
    {
            (yyval) = *stackframe(e_int | e_const);
        ;}
    break;

  case 75:
#line 520 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        ;}
    break;

  case 77:
#line 529 "parser"
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[(2) - (3)]));
        ;}
    break;

  case 78:
#line 536 "parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        ;}
    break;

  case 79:
#line 545 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 82:
#line 569 "parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        ;}
    break;

  case 83:
#line 579 "parser"
    {
            close_fun(&(yyvsp[(3) - (4)]));
        ;}
    break;

  case 85:
#line 589 "parser"
    {
            (yyval) = *fetchvar();
        ;}
    break;

  case 86:
#line 597 "parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        ;}
    break;

  case 87:
#line 604 "parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 88:
#line 613 "parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        ;}
    break;

  case 89:
#line 624 "parser"
    {
            (yyval) = *threeargs((yyvsp[(1) - (7)]).type, &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(7) - (7)]));
        ;}
    break;

  case 90:
#line 632 "parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 91:
#line 640 "parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        ;}
    break;

  case 92:
#line 647 "parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 93:
#line 654 "parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 94:
#line 661 "parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        ;}
    break;

  case 96:
#line 670 "parser"
    {
            open_fun();
        ;}
    break;

  case 97:
#line 677 "parser"
    {
            (yyval).evalue = fetchfun();
        ;}
    break;

  case 98:
#line 688 "parser"
    {
            make_frame();
            outbin((yyvsp[(5) - (5)]).code, (yyvsp[(5) - (5)]).codelen);
        ;}
    break;

  case 100:
#line 704 "parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    ;}
    break;

  case 102:
#line 725 "parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        ;}
    break;

  case 103:
#line 732 "parser"
    {
        initialization = 1;
    ;}
    break;

  case 106:
#line 748 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 107:
#line 756 "parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    ;}
    break;

  case 109:
#line 767 "parser"
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

  case 110:
#line 783 "parser"
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

  case 111:
#line 801 "parser"
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

  case 112:
#line 824 "parser"
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

  case 113:
#line 845 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 114:
#line 851 "parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        ;}
    break;

  case 115:
#line 859 "parser"
    {
            nestlevel++;
        ;}
    break;

  case 116:
#line 866 "parser"
    {
            yyerrok;
        ;}
    break;

  case 117:
#line 872 "parser"
    {parse_error = err_older_younger; ;}
    break;

  case 118:
#line 874 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        ;}
    break;

  case 137:
#line 919 "parser"
    {parse_error = err_openpar_expected; ;}
    break;

  case 139:
#line 920 "parser"
    {parse_error = err_openbrace_expected; ;}
    break;

  case 144:
#line 931 "parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        ;}
    break;

  case 157:
#line 971 "parser"
    {
            vartype = e_int;
        ;}
    break;

  case 160:
#line 987 "parser"
    {
            n_params++;
        ;}
    break;

  case 161:
#line 993 "parser"
    {
            pop_dead();
        ;}
    break;

  case 162:
#line 999 "parser"
    {
            push_dead();                    /* set new dead-level */
        ;}
    break;

  case 163:
#line 1009 "parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 166:
#line 1020 "parser"
    {parse_error = err_semicol_expected; ;}
    break;

  case 168:
#line 1024 "parser"
    {
            sem_err = 0;
        ;}
    break;

  case 169:
#line 1032 "parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        ;}
    break;

  case 172:
#line 1044 "parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        ;}
    break;

  case 180:
#line 1070 "parser"
    {
        stringbuf = xstrcat(stringbuf, lexstring);/* catenate the new string */
    ;}
    break;

  case 181:
#line 1075 "parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(lexstring);     /* duplicate initial string */
    ;}
    break;

  case 190:
#line 1104 "parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        ;}
    break;

  case 191:
#line 1114 "parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    ;}
    break;

  case 192:
#line 1123 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        ;}
    break;

  case 194:
#line 1133 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        ;}
    break;

  case 195:
#line 1140 "parser"
    {
            global_init = *catcode(&global_init, &(yyvsp[(1) - (1)]));
        ;}
    break;

  case 200:
#line 1157 "parser"
    {
            vartype = 0;
        ;}
    break;

  case 202:
#line 1175 "parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        ;}
    break;

  case 206:
#line 1192 "parser"
    {
            (yyval) = *stackframe(0);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2725 "parser.c"
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


#line 1196 "parser"


int yywrap(void)
{
    return 1;
}

