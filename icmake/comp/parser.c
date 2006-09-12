
/*  A Bison parser, made from parser  */

#define	ARG_HEAD	258
#define	ARG_TAIL	259
#define	ASCII	260
#define	BREAK	261
#define	CHDIR	262
#define	CMD_HEAD	263
#define	CMD_TAIL	264
#define	C_BASE	265
#define	C_EXT	266
#define	C_PATH	267
#define	G_BASE	268
#define	G_EXT	269
#define	G_PATH	270
#define	ELEMENT	271
#define	ELSE	272
#define	EXEC	273
#define	EXECUTE	274
#define	EXISTS	275
#define	EXIT	276
#define	FGETS	277
#define	FIELDS	278
#define	FOR	279
#define	FPRINTF	280
#define	GETCH	281
#define	GETPID	282
#define	GETS	283
#define	IDENTIFIER	284
#define	IF	285
#define	INT	286
#define	LIST	287
#define	MAKELIST	288
#define	M_ECHO	289
#define	NUMBER	290
#define	PRINTF	291
#define	PUTENV	292
#define	RETURN	293
#define	SIZEOFLIST	294
#define	STAT	295
#define	STRING	296
#define	STRINGTYPE	297
#define	STRLEN	298
#define	STRLWR	299
#define	STRUPR	300
#define	SUBSTR	301
#define	SYSTEM	302
#define	VOID	303
#define	WHILE	304
#define	AND_IS	305
#define	OR_IS	306
#define	XOR_IS	307
#define	SHL_IS	308
#define	SHR_IS	309
#define	DIV_IS	310
#define	MINUS_IS	311
#define	MUL_IS	312
#define	MOD_IS	313
#define	PLUS_IS	314
#define	OR	315
#define	AND	316
#define	EQUAL	317
#define	NOT_EQUAL	318
#define	SMALLER_EQUAL	319
#define	GREATER_EQUAL	320
#define	OLDER	321
#define	YOUNGER	322
#define	SHL	323
#define	SHR	324
#define	INC	325
#define	DEC	326

#line 4 "parser"


#include "iccomp.h"


#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#define	YYACCEPT	return(0)
#define	YYABORT	return(1)
#define	YYERROR	goto yyerrlab
#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifdef  __STDC__
#define const
#endif



#define	YYFINAL		317
#define	YYFLAG		-32768
#define	YYNTBASE	91

#define YYTRANSLATE(x) ((unsigned)(x) <= 326 ? yytranslate[x] : 173)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    81,     2,     2,     2,    80,    65,     2,    89,
    86,    78,    76,    87,    77,     2,    79,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    90,    68,
    50,    69,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    64,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    88,    63,    85,    84,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    66,    67,    70,    71,
    72,    73,    74,    75,    82,    83
};

static const short yyrline[] = {     0,
   103,   106,   111,   118,   125,   131,   138,   140,   142,   146,
   146,   147,   147,   148,   148,   150,   156,   160,   166,   170,
   171,   173,   182,   185,   191,   197,   201,   208,   213,   218,
   225,   232,   239,   246,   253,   260,   267,   274,   281,   288,
   295,   302,   309,   316,   323,   330,   337,   344,   351,   358,
   365,   372,   379,   386,   393,   400,   407,   414,   421,   428,
   435,   441,   447,   453,   459,   465,   471,   477,   483,   491,
   496,   501,   508,   512,   519,   526,   530,   535,   552,   562,
   565,   572,   578,   585,   594,   602,   610,   617,   624,   631,
   633,   642,   649,   656,   670,   675,   692,   694,   698,   703,
   706,   710,   725,   741,   763,   788,   797,   804,   811,   818,
   821,   826,   828,   832,   834,   836,   838,   840,   842,   844,
   846,   848,   850,   852,   854,   856,   860,   860,   861,   861,
   863,   865,   869,   871,   878,   880,   884,   886,   890,   892,
   894,   898,   900,   903,   905,   908,   910,   916,   920,   924,
   932,   938,   946,   954,   956,   960,   960,   962,   969,   975,
   979,   981,   987,   990,   992,   994,   996,   999,  1002,  1007,
  1013,  1021,  1023,  1028,  1030,  1032,  1034,  1036,  1038,  1040,
  1044,  1053,  1058,  1062,  1064,  1069,  1071,  1075,  1077,  1079,
  1083,  1090,  1095,  1111,  1113,  1115,  1119
};

static const char * const yytname[] = {     0,
"error","$illegal.","ARG_HEAD","ARG_TAIL","ASCII","BREAK","CHDIR","CMD_HEAD","CMD_TAIL","C_BASE",
"C_EXT","C_PATH","G_BASE","G_EXT","G_PATH","ELEMENT","ELSE","EXEC","EXECUTE","EXISTS",
"EXIT","FGETS","FIELDS","FOR","FPRINTF","GETCH","GETPID","GETS","IDENTIFIER","IF",
"INT","LIST","MAKELIST","M_ECHO","NUMBER","PRINTF","PUTENV","RETURN","SIZEOFLIST","STAT",
"STRING","STRINGTYPE","STRLEN","STRLWR","STRUPR","SUBSTR","SYSTEM","VOID","WHILE","'='",
"AND_IS","OR_IS","XOR_IS","SHL_IS","SHR_IS","DIV_IS","MINUS_IS","MUL_IS","MOD_IS","PLUS_IS",
"OR","AND","'|'","'^'","'&'","EQUAL","NOT_EQUAL","'<'","'>'","SMALLER_EQUAL",
"GREATER_EQUAL","OLDER","YOUNGER","SHL","SHR","'+'","'-'","'*'","'/'","'%'",
"'!'","INC","DEC","'~'","'}'","')'","','","'{'","'('","';'",
"input"
};

static const short yyr1[] = {     0,
    91,    91,    92,    92,    93,    94,    95,    95,    95,    97,
    96,    99,    98,   101,   100,   102,   102,   103,   103,   105,
   104,   106,   107,   107,   108,   108,   109,   111,   110,   112,
   112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   112,   112,   112,   113,   114,   114,   115,   116,   117,   118,
   118,   119,   119,   119,   119,   119,   119,   119,   119,   119,
   119,   120,   121,   122,   123,   124,   125,   125,   126,   127,
   127,   128,   128,   128,   128,   129,   130,   131,   132,   134,
   133,   135,   135,   136,   136,   136,   136,   136,   136,   136,
   136,   136,   136,   136,   136,   136,   138,   137,   140,   139,
   141,   141,   142,   142,   143,   143,   144,   144,   145,   145,
   145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
   151,   152,   153,   154,   154,   156,   155,   157,   158,   158,
   159,   159,   159,   159,   159,   159,   159,   159,   159,   160,
   160,   161,   161,   162,   162,   162,   162,   162,   162,   162,
   163,   164,   165,   165,   165,   166,   166,   167,   167,   167,
   168,   169,   170,   171,   171,   171,   172
};

static const short yyr2[] = {     0,
     2,     1,     3,     1,     0,     1,     1,     1,     1,     0,
     2,     0,     2,     0,     2,     2,     1,     2,     1,     0,
     2,     3,     2,     2,     2,     1,     1,     0,     2,     3,
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

static const short yydefact[] = {   147,
   188,   190,   189,   191,   147,     2,     0,   146,   181,     0,
     1,     0,    27,   184,   187,   127,   186,    14,    23,    92,
    24,   109,   185,   197,   145,     0,     0,     0,   182,     0,
     0,   160,     0,    14,   149,     0,   128,    27,   183,    15,
   157,     0,     6,    98,   152,   152,    97,   152,   197,   197,
   156,    79,     0,   161,    74,     0,   156,   127,   166,   127,
   165,    28,   156,   159,   158,   127,   164,   129,     0,   150,
   169,    77,   108,    95,   192,     0,   162,   168,    11,   120,
   121,   114,   140,   119,   118,   175,   174,   176,   122,   124,
   123,   177,   137,   138,   116,   178,   179,   127,   194,   195,
   196,    81,   127,   117,    71,   127,   125,   115,   139,   171,
   126,   173,   172,   180,   141,     0,     0,     0,     0,     0,
     0,     0,    29,    73,    12,   127,    90,    14,   127,   127,
   127,    70,   127,   127,   127,   163,    28,    28,   154,   153,
   155,   167,    28,   143,     0,   148,    22,    28,    28,    28,
    66,    61,    68,    62,    64,    67,     7,     8,     9,     0,
    12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    63,    65,    80,     0,    28,    28,   102,    28,
    28,    28,   170,    28,    28,    82,    76,   135,   156,   136,
    12,    12,   101,   142,    94,     0,   130,    14,     4,   106,
    14,     0,    72,    30,    36,    37,    38,    39,    40,    32,
    35,    31,    33,    34,    41,    42,    51,    52,    50,    43,
    44,    45,    46,    47,    48,    58,    57,    53,    54,    49,
    55,    56,    59,    60,    13,    14,    89,   132,    14,    14,
     0,    83,   197,   197,    91,    14,    28,    28,     0,     5,
   100,    99,    28,    69,   110,    28,   112,   113,   111,    28,
    86,    17,    28,    85,    19,    28,    75,   133,   156,   151,
     0,     3,    14,   107,    14,    18,    84,    28,   152,   151,
    28,   104,    12,   197,   193,   105,     5,     0,   151,    26,
     0,    25,    96,   151,    78,     0,     0
};

static const short yydefgoto[] = {     5,
   218,   291,    51,   160,    52,    53,   195,   196,   273,    28,
   281,   284,    -1,    -1,    54,     6,   309,    14,    55,    56,
   123,    57,   208,    58,    59,    15,   124,   125,    16,   126,
    24,    60,    61,    62,   213,   214,   127,   128,   199,    72,
    23,   260,   261,   279,   129,    25,    26,   144,   145,   257,
   289,   209,   130,   131,   215,    33,     7,    34,    35,   299,
    73,    63,   140,    29,    30,    64,    31,    65,   132,   133,
   134,     8,    17,    18,    19,     9,    10,    66,    67,   135,
    32
};

static const short yypact[] = {    -7,
-32768,-32768,-32768,-32768,     7,-32768,     8,-32768,-32768,   -14,
-32768,   -70,   -67,-32768,-32768,-32768,-32768,   -61,-32768,-32768,
-32768,-32768,-32768,-32768,    44,   -56,    16,   -39,-32768,   -54,
   345,-32768,   -35,    -5,-32768,    16,-32768,-32768,-32768,-32768,
-32768,   -70,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    -3,-32768,-32768,   606,-32768,-32768,-32768,-32768,
-32768,    -6,-32768,-32768,-32768,-32768,-32768,-32768,    44,-32768,
-32768,-32768,-32768,-32768,-32768,   345,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    -4,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   606,   606,   606,   606,   606,
   606,   523,   646,-32768,-32768,-32768,-32768,     9,-32768,-32768,
-32768,    42,-32768,-32768,-32768,-32768,    -6,-32768,-32768,-32768,
-32768,-32768,-32768,    44,    14,-32768,-32768,-32768,-32768,-32768,
   -55,   -55,   -55,   -55,   -55,   -55,-32768,-32768,-32768,    10,
   646,   606,   606,   606,   606,   606,   606,   606,   606,   606,
   606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
   606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
   606,   606,-32768,-32768,-32768,    15,    20,   -29,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    31,-32768,-32768,
-32768,-32768,-32768,    44,-32768,    13,-32768,    41,-32768,-32768,
    45,   606,-32768,   646,   646,   646,   646,   646,   646,   646,
   646,   646,   646,   646,   104,   129,   212,    -9,   329,   417,
   417,    37,    37,    37,    37,    37,    37,    46,    46,    11,
    11,   -55,   -55,   -55,-32768,    47,-32768,-32768,    50,-32768,
     6,-32768,    43,    51,-32768,-32768,-32768,    49,   435,-32768,
-32768,-32768,-32768,   -55,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   435,-32768,-32768,-32768,    54,-32768,-32768,    20,-32768,-32768,
-32768,-32768,-32768,   115,-32768,-32768,-32768,   435,-32768,-32768,
   435,-32768,-32768,-32768,-32768,   137,-32768
};

static const short yypgoto[] = {-32768,
  -145,  -166,-32768,-32768,    66,-32768,  -158,-32768,   -18,-32768,
-32768,-32768,-32768,-32768,-32768,   138,-32768,   -17,   -51,-32768,
   140,  -133,-32768,-32768,-32768,   134,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   -62,-32768,-32768,-32768,  -139,   -25,
   114,  -118,-32768,-32768,-32768,   -26,-32768,-32768,-32768,-32768,
-32768,  -140,-32768,-32768,-32768,-32768,-32768,-32768,    90,  -283,
  -138,-32768,-32768,   -45,-32768,  -261,   111,-32768,-32768,-32768,
-32768,   -23,   -53,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -49
};


#define	YYLAST		729


static const short yytable[] = {    27,
    77,    36,   223,   207,   221,    78,   316,   290,    12,    39,
   139,   136,   141,    12,    20,    69,   305,   142,    70,    22,
    74,   -92,    75,     1,     2,   313,   193,   194,  -156,   300,
   315,   137,    37,   138,     3,    41,    13,     1,     2,   143,
     4,    38,  -110,  -110,    38,    36,   312,    40,     3,   314,
    68,   256,   269,   270,     4,   177,   178,   179,   180,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
   192,   148,   193,   194,     1,     2,   149,   277,   278,   150,
  -144,    79,   203,  -197,   -93,     3,   211,   210,   190,   191,
   192,   212,   193,   194,  -107,   222,   219,   220,   219,   197,
   255,   217,   200,   201,   202,  -197,   204,   205,   206,   198,
   186,   187,   188,   189,   190,   191,   192,   267,   193,   194,
   216,   188,   189,   190,   191,   192,   -88,   193,   194,   280,
   -87,   308,  -131,   287,   295,  -103,   317,   283,  -134,   -16,
   311,   147,    11,    21,   307,   219,   259,   258,   262,   263,
   264,   271,   265,   266,   302,    71,   293,   303,   146,    76,
   304,     0,   272,   268,   207,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
   189,   190,   191,   192,     0,   193,   194,     0,     0,     0,
   216,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
   193,   194,     0,   282,   285,     0,   288,     0,     0,     0,
     0,   292,     0,     0,   294,     0,     0,     0,   219,     0,
     0,   296,     0,     0,   297,     0,     0,     0,     0,     0,
   275,   276,     0,   298,     0,     0,     0,   286,   210,   306,
     0,     0,     0,     0,   310,   151,   152,   153,   154,   155,
   156,   161,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   301,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,   192,     0,   193,   194,     0,     0,     0,     0,     0,
     0,   224,   225,   226,   227,   228,   229,   230,   231,   232,
   233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
   243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
   253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    42,     0,   -28,   -28,   -28,
    43,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
   -28,   274,   -28,   -28,   -28,    44,   -28,   -28,    45,   -28,
   -28,   -28,   -28,   -28,    46,     0,     0,   -28,   -28,   -28,
   -28,   -28,    47,   -28,   -28,   -28,     0,   -28,   -28,   -28,
   -28,   -28,     0,    48,   178,   179,   180,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
   193,   194,     0,     0,     0,     0,     0,     0,     0,     0,
   -28,   -28,     0,     0,     0,   -28,   -28,   -28,   -28,   -10,
     0,     0,    49,   -28,    50,    42,     0,   -28,   -28,   -28,
    43,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
   -28,     0,   -28,   -28,   -28,    44,   -28,   -28,    45,   -28,
   -28,   -28,   -28,   -28,    46,     0,     0,   -28,   -28,   -28,
   -28,   -28,    47,   -28,   -28,   -28,     0,   -28,   -28,   -28,
   -28,   -28,     0,    48,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,   192,     0,   193,   194,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -28,   -28,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
     0,     0,    49,   -28,    50,    80,    81,    82,     0,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,     0,
    93,    94,    95,     0,    96,    97,     0,    98,    99,   100,
   101,   102,     0,   157,   158,   103,   104,   105,   106,   107,
     0,   108,   109,   110,   159,   111,   112,   113,   114,   115,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   116,   117,
     0,     0,     0,   118,   119,   120,   121,     0,    80,    81,
    82,   122,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,     0,    93,    94,    95,     0,    96,    97,     0,
    98,    99,   100,   101,   102,     0,     0,     0,   103,   104,
   105,   106,   107,     0,   108,   109,   110,     0,   111,   112,
   113,   114,   115,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   116,   117,     0,     0,     0,   118,   119,   120,   121,
     0,     0,     0,     0,   122,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,     0,   193,   194
};

static const short yycheck[] = {    18,
    50,    25,   161,   137,   150,    51,     0,   269,     1,    27,
    62,    57,    62,     1,    29,    34,   300,    63,    36,    90,
    46,    89,    48,    31,    32,   309,    82,    83,    90,   291,
   314,    58,    89,    60,    42,    90,    29,    31,    32,    66,
    48,    29,    72,    73,    29,    69,   308,    87,    42,   311,
    86,   197,   211,   212,    48,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    80,    98,    82,    83,    31,    32,   103,    72,    73,   106,
    86,    85,    41,    90,    89,    42,   138,   137,    78,    79,
    80,   143,    82,    83,    86,    86,   148,   149,   150,   126,
    86,    88,   129,   130,   131,    86,   133,   134,   135,   128,
    74,    75,    76,    77,    78,    79,    80,    87,    82,    83,
   144,    76,    77,    78,    79,    80,    86,    82,    83,    87,
    86,    17,    86,   267,   280,    86,     0,    87,    90,    86,
   307,    76,     5,    10,   303,   197,   198,   197,   200,   201,
   202,   214,   204,   205,   294,    42,   275,   298,    69,    49,
   299,    -1,   216,   209,   298,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    -1,    82,    83,    -1,    -1,    -1,
   214,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
    82,    83,    -1,   263,   264,    -1,   268,    -1,    -1,    -1,
    -1,   273,    -1,    -1,   276,    -1,    -1,    -1,   280,    -1,
    -1,   283,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
   259,   260,    -1,   289,    -1,    -1,    -1,   266,   298,   301,
    -1,    -1,    -1,    -1,   304,   116,   117,   118,   119,   120,
   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   293,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
    -1,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,   222,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    -1,    -1,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
    46,    47,    -1,    49,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
    -1,    -1,    88,    89,    90,     1,    -1,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    -1,    -1,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
    46,    47,    -1,    49,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    -1,
    -1,    -1,    88,    89,    90,     3,     4,     5,    -1,     7,
     8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
    18,    19,    20,    -1,    22,    23,    -1,    25,    26,    27,
    28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
    -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
    -1,    -1,    -1,    81,    82,    83,    84,    -1,     3,     4,
     5,    89,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    -1,    18,    19,    20,    -1,    22,    23,    -1,
    25,    26,    27,    28,    29,    -1,    -1,    -1,    33,    34,
    35,    36,    37,    -1,    39,    40,    41,    -1,    43,    44,
    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
    -1,    -1,    -1,    -1,    89,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,    78,    79,    80,    -1,    82,    83
};
#define YYPURE 1

#line 2 "bison.simple"

#define ICCE_MODIFICATIONS
/*
    The ICCE_MODIFICATIONS locate the parser's stacks outside of the yyparse()
    through calls to malloc(). Therefore, the larger stack to be used with
    bison's parsers isn't necessary anymore in normal circumstances.

    Modification date: 21 / 3 / 90
    Modications by Frank Brokken
*/

/*
    ICCE MODIFICATION 19/12/1991 by FBB

    Declaration of functions and variables used by yyparse(),
    but otherwise not declared in de generated code.

    ICCE MODIFICATION 02/21/1992 by KK

    Declaration of yyerror() and yylex() using ANSI only if
    MSDOS is defined (automatically defined by MSC 6.00a).
    Otherwise, no prototyping.
    All eoln-comments changed to standard comments.
*/

#ifdef MSDOS
    int yyerror(char *);                    /* yyparse() error function */
    int yylex(void);                        /* yylex() */
#else
    int yyerror ();
    int yylex ();
#endif

/*
    END OF ICCE MODIFICATION
*/

/* Skeleton output parser for bison,
   copyright (C) 1984 Bob Corbett and Richard Stallman

                       NO WARRANTY

  BECAUSE THIS PROGRAM IS LICENSED FREE OF CHARGE, WE PROVIDE ABSOLUTELY
NO WARRANTY, TO THE EXTENT PERMITTED BY APPLICABLE STATE LAW.  EXCEPT
WHEN OTHERWISE STATED IN WRITING, FREE SOFTWARE FOUNDATION, INC,
RICHARD M. STALLMAN AND/OR OTHER PARTIES PROVIDE THIS PROGRAM "AS IS"
WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY
AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE PROGRAM PROVE
DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR
CORRECTION.

 IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW WILL RICHARD M.
STALLMAN, THE FREE SOFTWARE FOUNDATION, INC., AND/OR ANY OTHER PARTY
WHO MAY MODIFY AND REDISTRIBUTE THIS PROGRAM AS PERMITTED BELOW, BE
LIABLE TO YOU FOR DAMAGES, INCLUDING ANY LOST PROFITS, LOST MONIES, OR
OTHER SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE
USE OR INABILITY TO USE (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR
DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY THIRD PARTIES OR
A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS) THIS
PROGRAM, EVEN IF YOU HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH
DAMAGES, OR FOR ANY CLAIM BY ANY OTHER PARTY.

                GENERAL PUBLIC LICENSE TO COPY

  1. You may copy and distribute verbatim copies of this source file
as you receive it, in any medium, provided that you conspicuously and
appropriately publish on each copy a valid copyright notice "Copyright
(C) 1985 Free Software Foundation, Inc."; and include following the
copyright notice a verbatim copy of the above disclaimer of warranty
and of this License.  You may charge a distribution fee for the
physical act of transferring a copy.

  2. You may modify your copy or copies of this source file or
any portion of it, and copy and distribute such modifications under
the terms of Paragraph 1 above, provided that you also do the following:

    a) cause the modified files to carry prominent notices stating
    that you changed the files and the date of any change; and

    b) cause the whole of any work that you distribute or publish,
    that in whole or in part contains or is a derivative of this
    program or any part thereof, to be licensed at no charge to all
    third parties on terms identical to those contained in this
    License Agreement (except that you may choose to grant more extensive
    warranty protection to some or all third parties, at your option).

    c) You may charge a distribution fee for the physical act of
    transferring a copy, and you may at your option offer warranty
    protection in exchange for a fee.

Mere aggregation of another unrelated program with this program (or its
derivative) on a volume of a storage or distribution medium does not bring
the other program under the scope of these terms.

  3. You may copy and distribute this program (or a portion or derivative
of it, under Paragraph 2) in object code or executable form under the terms
of Paragraphs 1 and 2 above provided that you also do one of the following:

    a) accompany it with the complete corresponding machine-readable
    source code, which must be distributed under the terms of
    Paragraphs 1 and 2 above; or,

    b) accompany it with a written offer, valid for at least three
    years, to give any third party free (except for a nominal
    shipping charge) a complete machine-readable copy of the
    corresponding source code, to be distributed under the terms of
    Paragraphs 1 and 2 above; or,

    c) accompany it with the information you received as to where the
    corresponding source code may be obtained.  (This alternative is
    allowed only for noncommercial distribution and only if you
    received the program in object code or executable form alone.)

For an executable file, complete source code means all the source code for
all modules it contains; but, as a special exception, it need not include
source code for modules which are standard libraries that accompany the
operating system on which the executable file runs.

  4. You may not copy, sublicense, distribute or transfer this program
except as expressly provided under this License Agreement.  Any attempt
otherwise to copy, sublicense, distribute or transfer this program is void and
your rights to use the program under this License agreement shall be
automatically terminated.  However, parties who have received computer
software programs from you with this License Agreement will not have
their licenses terminated so long as such parties remain in full compliance.

  5. If you wish to incorporate parts of this program into other free
programs whose distribution conditions are different, write to the Free
Software Foundation at 675 Mass Ave, Cambridge, MA 02139.  We have not yet
worked out a simple rule that can be stated here, but we will often permit
this.  We will be guided by the two goals of preserving the free status of
all derivatives of our free software and of promoting the sharing and reuse of
software.


In other words, you are welcome to use, share and improve this program.
You are forbidden to forbid anyone else to use, share and improve
what you give them.   Help stamp out software-hoarding!  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         -2
#define YYEOF           0
#define YYFAIL          goto yyerrlab;

#define YYTERROR        1

#ifndef YYIMPURE
#define YYLEX           yylex()
#endif

#ifndef YYPURE
#define YYLEX           yylex(&yylval, &yylloc)
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYIMPURE

int     yychar;                 /*  the lookahead symbol                */
YYSTYPE yylval;                 /*  the semantic value of the           */
                                /*  lookahead symbol                    */

YYLTYPE yylloc;                 /*  location data for the lookahead     */
                                /*  symbol                              */

int yynerr;                     /*  number of parse errors so far       */

#ifdef YYDEBUG
int yydebug = 0;                /*  nonzero means print parse trace     */
#endif

#endif  /* YYIMPURE */


/*  YYMAXDEPTH indicates the initial size of the parser's stacks        */

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 200
#endif

/*  YYMAXLIMIT is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#ifndef YYMAXLIMIT
#define YYMAXLIMIT 10000
#endif

#ifdef MSDOS
#include <malloc.h>
#include <memory.h>
#define bcopy(src, dst, num) memcpy((dst), (src), (num))
#endif

#line 167 "bison.simple"
int
yyparse()
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  YYLTYPE *yylsp;
  int yyerrstatus;      /*  number of tokens to shift before error messages enabled */
  int yychar1;          /*  lookahead token as an internal (translated) token number */

  int yymaxdepth = YYMAXDEPTH;

#ifndef YYPURE
  int yychar;
  YYSTYPE yylval;
  YYLTYPE yylloc;
#endif

#ifdef YYDEBUG
  extern int yydebug;
#endif


  YYSTYPE yyval;                /*  the variable used to return         */
                                /*  semantic values from the action     */
                                /*  routines                            */

  int yylen;

#ifndef ICCE_MODIFICATIONS
  short yyssa[YYMAXDEPTH];      /*  the state stack                     */
  YYSTYPE yyvsa[YYMAXDEPTH];    /*  the semantic value stack            */
  YYLTYPE yylsa[YYMAXDEPTH];    /*  the location stack                  */

  short *yyss = yyssa;          /*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;        /*  to allow yyoverflow to reallocate them elsewhere */
  YYLTYPE *yyls = yylsa;
#else

/*
    Sub-modification defining ICCEACCEPT and ICCEABORT, and redefining
    YYACCEPT and YYABORT:
                          january 03, 1992
                               by FBB
*/
#define ICCEACCEPT  return(0)               /* NOTE: ICCEACCEPT MUST BE THE */
                                            /* ORIGINAL YYACCEPT DEFINITION */

#define ICCEABORT   return(1)               /* NOTE: ICCEABORT MUST BE THE */
                                            /* ORIGINAL YYABORT DEFINITION */

#undef YYACCEPT
#define YYACCEPT     {free(yyss); free(yyvs); free(yyls); ICCEACCEPT;}

    short
        *yyss;
    YYSTYPE
        *yyvs;
    YYLTYPE
        *yyls;

    if
    (
        !
        (
            (yyss = (short *) malloc(YYMAXDEPTH * sizeof(short)))
            &&
            (yyvs = (YYSTYPE *) malloc(YYMAXDEPTH * sizeof(YYSTYPE)))
            &&
            (yyls = (YYLTYPE *) malloc(YYMAXDEPTH * sizeof(YYLTYPE)))
        )
    )
    {
        yyerror("No stack memory");
        YYABORT;
    }

#undef YYABORT
#define YYABORT     {free(yyss); free(yyvs); free(yyls); ICCEABORT;}

#endif
#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerr = 0;
  yychar = YYEMPTY;             /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
  yylsp = yyls;

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yymaxdepth - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      YYLTYPE *yyls1 = yyls;
      short *yyss1 = yyss;

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
         the data in use in that stack, in bytes.  */
      yyoverflow("parser stack overflow",
                 &yyss1, size * sizeof (*yyssp),
                 &yyvs1, size * sizeof (*yyvsp),
                 &yyls1, size * sizeof (*yylsp),
                 &yymaxdepth);

      yyss = yyss1; yyvs = yyvs1; yyls = yyls1;
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yymaxdepth >= YYMAXLIMIT)
        yyerror("parser stack overflow");
      yymaxdepth *= 2;
      if (yymaxdepth > YYMAXLIMIT)
        yymaxdepth = YYMAXLIMIT;
      yyss = (short *) alloca (yymaxdepth * sizeof (*yyssp));
      bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yymaxdepth * sizeof (*yyvsp));
      bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yymaxdepth * sizeof (*yylsp));
      bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#ifdef YYDEBUG
      if (yydebug)
        fprintf(stderr, "Stack size increased to %d\n", yymaxdepth);
#endif

      if (yyssp >= yyss + yymaxdepth - 1)
        YYABORT;
    }

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
yyresume:

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#ifdef YYDEBUG
      if (yydebug)
        fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)              /* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;           /* Don't call YYLEX any more */

#ifdef YYDEBUG
      if (yydebug)
        fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#ifdef YYDEBUG
      if (yydebug)
        fprintf(stderr, "Next token is %d (%s)\n", yychar, yytname[yychar1]);
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen]; /* implement default value of the action */

#ifdef YYDEBUG
  if (yydebug)
    {
      if (yylen == 1)
        fprintf (stderr, "Reducing 1 value via line %d, ",
                 yyrline[yyn]);
      else
        fprintf (stderr, "Reducing %d values via line %d, ",
                 yylen, yyrline[yyn]);
    }
#endif


  switch (yyn) {

case 3:
#line 115 "parser"
{
            yyval = *multargs(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 4:
#line 120 "parser"
{
            yyval = *firstarg(&yyvsp[0]);
        ;
    break;}
case 5:
#line 126 "parser"
{
            break_ok++;
        ;
    break;}
case 6:
#line 133 "parser"
{
            yyval = *break_stmnt();
        ;
    break;}
case 10:
#line 146 "parser"
{parse_error = err_closebrace_expected; ;
    break;}
case 12:
#line 147 "parser"
{parse_error = err_closepar_expected; ;
    break;}
case 14:
#line 148 "parser"
{parse_error = err_comma_expected; ;
    break;}
case 16:
#line 153 "parser"
{
            yyval = yyvsp[0];
        ;
    break;}
case 18:
#line 163 "parser"
{
            yyval = yyvsp[0];
        ;
    break;}
case 20:
#line 171 "parser"
{ parse_error = err_comma_or_closepar_expected; ;
    break;}
case 22:
#line 177 "parser"
{
            yyval = yyvsp[-1];
        ;
    break;}
case 25:
#line 194 "parser"
{
            yyval = yyvsp[0];
        ;
    break;}
case 27:
#line 203 "parser"
{
            entervar();
        ;
    break;}
case 28:
#line 209 "parser"
{
            parse_error = err_in_expression;
        ;
    break;}
case 29:
#line 213 "parser"
{
            yyval = yyvsp[0];
        ;
    break;}
case 30:
#line 222 "parser"
{
            yyval = *assign(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 31:
#line 229 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], multiply, "*=");
        ;
    break;}
case 32:
#line 236 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], divide, "/=");
        ;
    break;}
case 33:
#line 243 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], modulo, "%=");
        ;
    break;}
case 34:
#line 250 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], addition, "+=");
        ;
    break;}
case 35:
#line 257 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], subtract, "-=");
        ;
    break;}
case 36:
#line 264 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], band, "&=");
        ;
    break;}
case 37:
#line 271 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], bor, "|=");
        ;
    break;}
case 38:
#line 278 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], xor, "^=");
        ;
    break;}
case 39:
#line 285 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], shl, "<<=");
        ;
    break;}
case 40:
#line 292 "parser"
{
            yyval = *math_ass(&yyvsp[-2], &yyvsp[0], shr, ">>=");
        ;
    break;}
case 41:
#line 299 "parser"
{
            yyval = *or_boolean(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 42:
#line 306 "parser"
{
            yyval = *and_boolean(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 43:
#line 313 "parser"
{
            yyval = *equal(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 44:
#line 320 "parser"
{
            yyval = *unequal(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 45:
#line 327 "parser"
{
            yyval = *smaller(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 46:
#line 334 "parser"
{
            yyval = *greater(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 47:
#line 341 "parser"
{
            yyval = *sm_equal(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 48:
#line 348 "parser"
{
            yyval = *gr_equal(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 49:
#line 355 "parser"
{
            yyval = *addition(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 50:
#line 362 "parser"
{
            yyval = *band(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 51:
#line 369 "parser"
{
            yyval = *bor(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 52:
#line 376 "parser"
{
            yyval = *xor(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 53:
#line 383 "parser"
{
            yyval = *shl(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 54:
#line 390 "parser"
{
            yyval = *shr(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 55:
#line 397 "parser"
{
            yyval = *subtract(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 56:
#line 404 "parser"
{
            yyval = *multiply(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 57:
#line 411 "parser"
{
            yyval = *young(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 58:
#line 418 "parser"
{
            yyval = *old(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 59:
#line 425 "parser"
{
            yyval = *divide(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 60:
#line 432 "parser"
{
            yyval = *modulo(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 61:
#line 438 "parser"
{
            yyval = *negate(&yyvsp[0]);
        ;
    break;}
case 62:
#line 444 "parser"
{
            yyval = *incdec(pre_op, op_inc, &yyvsp[0]);
        ;
    break;}
case 63:
#line 450 "parser"
{
            yyval = *incdec(post_op, op_inc, &yyvsp[-1]);
        ;
    break;}
case 64:
#line 456 "parser"
{
            yyval = *incdec(pre_op, op_dec, &yyvsp[0]);
        ;
    break;}
case 65:
#line 462 "parser"
{
            yyval = *incdec(post_op, op_dec, &yyvsp[-1]);
        ;
    break;}
case 66:
#line 468 "parser"
{
            yyval = yyvsp[0];
        ;
    break;}
case 67:
#line 474 "parser"
{
            yyval = *bnot(&yyvsp[0]);
        ;
    break;}
case 68:
#line 480 "parser"
{
            yyval = *not_boolean(&yyvsp[0]);
        ;
    break;}
case 69:
#line 488 "parser"
{
            yyval = *cast(yyvsp[-2].type, &yyvsp[0]);
        ;
    break;}
case 70:
#line 493 "parser"
{
            yyval = stackframe(e_str | e_const);
        ;
    break;}
case 71:
#line 498 "parser"
{
            yyval = stackframe(e_int | e_const);
        ;
    break;}
case 72:
#line 505 "parser"
{
            yyval = yyvsp[-1];
        ;
    break;}
case 74:
#line 514 "parser"
{
            yyval = *expr_stmnt(&yyvsp[0]);
        ;
    break;}
case 75:
#line 523 "parser"
{
            yyval = *catcode(&yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 78:
#line 547 "parser"
{
            yyval = *for_stmnt(&yyvsp[-8], &yyvsp[-6], &yyvsp[-4], &yyvsp[-1]);
        ;
    break;}
case 79:
#line 557 "parser"
{
            close_fun(&yyvsp[-1]);
        ;
    break;}
case 81:
#line 567 "parser"
{
            yyval = fetchvar();
        ;
    break;}
case 82:
#line 575 "parser"
{
            yyval = *zeroargs(yyvsp[-1].type);
        ;
    break;}
case 83:
#line 582 "parser"
{
            yyval = *onearg(yyvsp[-2].type, &yyvsp[0]);
        ;
    break;}
case 84:
#line 591 "parser"
{
            yyval = *twoargs(yyvsp[-4].type, &yyvsp[-2], &yyvsp[0]);
        ;
    break;}
case 85:
#line 599 "parser"
{
            yyval = *optint_string(yyvsp[-3].type, &yyvsp[-1], &yyvsp[0]);
        ;
    break;}
case 86:
#line 607 "parser"
{
            yyval = *optint_special(yyvsp[-3].type, &yyvsp[-1], &yyvsp[0]);
        ;
    break;}
case 87:
#line 614 "parser"
{
            yyval = *specials(f_printf, &yyvsp[0]);
        ;
    break;}
case 88:
#line 621 "parser"
{
            yyval = *exec_fprintf(yyvsp[-2].type, &yyvsp[0]);
        ;
    break;}
case 89:
#line 628 "parser"
{
            yyval = *callfun(yyvsp[-2].evalue, &yyvsp[0]);
        ;
    break;}
case 91:
#line 637 "parser"
{
            yyval = *strupr_lwr(yyvsp[-2].type, &yyvsp[0]);  /* string conversion */
        ;
    break;}
case 92:
#line 644 "parser"
{
            open_fun();
        ;
    break;}
case 93:
#line 651 "parser"
{
            yyval.evalue = fetchfun();
        ;
    break;}
case 94:
#line 662 "parser"
{
            make_frame();
        ;
    break;}
case 96:
#line 685 "parser"
{
            yyval = *if_stmnt(&yyvsp[-6], &yyvsp[-4], &yyvsp[-1]);
        ;
    break;}
case 102:
#line 714 "parser"
{
            yyval = *makelist
                 (
                     multargs
                     (
                         firstarg(&yyvsp[0]),     /* O_FILE is passed */
                         &yyvsp[-1]                /* expression is passed */
                     ),
                     op_hlt                 /* not op_younger or op_older */
                 );
        ;
    break;}
case 103:
#line 730 "parser"
{
            yyval = *makelist
                 (
                     multargs
                     (
                         firstarg(&yyvsp[-2]),     /* fileattribute is passed */
                         &yyvsp[0]                /* expression is passed */
                     ),
                     op_hlt                 /* not op_younger or op_older */
                 );
        ;
    break;}
case 104:
#line 748 "parser"
{
            yyval = *makelist
                 (
                    multargs
                    (
                        multargs
                        (
                            firstarg(&yyvsp[0]),  /* O_FILE   is passed */
                            &yyvsp[-5]             /* 1st expression is passed */
                        ),
                        &yyvsp[-1]                 /* 2nd expression is passed */
                     ),
                     yyvsp[-3].type                /* older/younger */
                 );
        ;
    break;}
case 105:
#line 771 "parser"
{
            yyval = *makelist
                 (
                    multargs
                    (
                        multargs
                        (
                            firstarg(&yyvsp[-6]),  /* attribute is passed */
                            &yyvsp[-4]             /* 2nd expression is passed */
                        ),
                        &yyvsp[0]                 /* 3rd expression is passed */
                     ),
                     yyvsp[-2].type                /* older/younger */
                 );
        ;
    break;}
case 106:
#line 792 "parser"
{
            yyval = yyvsp[0];
        ;
    break;}
case 107:
#line 798 "parser"
{
            yyval = stackframe(e_int | e_const);
            yyval.evalue = O_FILE;
        ;
    break;}
case 108:
#line 806 "parser"
{
            nestlevel++;
        ;
    break;}
case 109:
#line 813 "parser"
{
            yyerrok;
        ;
    break;}
case 110:
#line 819 "parser"
{parse_error = err_older_younger; ;
    break;}
case 111:
#line 821 "parser"
{
            yyval = yyvsp[0];
        ;
    break;}
case 127:
#line 860 "parser"
{parse_error = err_openpar_expected; ;
    break;}
case 129:
#line 861 "parser"
{parse_error = err_openbrace_expected; ;
    break;}
case 134:
#line 872 "parser"
{
            yyval = stackframe(e_int | e_const);
            yyval.evalue = 1;
        ;
    break;}
case 147:
#line 911 "parser"
{
            vartype = e_int;
        ;
    break;}
case 150:
#line 927 "parser"
{
            n_params++;
        ;
    break;}
case 151:
#line 933 "parser"
{
            pop_dead();
        ;
    break;}
case 152:
#line 939 "parser"
{
            push_dead();                    /* set new dead-level */
        ;
    break;}
case 153:
#line 949 "parser"
{
            yyval = *return_stmnt(yyvsp[-1].type, &yyvsp[0]);
        ;
    break;}
case 156:
#line 960 "parser"
{parse_error = err_semicol_expected; ;
    break;}
case 158:
#line 964 "parser"
{
            sem_err = 0;
        ;
    break;}
case 159:
#line 972 "parser"
{
            yyval = *cat_stmnt(&yyvsp[-1], &yyvsp[0]);
        ;
    break;}
case 162:
#line 984 "parser"
{
            yyval = yyvsp[-1];
        ;
    break;}
case 170:
#line 1010 "parser"
{
        stringbuf = xstrcat(stringbuf, string);/* catenate the new string */
    ;
    break;}
case 171:
#line 1015 "parser"
{
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(string);        /* duplicate initial string */
    ;
    break;}
case 181:
#line 1046 "parser"
{
            parse_error = err_identifier_expected;
            vartype = yyvsp[0].type;
        ;
    break;}
case 191:
#line 1085 "parser"
{
            vartype = 0;
        ;
    break;}
case 193:
#line 1103 "parser"
{
            yyval = *while_stmnt(&yyvsp[-4], &yyvsp[-1]);
        ;
    break;}
case 197:
#line 1120 "parser"
{
            yyval = stackframe(0);
        ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 408 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#ifdef YYDEBUG
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
        fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerr;
      yyerror("parse error");
    }

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
        YYABORT;

#ifdef YYDEBUG
      if (yydebug)
        fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;              /* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#ifdef YYDEBUG
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
        fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
        goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 1124 "parser"


int yywrap()
{
    return (1);
}
