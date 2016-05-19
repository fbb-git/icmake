/*
    This function prints the arguments to a {\em printf()} statement,
    pushed onto the stack previously. The number of arguments to printf is
    the last pushed value.
*/

/* #define msg
*/

#include "builtin.ih"

void b_printf(void)
{
    intcons_int(eb_releaseReg(), eb_formattedFprintf(stdout, TO_STDOUT));
}





