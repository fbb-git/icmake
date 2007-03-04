#include "icmun.h"

void fun_pop_var ()
{
    INT16
        idx;

    idx = (INT16) getint16 (infile);
    dumpint (idx);

    if ((UNS16)idx < 0x8000)
        printf ("pop global %s %s\n", varname (var [idx].type),
                                    printvar (idx));
    else if (idx < (INT16) 0xc000)
        printf ("pop local %s %s\n",
                   varname (local_types[ (INT16) 0xc000 - (INT16) 1 - idx]),
                   printvar (idx));
    else
        printf ("pop arg %s\n", printvar (idx));
}
