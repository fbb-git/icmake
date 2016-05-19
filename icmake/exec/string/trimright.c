/* #define msg
*/

#include "string.ih"

void string_trimRight(String *lhs, String const *rhs)
{
    char *trimmed = rss_trimRight(s_str(rhs));

    stringcons_swallowCharPtr(lhs, trimmed);
}

