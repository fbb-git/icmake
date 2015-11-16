/*
\funcref{fun\_greq}{void fun\_greq ()}
    {}
    {}
    {push(),virtual_compare(), stack_pop()}
    {}
    {fungreq.c}
    {
        Function {\em fun\_greq()} is called when opcode {\em op\_greq} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "opcodefun.ih"

void o_greq ()
{
    o_neq();

    int_assignInt(stack_top(), int_value(stack_top()) >= 0);
}
