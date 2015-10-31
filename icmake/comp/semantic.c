#include "iccomp.h"

void semantic(char *s, ...)
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
