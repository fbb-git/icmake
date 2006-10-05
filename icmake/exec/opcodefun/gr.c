/*
\funcref{fun\_gr}{void fun\_gr ()}
    {}
    {}
    {push(), compare(), pop()}
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

void fun_gr ()
{
    fun_neq();

    intSetValue(top(), intValue(top()) > 0);
}
