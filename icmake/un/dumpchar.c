#include "icmun.ih"

void dumpchar(int val)
{
    printf ("%s      ", rss_hexString ((unsigned)(val & 0xff), 2));
}
