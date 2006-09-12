#include "icmun.h"

void fun_jmp ()
{
    INT16
        offs;

    offs = getint16 (infile);
    dumpint ( (UNS16) offs);
    printf ("jmp [%s]\n",
            hexstring ((int) (ftell (infile) + offs), 4));
}
