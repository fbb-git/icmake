#include "parser.ih"

void p_semantic(char const *s, ...)
{
    va_list marker;

    va_start(marker, s);

    ++yynerrs;
    printf("[%s] Line %d: ", filestack_tos()->filename, scanner_lineNr());

    vprintf(s, marker);

    putchar('\n');
}
