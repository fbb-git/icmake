/*
\funcref{fun\_pop\_reg}{void fun\_pop\_reg ()}
    {}
    {}
    {discard(), pop()}
    {fun\_push\_reg()}
    {funpopre.c}
    {

        The last pushed value is popped into the return register. This action
        is usually taken when a function is about to return a value.

    }
*/

#include "opcodefun.ih"

void fun_pop_reg ()
{
    assign(&reg, top());
    pop();
}
