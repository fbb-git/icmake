#include "string.ih"

STRINGVAR_ *stringCopyCons(STRINGVAR_ const *str)
{
    static STRINGVAR_ ret;

    ret = *str;

    varIncCount(&ret);
    ret.type = e_str;

    return &ret;
}

