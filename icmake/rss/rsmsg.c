#include "rss.ih"

void rs_msg(char const *src, unsigned lineNr, 
            char const *prefix, char const *fmt, va_list args)
{
    if (src)
        fprintf(stderr, "[%s, line %u] ", src, lineNr);

    fprintf(stderr, "%s: ", prefix);

    vfprintf(stderr, fmt, args);
    fputc('\n', stderr);
}
