#include "string.ih"

STRINGVAR_ stringConstructor_cP(char const *str)
{
    STRINGVAR_ ret = {e_str};

    ret.vu.i = newstring(xstrdup(str));
    return ret;
}

