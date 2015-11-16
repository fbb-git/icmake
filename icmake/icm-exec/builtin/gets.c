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

void builtin_gets()
{
    int last;
    char *dest = eb_getLine(stdin);
    if (!dest)
    {
        gb_reg = *listcons();
        return;
    }

    last = strlen(dest) - 1;            /* cut off final \n as per man-page */
    if (dest[last] == '\n')
        dest[last] = 0;

    gb_reg = *stringcons_charPtr(dest);
    free(dest);
}







