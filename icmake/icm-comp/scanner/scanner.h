#ifndef INCLUDED_SCANNER_H_
#define INCLUDED_SCANNER_H_

#include <stddef.h>

void scanner(char const *infile);
int yylex();
char const *scanner_filenames();

char const *scanner_savedText(void);
unsigned      scanner_savedLineNr(void);

#endif
