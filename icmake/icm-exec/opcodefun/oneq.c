/*
    Function {\em fun\_neq()} is called when opcode {\em op\_neq} is read.
    This function pops two variables, calls {\em compare()} to compare the
    values, and pushes the result of the comparison. The two compared
    variables are discarded.
*/

#include "opcodefun.ih"

void o_neq()
{
    Variable rval = *copycons(stack_top());

    stack_pop();

    virtual_compare(stack_top(), &rval);
    destructor(&rval);
}
