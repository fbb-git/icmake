#include "options.ih"

void vmsg(int requiredLevel, char const *fmt, ...)
{
    if (s_Options.verbose < requiredLevel)
        return;

    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}
