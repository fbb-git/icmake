#define msgx

#include "icmake.ih"

void optTmpBim(char **argv)
{
    flags |= f_tmpBim | f_doPreProcess | f_doCompile | f_doExec | 
                        f_rmPim | f_rmBim;

    bimFile = rss_trimLeft(optarg);

    if (strcmp(bimFile, ".") == 0)                  // replace . by 
        bimFile = rss_strjoin(tmpDir, ".bim");      // /tmpDir/`pid`.bim

    msg("optarg = `%s', bimfile = `%s'", optarg, bimFile);

    if (argv[optind] == NULL)    
        rss_fatal(0, 0, "icmake-script filename missing after `-t bimFile'");

    imFile = accessFile(argv[optind], "im");
    pimFile = rss_strjoin(tmpDir, ".pim");
 
    execArgIdx = optind + 1;
}
    
