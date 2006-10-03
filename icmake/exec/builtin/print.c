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

#include "builtin.ih"

void fun_printf ()
{
    size_t i;
    int newelement;
    size_t nargs = intValue(top());

    for (i = 1; i <= nargs; i += newelement)
    {
        char *string = getarg(i, &newelement);
        printf("%s%s", string, 
                       typeValue(top() - i) & e_list && *string ? " " : "");
        free(string);
    }
}
