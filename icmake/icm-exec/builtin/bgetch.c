/*
        This function reads in one key and returns it in the {\em reg} return
        register as an {\em e\_str} value.
*/

#include "builtin.ih"
#include "../string/string.h"

static char buf[2];

void b_getCh()
{
    buf[0] = eb_termCh();

    stringcons_charPtr(eb_releaseReg(), buf);
}






