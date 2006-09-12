/*
\funcref{fun\_bor}{void fun\_bor ()}
    {}
    {}
    {pop(), push()}
    {}
    {funbor.c}
    {
        This function pops two variables and pushes the bitwise or-ed result 
        of the {\em vu.intval} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "icm-exec.h"

void fun_bor ()
{
    VAR_
        tmp;

    tmp.type = e_int;
    tmp.vu.intval = pop().vu.intval | pop().vu.intval;
    push (tmp);
}
