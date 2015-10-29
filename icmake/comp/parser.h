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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    C_BASE = 265,
    C_EXT = 266,
    C_PATH = 267,
    G_BASE = 268,
    G_EXT = 269,
    G_DEXT = 270,
    G_PATH = 271,
    ELEMENT = 272,
    ELSE = 273,
    EXEC = 274,
    EXECUTE = 275,
    EXISTS = 276,
    EXIT = 277,
    FGETS = 278,
    FIELDS = 279,
    FOR = 280,
    FPRINTF = 281,
    GETENV = 282,
    GETCH = 283,
    GETPID = 284,
    GETS = 285,
    IDENTIFIER = 286,
    IF = 287,
    INT = 288,
    LIST = 289,
    MAKELIST = 290,
    M_ECHO = 291,
    NUMBER = 292,
    PRINTF = 293,
    PUTENV = 294,
    RETURN = 295,
    SIZEOFLIST = 296,
    STAT = 297,
    STRING = 298,
    STRINGTYPE = 299,
    STRLEN = 300,
    STRLWR = 301,
    STRUPR = 302,
    STRFIND = 303,
    STRFORMAT = 304,
    SUBSTR = 305,
    SYSTEM = 306,
    TRIM = 307,
    TRIMLEFT = 308,
    TRIMRIGHT = 309,
    VOID = 310,
    WHILE = 311,
    AND_IS = 312,
    OR_IS = 313,
    XOR_IS = 314,
    SHL_IS = 315,
    SHR_IS = 316,
    DIV_IS = 317,
    MINUS_IS = 318,
    MUL_IS = 319,
    MOD_IS = 320,
    PLUS_IS = 321,
    OR = 322,
    AND = 323,
    EQUAL = 324,
    NOT_EQUAL = 325,
    SMALLER_EQUAL = 326,
    GREATER_EQUAL = 327,
    OLDER = 328,
    YOUNGER = 329,
    SHL = 330,
    SHR = 331,
    INC = 332,
    DEC = 333
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

#endif /* !YY_YY_PARSER_H_INCLUDED  */
