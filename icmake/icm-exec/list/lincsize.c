#include "list.ih"

void l_incSize(ListVariable *list)
{
    ++*l_sizePtr(list);
}
