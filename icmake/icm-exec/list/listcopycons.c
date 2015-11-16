/* #define msg
*/

#include "list.ih"

ListVariable *listCopyCons(ListVariable const *other)
{
    static ListVariable dest;

    dest = *other;
    dest.type = e_list;
    varIncCount(&dest);

    msg("done");
    return &dest;
}
