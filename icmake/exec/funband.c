/*
\funcref{fun\_band}{void fun\_band ()}
    {}
    {}
    {pop(), push()}
    {}
    {funband.c}
    {
        This function pops two variables and pushes the bitwise and-ed result 
        of the {\em vu.intval} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "icm-exec.h"

void fun_band ()
{
    VAR_
        tmp;

    tmp.type = e_int;
    tmp.vu.intval = pop().vu.intval & pop().vu.intval;
    push (tmp);
}
