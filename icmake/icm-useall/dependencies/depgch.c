#include "dependencies.ih"

char const *depGch(int idx)
{
    return at(s_Dependencies.gchPaths, idx);
}
