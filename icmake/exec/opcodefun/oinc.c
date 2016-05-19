/*
\funcref{fun\_inc}{void fun\_inc ()}
    {}
    {}
    {}
    {fun\_dec()}
    {funinc.c}
    {

        This function decrements the {\em intValue} field of a variable. The
        The number of the variable (a 16-bits unsigned number) is assumed to
        follow the {\em op\_dec} opcode.

    }
*/

#include "opcodefun.ih"

void o_inc ()
{
    register Variable *dest = o_getDest();

    int_assignInt(dest, int_value(dest) + 1);
}
