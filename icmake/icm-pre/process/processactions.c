#include "process.ih"

void processActions()
{
    if (sproc.d_use_all)
        pUseAll();

    if (sproc.d_gch == GCH)
        pGch();
}
