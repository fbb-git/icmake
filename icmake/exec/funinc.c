/*
\funcref{fun\_inc}{void fun\_inc ()}
    {}
    {}
    {}
    {fun\_dec()}
    {funinc.c}
    {

        This function decrements the {\em vu.intval} field of a variable. The
        The number of the variable (a 16-bits unsigned number) is assumed to
        follow the {\em op\_dec} opcode.

    }
*/

#include "icm-exec.h"

void fun_inc ()
{
    register VAR_
        *dest;

    dest = getdest ();
    dest->vu.intval++;
}
