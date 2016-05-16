#include "process.ih"

void pInspectGch(int *rm, int idx)
{
    int const *dep = depDependent(idx);     // get classes depending on idx
    char const *gch = depGch(idx);          // get name of gch to compare with

    rm[idx] = 1;
                                            // and unlink dep. gch files
    for (idx = 0; idx != sproc.d_size; ++idx)
    {
        if (!dep[idx] || rm[idx])
            continue;

        if (!rss_exists(gch) || rss_younger(gch, depGch(idx)))
        {
            optMsg(2, "recompile %s (older %s)", gch, depGch(idx));
            rm[idx] = 1;
        }
    }
}
