#include "list.ih"

char const *list_at(ListVariable const *list, size_t idx)
{
    return l_element(list)[idx];
}
