#include "process.ih"

Process sproc;

void ProcessCons()
{
    sproc.d_size    = depSize();
    sproc.d_go      = optGo();    
    sproc.d_gch     = optGch();    
    sproc.d_use_all = optUseAll();    
}
