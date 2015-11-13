#define msg

#include "icmake.ih"

void preProcessOpt(char **argv)
{
    flags |= f_preProcess | f_doPreProcess;

    imFile = accessFile(argv[1], "im");
    pimFile = useFile(argv[2], "pim");
}
    
