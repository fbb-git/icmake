/*
\funcref{fun\_bnot}{void fun\_bnot ()}
    {}
    {}
    {}
    {}
    {funbnot.c}
    {
        Function {\em fun\_bnot()} bitwise-not's the last pushed
        variable. This variable is assumed to be of type {\em e\_int}.
    }
*/

#include "icm-exec.h"

void fun_bnot ()
{
    stack [sp].vu.intval = ~stack [sp].vu.intval;
}
