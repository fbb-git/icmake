#include "dependencies.ih"

char const *depDir(int idx)
{
    return at(s_Dependencies.dirNames, idx);
}
