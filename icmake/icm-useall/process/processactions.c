#include "process.ih"

void processActions()
{
    if (s_Process.use_all)
        p_useAll();

    if (s_Process.gch)
        p_gch();
}
