/*
    This function serves the evaluation of logical expressions. It is
    executed when an {\em op\_push\_1\_jmp\_end} opcode is found in the
    binary
    makefile. A variable of type {\em e\_int} is pushed, while its {\em
    vu.intval} field is set 1. After this, the next opcode (which is
    by definition {\em op\_push\_0}) is skipped.
*/

#include "opcodefun.ih"

void o_push_1_jmp_end()
{
    IntVariable const *tmp = intcons_int(1);
    stack_push(tmp);
    intDestructor(tmp);

    rss_getOpcode(go_infile);
}
