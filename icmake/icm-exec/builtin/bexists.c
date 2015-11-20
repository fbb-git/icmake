/*
    Function {\em fun\_builtin_exists()} checks if a file with the name of the
    last pushed string b_exists. If so, {\em reg.intValue} is set to 1.
    Else, the return register indicates 0.
*/

/*#define msg
*/

#include "builtin.ih"

void b_exists()
{
    intcons_int(eb_releaseReg(), rss_exists(string_charp(stack_top())));
}

