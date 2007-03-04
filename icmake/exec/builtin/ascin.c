/*
\fucref{fun\_ascii\_str}{void fun\_ascii\_str ()}
    {}
    {}
    {}
    {}
    {funascin.c}
    {

        This function is called when a call to the built-in function {\em
        ascii} is to be processed. This function represents the opcode {\em
        op\_ascii\_int}: a string is converted to an int.

        If the last pushed value is a string, then the return register
        is set to the integer (ASCII number) representation of the first
        character in the string.

    }
*/

#include "builtin.ih"

static char buf[2];

void fun_ascii_str ()
{
    buf[0] = intValue(top());
    reg = *stringConstructor_cP(buf);
}
