/*
        Function {\em fun\_strupr()} returns lower-case transformed string
    }
*/

#include "builtin.ih"

void fun_strupr()
{
    char *cp = ic_strupr(xstrdup(stringStr(top())));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
