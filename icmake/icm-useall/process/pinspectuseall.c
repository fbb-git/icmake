#include "process.ih"

//    printf("use_all indicator: ");
//    for (int idx = 0; idx != sproc.size; ++idx)
//        printf("%d ", indicator[idx]);
//    putchar('\n');
    

void p_inspectUseAll(int *done, int classIdx)
{
    int const *dep = depDependent(classIdx);
    char const *useAll = depUseAll(classIdx);

    for (int idx = 0; idx != sproc.size; ++idx)
    {
        if (done[idx] == 0 && dep[idx] && rss_younger(useAll, depUseAll(idx)))
        {
            p_touch(depUseAll(idx));
            done[idx] = 1;
        }
    }
}



//            char const *path = p_allPath(classIdx);
//            if (access(path, R_OK) != 0)        // USE_ALL file does not yet
