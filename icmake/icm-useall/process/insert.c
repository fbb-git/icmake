#include "process.ih"

void insert(Process *process, char *matched)
{
    if (find(process->nSearch, process->search, matched) != -1)
    {
        free(matched);
        return;
    }

    process->visitTouch = 1;                // inserting a directory

    if (process->verbose > 2)
        printf("added %s\n", matched);

    process->search = store(&process->nSearch, process->search, matched);
}
