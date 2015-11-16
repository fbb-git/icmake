#include "string.ih"

String *stringcopycons(String const *str)
{
    static String ret;

    ret = *str;

    var_incCount(&ret);
    ret.type = e_str;

    return &ret;
}

