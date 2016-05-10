#include "process.ih"

void actions(Process *process)
{
    if (process->use_all)
        useAll(process);
}
