#include "process.ih"

void p_unlinkGch(int idx)
{
    char const *path = depGch(idx);

    if (sproc.dry)
        printf("unlink(%s)\n", path);
    else
        unlink(path);

    vmsg(1, "`%s' will be recompiled\n", path);
}
