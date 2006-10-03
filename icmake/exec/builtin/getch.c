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
#ifdef MSDOS
    buf[0] = (char) getch ();
#else
    buf[0] = getchar();
    if (buf[0] != '\n')
    {
        while (getchar() != '\n')
            ;
    }
#endif

    reg = stringConstructor_cP(buf);

    printf("    BUF: `%s', REG: `%s'\n", buf, stringStr(&reg));
}






