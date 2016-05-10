#ifndef INCLUDED_UTIL_H_
#define INCLUDED_UTIL_H_

#include <stdio.h>
#include <sys/types.h>
#include <regex.h>
#include <dirent.h>

#include "../vector/vector.h"

void regComp(regex_t *regex, char const *pattern);
Vector const *regMatch(regex_t *regex, char const *line);

char *getLine(FILE *in);
FILE *openFile(char const *name, char const *mode); // "r" or "w"

void toCwd();
void tryChdir(char const *subdir);
void UtilInit();

int **allocTable(int size);
int *allocRow(int size);
void freeTable(int **table, int size);
char const *strcatN(int count, ...);    // all char const *args are cat-ed and
                                        // the result is returned as a NTBS

#endif
