#include "process.ih"

void pGch()
{
    int *indicator = depGchIndicator();

    int *toRm = initRow(sproc.d_size);

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (indicator[idx])
            pInspectGch(toRm, idx);
    }

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (toRm[idx])
            pUnlinkGch(idx);          // try to unlink the gch file 
    }

    free(toRm);
}
