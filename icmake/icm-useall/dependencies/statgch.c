#include "dependencies.ih"

void statGch(Dependencies *dep, int idx)
{
    if (!dep->rm)
        dep->gchExists = 0;
    else
    {
        dep->gchExists = stat(dGch(dep, idx), &dep->gchStat) == 0;

        if (dep->gchExists == 0)            // can't stat .gch-file
            dep->gchIndicator[idx] = 1;     // so recompilation required
    }
}
