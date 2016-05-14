#include "dependencies.ih"

void d_iniTable()
{
    int size = sdep.size;

    sdep.dependent = initTable(size);
}
