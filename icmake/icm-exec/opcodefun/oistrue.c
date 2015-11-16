/*
\funcref{o_isTrue}{void o_isTrue ()}
    {}
    {0: the last pushed variable yields `false'; otherwise: the last pushed
     variable yields `true'}
    {stack_pop(), discard()}
    {fun\_jmp\_true(), fun\_jmp\_false()}
    {o_isTrue.c}
    {

        This function pops the last pushed variable and determines if that
    variable should yield true. If the variable is of type {\em e\_int},
    then the integer representation is returned. If the variable is of
    type {\em e\_str}, then the first character in the string (this may
    be a zero-byte) is returned. If the variable is of type {\em
    e\_list}, the list size is returned.

        The popped variable is discarded.

    }
*/

#include "opcodefun.ih"

int o_isTrue()
{
    int ret = logical(stack_top());
    stack_pop();

    return ret;
}
