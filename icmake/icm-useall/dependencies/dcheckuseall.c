#include "dependencies.ih"

void d_checkUseAll(int idx)
{
    if (s_Dependencies.useAll == NULL)
        return;

    if (access(s_Dependencies.useAll, R_OK) == 0)
        s_Dependencies.useAllIndicator[idx] = 1;
}
