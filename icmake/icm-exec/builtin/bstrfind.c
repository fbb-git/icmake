/*
    Function {\em fun\_builtin_strFind()} returns the first index in a string
    haystack where a b_subString needle was found. If not found, -1 is
    returned.
*/

#include "builtin.ih"

void b_strFind()
{
    char const *haystack = string_charp(stack_top());
    char const *ret = strstr(haystack, string_charp(stack_top() - 1));
    
    intcons_int(eb_releaseReg(), ret ? ret - haystack : -1);
}
