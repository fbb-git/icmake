/*
\funcref{fun\_copy\_var}{void fun\_copy\_var ()}
    {}
    {}
    {rss_error()}
    {}
    {funcopyv.c}
    {

        This function is called when an {\em op\_copy\_var} opcode is
        encountered in the makefile. Following this opcode, a variable index is
        expected. The index may point to a global variable, to a function
        parameter or to a local variable.

        The function serves multiple assignments. The last pushed variable is
        copied onto the indicated variable. For {\em e\_str} and {\em e\_list}
        variables, this may involve the sharing of occupied memory.

    }
*/

#include "opcodefun.ih"

void o_copy_var ()
{
   virtual_assign(o_getDest(), stack_top());
}
