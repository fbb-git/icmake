/*
\funcref{fun\_mod}{void fun\_mod ()}
    {}
    {}
    {pop(), push(), error()}
    {}
    {funmod.c}
    {
        This function pops two variables and pushes the modulo value of the
        {\em vu.intval} fields of these variables. The resulting pushed
        variable is of type {\em e\_int}.

        It is assumed that the left argument of the modision was pushed first;
        therefore, the right argument is popped first. A division by zero leads
        to an error.
    }
*/

#include "icm-exec.h"

void fun_mod ()
{
    VAR_
        tmp;
    int
        rvalint;

    tmp.type = e_int;
    rvalint = pop ().vu.intval;
    if (! rvalint)
        error ("divide by zero at %s", hexstring (curoffs, 4));

    tmp.vu.intval = pop().vu.intval % rvalint;

    push (tmp);
}
