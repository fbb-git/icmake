/*
\fucref{fun\_ascii\_int}{void fun\_ascii\_int ()}
    {}
    {}
    {}
    {}
    {funascst.c}
    {

        This function is called when a call to the built-in function {\em
        ascii} is to be processed. The function represents the opcode {\em
        op\_ascii\_int}. The last pushed {\em e\_int} is converted to a
        string.

    }
*/

#include "builtin.ih"

void fun_ascii_int ()
{
    reg = *intConstructor_i(*stringStr(top()));
}






