#include "rss.ih"

void rss_error(char const *fmt, ...)
{
    va_list args;

    fflush(stdout);
    fflush(stderr);

    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    fputc('\n', stderr);

    if (!isatty(fileno (stdout)))
    {
        va_start(args, fmt);
        vprintf(fmt, args);
        putchar('\n');
    }

    exit(1);
}
