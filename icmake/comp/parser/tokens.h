/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    EVAL = 275,
    EXEC = 276,
    EXECUTE = 277,
    EXISTS = 278,
    EXIT = 279,
    FGETS = 280,
    FIELDS = 281,
    FOR = 282,
    FPRINTF = 283,
    GETENV = 284,
    GETCH = 285,
    GETPID = 286,
    GETS = 287,
    IDENTIFIER = 288,
    IF = 289,
    INT = 290,
    LIST = 291,
    LISTFIND = 292,
    LISTLEN = 293,
    LISTUNION = 294,
    MAKELIST = 295,
    ECHO_TOKEN = 296,
    NUMBER = 297,
    PRINTF = 298,
    PUTENV = 299,
    RETURN = 300,
    STAT = 301,
    STRCHR = 302,
    STRING = 303,
    STRINGTYPE = 304,
    STRLEN = 305,
    STRLWR = 306,
    RESIZE = 307,
    STRUPR = 308,
    STRFIND = 309,
    STRFORMAT = 310,
    SUBSTR = 311,
    SYSTEM = 312,
    TRIM = 313,
    TRIMLEFT = 314,
    TRIMRIGHT = 315,
    VOID = 316,
    WHILE = 317,
    AND_IS = 318,
    OR_IS = 319,
    XOR_IS = 320,
    SHL_IS = 321,
    SHR_IS = 322,
    DIV_IS = 323,
    MINUS_IS = 324,
    MUL_IS = 325,
    MOD_IS = 326,
    PLUS_IS = 327,
    OR = 328,
    AND = 329,
    EQUAL = 330,
    NOT_EQUAL = 331,
    SMALLER_EQUAL = 332,
    GREATER_EQUAL = 333,
    OLDER = 334,
    YOUNGER = 335,
    SHL = 336,
    SHR = 337,
    INC = 338,
    DEC = 339
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
