/*
\funcref{fun\_print}{void fun\_print ()}
    {}
    {}
    {print(), rss_realloc()}
    {fun\_exec()}
    {funprint.c}
    {

        This function prints the arguments to a {\em printf()} statement,
        pushed onto the stack previously. The number of arguments to printf is
        the last pushed value.

    }

*/

#include "builtin.ih"

void fun_printf(void)
{
    reg = *intConstructor_i(formattedFprintf(stdout, 1));
}





