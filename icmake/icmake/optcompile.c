#define msg

#include "icmake.ih"

void optCompile(char **argv)
{
    flags |= f_doPreProcess | f_rmPim | f_doCompile | f_compile;

    imFile = accessFile(optarg, "im");
    pimFile = rss_strjoin(tmpDir, ".pim");
    bimFile = useFile(argv[optind], optarg, "bim");
}
    
