#include "icmun.ih"

void fun_asp ()
{
    char
        val;

    val = rss_getOpcode (infile);
    dumpchar (val);
    printf ("add sp, %u\n", val);
}
