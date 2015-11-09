#include "builtin.h"

void stringWrite(void *dest, char const *begin, char const *end)
{
    char beyond = *end;
    *(char *)end = 0;

    *(char **)dest = rss_strcat(*(char **)dest, begin);

    *(char *)end = beyond;
}

