
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

