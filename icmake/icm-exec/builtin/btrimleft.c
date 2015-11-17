#include "builtin.ih"

void b_trimLeft()
{
    gb_reg = *string_trimLeft(stack_top());
}
