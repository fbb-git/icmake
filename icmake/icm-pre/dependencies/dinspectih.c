#include "dependencies.ih"

void dInspectIH(int idx, char const *ihFile)
{
    char *ih = rss_strdup(ihFile);

    Vector *toDo = VectorCons();
    add(toDo, ih);

    sdep.d_currentGch = rss_strdup(strcatN(2, ih, ".gch"));

    assign(sdep.d_gchPaths, idx,    // create gch file path names
                    strcatN(3, depDir(idx), "/", 
                            sdep.d_currentGch));

    dCheckUseAll(idx);

    int next = 0;
    while (next < vSize(toDo))              // as long as there are files to
    {                                       // inspect included headers,
        dInspectFile(idx, toDo, next);     // and possibly .d_gch files
        ++next;
    }

    VectorDestructor(toDo);
    free(sdep.d_currentGch);
    free(ih);
}


