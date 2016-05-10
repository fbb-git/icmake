#include "dependencies.ih"

void inspectIH(Dependencies *dep, int idx, char const *ihFile)
{
    printf("Inspect %s\n", ihFile);

    Vector *toDo = VectorCons();
    add(toDo, ihFile);

    statGch(dep, idx, ihFile);

    checkUseAll(dep, idx);

    int next = 0;
    while (next < vSize(toDo))              // as long as there are files to
    {
        inspectFile(dep, idx, toDo, next); // inspect, do so.
        ++next;
    }

    VectorDestructor(toDo);
}
