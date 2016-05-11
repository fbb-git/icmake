#include "dependencies.ih"

void d_statGch(int idx)
{
    if (!s_Dependencies.rm)
        s_Dependencies.gchExists = 0;
    else
    {
        s_Dependencies.gchExists = stat(depGch(idx), 
                                            &s_Dependencies.gchStat) == 0;

        if (s_Dependencies.gchExists == 0)        // can't stat .gch-file
            s_Dependencies.gchIndicator[idx] = 1; // so recompilation required
    }
}
