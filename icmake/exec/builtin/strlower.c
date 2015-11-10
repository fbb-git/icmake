/*
        Function {\em fun\_strlwr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void builtin_strLower()
{
    char *cp = eb_strLower(rss_strdup(stringStr(top())));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
