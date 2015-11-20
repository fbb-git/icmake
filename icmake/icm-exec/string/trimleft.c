#include "string.ih"

void string_trimLeft(String *lhs, String const *rhs)
{
    char const *cp = s_str(rhs);
    
    while (isspace(*cp))    /* skip initial blanks: final \0 always ends */
        ++cp;

    stringDestructor(lhs);
    stringcons_charPtr(lhs, cp);
}

