/*
#define msg
*/

#include "icmake.ih"

void noOptions(char **argv)
{
    msg("starting");
    flags |= f_doPreProcess  | f_rmPim | f_doCompile | f_doExec;

    if (optind == execArgIdx)
        rss_error("first argument must be icmake-script");

    imFile = accessFile(argv[optind], "im");
    pimFile = rss_changeExt(imFile, "pim");


    bimFile = execArgIdx > optind + 1 ?
                rss_strdup(argv[optind + 1])
            :
                rss_changeExt(imFile, "bim");

    testCompile();
}
    

