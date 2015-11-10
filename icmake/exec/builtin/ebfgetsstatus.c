#include "builtin.ih"

void eb_fgetsStatus(char const *status)
{
    listAdd_cP(&reg, "");
    listAdd_cP(&reg, "");
    listAdd_cP(&reg, status);
}

    
