#include "dependencies.ih"

void findDependents(Dependencies *dep)
{
    iniTable(dep);
    fillTable(dep);

    int size = dep->size;

    int **reversed = allocTable(size);
    transpose(reversed, dep->dependent, size);

//    showTable("Dependents:", dep, dep->dependent);
    showTable("Dependents:", dep, reversed);

    impliedDependencies(dep->dependent, size);
    transpose(reversed, dep->dependent, size);

    freeTable(dep->dependent, size);
    dep->dependent = reversed;

    showTable("Dependents (complete):", dep, dep->dependent);

}




