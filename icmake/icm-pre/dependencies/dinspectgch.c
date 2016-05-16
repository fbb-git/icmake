#include "dependencies.ih"

void dInspectGch(int idx, char const *hdr)
{
    if 
    (
        sdep.d_gch == 0                // no gch tests
        ||
        sdep.d_gchIndicator[idx] == 1 // or already decided to recomp.
    )
        return;

    if (!rss_exists(hdr))
    {
        printf("`%s' does not exist\n", hdr);
        exit(1);
    }

    if (rss_older(sdep.d_currentGch, hdr))
    {
        optMsg(2, "%s older %s", sdep.d_currentGch, hdr);
                                // recompile if gch is older than a req'd hdr
        sdep.d_gchIndicator[idx] = 1;
    }
}
