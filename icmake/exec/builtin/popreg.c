#include "builtin.ih"

void builtin_popReg()
{
    virtual_assign(&gb_reg, stack_top());
    stack_pop();
}
