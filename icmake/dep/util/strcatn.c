#include "util.ih"

static char sPath[MAX_PATHLEN];

char const *strcatN(int count, ...)
{
    va_list args;
    va_start(args, count);

    sPath[0] = 0;

    for (; count--; )
        strcat(sPath, va_arg(args, char const *));

    va_end(args);

    return sPath;
}
