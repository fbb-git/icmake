/*
\funcref{fun\_umin}{void fun\_umin ()}
    {}
    {}
    {}
    {}
    {funumin.c}
    {
        Function {\em fun\_umin()} reverses the sign of the last pushed
        variable. This variable is assumed to be of type {\em e\_int}.
    }
*/

#include "opcodefun.ih"

void fun_umin()
{
    top()->vu.intval = -top()->vu.intval;
}
