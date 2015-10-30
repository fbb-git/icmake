#include "builtin.ih"

void fgetsStatus(char const *status)
{
    listAdd_cP(&reg, "");
    listAdd_cP(&reg, "");
    listAdd_cP(&reg, status);
}

    
