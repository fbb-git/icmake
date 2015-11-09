#include "icmun.ih"

void fun_jmp_true ()
{
    int16_t offs = rss_getInt16 (infile);

    dumpint ( (uint16_t) offs);
    printf ("jmp true [%s]\n",
            rss_hexString ((size_t) (ftell (infile) + offs), 4));
}
