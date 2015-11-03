#include "util.ih"

void semantic(char const *s, ...)
{
    va_list marker;

    va_start(marker, s);

    if (!g_sem_err)
    {
        ++g_errcount;
        printf("[%s] Line %d: ", g_sourceName, yylineno);

        vprintf(s, marker);

        putchar('\n');
        ++g_sem_err;
    }
    ++yynerrs;
}
