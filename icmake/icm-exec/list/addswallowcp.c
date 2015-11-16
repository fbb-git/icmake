#include "list.ih"

void list_add_grab_charPtr(ListVariable *list, char *txt)
{
    l_incSize(list);
    l_addText(list, txt);
}
