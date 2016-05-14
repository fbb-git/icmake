#include "dependencies.ih"

static void numberLine(int size)
{
    printf("%15c    ", ' ');
    for (int col = 0; col != size; ++col)
        printf("%2d ", col + 1);
    putchar('\n');

}

void d_showTable(char const *label, int *const *const indices)
{
    if (optVerbose() < 3)
        return;

    printf("%s\n", label);

    int size = sdep.size;

    numberLine(size);

    for (int row = 0; row != size; ++row)
    {
        printf("%15s %2d ", at(sdep.dirNames, row), row + 1);
        
        for (int col = 0; col != size; ++col)
            printf(indices[row][col] ?  " 1 " : "   ");

        putchar('\n');
    }

    numberLine(size);
        
    putchar('\n');
}
