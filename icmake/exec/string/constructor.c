#include "string.ih"

STRINGVAR_ *stringConstructor()
{
    static STRINGVAR_ ret = {e_str, {0}};

    ret.vu.i = newstring(xstrdup(""));

    return &ret;
}

