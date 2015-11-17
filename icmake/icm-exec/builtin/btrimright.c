#include "builtin.ih"

void b_trimRight()
{
    gb_reg = *string_trimRight(stack_top());
}
