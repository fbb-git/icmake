#include "process.ih"

void touch(Process *process, char const *path)
{
    if (!process->dry)
        fclose(openFile(path, "w"));

    if (process->dry || process->verbose != 0)
        printf("touch %s\n", path);
}
