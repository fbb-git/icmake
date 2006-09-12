/*
\funcref{fun\_asp} {void fun\_asp ()}
    {}
    {}
    {getopcode(), pop(), discard()}
    {}
    {funasp.c}
    {
        This function is executed when an {\em op\_asp} opcode
        is read from the binary makefile. Following the opcode, an {\em
        UNS8} argument is expected which specifies the number of stack
        positions to discard.

        Function {\em fun\_asp()} repetitively calls {\em pop()} and {\em
        discard()} to throw away the stack variables.
    }
*/

#include "icm-exec.h"

void fun_asp ()
{
    register char
        i,
        val;

    val = (char) getopcode (infile);
    for (i = 0; i < val; i++)
        discard (pop ());
}
