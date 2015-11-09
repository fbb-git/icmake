#include "icmun.ih"

void dumpint (int val)
{
    printf ("%s ", rss_hexString((size_t)(val & 0xff), 2));
    size_t len = printf ("%s", rss_hexString((size_t)(val >> 8), 2));
    printf("%*c", 5 - len, ' ');
}
