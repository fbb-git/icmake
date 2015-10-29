/*
\funcref{fun\_sizeoflist}{void fun\_sizeoflist ()}
    {}
    {}
    {}
    {funsizeo.c}
    {

        This function determines the size of the last pushed list variable and
        sets {\em reg.vu.intval} to this size.

    }
*/

#include "builtin.ih"

void fun_sizeoflist ()
{
    reg = *intConstructor_i((int)listSize(top()));
}
