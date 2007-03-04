/*
\funcref{fun\_push\_0}{void fun\_push\_0 ()}
    {}
    {}
    {push()}
    {fun\_push\_1()}
    {funpush0.c}
    {
        This function serves the evaluation of logical expressions. It is
        executed when an {\em op\_push\_0} opcode is found in the binary
        makefile. A variable of type {\em e\_int} is pushed, while its {\em
        vu.intval} field is set to zero.
    }
*/

#include "opcodefun.ih"

void fun_push_0 ()
{
    INTVAR_ tmp = *intConstructor_i(0);
    push(&tmp);
    intDestructor(&tmp);
}
