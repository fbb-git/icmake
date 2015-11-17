/*
\funcref{fun\_builtin_strFind}{void fun\_builtin_strFind ()}
    {}
    {}
    {builtin_strFind()}
    {}
    {funbuiltin_strFind.c}
    {
        Function {\em fun\_builtin_strFind()} returns the first index in a string
    haystack where a b_subString needle was found. If not found, -1 is returned.
    }
*/

#include "builtin.ih"

void b_strFind()
{
    char const *haystack = string_charp(stack_top());
    char const *ret = strstr(haystack, string_charp(stack_top() - 1));
    
    gb_reg = *intcons_int(ret ? ret - haystack : -1);
}
