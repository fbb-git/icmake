#include "icmun.h"

void dumpchar (char val)
{
    printf ("%s      ", hexstring (val & 0xff, 2));
}
