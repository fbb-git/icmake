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

    listAdd_swallow_cP(&reg, dest);
    listAdd_cP(&reg, nl);
    listAdd_cP(&reg, "OK");
    
    char buffer[50];
    sprintf (buffer, "%ld", (long)ftell(inf));

    listAdd_cP(&reg, buffer);
}
