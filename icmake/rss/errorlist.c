#include "rss.ih"

void rss_errorList(char const *src, size_t lineNr, char const *fmt, 
                                                   va_list args)
{
    rs_msg(src, lineNr, "Error", fmt, args);
    ++gr_nErrors;
}
