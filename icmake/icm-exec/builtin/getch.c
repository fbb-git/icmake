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

void builtin_getCh()
{
#ifdef unix
    buf[0] = eb_termCh();
#else
    buf[0] = eb_enterCh();
#endif
    gb_reg = *stringcons_charPtr(buf);
}






