#include "rss.ih"

/* 
    Prints a msg to stderr. Use it by doing '#define msg' before reading
    rss.h, and then call msg(fmt, ...) to specify a message
*/

void rss_msg_(char const *path, char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    rs_msg(0, 0, path, fmt, args);
}
