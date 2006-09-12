/*
\funcref{fun\_neq}{void fun\_neq ()}
    {}
    {}
    {push(), compare(), pop()}
    {}
    {funneq.c}
    {
        Function {\em fun\_neq()} is called when opcode {\em op\_neq} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "icm-exec.h"

void fun_neq ()
{
    VAR_
        lval,
        rval;

    rval = pop ();
    lval = pop ();
    compare (lval, rval);

    discard (lval);
    discard (rval);
}
