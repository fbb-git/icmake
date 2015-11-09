#include "icmun.ih"

void fun_copy_var ()
{
    int16_t idx;

    idx = rss_getInt16 (infile);
    dumpint (idx);

    if ((uint16_t)idx < 0x8000)
        printf ("copy global %s %s\n", varname (var [idx].type),
                                    printvar (idx));
    else if (idx < (int16_t) 0xc000)
        printf ("copy local %s %s\n",
                   varname (local_types[ (int16_t) 0xc000 - (int16_t) 1 - idx]),
                   printvar (idx));
    else
        printf ("copy arg %s\n", printvar (idx));
}
