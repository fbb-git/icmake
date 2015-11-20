/*
    This funtion converts the integer variable which was last pushed to a
    string variable. The {\em type} field of the last used stack position
    (this is {\em stack[sp]}) is set to {\em e\_str} and the {\em
    value.str} field is assigned to hold the string representation of the
    {\em intValue} field.
*/

#include "opcodefun.ih"

void o_itoa()
{
    char buffer[100];
    sprintf(buffer, "%d", int_value(stack_top()));

    Variable tmp;

    stringcons_charPtr(&tmp, buffer);
    virtual_assign(stack_top(), &tmp);
    stringDestructor(&tmp);
}
