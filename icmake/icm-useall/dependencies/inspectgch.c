#include "dependencies.ih"

void inspectGch(Dependencies *dep, int idx, char const *hdr)
{
    if 
    (
        dep->rm == 0                // no gch tests
        ||
        dep->gchIndicator[idx] == 1 // or already decided to recomp.
    )
        return;

    struct stat hdrStat;

    if (stat(hdr, &hdrStat) != 0)
    {
        printf("Can't stat `%s'\n", hdr);
        exit(1);
    }

                                // recompile if gch is older than a req'd hdr
                                // or if the .gch file does not yet exist
    dep->gchIndicator[idx] = dep->gchExists == 0 
                                || dep->gchStat.st_mtime < hdrStat.st_mtime;
}
