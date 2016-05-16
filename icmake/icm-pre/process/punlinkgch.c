#include "process.ih"

void pUnlinkGch(int idx)
{
    char const *path = depGch(idx);

    if (sproc.d_go == GO)
        unlink(path);

    optMsg(1, "unlink(%s)", path);
}
