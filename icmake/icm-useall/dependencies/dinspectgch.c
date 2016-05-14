#include "dependencies.ih"

void d_inspectGch(int idx, char const *hdr)
{
    if 
    (
        sdep.gch == 0                // no gch tests
        ||
        sdep.gchIndicator[idx] == 1 // or already decided to recomp.
    )
        return;

    if (!rss_exists(hdr))
    {
        printf("`%s' does not exist\n", hdr);
        exit(1);
    }
                                // recompile if gch is older than a req'd hdr
    sdep.gchIndicator[idx] = rss_older(sdep.currentGch, hdr);
}
