/*
\funcref{fun\_younger}{void fun\_younger ()}
    {}
    {}
    {pop(), younger(), discard()}
    {fun\_younger()}
    {funyoung.c}
    {
        This function is executed when an {\em op\_younger} opcode is found in
        the binary makefile. Two variables are popped and their {\em vu.str}
        fields are used as file names to compare two files. The result of the
        comparison is pushed as an {\em e\_int} variable.

        Note that the right operand of the {\em younger} operator is popped
        first since the left operand is expected to be pushed first.
    }
*/

#include "opcodefun.ih"

void fun_younger ()
{
    int ret;
    VAR_ rval = *copyCons(top());

    pop();

    ret = younger(stringStr(top()), stringStr(&rval));
    stringDestructor(top());

    *top() = *intConstructor_i(ret);
}
