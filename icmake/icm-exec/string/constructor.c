#include "string.ih"

String *stringConstructor()
{
    static String ret = {e_str, {0}};

    ret.vu.i = newstring(rss_strdup(""));

    return &ret;
}

