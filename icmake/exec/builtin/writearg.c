#include "builtin.ih"

void writeArg(void *dest, size_t idx)
{
    int stop;
    do
        writeArgument(dest, idx, &stop);
    while (!stop);
}
