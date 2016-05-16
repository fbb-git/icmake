#include "dependencies.ih"

void dIniTable()
{
    int size = sdep.d_size;

    sdep.d_dependent = initTable(size);
}
