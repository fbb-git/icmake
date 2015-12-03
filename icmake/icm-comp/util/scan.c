#include "util.ih"

void util_scan(char const *fmt, char const *text)
{
    size_t value;
    sscanf(text, fmt, &value);

    util_printf("%u", value);    
}
