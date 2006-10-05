#include "string.ih"

STRINGVAR_ stringCopyCons(STRINGVAR_ const *str)
{
    STRINGVAR_ ret = *str;

    varIncCount(&ret);
    ret.type = e_str;

    return ret;
}

