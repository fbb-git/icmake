#include "dependencies.ih"

char const *depDir(int idx)
{
    return at(sdep.d_dirNames, idx);
}
