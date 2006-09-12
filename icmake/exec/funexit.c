/*
\funcref{fun\_exit}{void fun\_exit ()}
    {}
    {}
    {pop()}
    {}
    {funexit.c}
    {

        This function places the {\em int} value of the return register {\em
        reg} into the global variable {\em retval}.

    }
*/

#include "icm-exec.h"

void fun_exit ()
{
    retval = reg.vu.intval;
}
