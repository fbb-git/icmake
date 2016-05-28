#include "process.ih"

void pInspectGch(int *toRm, int idx)
{
    if (!toRm[idx]) 
        optMsg(4, "(re)compile %s", depGch(idx));

    int const *dep = depDependent(idx);     // get classes depending on idx
    toRm[idx] = 1;

    for (idx = 0; idx != sproc.d_size; ++idx)
    {
        if (!dep[idx] || toRm[idx])
            continue;

        optMsg(4, "(re)compile %s", depGch(idx));
        toRm[idx] = 1;
    }
}
