#include "dependencies.ih"

void d_findDependents()
{
    d_iniTable();
    d_fillTable();

    int size = sdep.size;

    int **reversed = initTable(size);
    d_transpose(reversed, sdep.dependent, size);

    d_showTable("Dependents:", reversed);

    d_impliedDependencies(sdep.dependent, size);
    d_transpose(reversed, sdep.dependent, size);

    freeTable(sdep.dependent, size);
    sdep.dependent = reversed;

    d_showTable("Dependents (complete):", sdep.dependent);
}




