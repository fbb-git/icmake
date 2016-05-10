#include "dependencies.ih"

char const *ihFile(Dependencies *dep, int idx)
{
    return strcatN(2, at(dep->dirNames, idx), oIH(dep->options));
}
