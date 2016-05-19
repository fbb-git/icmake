/*
    This funtion converts the string variable which was last pushed to an
    integer variable. The {\em type} field of the last used stack position
    (this is {\em stack[sp]}) is set to {\em e\_int} and the {\em
    intValue} field is assigned to hold the integer representation of the
    {\em value.str} field.

    The string variable which occupied the stack is discarded.
*/

#include "opcodefun.ih"

void o_atoi()
{
    IntVariable value;

    intcons_int(&value, atoi(string_charp(stack_top())));

    virtual_assign(stack_top(), &value);
    intDestructor(&value);
}
