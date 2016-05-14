#include "dependencies.ih"

char const *d_ihFile(int idx)
{
    return strcatN(2, depDir(idx), optIH());
}
