#include "process.ih"

void useAll(Process *process)
{
    for (int idx = 0; idx != process->size; ++idx)
        inspectUseAll(process, idx);
}
