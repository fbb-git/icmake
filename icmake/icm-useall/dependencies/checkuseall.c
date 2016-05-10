#include "dependencies.ih"

void checkUseAll(Dependencies *dep, int idx)
{
    if (dep->useAll == NULL)
        return;

    if (access(dep->useAll, R_OK) == 0)
        dep->useAllIndicator[idx] = 1;
}
