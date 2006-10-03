/*
                                S E M A N T I C . C
*/

#include "iccomp.h"

#ifdef __STDC__
void semantic (char *s, ...)
#endif
{
    va_list
        marker;

    va_start(marker, s);

    if (!sem_err)
    {
        errcount++;
        printf ("[%s] Line %d: ", source_name, yylineno);

        vprintf(s, marker);

        putchar('\n');
        sem_err++;
    }
    yynerrs++;
}
