#include "rss.ih"

/* 
    Prints a msg to stderr. Use it by doing '#define msg' before reading
    rss.h, and then call msg(fmt, ...) to specify a message
*/

void msg_(char const *path, char *fmt, ...)
{
    va_list args;

    va_start (args, fmt);

    gr_fprintf(stderr, "%s: ", path);
    vgr_fprintf(stderr, fmt, args);
    gr_fputc ('\n', stderr);
}
