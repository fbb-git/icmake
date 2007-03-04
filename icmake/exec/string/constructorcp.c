#include "string.ih"

STRINGVAR_ *stringConstructor_cP(char const *str)
{
    static STRINGVAR_ ret = {e_str, {0}};

    ret.vu.i = newstring(xstrdup(str));
    return &ret;
}

