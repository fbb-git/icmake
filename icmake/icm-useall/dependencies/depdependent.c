#include "dependencies.ih"

int const *depDependent(int idx)
{
    return s_Dependencies.dependent[idx];
}
