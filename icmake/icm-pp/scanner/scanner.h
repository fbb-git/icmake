#ifndef INCLUDED_SCANNER_H_
#define INCLUDED_SCANNER_H_

#include <stddef.h>

void scanner(char const *infile, void (*ptr)(void));
int yylex();
char const *scanner_text();
char const *scanner_definition();
unsigned scanner_lineNr();
unsigned scanner_length();
void scanner_pushFile(char const *filename);
int  scanner_eof(void);
unsigned scanner_lastLineNr(void);

#endif
