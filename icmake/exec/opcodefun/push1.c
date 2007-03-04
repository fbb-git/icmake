/*
\funcref{fun\_push\_1\_jmp\_end}{void fun\_push\_1\_jmp\_end ()}
    {}
    {}
    {push()}
    {fun\_push\_0()}
    {funpush1.c}
    {
        This function serves the evaluation of logical expressions. It is
        executed when an {\em op\_push\_1\_jmp\_end} opcode is found in the
        binary
        makefile. A variable of type {\em e\_int} is pushed, while its {\em
        vu.intval} field is set 1. After this, the next opcode (which is
        by definition {\em op\_push\_0}) is skipped.
    }
*/

#include "opcodefun.ih"

void fun_push_1_jmp_end ()
{
    INTVAR_ tmp = *intConstructor_i(1);
    push(&tmp);
    intDestructor(&tmp);

    getopcode(infile);
}
