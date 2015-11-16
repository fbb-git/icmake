/*
\funcref{fun\_ret}{void fun\_ret ()}
    {}
    {}
    {stack_pop(), discard()}
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

void o_ret ()
{
    stack_popBP();

    {
        int32_t ra = (int32_t)int_value(stack_top());
        stack_pop();

        fseek (go_infile, ra, SEEK_SET);
    }
}
