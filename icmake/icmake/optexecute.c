#define msg

#include "icmake.ih"

void optExecute()
{
    flags |= f_icmexec | f_doExec;
    bimFile = accessFile(optarg, "bim");

    msg("optarg: %s, bimFile: %s", optarg, bimFile);

    execArgIdx = optind;
}
    
