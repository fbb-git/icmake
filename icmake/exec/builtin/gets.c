/*
\funcref{fun\_gets}{void fun\_gets ()}
    {}
    {}
    {}
    {fun\_getch()}
    {fungets.c}
    {

        This function reads in a string and returns it in the {\em reg} return
        register as an {\em e\_str} value.

    }
*/

#include "builtin.ih"

void fun_gets ()
{
    int last;
    char *dest = getLine(stdin);
    if (!dest)
    {
        reg = *listConstructor();
        return;
    }

    last = strlen(dest) - 1;            /* cut off final \n as per man-page */
    if (dest[last] == '\n')
        dest[last] = 0;

    reg = *stringConstructor_cP(dest);
    free(dest);
}







