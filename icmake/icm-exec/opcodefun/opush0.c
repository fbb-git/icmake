/*
    This function serves the evaluation of logical expressions. It is
    executed when an {\em op\_push\_0} opcode is found in the binary
    makefile. A variable of type {\em e\_int} is pushed, while its {\em
    intValue} field is set to zero.
*/

#include "opcodefun.ih"

void o_push_0()
{
    IntVariable tmp;

    intcons_int(&tmp, 0);
    stack_push(&tmp);
    intDestructor(&tmp);
}
