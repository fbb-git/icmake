#include "string.ih"

INTER_ *newstring(char *cp)
{
    INTER_ *ret = malloc(sizeof(INTER_));
    ret->count = 1;
    ret->ls.str = cp;

    return ret;
}
