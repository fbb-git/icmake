#include "process.ih"

char const *p_allPath(int idx)
{
    return strcatN(3, depDir(idx), "/", s_Process.use_all);
}
