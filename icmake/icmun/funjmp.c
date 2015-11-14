#include "icmun.ih"

void fun_jmp ()
{
    int16_t
        offs;

    offs = rss_getInt16 (infile);
    dumpint ( (uint16_t) offs);
    printf ("jmp [%s]\n",
            rss_hexString ((size_t)(ftell(infile) + offs), 4));
}
