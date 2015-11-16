#include "list.ih"

void listAdd_L(ListVariable *dest, ListVariable const *rhs)
{
    size_t idx;
    size_t nRhs = size(rhs);

    if (nRhs)                      /* something to add   */
    {
        ListVariable copy = *listCopyCons(dest);

        for (idx = 0; idx < nRhs; ++idx)
        {
            char const *cp = element(rhs)[idx];
            if (!listContains(&copy, cp))
                listAdd_cP(&copy, cp);
        }

        if (size(&copy) != size(dest))
            assign(dest, &copy);

        listDestructor(&copy);
    }
}

