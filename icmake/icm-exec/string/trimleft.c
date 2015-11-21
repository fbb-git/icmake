#include "string.ih"

void string_trimLeft(String *lhs, String const *rhs)
{
    stringcons_swallowCharPtr(lhs, rss_trimLeft(s_str(rhs)));
}

