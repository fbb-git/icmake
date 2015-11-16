/* #define msg
*/

#include "list.ih"

LISTVAR_ *listCopyCons(LISTVAR_ const *other)
{
    static LISTVAR_ dest;

    dest = *other;
    dest.type = e_list;
    varIncCount(&dest);

    msg("done");
    return &dest;
}
