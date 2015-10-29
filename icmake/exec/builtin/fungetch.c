/*
\funcref{fun\_getch}{void fun\_getch ()}
    {}
    {}
    {}
    {fun\_gets()}
    {fungetch.c}
    {

        This function reads in one key and returns it in the {\em reg} return
        register as an {\em e\_str} value.

    }
*/

#include "builtin.ih"
#include "../string/string.h"

static char buf[2];

void fun_getch()
{
#ifdef unix
    buf[0] = termch();
#else
    buf[0] = enterch();
#endif
    reg = *stringConstructor_cP(buf);
}






