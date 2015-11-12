#include "icmake.ih"

void compile()
{
    temporary;
    destination = rss_changeExt(temporary, "bim");

    errors = spawnlp(P_WAIT, icm_comp, icm_comp,
                             temporary, destination, NULL);

    cleanup();

    if (errors)
    {
        if (errors == -1)
            rss_spawnErr(icm_comp);
        exit(1);
    }

    if (flags & f_compile)
        exit(0);
}

    

