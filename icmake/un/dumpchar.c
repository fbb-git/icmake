#include "icmun.h"

void dumpchar(int val)
{
    printf ("%s      ", hexstring ((size_t)(val & 0xff), 2));
}
