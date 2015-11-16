#include "builtin.ih"

void builtin_trimLeft()
{
    reg = *string_trimLeft(stack_top());
}
