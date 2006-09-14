/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

