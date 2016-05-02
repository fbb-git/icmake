#ifndef INCLUDED_UTIL_H_
#define INCLUDED_UTIL_H_

#include <stdio.h>
#include <sys/types.h>
#include <regex.h>

void regComp(regex_t *regex, char const *pattern);
char *regMatch(regex_t *regex, char const *line);
char *getLine(FILE *in);
FILE *openFile(char const *name, char const *mode); // "r" or "w"

#endif
