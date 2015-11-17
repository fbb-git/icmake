#include "string.ih"

String const *string_trimLeft(String const *param)
{
    char *cp = s_str(param);
    
    while (isspace(*cp))    /* skip initial blanks: final \0 always ends */
        ++cp;

    return stringcons_charPtr(cp);
}

