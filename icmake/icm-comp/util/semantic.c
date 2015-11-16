#include "util.ih"

void util_semantic(char const *s, ...)
{
    va_list marker;

    va_start(marker, s);

    if (!gu_sem_err)
    {
        ++gu_errcount;
        printf("[%s] Line %d: ", gu_sourceName, yylineno);

        vprintf(s, marker);

        putchar('\n');
        ++gu_sem_err;
    }
    ++yynerrs;
}
