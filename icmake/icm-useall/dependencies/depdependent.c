#include "dependencies.ih"

int const *depDependent(int idx)
{
    return sdep.dependent[idx];
}
