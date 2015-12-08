#include "list.ih"

char const *list_at(ListVariable const *list, unsigned idx)
{
    return l_constElement(list)[idx];
}
