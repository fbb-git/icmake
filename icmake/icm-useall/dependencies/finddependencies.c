#include "dependencies.ih"

void findDependencies(Dependencies *dep)
{
    iniTable(dep);
    fillTable(dep);

    showTable("Depends On:", dep, dep->dependsOn);
    impliedDependencies(dep->dependsOn, dep->size);
    showTable("Depends On (complete):", dep, dep->dependsOn);

//    for (int row = 0, end = dep->size; row != end; ++row)
//        for (int col = row + 1; col != end; ++col)
//            if (dep->dependsOn[row][col] != dep->requiredBy[col][row])
//            {
//                printf("not symmetrical\n");
//                return;
//            }
//
//    printf("matrices are symmetrical\n");
}
