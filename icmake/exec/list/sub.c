#include "list.ih"

void listSub(LISTVAR_ *dest, LISTVAR_ const *rhs)
{
    size_t idx;
    size_t nRhs = size(rhs);
    size_t nRemoved = 0;

    if (nRhs)                      /* something to add   */
    {
        LISTVAR_ copy = *listCopyCons(dest);

        for (idx = 0; idx < nRhs; ++idx)
        {
            char const *cp = element(rhs)[idx];
            nRemoved += listremove(&copy, cp);
        }

        if (nRemoved)
        {
            listcleanup(&copy, nRemoved);
            listAssign(dest, &copy);
        }

        listDestructor(&copy);
    }
}

