#include "list.ih"

int listContains(ListVariable *lhs, char const *str)
{
    size_t idx;

    for (idx = size(lhs); idx--; )
    {
        if (strcmp(str, element(lhs)[idx]) == 0)
            return 1;
    }

    return 0;
}
