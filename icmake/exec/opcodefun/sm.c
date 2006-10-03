/*
\funcref{fun\_sm}{void fun\_sm ()}
    {}
    {}
    {push(), compare(), pop()}
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

void fun_sm ()
{
    fun_neq();

    intSetValue(top(), intValue(top()) < 0);
}
