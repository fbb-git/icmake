#include "options.ih"

void optMsg(int requiredLevel, char const *fmt, ...)
{
    if (sopts.d_verbose < requiredLevel)
        return;

    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);

    putchar('\n');
}
