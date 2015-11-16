#define msg

#include "icmake.ih"

void optIm(char **argv)
{
    flags |= f_im | f_doPreProcess | f_rmPim | f_doCompile | f_doExec;

    imFile = accessFile(optarg, "im");
    pimFile = rss_changeExt(imFile, "pim");
    bimFile = rss_changeExt(imFile, "bim");

    testCompile();    /* may wipe f_doPreProcess | f_rmPim | f_doCompile */

    execArgIdx = optind;
}
    
