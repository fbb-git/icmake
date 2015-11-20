/*
    This function is called when an {\em op\_str\_el} opcode is enountered.
    The last pushed value is interpreted as a string, the one but last
    pushed value as an index.

    The return register {\em reg} is set to an {\em e\_str} variable:
    the character from the string at index {\em index}, terminated by
    $\backslash$0. If index is smaller than 0 or larger than the size of
    the string, {\em reg} holds a null-character.
*/

#include "builtin.ih"

static char buf[2];

void b_strElement()
{
    size_t idx = int_value(stack_top());
    char const *str = string_charp(stack_top() - 1);

    buf[0] = idx >= strlen(str) ? 0 : str[idx];

    stringcons_charPtr(eb_releaseReg(), buf);;
}
