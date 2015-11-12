/*
\funcref{fun\_neq}{void fun\_neq ()}
    {}
    {}
    {push(), compare(), pop()}
    {}
    {funneq.c}
    {
        Function {\em fun\_neq()} is called when opcode {\em op\_neq} is read.
        This function pops two variables, calls {\em compare()} to compare the
        values, and pushes the result of the comparison. The two compared
        variables are discarded.
    }
*/

#include "opcodefun.ih"

void fun_neq ()
{
    VAR_ rval = *copyCons(top());

    pop();

    compare(top(), &rval);
    destructor(&rval);
}
