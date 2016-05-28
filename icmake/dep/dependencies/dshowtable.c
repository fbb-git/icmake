#include "dependencies.ih"

static void line(int nBlanks, int nMinuses)
{
    if (nBlanks)
        printf("%*c", nBlanks, ' ');
    for (int idx = 0; idx != nMinuses; ++idx)
        putchar('-');
    putchar('\n');
}

static void numberLine(int size)
{
    for (int col = 0; col != size; ++col)
        printf("%2d ", col + 1);
    putchar('\n');
    line(0, 20 + size * 3);
}

void dShowTable(char const *label, int *const *const indices)
{
    printf("\n%s\n", label);

    int size = sdep.d_size;

    line(0, 20 + size * 3);
    printf("%15c     depending classes:\n", ' ');
    line(20, size * 3);
    printf("         class:    ");
    numberLine(size);

    for (int row = 0; row != size; ++row)
    {
        printf("%15s %2d ", at(sdep.d_dirNames, row), row + 1);
        
        for (int col = 0; col != size; ++col)
            printf(indices[row][col] ?  " x " : "   ");

        putchar('\n');
    }

    line(0, 20 + size * 3);
    printf("%19c", ' ');
    numberLine(size);
        
    putchar('\n');
}
