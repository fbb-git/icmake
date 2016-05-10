#include "dependencies.ih"

void statGch(Dependencies *dep, int idx, char const *ihFile)
{
    if (!dep->rm)
        dep->gch[0] = 0;
    else
    {
        strcat(strcpy(dep->gch, ihFile), ".gch");   // make the dir's gch file
        if (stat(dep->gch, &dep->gchStat) == 0)     // and determine its stats.
        {
            dep->gch[0] = 0;                    // no stat: no need to check
            dep->gchIndicator[idx] = 1;         // but recompile req'ed
        }
    }
}
