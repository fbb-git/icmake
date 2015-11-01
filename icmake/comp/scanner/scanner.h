#ifndef INCLUDED_SCANNER_H_
#define INCLUDED_SCANNER_H_

#include <stdio.h>

extern size_t   yyleng;
extern int      yylineno;

extern char *yytext;

extern FILE *yyin;
extern FILE *yyout;

int yylex();

#endif
