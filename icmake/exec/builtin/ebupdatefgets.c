#include "builtin.ih"

void eb_updateFgets(FILE *inf, char *dest)
{
    char const *nl;

    char *last = dest + strlen(dest) - 1;

    if (*last != '\n')
        nl = "";
    else
    {
        *last = 0;
        nl = "\n";
    }

    list_add_grab_charPtr(&gb_reg, dest);
    list_add_charPtr(&gb_reg, nl);
    list_add_charPtr(&gb_reg, "OK");
    
    char buffer[50];
    sprintf (buffer, "%ld", (long)ftell(inf));

    list_add_charPtr(&gb_reg, buffer);
}
