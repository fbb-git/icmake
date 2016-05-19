#include "string.ih"

void stringcons_swallowCharPtr(String *str, char *ntbs)
{
    str->type = e_str;

    str->data = s_new(ntbs);
}

