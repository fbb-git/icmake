#include "dependencies.ih"

void dFindDependents()
{
    dIniTable();
    dFillTable();

    int size = sdep.d_size;

    int **reversed = initTable(size);
    dTranspose(reversed, sdep.d_dependent, size);

    if (optVerbose() > 3)
        dShowTable("Dependents (initial):", reversed);

    dImpliedDependencies(sdep.d_dependent, size);
    dTranspose(reversed, sdep.d_dependent, size);

    freeTable(sdep.d_dependent, size);
    sdep.d_dependent = reversed;

    if (optVerbose() < 3)
        return;

    dShowTable("Dependents:", sdep.d_dependent);
}




