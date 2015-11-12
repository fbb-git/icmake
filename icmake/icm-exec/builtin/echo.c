/*
\funcref{fun\_builtin_echo}{void fun\_builtin_echo ()}
    {}
    {}
    {}
    {}
    {funbuiltin_echo.c}
    {

        This function is builtin_executed when an {\em op\_builtin_echo} opcode is encountered.
        The global variable {\em builtin_echo} is set to the {\em vu.intval} value of
        the last pushed variable.

    }
*/

#include "builtin.ih"

void builtin_echo()
{
    echo = intValue(top());
}
