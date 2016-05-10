#include "process.ih"

void inspectUseAll(Process *process, int classIdx)
{
    int const *dep = dependent(process->dep, classIdx);

    char *path = allPath(process, classIdx);

    if (access(path, R_OK) != 0)            // no USE_ALL file
        return;                             // here: nothing to inspect

    for (classIdx = 0; classIdx != process->size; ++classIdx)
    {
        if (dep[classIdx])
        {            
            path = allPath(process, classIdx);
            if (access(path, R_OK) != 0)        // USE_ALL file does not yet
                touch(path, process->verbose);  // exist: make it.
        }
    }
}
