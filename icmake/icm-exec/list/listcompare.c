#include "list.ih"

void listCompare(LISTVAR_ *lhs, LISTVAR_ const *rhs)
{
    int ret = 0;

    size_t idx;
    size_t l_size = size(lhs);

    if (l_size != size(rhs))
    {
        listDestructor(lhs);
        *lhs = *intConstructor_i((int)(l_size - size(rhs)));
        return;
    }

    for (idx = 0; idx < l_size; ++idx)
    {
        ret = strcmp(element(lhs)[idx], element(rhs)[idx]);
        if (ret)
            break;
    }
                                /* Can't use the return value as-is, since  */
                                /* the non-16 bit return value may have its */
                                /* lower 16 bits set to zero (as happened   */
                                /* on the powerpc                           */
    *lhs = *intConstructor_i(ret < 0 ? -1 : ret > 0 ? 1 : 0);
}
