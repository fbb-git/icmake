#include "process.ih"

void p_useAll()
{
    int const *exists = depUseAllExists();

//    printf("use_all at: ");
//    for (int idx = 0; idx != sproc.size; ++idx)
//        printf("%d ", exists[idx]);
//    putchar('\n');

    int *done = initRow(sproc.size);

    for (int idx = 0; idx != sproc.size; ++idx)
    {
        if (exists[idx])
            p_inspectUseAll(done, idx);
    }

    free(done);

//
//    printf("use_all indicator: ");
//    for (int idx = 0; idx != sproc.size; ++idx)
//        printf("%d ", accumulate[idx]);
//    putchar('\n');

}
