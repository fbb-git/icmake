/*
\funcref{fun\_sm}{void fun\_sm ()}
    {}
    {}
    {push(),virtual_compare(), stack_pop()}
    {}
    {funsm.c}
    {
        Function {\em fun\_sm()} is called when opcode {\em op\_sm} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "opcodefun.ih"

void o_sm ()
{
    o_neq();

    int_assignInt(stack_top(), int_value(stack_top()) < 0);
}
