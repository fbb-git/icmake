/*
\funcref{fun\_sizeoflist}{void fun\_sizeoflist ()}
    {}
    {}
    {}
    {funsizeo.c}
    {

        This function determines the size of the last pushed list variable and
        sets {\em reg.vu.intval} to this size.

    }
*/

#include "icm-exec.h"

void fun_sizeoflist ()
{
    reg.type = e_int;
    reg.vu.intval = stack [sp].vu.i->ls.list.size;
}
