/*
\funcref{fun\_smeq}{void fun\_smeq ()}
    {}
    {}
    {push(), compare(), pop()}
    {}
    {funsmeq.c}
    {
        Function {\em fun\_smeq()} is called when opcode {\em op\_smeq} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "icm-exec.h"

void fun_smeq ()
{
    VAR_
        lval,
        rval;

    rval = pop ();
    lval = pop ();
    compare (lval, rval);
    stack [sp].vu.intval = (stack [sp].vu.intval <= 0);

    discard (lval);
    discard (rval);
}
