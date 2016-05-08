#include "dependencies.ih"

void transpose(int **dest, int **src, int size)
{
    for (int row = 0; row != size; ++row)
        for (int col = 0; col != size; ++col)
            dest[col][row] = src[row][col];
}
