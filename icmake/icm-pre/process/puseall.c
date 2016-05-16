#include "process.ih"

void pUseAll()
{
    int const *exists = depUseAllExists();

    int *touch = initRow(sproc.d_size);

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (exists[idx])
            pInspectUseAll(touch, idx);
    }

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (touch[idx])
            pTouch(depUseAll(idx));
    }

    free(touch);
}
