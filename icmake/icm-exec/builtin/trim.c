#include "builtin.ih"

void builtin_trim()
{
    reg = *string_trimLeft(string_trimRight(stack_top()));
}
