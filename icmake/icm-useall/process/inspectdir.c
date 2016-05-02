#include "process.ih"

void inspectDir(Process *process, char const *subdir, char const *headerBase)
{
    tryChdir(subdir);

    if (process->verbose > 2)
        printf("inspecting %s\n", subdir);

    int keyIdx = find(process->nKey, process->key, subdir);
    if (keyIdx == -1)
    {
        keyIdx = process->nKey;
        process->key = store(&process->nKey, process->key, subdir);
    }

    if (access(process->useAll, R_OK) == 0)     // useAll file here
    {
        if (process->verbose > 2)
            printf("found %s/%s\n", subdir, process->useAll);

        insert(process, rss_strdup(subdir));
    }

    for (int idx = 0, end = process->options->nArgs; idx != end; ++idx)
        includesSearch(
            process, keyIdx,
            subdir,  
            replaceDollar(
                process->options->arg[idx], headerBase
            ) 
        );

    toCwd(process, subdir);
}






