/*
        Function {\em fun\_strlwr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void builtin_strLower()
{
    char *cp = eb_strLower(rss_strdup(string_charp(stack_top())));
    gb_reg = *stringcons_charPtr(cp);
    free(cp);
}
