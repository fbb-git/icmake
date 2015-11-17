#include "string.ih"

String const *stringcons()
{
    static String ret = {e_str, {0}};

    ret.vu.i = s_new(rss_strdup(""));

    return &ret;
}

