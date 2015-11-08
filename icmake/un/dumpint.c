#include "icmun.h"

void dumpint (int val)
{
    printf ("%s ", hexstring((size_t)(val & 0xff), 2));
    size_t len = printf ("%s", hexstring((size_t)(val >> 8), 2));
    printf("%*c", 5 - len, ' ');
}
