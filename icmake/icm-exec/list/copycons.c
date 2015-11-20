/* #define msg
*/

#include "list.ih"

void listcopycons(ListVariable *list, ListVariable const *other)
{
    *list = *other;
    list->type = e_list;
    var_incShared(list);
}
