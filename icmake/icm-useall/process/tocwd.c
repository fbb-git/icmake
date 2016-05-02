#include "process.ih"

void toCwd(Process const *process, char const *subdir)
{
    if (fchdir(process->cwd) != 0)
    {
        printf("can't return to %s's parent dir\n", subdir);
        exit(1);
    }
}
