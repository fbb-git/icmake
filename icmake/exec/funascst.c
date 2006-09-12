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

#include "icm-exec.h"

void fun_ascii_int ()
{
    reg.type = e_int;
    reg.vu.intval = * (stack [sp].vu.i->ls.str);
}
