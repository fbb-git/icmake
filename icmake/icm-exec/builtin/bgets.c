/*
        This function reads in a string and returns it in the {\em reg} return
        register as an {\em e\_str} value.
*/

#include "builtin.ih"

void b_gets()
{
    int last;
    char *dest = eb_getLine(stdin);

    stringcons(eb_releaseReg());

    if (!dest)
        return;

    last = strlen(dest) - 1;            /* cut off final \n as per man-page */

    if (dest[last] == '\n')
        dest[last] = 0;

    stringcons_charPtr(&gb_reg, dest);
    free(dest);
}







