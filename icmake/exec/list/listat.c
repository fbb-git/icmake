#include "list.ih"

char const *listAt(LISTVAR_ const *list, size_t idx)
{
    return element(list)[idx];
}
