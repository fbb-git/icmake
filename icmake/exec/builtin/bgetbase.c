/*
        The last pushed string is taken as a file name. The base name is
        returned.
*/

#include "builtin.ih"

void b_getBase ()
{
    stringcons_charPtr(
            eb_releaseReg(),
            rss_getBase(string_charp(stack_top()))
    );
}
