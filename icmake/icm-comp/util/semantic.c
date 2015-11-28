#define msgx
#include "util.ih"

void util_semantic(char const *fmt, ...)
{
    va_list args;

    va_start(args, fmt);

    rss_errorList(gu_sourceName, yylineno, fmt, args);
}
