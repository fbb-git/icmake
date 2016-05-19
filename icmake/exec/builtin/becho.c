/*
\funcref{fun\_builtin_echo}{void fun\_builtin_echo ()}
    {}
    {}
    {}
    {}
    {funbuiltin_echo.c}
    {

        This function is b_executed when an {\em op\_builtin_echo} opcode is encountered.
        The global variable {\em b_echo} is set to the {\em intValue} value of
        the last pushed variable.

    }
*/

#include "builtin.ih"

void b_echo()
{
    gb_echo = int_value(stack_top());
}
