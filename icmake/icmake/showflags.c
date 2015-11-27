#include "icmake.ih"

void showFlags(char **argv)
{
    printf(
        "first icm-exec Arg Idx = %u: %s\n"
        "flags: 0x%x\n"       
                              
        "do preprocess: %d\n" 
        "do compile:    %d\n" 
        "do exec:       %d\n" 

        "remove pim:    %d\n" 
        "remove bim:    %d\n" 
        "force compile: %d\n" 

        "imfile:        %s\n" 
        "pimfile:       %s\n" 
        "bimfile:       %s\n"
        "tmp. prefix:   %s\n",

        execArgIdx,           
        argv[execArgIdx],
        flags,
 
        (flags & f_doPreProcess) != 0,
        (flags & f_doCompile) != 0,   
        (flags & f_doExec) != 0,      

        (flags & f_rmPim) != 0,       
        (flags & f_rmBim) != 0,       
        (flags & f_force) != 0,       

        imFile,                       
        pimFile,                      
        bimFile,
        tmpDir
    );
}



