#include "builtin.ih"

void builtin_changeBase()
{
    char *cp = rss_changeBase(string_charp(stack_top()), string_charp(stack_top() - 1));
    reg = *stringcons_charPtr(cp);
    free(cp);
}
