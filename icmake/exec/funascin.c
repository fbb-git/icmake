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

#include "icm-exec.h"

void fun_ascii_str ()
{
    char
        buf [2];

    buf [1] = '\0';
    buf [0] = (char) stack [sp].vu.intval;
    reg = newvar (e_str);
    reg.vu.i->ls.str = xstrdup (buf);
}
