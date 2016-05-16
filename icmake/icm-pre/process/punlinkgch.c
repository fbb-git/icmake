#include "process.ih"

void pUnlinkGch(int idx)
{
    char const *path = depGch(idx);

    if (!rss_exists(path))
        return;

    optMsg(1, "unlink(%s)", path);
    if (sproc.d_go == GO)
        unlink(path);
}
