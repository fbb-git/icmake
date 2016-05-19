#include "util.ih"

void toCwd()
{
    if (fchdir(s_cwd) != 0)
    {
        printf("can't return to the initial directory\n");
        exit(1);
    }
}
