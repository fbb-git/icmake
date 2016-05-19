#include "builtin.ih"

void b_changeExtension()
{
    char *cp = rss_changeExt(string_charp(stack_top()), 
                             string_charp(stack_top() - 1));

    stringcons_charPtr(eb_releaseReg(), cp);
    free(cp);
}
