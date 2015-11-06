#ifndef INCLUDED_SCANNER_H_
#define INCLUDED_SCANNER_H_

void scanner(char const *infile);
int yylex();
char const *scanner_filenames();

#endif
