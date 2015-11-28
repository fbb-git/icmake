#ifndef INCLUDED_UTIL_H_
#define INCLUDED_UTIL_H_

#include <stdio.h>

char const *util_sourceName();
char const *util_string(void);
char const *util_unescape();
int         util_printf(char const *fmt, ...);  /* fill gu_lexstring */

void        util_catString(char const *txt);
void        util_out(FILE *bin, void const *source, size_t sourceSizeInBytes);
void        util_resetSemErr(void);
void        util_semantic(char const *s, ...);
void        util_setSourceName(char const *txt);
void        util_setString(char const *txt);
void        util_charString(size_t length, char const *txt);

#endif


