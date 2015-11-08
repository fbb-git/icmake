#include "rss.ih"

/*
    write a message to stderr. To suppress the msgs use 
    #define msg(x) when translating source code using msg
*/

void msg(char *fmt, ...)
{
    va_list args;

    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    fputc ('\n', stderr);
}
