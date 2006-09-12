/*
\funcref{fun\_greq}{void fun\_greq ()}
    {}
    {}
    {push(), compare(), pop()}
    {}
    {fungreq.c}
    {
        Function {\em fun\_greq()} is called when opcode {\em op\_greq} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "icm-exec.h"

void fun_greq ()
{
    VAR_
        lval,
        rval;

    rval = pop ();
    lval = pop ();
    compare (lval, rval);
    stack [sp].vu.intval = (stack [sp].vu.intval >= 0);

    discard (lval);
    discard (rval);
}
