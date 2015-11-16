#include "builtin.ih"

void eb_fgetsStatus(char const *status)
{
    list_add_charPtr(&reg, "");
    list_add_charPtr(&reg, "");
    list_add_charPtr(&reg, status);
}

    
