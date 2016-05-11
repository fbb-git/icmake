#include "process.ih"

void p_useAll()
{
    for (int idx = 0; idx != s_Process.size; ++idx)
        p_inspectUseAll(idx);
}
