#include "builtin.ih"

void b_changeBase()
{
    char *cp = rss_changeBase(
                    string_charp(stack_top()), 
                    string_charp(stack_top() - 1)
                );

    stringcons_charPtr(eb_releaseReg(), cp);
    free(cp);
}
