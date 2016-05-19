#include "dependencies.ih"

char const *depUseAll(int idx)
{
    return at(sdep.d_useAllPaths, idx);
}
