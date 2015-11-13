#define msg

#include "icmake.ih"

void tmpBimOpt(char **argv)
{
    flags |= f_tmpBim | f_doPreProcess | f_doCompile | f_doExec | 
                        f_rmPim | f_rmBim;

    stdFiles(argv);
    execArgIdx = 2;

}
    
