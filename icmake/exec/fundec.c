/*
\funcref{fun\_dec}{void fun\_dec ()}
    {}
    {}
    {}
    {fun\_inc()}
    {fundec.c}
    {

        This function decrements the {\em vu.intval} field of a variable. The
        The number of the variable (a 16-bits unsigned number) is assumed to
        follow the {\em op\_dec} opcode.

    }
*/

#include "icm-exec.h"

void fun_dec ()
{
    register VAR_
        *dest;

    dest = getdest ();
    dest->vu.intval--;
}
