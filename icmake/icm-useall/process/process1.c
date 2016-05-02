#include "process.ih"

void ProcessCons(Process *process, Options *options)
{
    process->options = options;
    
    process->classes =  options->classes;
    process->useAll =   options->useAll;
    process->mainBase = options->mainBase;
    process->verbose =  options->verbose;

    regComp(&process->includes[0],
            "^[ \\t]*#include[ \\t]*\"\\.\\./([^/\"]+)/[^/\"]+\"");
                
    regComp(&process->includes[1],
            "^[ \t]*#include[ \t]*\"([^/\"]+)/[^/\"]+\"");

    process->include = process->includes;
                
    process->cwd = dirfd(opendir("."));

    process->nSearch = 0;
    process->search = NULL;

    
    process->nKey = 0;
    process->key = NULL;
    process->nValue = 0;
    process->value = NULL;
}
