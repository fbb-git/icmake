/*
\funcref{fun\_bnot}{void fun\_bnot ()}
    {}
    {}
    {}
    {}
    {funbnot.c}
    {
        Function {\em fun\_bnot()} bitwise-not's the last pushed
        variable. This variable is assumed to be of type {\em e\_int}.
    }
*/

#include "opcodefun.ih"

void o_bnot ()
{
   int_assignInt(stack_top(), ~int_value(stack_top()));
}
