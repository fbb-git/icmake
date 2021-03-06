#include "dependencies.ih"

void dInspectGch(int idx, char const *hdr)
{
    if 
    (
        sdep.d_gch == NO_GCH          // no gch tests
        ||
        sdep.d_gchIndicator[idx] == 1 // or already decided to recomp.
    )
        return;

    if (!rss_exists(hdr))
    {
        printf("`%s' does not exist\n", hdr);
        exit(1);
    }

    if (!rss_exists(sdep.d_currentGch))
    {
        optMsg(3, "compile non-existing %s", sdep.d_currentGch);
        sdep.d_gchIndicator[idx] = 1;
    }
    else if (rss_older(sdep.d_currentGch, hdr))
    {
        optMsg(4, "%s older %s", sdep.d_currentGch, hdr);
                                // recompile if gch is older than a req'd hdr
        sdep.d_gchIndicator[idx] = 1;
    }
}
