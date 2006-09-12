/*
\funcref{fun\_umin}{void fun\_umin ()}
    {}
    {}
    {}
    {}
    {funumin.c}
    {
        Function {\em fun\_umin()} reverses the sign of the last pushed
        variable. This variable is assumed to be of type {\em e\_int}.
    }
*/

#include "icm-exec.h"

void fun_umin ()
{
    stack [sp].vu.intval = - stack [sp].vu.intval;
}
