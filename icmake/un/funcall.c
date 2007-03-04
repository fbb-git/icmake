#include "icmun.h"

void fun_call ()
{
    int offs = getint16 (infile);
    dumpint(offs);

    printf ("call [%s]\n", hexstring((size_t)offs, 4));
}
