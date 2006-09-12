/*
\funcref{fun\_shr}{void fun\_shr ()}
    {}
    {}
    {pop(), push(), error()}
    {}
    {funshr.c}
    {
        This function pops two variables and pushes the shift-right result of 
        the {\em vu.intval} fields of these variables.  The resulting pushed 
        variable is of type {\em e\_int}.  

        It is assumed that the left argument of the expression was pushed 
        first; therefore, the right argument is popped first. 
        
    } 
*/ 

#include "icm-exec.h"

void fun_shr ()
{
    VAR_
        tmp;
    int
        rvalint;

    tmp.type = e_int;
    rvalint = pop ().vu.intval;
    tmp.vu.intval = pop().vu.intval >> rvalint;

    push (tmp);
}
