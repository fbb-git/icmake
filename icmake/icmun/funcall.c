#include "icmun.ih"

void fun_call ()
{
    int offs = rss_getInt16 (infile);
    dumpint(offs);

    printf ("call [%s]\n", rss_hexString((unsigned)offs, 4));
}
