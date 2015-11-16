/*
\funcref{fun\_eq}{void fun\_eq ()}
    {}
    {}
    {push(),virtual_compare(), stack_pop()}
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

#include "opcodefun.ih"

void o_eq ()
{
    o_neq();
    int_assignInt(stack_top(), !int_value(stack_top()));
}
