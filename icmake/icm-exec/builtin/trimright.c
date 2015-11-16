#include "builtin.ih"

void builtin_trimRight()
{
    gb_reg = *string_trimRight(stack_top());
}
