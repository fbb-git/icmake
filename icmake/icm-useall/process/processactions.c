#include "process.ih"

void processActions()
{
    if (sproc.use_all)
        p_useAll();

    if (sproc.gch)
        p_gch();
}
