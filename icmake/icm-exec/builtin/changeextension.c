#include "builtin.ih"

void builtin_changeExtension()
{
    char *cp = rss_changeExt(string_charp(stack_top()), string_charp(stack_top() - 1));
    reg = *stringcons_charPtr(cp);
    free(cp);
}
