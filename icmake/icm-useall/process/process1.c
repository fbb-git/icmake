#include "process.ih"

Process s_Process;

void ProcessCons()
{
    s_Process.size    = depSize();
    s_Process.dry     = optDry();    
    s_Process.gch      = optGch();    
    s_Process.use_all = optUseAll();    
}
