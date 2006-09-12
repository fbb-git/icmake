/*
\fucref{fun\_str\_el}{void fun\_str\_el ()}
    {}
    {}
    {}
    {}
    {funstrel.c}
    {

        This function is called when an {\em op\_str\_el} opcode is enountered.
        The last pushed value is interpreted as a string, the one but last
        pushed value as an index.

        The return register {\em reg} is set to an {\em e\_str} variable:
        the character from the string at index {\em index}, terminated by
        $\backslash$0. If index is smaller than 0 or larger than the size of
        the string, {\em reg} holds a null-character.

    }
*/

#include "icm-exec.h"

void fun_str_el ()
{
    register int
        index;
    register char
        *str;
    char
        buf [2];

    reg = newvar (e_str);
    buf [1] = '\0';

    index = (unsigned) stack [sp].vu.intval;
    str   = stack [sp - 1].vu.i->ls.str;

    if (index < 0 || index >= (int) strlen (str))
        buf [0] = '\0';
    else
        buf [0] = str [index];

    reg.vu.i->ls.str = xstrdup (buf);
}
