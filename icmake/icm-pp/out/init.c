#include "out.ih"

void out_init(char const *im, char const *pim)
{
    if ((o_file = fopen(pim, "w")) == NULL)
        rss_error("cannot write output file `%s'", pim);

    fprintf(o_file, "#>%s\n", im);
    atexit(o_close);
}