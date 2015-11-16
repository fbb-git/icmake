#include "builtin.ih"

void builtin_trimRight()
{
    reg = *string_trimRight(stack_top());
}
