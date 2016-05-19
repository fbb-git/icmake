#include "dependencies.ih"

int const *depDependent(int idx)
{
    return sdep.d_dependent[idx];
}
