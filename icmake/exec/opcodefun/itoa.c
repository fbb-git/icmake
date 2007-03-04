/*
\funcref{fun\_itoa}{void fun\_itoa ()}
    {}
    {}
    {newvar(), xstrdup()}
    {fun\_atoi(), etc.}
    {funitoa.c}
    {
        This funtion converts the integer variable which was last pushed to a
        string variable. The {\em type} field of the last used stack position
        (this is {\em stack[sp]}) is set to {\em e\_str} and the {\em
        vu.str} field is assigned to hold the string representation of the
        {\em vu.intval} field.
    }
*/

#include "opcodefun.ih"

void fun_itoa()
{
    char buffer[100];
    sprintf(buffer, "%d", intValue(top()));

    {
        VAR_ str = *stringConstructor_cP(buffer);
        assign(top(), &str);
        stringDestructor(&str);
    }
}
