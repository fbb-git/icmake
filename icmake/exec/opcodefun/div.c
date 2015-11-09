/*
\funcref{fun\_div}{void fun\_div ()}
    {}
    {}
    {pop(), push(), rss_error()}
    {}
    {fundiv.c}
    {
        This function pops two variables and pushes the quotient of the {\em
        vu.intval} fields of these variables. The resulting pushed variable is
        of type {\em e\_int}.

        It is assumed that the left argument of the division was pushed first;
        therefore, the right argument is popped first. A division by zero leads
        to an rss_error.
    }
*/

#include "opcodefun.ih"

void fun_div()
{
    int value = intValue(top());

    if (!value)
        rss_error ("division by zero at %s", rss_hexString(curoffs, 4));

    pop();
    value = intValue(top()) / value;

    intSetValue(top(), value);      /* update the top()'s value */
}
