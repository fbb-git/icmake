#define msg

#include "icmake.ih"

void optPreProcess(char **argv)
{
    flags |= f_preProcess | f_doPreProcess;

    imFile = accessFile(optarg, "im");
    pimFile = useFile(argv[1], imFile, "pim");
}
    
