#include "dependencies.ih"

static char name[MAX_PATHLEN];

char const *ihFile(Dependencies *dep, int idx)
{
    return strcat(strcpy(name, at(dep->dirNames, idx)), oIH(dep->options));
}
