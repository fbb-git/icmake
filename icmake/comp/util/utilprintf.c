#include "util.ih"

int util_printf(char const *fmt, ...)
{
    va_list marker;

    va_start(marker, fmt);

    char buffer[80];
    
    int ret = vsnprintf(buffer, 80, fmt, marker);

    util_setString(buffer);

    return ret;
}
