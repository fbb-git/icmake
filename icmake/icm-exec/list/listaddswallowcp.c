#include "list.ih"

void listAdd_swallow_cP(ListVariable *list, char *txt)
{
    incsize(list);
    addtxt(list, txt);
}
