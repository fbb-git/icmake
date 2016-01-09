/*
    Function fun_builtin_strChr()} returns the first index in a string
    haystack where a character in the b_subString needle was found. 
    If not found, -1 is returned.
*/

#include "builtin.ih"

void b_strChr()
{
    char const *haystack = string_charp(stack_top());
    char const *ret = strpbrk(haystack, string_charp(stack_top() - 1));
    
    intcons_int(eb_releaseReg(), ret ? ret - haystack : -1);
}
