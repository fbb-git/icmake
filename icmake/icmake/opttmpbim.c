
/* #define msg
*/

#include "icmake.ih"

void optTmpBim(char **argv)
{
    flags |= f_tmpBim | f_doPreProcess | f_doCompile | f_doExec | 
                        f_rmPim | f_rmBim;

    char *rhs = rss_trimRight(optarg);
    bimFile = rss_trimLeft(rhs);
    free(rhs);

    msg("optarg = `%s', bimfile = `%s'", optarg, bimFile);

    if (argv[optind] == NULL)    
        rss_error("icmake-script filename missing after `-t bimFile'");

    imFile = accessFile(argv[optind], "im");
    pimFile = rss_changeExt(imFile, "pim");
 
    execArgIdx = optind + 1;
}
    
