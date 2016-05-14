#include "options.ih"

void vmsg(int requiredLevel, char const *fmt, ...)
{
    if (sopts.verbose < requiredLevel)
        return;

    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}
