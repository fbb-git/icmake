#include "dependencies.ih"

void d_inspectGch(int idx, char const *hdr)
{
    if 
    (
        s_Dependencies.rm == 0                // no gch tests
        ||
        s_Dependencies.gchIndicator[idx] == 1 // or already decided to recomp.
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
    s_Dependencies.gchIndicator[idx] = 
            s_Dependencies.gchExists == 0 
            || 
            s_Dependencies.gchStat.st_mtime < hdrStat.st_mtime;
}
