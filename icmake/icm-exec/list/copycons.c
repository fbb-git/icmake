/* #define msg
*/

#include "list.ih"

ListVariable const *listcopycons(ListVariable const *other)
{
    static ListVariable dest;

    dest = *other;
    dest.type = e_list;
    var_incCount(&dest);

    return &dest;
}
