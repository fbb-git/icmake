#include "builtin.ih"

void eb_fgetsStatus(char const *status)
{
    list_add_charPtr(&gb_reg, "");
    list_add_charPtr(&gb_reg, "");
    list_add_charPtr(&gb_reg, status);
}

    
