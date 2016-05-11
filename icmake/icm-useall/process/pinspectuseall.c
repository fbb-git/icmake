#include "process.ih"

void p_inspectUseAll(int classIdx)
{
    int const *indicator = depUseAllIndicator();

    if (indicator[classIdx] == 0)
        return;

    int const *dep = depDependent(classIdx);

    for (classIdx = 0; classIdx != s_Process.size; ++classIdx)
    {
        if (dep[classIdx])
        {            
            char const *path = p_allPath(classIdx);
            if (access(path, R_OK) != 0)        // USE_ALL file does not yet
                p_touch(path);                  // exist: make it.
        }
    }
}
