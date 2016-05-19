#include "string.ih"

void stringcons_charPtr(String *str, char const *ntbs)
{
    str->type = e_str;

    str->data = s_new(rss_strdup(ntbs));
}

