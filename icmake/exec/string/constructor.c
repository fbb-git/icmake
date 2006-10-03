#include "string.ih"

STRINGVAR_ stringConstructor()
{
    STRINGVAR_ ret = {e_str};
    ret.vu.i = newstring(xstrdup(""));

    return ret;
}

