/*
        This function pops the last pushed variable and determines if that
    variable should yield true. If the variable is of type {\em e\_int},
    then the integer representation is returned. If the variable is of
    type {\em e\_str}, then the first character in the string (this may
    be a zero-byte) is returned. If the variable is of type {\em
    e\_list}, the list size is returned.
*/

#include "opcodefun.ih"

int o_isTrue()
{
    int ret = virtual_bool(stack_top());
    stack_pop();

    return ret;
}
