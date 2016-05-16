#include "dependencies.ih"

char const *dIhFile(int idx)
{
    return strcatN(2, depDir(idx), optIH());
}
