#include "process.ih"

void pGch()
{
    int *indicator = depGchIndicator();

    int *rm = initRow(sproc.d_size);

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (indicator[idx])
            pInspectGch(rm, idx);
    }

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (rm[idx])
            pUnlinkGch(idx);          // try to unlink the gch file 
    }

    free(rm);
}
