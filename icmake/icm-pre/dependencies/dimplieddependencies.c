#include "dependencies.ih"

void dImpliedDependencies(int **data, int size)
{
    int indicator[size];

    for (int row = 0; row != size; ++row)
    {
        memset(indicator, 0, size * sizeof(int));
        dClosure(indicator, row, data, size);
        memcpy(data[row], indicator, size * sizeof(int));
    }

    for (int idx = 0; idx != size; ++idx)
        data[idx][idx] = 0;
}
