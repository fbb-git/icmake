/*
    This function pops two variables and pushes the modulo value of the
    {\em vu.intval} fields of these variables. The resulting pushed
    variable is of type {\em e\_int}.

    It is assumed that the left argument of the modision was pushed first;
    therefore, the right argument is popped first. A division by zero leads
    to an error.
*/

#include "opcodefun.ih"

void o_mod ()
{
    int value = int_value(stack_top());

    if (!value)
        rss_error ("division by zero at %s", aux_offset());

    stack_pop();
    value = int_value(stack_top()) % value;

    int_assignInt(stack_top(), value);      /* update the stack_top()'s value */
}

