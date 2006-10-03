#include "list.ih"

size_t listremove(LISTVAR_ *list, char const *txt)
{
    size_t idx = size(list);
    size_t nRemoved = 0;

    while (idx--)
    {
        char **target = &element(list)[idx];
        if (strcmp(txt, *target) == 0)
        {
            free(*target);
            *target = 0;
            ++nRemoved;
        }
    }
    return nRemoved;
}
