/*
\funcref{fun\_mul}{void fun\_mul ()}
    {}
    {}
    {pop(), push()}
    {}
    {funmul.c}
    {
        This function pops two variables and pushes the product of the {\em
        vu.intval} fields of these variables. The resulting pushed variable is
        of type {\em e\_int}.
    }
*/

#include "opcodefun.ih"

void fun_mul()
{
    int value = intValue(top());
    pop();                          /* remove rhs               */

    value *= intValue(top());       /* multiply with lhs        */
    intSetValue(top(), value);      /* update the top()'s value */
}
