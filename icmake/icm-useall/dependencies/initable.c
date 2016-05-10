#include "dependencies.ih"

void iniTable(Dependencies *dep)
{
    int size = dep->size;

    dep->dependent = allocTable(size);
}
