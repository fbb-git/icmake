#include "list.ih"

void listAdd_cP(LISTVAR_ *list, char const *txt)
{
    incsize(list);
    addtxt(list, xstrdup(txt));
}
