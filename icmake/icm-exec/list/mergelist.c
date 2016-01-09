#include "list.ih"

void list_mergeList(ListVariable *list, ListVariable const *src)
{
    for (unsigned idx = l_size(src); idx--; )
        list_mergeStr(list, list_at(src, idx));
}















