/*
        Function {\em fun\_strupr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void builtin_strUpper()
{
    char *cp = eb_strUpper(rss_strdup(stringStr(top())));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
