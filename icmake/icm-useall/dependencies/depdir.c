#include "dependencies.ih"

char const *depDir(int idx)
{
    return at(sdep.dirNames, idx);
}
