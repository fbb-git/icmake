#include "list.ih"

void list_sub(ListVariable *dest, ListVariable const *rhs)
{
    unsigned idx;
    unsigned nRhs = l_size(rhs);
    unsigned nRemoved = 0;

    if (nRhs)                      /* something to add   */
    {
        ListVariable copy;
        listcopycons(&copy, dest);

        for (idx = 0; idx != nRhs; ++idx)
        {
            char const *cp = l_constElement(rhs)[idx];
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



