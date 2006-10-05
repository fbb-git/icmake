/*
\funcref{fun\_div}{void fun\_div ()}
    {}
    {}
    {pop(), push(), error()}
    {}
    {fundiv.c}
    {
        This function pops two variables and pushes the quotient of the {\em
        vu.intval} fields of these variables. The resulting pushed variable is
        of type {\em e\_int}.

        It is assumed that the left argument of the division was pushed first;
        therefore, the right argument is popped first. A division by zero leads
        to an error.
    }
*/

#include "opcodefun.ih"

void fun_div()
{
    int value = intValue(top());

    if (!value)
        error ("division by zero at %s", hexstring(curoffs, 4));

    pop();
    value = intValue(top()) / value;

    intSetValue(top(), value);      /* update the top()'s value */
}
