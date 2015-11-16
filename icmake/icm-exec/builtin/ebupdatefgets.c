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

    list_add_grab_charPtr(&reg, dest);
    list_add_charPtr(&reg, nl);
    list_add_charPtr(&reg, "OK");
    
    char buffer[50];
    sprintf (buffer, "%ld", (long)ftell(inf));

    list_add_charPtr(&reg, buffer);
}
