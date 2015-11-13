#define msg

#include "icmake.ih"

void stdFiles(char **argv)
{
    imFile = accessFile(argv[1], "im");
    pimFile = rss_changeExt(imFile, "pim");
    bimFile = rss_changeExt(imFile, "bim");

    testCompile();    
}
    
