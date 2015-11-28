#include "rss.ih"

void rss_warning(char const *src, size_t lineNr, char const *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    rs_msg(src, lineNr, "Warning", fmt, args);
}
