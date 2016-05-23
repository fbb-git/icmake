#include "process.ih"

void pUseAll()
{
    int const *exists = depUseAllExists();

    int *toTouch = initRow(sproc.d_size);

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (exists[idx])
            pInspectUseAll(toTouch, idx);
    }

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (toTouch[idx])
            pTouch(depUseAll(idx));
    }

    free(toTouch);
}
