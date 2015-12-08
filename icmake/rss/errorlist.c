#include "rss.ih"

void rss_errorList(char const *src, unsigned lineNr, char const *fmt, 
                                                   va_list args)
{
    rs_msg(src, lineNr, "Error", fmt, args);
    ++gr_nErrors;
}
