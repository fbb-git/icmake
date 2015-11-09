#include "rss.ih"

/*
    write a message to stderr. To suppress the msgs use 
    #define msg(x) when translating source code using msg
*/

void msg(char *fmt, ...)
{
    va_list args;

    va_start (args, fmt);
    vgr_fprintf (stderr, fmt, args);
    gr_fputc ('\n', stderr);
}
