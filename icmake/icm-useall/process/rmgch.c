#include "process.ih"

void rmGch(Process *process)
{
    for (int idx = 0; idx != process->size; ++idx)
        pInspectGch(process, idx);
}
