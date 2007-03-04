/*
\funcref{fun\_strfind}{void fun\_strfind ()}
    {}
    {}
    {strfind()}
    {}
    {funstrfind.c}
    {
        Function {\em fun\_strfind()} returns the first index in a string
    haystack where a substring needle was found. If not found, -1 is returned.
    }
*/

#include "builtin.ih"

void fun_strfind()
{
    char const *haystack = stringStr(top());
    char const *ret = strstr(haystack, stringStr(top() - 1));
    
    reg = *intConstructor_i(ret ? ret - haystack : -1);
}
