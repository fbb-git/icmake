/*
        Function {\em fun\_strlwr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void fun_strlwr()
{
    char *cp = _strlwr(xstrdup(stringStr(top())));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
