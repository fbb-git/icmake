#include "icmun.ih"

void fun_push_imm ()
{
    int16_t val = rss_getInt16 (infile);

    dumpint ( (uint16_t) val);
    printf ("push int %s\n", rss_hexString ((size_t)val, 4));
}
