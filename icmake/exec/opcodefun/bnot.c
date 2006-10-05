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

void fun_bnot ()
{
   intSetValue(top(), ~intValue(top()));
}
