#include "list.ih"

int list_contains(ListVariable *lhs, char const *str)
{
    for (int idx = 0, end = *l_sizePtr(lhs); idx != end; ++idx)
    {
        if (strcmp(str, l_element(lhs)[idx]) == 0)
            return idx;
    }

    return -1;
}
