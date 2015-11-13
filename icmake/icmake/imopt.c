#define msg

#include "icmake.ih"

void imOpt(char **argv)
{
    flags |= f_im | f_doPreProcess  | f_rmPim | f_doCompile | f_doExec;

    stdFiles(argv);
    execArgIdx = 2;
}
    
