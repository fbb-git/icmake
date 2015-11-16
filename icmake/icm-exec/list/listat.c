#include "list.ih"

char const *listAt(ListVariable const *list, size_t idx)
{
    return element(list)[idx];
}
