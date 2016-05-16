#include "process.ih"

void pInspectUseAll(int *touch, int classIdx)
{
    int const *dep = depDependent(classIdx);
    char const *useAll = depUseAll(classIdx);

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (!dep[idx] || touch[idx] == 1)
            continue;

        if (rss_younger(useAll, depUseAll(idx)))
        {
            optMsg(2, "touch %s (younger %s)", depUseAll(idx), useAll);
            touch[idx] = 1;
        }
    }
}
