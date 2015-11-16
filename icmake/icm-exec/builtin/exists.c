/*
    Function {\em fun\_builtin_exists()} checks if a file with the name of the
    last pushed string builtin_exists. If so, {\em reg.vu.intval} is set to 1.
    Else, the return register indicates 0.
*/

/*#define msg
*/

#include "builtin.ih"

void builtin_exists()
{
    reg = *intcons_int(rss_exists(string_charp(stack_top())));
}

