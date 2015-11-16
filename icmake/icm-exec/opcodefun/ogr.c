/*
\funcref{fun\_gr}{void fun\_gr ()}
    {}
    {}
    {push(),virtual_compare(), stack_pop()}
    {}
    {fungr.c}
    {
        Function {\em fun\_gr()} is called when opcode {\em op\_gr} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "opcodefun.ih"

void o_gr ()
{
    o_neq();

    int_assignInt(stack_top(), int_value(stack_top()) > 0);
}
