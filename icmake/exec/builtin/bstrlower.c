/*
        Function {\em fun\_strlwr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void b_strLower()
{
    char *cp = eb_strLower(rss_strdup(string_charp(stack_top())));

    stringcons_charPtr(eb_releaseReg(), cp);

    free(cp);
}
