#include "dependencies.ih"

void d_findDependents()
{
    d_iniTable();
    d_fillTable();

    int size = s_Dependencies.size;

    int **reversed = initTable(size);
    d_transpose(reversed, s_Dependencies.dependent, size);

    d_showTable("Dependents:", reversed);

    d_impliedDependencies(s_Dependencies.dependent, size);
    d_transpose(reversed, s_Dependencies.dependent, size);

    freeTable(s_Dependencies.dependent, size);
    s_Dependencies.dependent = reversed;

    d_showTable("Dependents (complete):", s_Dependencies.dependent);
}




