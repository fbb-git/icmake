/*
#define msg
*/

#include "icmun.ih"

void fun_inc()
{
    int16_t idx;

    idx = rss_getInt16(infile);

    msg("op_inc argument = %x", idx);

    dumpint(idx);

    if ((uint16_t)idx < 0x8000)
        printf ("inc global %s %s\n", varname(var[idx].type), printvar(idx));
    else if (idx < (int16_t)0xc000)
    {
        printf ("inc local %s %s\n",
                   varname(local_types[(int16_t)0xc000 - (int16_t)1 - idx]),
                   printvar(idx));
    }
    else
        printf ("inc arg %s\n", printvar (idx));
}
