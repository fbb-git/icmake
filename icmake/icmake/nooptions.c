#define msg

#include "icmake.ih"

void noOptions(char **argv)
{
    flags |= f_doPreProcess  | f_rmPim | f_doCompile | f_doExec;

    imFile = accessFile(argv[1], "im");
    pimFile = rss_changeExt(imFile, "pim");
    bimFile = useFile(argv[2], "bim");

    testCompile();
}
    
