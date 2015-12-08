/*
\funcref{fun\_asp} {void fun\_asp ()}
    {}
    {}
    {rss_getOpcode(), stack_pop(), discard()}
    {}
    {funasp.c}
    {
        This function is executed when an {\em op\_asp} opcode
        is read from the binary makefile. Following the opcode, an {\em
        UNS8} argument is expected which specifies the number of stack
        positions to discard.

        Function {\em fun\_asp()} repetitively calls {\em stack_pop()} and {\em
        discard()} to throw away the stack variables.
    }
*/

#include "opcodefun.ih"

void o_asp ()
{
    register unsigned idx = (unsigned)rss_getOpcode(go_infile);

    for ( ; idx--; )
        stack_pop();
}





