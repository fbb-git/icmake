#include "process.ih"

Process sproc;

void ProcessCons()
{
    sproc.size    = depSize();
    sproc.dry     = optDry();    
    sproc.gch      = optGch();    
    sproc.use_all = optUseAll();    
}
