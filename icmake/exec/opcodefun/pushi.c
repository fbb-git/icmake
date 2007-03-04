/*
\funcref{fun\_push\_imm}{void fun\_push\_imm ()}
    {}
    {}
    {push(), getint16()}
    {}
    {funpushi.c}
    {

        This function is called when an immediate value is to be pushed. The
        value (type {\em INT16}) is expected to follow the opcode.

        A variable of type {\em e\_int}, with its {\em vu.intval} field set
        to the value retrieved from the binary makefile, is pushed.

    }
*/

#include "opcodefun.ih"

void fun_push_imm ()
{
    INTVAR_ tmp = *intConstructor_i(getint16(infile));

    push(&tmp);
    intDestructor(&tmp);
}


