/* #define msg
*/

#include "list.ih"

ListVariable *listcopycons(ListVariable const *other)
{
    static ListVariable dest;

    dest = *other;
    dest.type = e_list;
    var_incCount(&dest);

    msg("done");
    return &dest;
}
