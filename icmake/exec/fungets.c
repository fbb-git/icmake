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

#include "icm-exec.h"

void fun_gets ()
{
    char
        *cp,
        buffer [255];

    fflush (stdout);
    reg = newvar (e_str);

    fgets(buffer, 256, stdin);
    if ((cp = strrchr(buffer, '\n')) != NULL)
        *cp = 0;
    reg.vu.i->ls.str = xstrdup(buffer);
/* FBB 1999/11/06: replaces:  reg.vu.i->ls.str = xstrdup (gets (buffer)); */
}







