#include "dependencies.ih"

char const *depUseAll(int idx)
{
    return at(s_Dependencies.useAllPaths, idx);
}
