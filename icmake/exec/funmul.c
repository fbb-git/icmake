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

#include "icm-exec.h"

void fun_mul ()
{
    VAR_
        tmp;

    tmp.type = e_int;
    tmp.vu.intval = pop().vu.intval * pop().vu.intval;
    push (tmp);
}
