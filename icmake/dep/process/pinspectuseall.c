#include "process.ih"

void pInspectUseAll(int *toTouch, int classIdx)
{
    int const *dep = depDependent(classIdx);

    for (int idx = 0; idx != sproc.d_size; ++idx)
    {
        if (!dep[idx] || toTouch[idx] == 1)
            continue;

        char const *useAll = depUseAll(idx);

        if ( !rss_exists(useAll) )
        {
            optMsg(2, "touch %s", useAll);
            toTouch[idx] = 1;
        }
    }
}
