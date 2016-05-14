#include "process.ih"

void p_gch()
{
    int *indicator = depGchIndicator();

    int *toRm = initRow(sproc.size);

    for (int idx = 0; idx != sproc.size; ++idx)
    {
        if (indicator[idx])
            p_inspectGch(toRm, idx);
    }


//    printf("gch to remove: ");
//    for (int idx = 0; idx != sproc.size; ++idx)
//    {
//        if (toRm[idx])
//            printf("    %s\n", depGch(idx));
//    }
//    putchar('\n');

    for (int idx = 0; idx != sproc.size; ++idx)
    {
        if (toRm[idx])
            p_unlinkGch(idx);          // try to unlink the gch file 
    }

    free(toRm);
}
