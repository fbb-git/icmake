/*
        The last pushed string is taken as a file name. The extension is
        returned.
*/

#include "builtin.ih"

void b_extension()
{
    stringcons_charPtr(eb_releaseReg(), 
                       rss_getExt(string_charp(stack_top())));
}
