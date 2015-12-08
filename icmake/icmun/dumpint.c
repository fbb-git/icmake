#include "icmun.ih"

void dumpint (int val)
{
    printf ("%s ", rss_hexString((unsigned)(val & 0xff), 2));
    unsigned len = printf ("%s", rss_hexString((unsigned)(val >> 8), 2));
    printf("%*c", 5 - len, ' ');
}
