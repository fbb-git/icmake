/*
    The last pushed value is popped into the return register. This action
    is usually taken when a function is about to return a value.
*/

#include "opcodefun.ih"

void o_popReg()
{
    virtual_assign(builtin_regPtr(), stack_top());
    stack_pop();
}
