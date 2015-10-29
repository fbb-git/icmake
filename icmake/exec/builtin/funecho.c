/*
\funcref{fun\_echo}{void fun\_echo ()}
    {}
    {}
    {}
    {}
    {funecho.c}
    {

        This function is executed when an {\em op\_echo} opcode is encountered.
        The global variable {\em echo} is set to the {\em vu.intval} value of
        the last pushed variable.

    }
*/

#include "builtin.ih"

void fun_echo()
{
    echo = intValue(top());
}
