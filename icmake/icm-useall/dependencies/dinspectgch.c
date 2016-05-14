#include "dependencies.ih"

void d_inspectGch(int idx, char const *hdr)
{
    if 
    (
        s_Dependencies.gch == 0                // no gch tests
        ||
        s_Dependencies.gchIndicator[idx] == 1 // or already decided to recomp.
    )
        return;

    if (!rss_exists(hdr))
    {
        printf("`%s' does not exist\n", hdr);
        exit(1);
    }

printf("comparing %s with %s: rcompile = %d\n", 
        s_Dependencies.currentGch, hdr,
                                // recompile if gch is older than a req'd hdr
    s_Dependencies.gchIndicator[idx] = rss_older(s_Dependencies.currentGch,
                                                 hdr));
}
