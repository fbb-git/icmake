/*
\funcref{fun\_greq}{void fun\_greq ()}
    {}
    {}
    {push(), compare(), pop()}
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

void fun_greq ()
{
    fun_neq();

    intSetValue(top(), intValue(top()) >= 0);
}
