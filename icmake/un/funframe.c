#include "icmun.h"

void fun_frame ()
{
    char
        i,
        nlocals;

    nlocals = (char) getopcode (infile);
    dumpchar (nlocals);

    local_types = xrealloc(local_types, nlocals * sizeof(INT8));

    printf ("frame %s\n", hexstring ((int) nlocals, 2));
    if (nlocals)
    {
        printf ("               ");
        for (i = 0; i < nlocals; i++)
        {
            local_types[i] = (INT8)getopcode (infile);
            printf ("%s ", hexstring (local_types[i], 2));
            local_types[i] &= e_int | e_str | e_list;
        }
        putchar ('\n');
    }
}
