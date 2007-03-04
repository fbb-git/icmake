#include "icmun.h"

void fun_dec ()
{
    INT16 idx = getint16 (infile);

    dumpint (idx);
    if ((UNS16)idx < 0x8000)
        printf ("dec global %s %s\n", varname (var [idx].type),
                                    printvar (idx));
    else if (idx < (INT16) 0xc000)
        printf ("dec local %s %s\n",
                   varname (local_types[ (INT16) 0xc000 - (INT16) 1 - idx]),
                   printvar (idx));
    else
        printf ("dec arg %s\n", printvar (idx));
}
