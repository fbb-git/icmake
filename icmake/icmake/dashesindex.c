#include "icmake.ih"

unsigned dashesIndex(char **begin, char **end)
{
    char **start = begin;

    for (; begin != end; ++begin)
    {
        if (strcmp(*begin, "--") == 0)
            return 1 + begin - start;
    }
    return 0;
}
