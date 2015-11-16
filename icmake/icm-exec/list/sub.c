#include "list.ih"

void list_sub(ListVariable *dest, ListVariable const *rhs)
{
    size_t idx;
    size_t nRhs = l_size(rhs);
    size_t nRemoved = 0;

    if (nRhs)                      /* something to add   */
    {
        ListVariable copy = *listcopycons(dest);

        for (idx = 0; idx < nRhs; ++idx)
        {
            char const *cp = l_element(rhs)[idx];
            nRemoved += l_remove(&copy, cp);
        }

        if (nRemoved)
        {
            l_cleanup(&copy, nRemoved);
            list_assign(dest, &copy);
        }

        listDestructor(&copy);
    }
}

