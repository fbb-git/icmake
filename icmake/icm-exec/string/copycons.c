#include "string.ih"

String *stringCopyCons(String const *str)
{
    static String ret;

    ret = *str;

    varIncCount(&ret);
    ret.type = e_str;

    return &ret;
}

