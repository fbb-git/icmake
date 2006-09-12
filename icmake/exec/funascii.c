/*
\fucref{fun\_ascii}{void fun\_ascii ()}
    {}
    {}
    {}
    {}
    {funstrel.c}
    {

        This function is called when a call to the built-in function {\em
        ascii} is to be processed.

        If the last pushed value is a string, then the return register
        is set to the integer (ASCII number) representation of the first
        character in the string. Otherwise, the stacked argument is taken
        as an {\em int} and the return register is set to the
        character-to-string representation.

    }
*/

#include "icm-exec.h"

void fun_ascii ()
{
    char
        buf [2];

    if (stack [sp].type == e_str)
    {
        reg.type = e_int;
        reg.vu.intval = * (stack [sp].vu.i->ls.str);
    }
    else
    {
        buf [1] = '\0';
        buf [0] = (char) stack [sp].vu.intval;
        reg = newvar (e_str);
        reg.vu.i->ls.str = xstrdup (buf);
    }
}
