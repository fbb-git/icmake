/*
\funcref{fun\_ret}{void fun\_ret ()}
    {}
    {}
    {pop(), discard()}
    {fun\_call()}
    {funret.c}
    {

        This code terminates a called function. The assembler opcodes {\em mov
        sp, bp ; pop bp} are simulated by popping and discarding until {\em sp}
        equals {\em bp} and subsequently popping {\em bp}.

        After this, the return address is popped and the file pointer
        associated with the input file is set to this address.

    }
*/

#include "opcodefun.ih"

void fun_ret ()
{
    popBP();

    {
        INT32 ra = (INT32)intValue(top());
        pop();

        fseek (infile, ra, SEEK_SET);
    }
}
