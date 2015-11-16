/*
\funcref{fun\_mul}{void fun\_mul ()}
    {}
    {}
    {stack_pop(), stack_push()}
    {}
    {funmul.c}
    {
        This function pops two variables and pushes the product of the {\em
        vu.intval} fields of these variables. The resulting pushed variable is
        of type {\em e\_int}.
    }
*/

#include "opcodefun.ih"

void o_mul()
{
    int value = int_value(stack_top());
    stack_pop();                          /* remove rhs               */

    value *= int_value(stack_top());       /* multiply with lhs        */
    int_assignInt(stack_top(), value);      /* update the stack_top()'s value */
}
