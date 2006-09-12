/*
\funcref{pop}{VAR\_ pop ()}
    {}
    {popped variable}
    {error()}
    {push()}
    {pop.c}
    {
        This function pops a variable off the stack. When the stack index {\em
        sp} is --1 before the pop operation, the stack is empty and an error
        occurs.

        See function {\em push()} for a description of the stack.
    }
*/

#include "icm-exec.h"

VAR_ pop ()
{
    if ((INT16)sp == -1)
        error ("stack underflow at %s", hexstring (curoffs, 4));
    return (stack [sp--]);
}
