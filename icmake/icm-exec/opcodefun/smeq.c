/*
\funcref{fun\_smeq}{void fun\_smeq ()}
    {}
    {}
    {push(), compare(), pop()}
    {}
    {funsmeq.c}
    {
        Function {\em fun\_smeq()} is called when opcode {\em op\_smeq} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "opcodefun.ih"

void fun_smeq ()
{
    fun_neq();

    intSetValue(top(), intValue(top()) <= 0);
}
