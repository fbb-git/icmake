/*
\funcref{fun\_print}{void fun\_print ()}
    {}
    {}
    {print(), xrealloc()}
    {fun\_exec()}
    {funprint.c}
    {

        This function prints the arguments to a {\em printf()} statement,
        pushed onto the stack previously. The number of arguments to printf is
        the last pushed value.

    }

*/

#include "icm-exec.h"

void fun_printf ()
{
    register int
        i,
        nargs;
    int
        newelement;
    register char
        *space,
        *string;

    nargs = stack [sp].vu.intval;

    for (i = 1; i <= nargs; i += newelement)
    {
        string = getarg (i, &newelement);
        if (stack [sp - i].type & e_list && *string)
            space = " ";
        else
            space = nullstring;
        printf ("%s%s", string, space);
        xrealloc (string, 0);
    }
}
