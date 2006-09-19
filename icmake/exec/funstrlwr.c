/*
        Function {\em fun\_strlwr()} returns lower-case transformed string
    }
*/

#include "icm-exec.h"

void fun_strlwr()
{
    reg = newvar (e_str);

    reg.vu.i->ls.str = _strlwr(xstrdup(stack[sp].vu.i->ls.str));
}
