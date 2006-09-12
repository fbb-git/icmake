/*
\funcref{fun\_xor}{void fun\_xor ()}
    {}
    {}
    {pop(), push()}
    {}
    {funxor.c}
    {
        This function pops two variables and pushes the bitwise xor-ed result 
        of the {\em vu.intval} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "icm-exec.h"

void fun_xor ()
{
    VAR_
        tmp;

    tmp.type = e_int;
    tmp.vu.intval = pop().vu.intval ^ pop().vu.intval;
    push (tmp);
}
