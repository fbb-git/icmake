#include "builtin.ih"

void b_changeBase()
{
    char *cp = rss_changeBase(string_charp(stack_top()), string_charp(stack_top() - 1));
    gb_reg = *stringcons_charPtr(cp);
    free(cp);
}
