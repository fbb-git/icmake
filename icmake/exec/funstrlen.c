/*
\funcref{fun\_strlen}{void fun\_strlen ()}
    {}
    {}
    {strlen()}
    {}
    {funstrlen.c}
    {
        Function {\em fun\_strlen()} returns the length of a string
    }
*/

#include "icm-exec.h"

void fun_strlen()
{
    reg.type = e_int;
    reg.vu.intval = strlen(stack[sp].vu.i->ls.str);
}
