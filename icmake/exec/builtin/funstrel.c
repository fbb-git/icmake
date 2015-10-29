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

#include "builtin.ih"

static char buf[2];

void fun_str_el ()
{
    size_t idx = intValue(top());
    char const *str = stringStr(top() - 1);

    buf[0] = idx >= strlen(str) ? 0 : str[idx];

    reg = *stringConstructor_cP(buf);;
}
