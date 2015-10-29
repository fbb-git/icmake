/*
        Function {\em fun\_strlwr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void fun_strlwr()
{
    char *cp = ic_strlwr(xstrdup(stringStr(top())));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
