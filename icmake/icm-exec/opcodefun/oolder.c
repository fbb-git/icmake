/*
\funcref{fun\_older}{void fun\_older ()}
    {}
    {}
    {stack_pop(), rss_older(), discard()}
    {fun\_younger()}
    {funolder.c}
    {
        This function is executed when an {\em op\_older} opcode is found in
        the binary makefile. Two variables are popped and their {\em vu.str}
        fields are used as file names to compare two files. The result of the
        comparison is pushed as an {\em e\_int} variable.

        Note that the right operand of the {\em older} operator is popped
        first since the left operand is expected to be pushed first.
    }
*/

#include "opcodefun.ih"

void o_older ()
{
    int ret;
    Variable rval = *copyCons(stack_top());

    stack_pop();

    ret = rss_older(string_charp(stack_top()), string_charp(&rval));
    stringDestructor(stack_top());

    *stack_top() = *intcons_int(ret);
}
