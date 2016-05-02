#include "process.ih"

void touch(Process *process, char const *subdir)
{
    if (access(process->useAll, R_OK) == 0)
        return;

    if (process->verbose != 0)
        printf("touch %s/%s\n", subdir, process->useAll);

    FILE *out = fopen(process->useAll, "w");
    if (out == NULL)
    {
        printf("can't create %s/%s\n", subdir, process->useAll);
        exit(1);
    }
    fclose(out);
}
