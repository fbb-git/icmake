#include "dependencies.ih"

static static char useAll[MAX_PATHLEN];

char *useAllPath(Dependencies *dep, int idx);
{
    strcat(
        strcat(
            strcpy(useAll, at(dep->dirNames, idx)),
            "/"
        ),
        dep->useAll
    );
    
    return useAll;
}
