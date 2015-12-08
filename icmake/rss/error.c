#include "rss.ih"

void rss_error(char const *src, unsigned lineNr, char const *fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    rss_errorList(src, lineNr, fmt, args);
}
