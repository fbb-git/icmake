/*
        The last pushed string is taken as a file name. The path is
        returned.
*/

#include "builtin.ih"

void b_path()
{
    stringcons_charPtr(eb_releaseReg(),
                       rss_getPath(string_charp(stack_top())));
}
