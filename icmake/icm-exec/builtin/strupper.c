/*
        Function {\em fun\_strupr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void builtin_strUpper()
{
    char *cp = eb_strUpper(rss_strdup(string_charp(stack_top())));
    reg = *stringcons_charPtr(cp);
    free(cp);
}
