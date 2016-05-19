#include "list.ih"

void list_unionList(ListVariable *list, ListVariable const *src)
{
    for (unsigned idx = l_size(src); idx--; )
        list_unionStr(list, list_at(src, idx));
}















