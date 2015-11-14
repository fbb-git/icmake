#define msg

#include "icmake.ih"

void noOptions(char **argv)
{
    flags |= f_doPreProcess  | f_rmPim | f_doCompile | f_doExec;

    imFile = accessFile(argv[1], "im");
    pimFile = rss_changeExt(imFile, "pim");

    bimFile = useFile(          /* -- may be 2nd arg: use default bim name */
                argv[2] && strcmp(argv[2], "--") == 0 ? NULL : argv[2], 
                "bim");

    testCompile();
}
    
