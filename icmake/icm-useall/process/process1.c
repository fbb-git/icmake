#include "process.ih"

Process *ProcessCons(Options *options, Dependencies *dep)
{
    Process *process = rss_realloc(0, sizeof(Process));

    process->dep = dep;

    process->size    = size(dep);
    process->dry     = oDry(options);    
    process->rm      = oRm(options);    
    process->use_all = oUseAll(options);    
    process->verbose = oVerbose(options);    

    return process;
}
