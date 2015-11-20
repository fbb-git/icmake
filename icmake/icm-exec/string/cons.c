#include "string.ih"

void stringcons(String *str)
{
    str->type = e_str;

    str->data = s_new(rss_strdup(""));
}

