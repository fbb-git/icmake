#include "string.ih"

char *string_charp(String const *lhs)
{
    return s_str(lhs);
}
