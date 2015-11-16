#include "builtin.ih"

void builtin_trimLeft()
{
    gb_reg = *string_trimLeft(stack_top());
}
