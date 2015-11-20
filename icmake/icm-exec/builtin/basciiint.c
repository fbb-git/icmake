/*
        This function is called when a call to the built-in function {\em
        ascii} is to be processed. The function represents the opcode {\em
        op\_ascii\_int}. The last pushed {\em e\_int} is converted to a
        string.
*/

#include "builtin.ih"

void b_asciiInt()
{
    intcons_int(eb_releaseReg(), *string_charp(stack_top()));
}






