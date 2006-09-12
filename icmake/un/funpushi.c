#include "icmun.h"

void fun_push_imm ()
{
    INT16
        val;

    val = getint16 (infile);
    dumpint ( (UNS16) val);
    printf ("push int %s\n", hexstring (val, 4));
}
