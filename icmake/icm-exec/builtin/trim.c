#include "builtin.ih"

void builtin_trim()
{
    gb_reg = *string_trimLeft(string_trimRight(stack_top()));
}
