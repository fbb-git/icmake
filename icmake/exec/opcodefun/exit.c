/*
\funcref{fun\_exit}{void fun\_exit ()}
    {}
    {}
    {pop()}
    {}
    {funexit.c}
    {

        This function places the {\em int} value of the return register {\em
        reg} into the global variable {\em retval}.

    }
*/

#include "opcodefun.ih"

void fun_exit()
{
    retval = intValue(&reg);
}
