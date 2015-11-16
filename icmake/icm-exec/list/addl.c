#include "list.ih"

void list_add(ListVariable *dest, ListVariable const *rhs)
{
    size_t idx;
    size_t nRhs = *l_sizePtr(rhs);

    if (nRhs)                      /* something to add   */
    {
        ListVariable copy = *listcopycons(dest);

        for (idx = 0; idx < nRhs; ++idx)
        {
            char const *cp = l_element(rhs)[idx];
            if (!list_contains(&copy, cp))
                list_add_charPtr(&copy, cp);
        }

        if (*l_sizePtr(&copy) != *l_sizePtr(dest))
           virtual_assign(dest, &copy);

        listDestructor(&copy);
    }
}

