#include "process.ih"

void pInspectGch(Process *process, int idx)
{
    int *indicator = gchInfo(process->dep);

    if (indicator[idx] == 0)
        return;

                                            // get classes depending on idx
    int const *dep = dependent(process->dep, idx);

    indicator[idx] = 0;
    unlinkGch(process, idx);                // try to unlink the gch file 

                                            // and unlink dep. gch files
    for (idx = 0; idx != process->size; ++idx)
    {
        if (dep[idx])
        {
            indicator[idx] = 0;
            unlinkGch(process, idx);
        }
        }
}
