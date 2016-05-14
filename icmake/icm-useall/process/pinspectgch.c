#include "process.ih"

//    printf("gch indicator: ");
//    for (int idx = 0; idx != s_Process.size; ++idx)
//        printf("%d ", indicator[idx]);
//    putchar('\n');
    

void p_inspectGch(int *toRm, int idx)
{
    int const *dep = depDependent(idx);     // get classes depending on idx
    char const *gch = depGch(idx);          // get name of gch to compare with

    toRm[idx] = 1;
                                            // and unlink dep. gch files
    for (idx = 0; idx != s_Process.size; ++idx)
    {
        if (dep[idx] && rss_younger(gch, depGch(idx)))
            toRm[idx] = 1;
    }
}
