#include "icmun.ih"

void fun_pop_var ()
{
    int16_t
        idx;

    idx = (int16_t) rss_getInt16 (infile);
    dumpint (idx);

    if ((uint16_t)idx < 0x8000)
        printf ("pop global %s %s\n", varname (var [idx].type),
                                    printvar (idx));
    else if (idx < (int16_t) 0xc000)
        printf ("pop local %s %s\n",
                   varname (local_types[ (int16_t) 0xc000 - (int16_t) 1 - idx]),
                   printvar (idx));
    else
        printf ("pop arg %s\n", printvar (idx));
}
