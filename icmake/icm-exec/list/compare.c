#include "list.ih"

void listCompare(ListVariable *lhs, ListVariable const *rhs)
{
    int ret = 0;

    size_t idx;
    size_t size = l_size(lhs);

    if (size != l_size(rhs))
    {
        listDestructor(lhs);
        *lhs = *intcons_int((int)(size - l_size(rhs)));
        return;
    }

    for (idx = 0; idx < size; ++idx)
    {
        if ((ret = strcmp(l_element(lhs)[idx], l_element(rhs)[idx])) != 0)
            break;
    }
                                /* Can't use the return value as-is, since  */
                                /* the non-16 bit return value may have its */
                                /* lower 16 bits set to zero (as happened   */
                                /* on the powerpc                           */
    *lhs = *intcons_int(ret < 0 ? -1 : ret > 0 ? 1 : 0);
}
