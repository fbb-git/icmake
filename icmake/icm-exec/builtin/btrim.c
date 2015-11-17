#include "builtin.ih"

void b_trim()
{
    gb_reg = *string_trimLeft(string_trimRight(stack_top()));
}
