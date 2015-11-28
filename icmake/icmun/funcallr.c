
#include "icmun.ih"

void fun_call_rss ()
{
    unsigned char funnr;

    funnr = (unsigned char)rss_getOpcode(infile);
    dumpchar(funnr);

    if (funnr >= f_hlt)
        rss_fatal(0, 0, "non-existing function call\n"
               "attempt to call function %x, %x are defined",
                funnr, f_hlt);

    printf ("callrss %u (%s)\n", (unsigned int)funnr, funname [ (int) funnr]);
}
