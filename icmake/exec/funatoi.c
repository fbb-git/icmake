/*
\funcref{fun\_atoi}{void fun\_atoi ()}
    {}
    {}
    {discard()}
    {fun\_atol(), etc.}
    {funatoi.c}
    {
        This funtion converts the string variable which was last pushed to an
        integer variable. The {\em type} field of the last used stack position
        (this is {\em stack[sp]}) is set to {\em e\_int} and the {\em
        vu.intval} field is assigned to hold the integer representation of the
        {\em vu.str} field.

        The string variable which occupied the stack is discarded.
    }
*/

#include "icm-exec.h"

void fun_atoi ()
{
    VAR_
        tmp;

    tmp = stack [sp];

    stack [sp].type = e_int;
    stack [sp].vu.intval = atoi (tmp.vu.i->ls.str);

    discard (tmp);
}
