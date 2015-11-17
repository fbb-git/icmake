#include "string.ih"

String const *stringcons_charPtr(char const *str)
{
    static String ret = {e_str, {0}};

    ret.vu.i = s_new(rss_strdup(str));
    return &ret;
}

