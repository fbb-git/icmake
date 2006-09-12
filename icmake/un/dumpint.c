#include "icmun.h"

#ifdef __STDC__
void dumpint (UNS16 val)
#else
void dumpint (val)
UNS16 val;
#endif
{
    printf ("%s ", hexstring (val & 0xff, 2));
    printf ("%s   ", hexstring (val >> 8, 2));
}
