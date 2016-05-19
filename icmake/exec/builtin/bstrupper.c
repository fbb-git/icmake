/*
        Function {\em fun\_strupr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void b_strUpper()
{
    char *cp = eb_strUpper(rss_strdup(string_charp(stack_top())));

    stringcons_charPtr(eb_releaseReg(), cp);

    free(cp);
}
