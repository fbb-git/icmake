#define msg

#include "icmake.ih"

void directExecuteOpt(char const *argv1)
{
    flags |= f_icmexec | f_doExec;
    bimFile = accessFile(argv1, "bim");
    execArgIdx = 2;
}
    
