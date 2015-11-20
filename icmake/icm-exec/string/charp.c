#include "string.ih"

char const *string_charp(String const *lhs)
{
    return s_str(lhs);
}
