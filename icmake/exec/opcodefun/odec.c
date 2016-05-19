/*
\funcref{fun\_dec}{void fun\_dec ()}
    {}
    {}
    {}
    {fun\_inc()}
    {fundec.c}
    {

        This function decrements the {\em intValue} field of a variable. The
        The number of the variable (a 16-bits unsigned number) is assumed to
        follow the {\em op\_dec} opcode.

    }
*/

#include "opcodefun.ih"

void o_dec ()
{
    register Variable *dest = o_getDest();

    int_assignInt(dest, int_value(dest) - 1);
}
