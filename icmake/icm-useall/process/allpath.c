#include "process.ih"

char const *allPath(Process *process, int idx)
{
    return strcatN(3, dDir(process->dep, idx), "/", process->use_all);
}
