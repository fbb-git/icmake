/*
        Function {\em fun\_strupr()} returns lower-case transformed string
    }
*/

#include "icm-exec.h"

void fun_strupr()
{
    reg = newvar (e_str);
    reg.vu.i->ls.str = _strupr(xstrdup(stack[sp].vu.i->ls.str));
}
