#include "icmun.h"

void fun_jmp_true ()
{
    INT16 offs = getint16 (infile);

    dumpint ( (UNS16) offs);
    printf ("jmp true [%s]\n",
            hexstring ((size_t) (ftell (infile) + offs), 4));
}
