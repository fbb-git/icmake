#include "icmun.h"

void fun_call ()
{
    UNS16
        offs;

    offs = (UNS16) getint16 (infile);
    dumpint (offs);

    printf ("call [%s]\n", hexstring (offs, 4));
}
