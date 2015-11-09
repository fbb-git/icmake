#include "icmun.ih"

void fun_jmp_false ()
{
    int16_t
        offs;

    offs = rss_getInt16 (infile);
    dumpint ( (uint16_t) offs);
    printf ("jmp false [%s]\n",
            rss_hexString ((size_t) (ftell (infile) + offs), 4));
}
