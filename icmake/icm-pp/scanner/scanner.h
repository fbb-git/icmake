#ifndef INCLUDED_SCANNER_H_
#define INCLUDED_SCANNER_H_

#include <stddef.h>

void scanner(char const *infile, void (*ptr)(void));
int yylex();
char const *scanner_text();
char const *scanner_definition();
size_t scanner_lineNr();
size_t scanner_length();
void scanner_pushFile(char const *filename);
int  scanner_eof(void);

#endif
