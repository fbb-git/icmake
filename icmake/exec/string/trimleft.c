#include "string.ih"

STRINGVAR_  *stringTrimLeft(STRINGVAR_ const *param)
{
    char *cp = str(param);
    
    while (isspace(*cp))    /* skip initial blanks: final \0 always ends */
        ++cp;

    return stringConstructor_cP(cp);
}

