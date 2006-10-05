#include "list.ih"

void listAdd_swallow_cP(LISTVAR_ *list, char *txt)
{
    incsize(list);
    addtxt(list, txt);
}
