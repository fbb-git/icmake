#include "icmun.h"

void fun_asp ()
{
    char
        val;

    val = getopcode (infile);
    dumpchar (val);
    printf ("add sp, %u\n", val);
}
