#include "icmun.h"

void fun_copy_var ()
{
    INT16 idx;

    idx = getint16 (infile);
    dumpint (idx);

    if ((UNS16)idx < 0x8000)
        printf ("copy global %s %s\n", varname (var [idx].type),
                                    printvar (idx));
    else if (idx < (INT16) 0xc000)
        printf ("copy local %s %s\n",
                   varname (local_types[ (INT16) 0xc000 - (INT16) 1 - idx]),
                   printvar (idx));
    else
        printf ("copy arg %s\n", printvar (idx));
}
