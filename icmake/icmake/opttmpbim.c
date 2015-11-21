
/* #define msg
*/

#include "icmake.ih"

void optTmpBim(char **argv)
{
    flags |= f_tmpBim | f_doPreProcess | f_doCompile | f_doExec | 
                        f_rmPim | f_rmBim;

    char *tmp = rss_trimLeft(optarg);

    char ext[20];
    sprintf(ext, "%u", getpid());

    bimFile = rss_changeExt(tmp, ext);
    free(tmp);

    msg("optarg = `%s', bimfile = `%s'", optarg, bimFile);

    if (argv[optind] == NULL)    
        rss_error("icmake-script filename missing after `-t bimFile'");

    imFile = accessFile(argv[optind], "im");
    pimFile = rss_changeExt(bimFile, "pim");
 
    execArgIdx = optind + 1;
}
    
