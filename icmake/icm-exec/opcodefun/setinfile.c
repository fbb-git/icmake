#include "opcodefun.ih"

void opcodefun_setInfile(char const *arg)
{
    if (!(go_infile = fopen(arg, "r")))
        rss_fatal(0, 0, "cannot read bimfile '%s'", arg);

    go_header = rss_readHeader(go_infile, (unsigned)version[0]);
}
