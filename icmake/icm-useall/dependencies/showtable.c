#include "dependencies.ih"

void showTable(char const *label, 
                Dependencies *dep, int *const *const indices)
{
    printf("%s\n", label);

    int size = dep->size;

    printf("%15c    ", ' ');
    for (int col = 0; col != size; ++col)
        printf("%2d ", col + 1);
    putchar('\n');

    for (int row = 0; row != size; ++row)
    {
        printf("%15s %2d ", at(dep->dirNames, row), row + 1);
        
        for (int col = 0; col != size; ++col)
            printf(indices[row][col] ?  " 1 " : "   ");

        putchar('\n');
    }

    printf("%15c    ", ' ');
    for (int col = 0; col != size; ++col)
        printf("%2d ", col + 1);
    putchar('\n');
        
    putchar('\n');
}
