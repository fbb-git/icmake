#include "list.ih"

int list_contains(ListVariable *lhs, char const *str)
{
    unsigned idx;

    for (idx = *l_sizePtr(lhs); idx--; )
    {
        if (strcmp(str, l_element(lhs)[idx]) == 0)
            return 1;
    }

    return 0;
}
