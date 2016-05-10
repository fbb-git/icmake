#include "dependencies.ih"

void inspectIH(Dependencies *dep, int idx, char const *ihFile)
{
    printf("Inspect %s\n", ihFile);

    Vector *toDo = VectorCons();
    add(toDo, ihFile);

    assign(dep->gchPaths, idx,              // create gch file path names
                    strcatN(4, dDir(dep, idx), "/", ihFile, ".gch"));

    statGch(dep, idx);                      // try to stat the file

    checkUseAll(dep, idx);

    int next = 0;
    while (next < vSize(toDo))              // as long as there are files to
    {                                       // inspect included headers,
        inspectFile(dep, idx, toDo, next);  // and possibly .gch files
        ++next;
    }

    VectorDestructor(toDo);
}
