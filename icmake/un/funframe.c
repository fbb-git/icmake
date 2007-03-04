#include "icmun.h"

void fun_frame ()
{
    size_t i;
    size_t nlocals;

    nlocals = getopcode (infile);
    dumpchar ((int)nlocals);

    local_types = xrealloc(local_types, nlocals * sizeof(INT8));

    printf ("frame %s\n", hexstring (nlocals, 2));
    if (nlocals)
    {
        printf ("               ");
        for (i = 0; i < nlocals; i++)
        {
            local_types[i] = getopcode (infile);
            printf ("%s ", hexstring ((size_t)local_types[i], 2));
            local_types[i] &= e_int | e_str | e_list;
        }
        putchar ('\n');
    }
}
