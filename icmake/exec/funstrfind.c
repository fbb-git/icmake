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

#include "icm-exec.h"

void fun_strfind()
{
    reg.type = e_int;
    char *haystack = stack[sp].vu.i->ls.str;
    char *needle = stack[sp -1].vu.i->ls.str;
    char *ret = strstr(haystack, needle);
    
    reg.vu.intval = ret ? ret - haystack : -1;
}
