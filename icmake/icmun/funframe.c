#include "icmun.ih"

void fun_frame ()
{
    size_t i;
    size_t nlocals;

    nlocals = rss_getOpcode (infile);
    dumpchar ((int)nlocals);

    local_types = rss_realloc(local_types, nlocals * sizeof(int8_t));

    printf ("frame %s\n", rss_hexString (nlocals, 2));
    if (nlocals)
    {
        printf ("               ");
        for (i = 0; i < nlocals; i++)
        {
            local_types[i] = rss_getOpcode (infile);
            printf ("%s ", rss_hexString ((size_t)local_types[i], 2));
            local_types[i] &= e_int | e_str | e_list;
        }
        putchar ('\n');
    }
}
