#include "string.ih"

String *stringConstructor_cP(char const *str)
{
    static String ret = {e_str, {0}};

    ret.vu.i = newstring(rss_strdup(str));
    return &ret;
}

