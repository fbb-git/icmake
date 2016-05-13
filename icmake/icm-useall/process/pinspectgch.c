#include "process.ih"

void p_inspectGch(int idx)
{
    int *indicator = depGchIndicator();

    printf("gch indicator: ");
    for (int idx = 0; idx != s_Process.size; ++idx)
        printf("%d ", indicator[idx]);
    putchar('\n');
    

    if (indicator[idx] == 0)
        return;

                                            // get classes depending on idx
    int const *dep = depDependent(idx);

    indicator[idx] = 0;
    p_unlinkGch(idx);                       // try to unlink the gch file 

                                            // and unlink dep. gch files
    for (idx = 0; idx != s_Process.size; ++idx)
    {
        if (dep[idx])
        {
            indicator[idx] = 0;
            p_unlinkGch(idx);
        }
    }
}
