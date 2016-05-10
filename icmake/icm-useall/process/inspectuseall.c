#include "process.ih"

void inspectUseAll(Process *process, int classIdx)
{
    int const *indicator = useAllInfo(process->dep);

    if (indicator[classIdx] == 0)
        return;

    int const *dep = dependent(process->dep, classIdx);

    for (classIdx = 0; classIdx != process->size; ++classIdx)
    {
        if (dep[classIdx])
        {            
            char const *path = allPath(process, classIdx);
            if (access(path, R_OK) != 0)        // USE_ALL file does not yet
                touch(process, path);           // exist: make it.
        }
    }
}
