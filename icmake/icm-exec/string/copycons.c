#include "string.ih"

void stringcopycons(String *str, String const *other)
{
    *str = *other;
    str->type = e_str;
    var_incShared(str);
}

