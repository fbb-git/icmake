/*
\funcref{fun\_builtin_strFind}{void fun\_builtin_strFind ()}
    {}
    {}
    {builtin_strFind()}
    {}
    {funbuiltin_strFind.c}
    {
        Function {\em fun\_builtin_strFind()} returns the first index in a string
    haystack where a builtin_subString needle was found. If not found, -1 is returned.
    }
*/

#include "builtin.ih"

void builtin_strFind()
{
    char const *haystack = stringStr(top());
    char const *ret = strstr(haystack, stringStr(top() - 1));
    
    reg = *intConstructor_i(ret ? ret - haystack : -1);
}
