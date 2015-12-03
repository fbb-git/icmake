#include "rss.ih"

void rss_fatal(char const *src, size_t lineNr, char const *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    rs_msg(src, lineNr, "Fatal", fmt, args);
    ++gr_nErrors;
    
    exit(1);
}
