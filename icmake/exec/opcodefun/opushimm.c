/*
    This function is called when an immediate value is to be pushed. The
    value (type {\em int16_t}) is expected to follow the opcode.

    A variable of type {\em e\_int}, with its {\em intValue} field set
    to the value retrieved from the binary makefile, is pushed.
*/

#include "opcodefun.ih"

void o_push_imm()
{
    IntVariable tmp;

    intcons_int(&tmp, rss_getInt16(go_infile));

    stack_push(&tmp);
    intDestructor(&tmp);
}


