#include "process.ih"

static char useAllPath[MAX_PATHLEN];

char *allPath(Process *process, int idx)
{
    return 
        strcat(
            strcat(
                strcpy(useAllPath, dDir(process->dep, idx)),
                "/"),
            process->use_all
        );
}
