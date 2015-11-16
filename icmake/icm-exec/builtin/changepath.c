/*
        The last pushed string is taken as a file name. The pathname is
        converted to the one but last pushed string. A new {\em e\_str}
        variable is created holding the new string and is returned via {\em
        gb_reg}.
*/

#include "builtin.ih"

void builtin_changePath()
{
    char *cp = rss_changePath(string_charp(stack_top()), string_charp(stack_top() - 1));
    gb_reg = *stringcons_charPtr(cp);
    free(cp);
}
