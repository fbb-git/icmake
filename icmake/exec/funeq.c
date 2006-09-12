/*
\funcref{fun\_eq}{void fun\_eq ()}
    {}
    {}
    {push(), compare(), pop()}
    {}
    {funeq.c}
    {

        Function {\em fun\_eq()} is called when opcode {\em op\_eq} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.

        The result of the comparison is logically {\em not}-ted when two
        integers are beging compared, since {\em compare()} subtracts two
        integer values as result.

    }
*/

#include "icm-exec.h"

void fun_eq ()
{
    VAR_
        lval,
        rval;

    rval = pop ();
    lval = pop ();
    compare (lval, rval);

    stack [sp].vu.intval = ! stack [sp].vu.intval;

    discard (lval);
    discard (rval);
}
