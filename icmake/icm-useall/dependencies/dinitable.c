#include "dependencies.ih"

void d_iniTable()
{
    int size = s_Dependencies.size;

    s_Dependencies.dependent = allocTable(size);
}
