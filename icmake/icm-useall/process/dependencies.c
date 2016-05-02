#include "process.ih"

void dependencies(Process *process)
{
    int cycle = 0;
    do
    {
        process->visitTouch = 0;

        if (process->verbose > 1)
            printf("Cycle %d\n", ++cycle);

        visitSubdirs(process);
        ++process->include;
        inspectDir(process, ".", process->mainBase);
        --process->include;
    }
    while (process->visitTouch);
}
