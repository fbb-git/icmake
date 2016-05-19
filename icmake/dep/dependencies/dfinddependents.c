#include "dependencies.ih"

void dFindDependents()
{
    dIniTable();
    dFillTable();

    int size = sdep.d_size;

    int **reversed = initTable(size);
    dTranspose(reversed, sdep.d_dependent, size);

    dShowTable("Dependents:", reversed);

    dImpliedDependencies(sdep.d_dependent, size);
    dTranspose(reversed, sdep.d_dependent, size);

    freeTable(sdep.d_dependent, size);
    sdep.d_dependent = reversed;

    dShowTable("Dependents (complete):", sdep.d_dependent);
}




