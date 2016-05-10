#include "process.ih"

void unlinkGch(Process *process, int idx)
{
    char const *path = dGch(process->dep, idx);

    if (process->dry)
        printf("unlink(%s)\n", path);
    else
        unlink(path);

    if (process->verbose != 0)
        printf("`%s' will be recompiled\n", path);
}
