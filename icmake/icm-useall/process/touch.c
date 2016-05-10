#include "process.ih"

void touch(char const *path, int verbose)
{
    fclose(openFile(path, "w"));

    if (verbose != 0)
        printf("touch %s\n", path);
}
