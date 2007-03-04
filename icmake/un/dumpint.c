#include "icmun.h"

void dumpint (int val)
{
    printf ("%s ", hexstring ((size_t)(val & 0xff), 2));
    printf ("%s   ", hexstring ((size_t)(val >> 8), 2));
}
