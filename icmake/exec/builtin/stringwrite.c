#include "builtin.h"

void stringWrite(void *dest, char const *begin, char *end)
{
    char beyond = *end;
    *end = 0;

    *dest = xstrcat(*dest, begin);

    *end = beyond;
}

