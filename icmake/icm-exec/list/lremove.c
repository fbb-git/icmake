#include "list.ih"

size_t l_remove(ListVariable *list, char const *txt)
{
    size_t idx = *l_sizePtr(list);
    size_t nRemoved = 0;

    while (idx--)
    {
        char **target = &l_element(list)[idx];
        if (strcmp(txt, *target) == 0)
        {
            free(*target);
            *target = 0;
            ++nRemoved;
        }
    }
    return nRemoved;
}
