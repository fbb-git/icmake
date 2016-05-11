#include "process.ih"

void p_rmGch()
{
    for (int idx = 0; idx != s_Process.size; ++idx)
        p_inspectGch(idx);
}
