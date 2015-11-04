#ifndef INCLUDED_UTIL_H_
#define INCLUDED_UTIL_H_

#include <stdio.h>

void    out(FILE *bin, void const *source, size_t sourceSizeInBytes);
void    semantic(char const *s, ...);
size_t  fetchfun();

#endif
