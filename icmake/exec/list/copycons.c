#include "list.ih"

LISTVAR_ listCopyCons(LISTVAR_ const *other)
{
    LISTVAR_ dest = *other;
    dest.type = e_list;
    varIncCount(&dest);

    return dest;
}
