#include "icmun.ih"

void dumpchar(int val)
{
    printf ("%s      ", rss_hexString ((size_t)(val & 0xff), 2));
}
