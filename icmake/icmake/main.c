/*
#define msg
*/

#include "icmake.ih"
                                         /* icmake source(txt) dest(bin) */
int main(int argc, char **argv)
{
    options(argc, argv);

    msg("first icm-exec Arg Idx = %u: %s\n"     \
        "flags: 0x%x\n"                         \
                                                \
        "do preprocess: %d\n"                   \
        "do compile:    %d\n"                   \
        "do exec:       %d\n"                   \
        "remove pim:    %d\n"                   \
        "remove bim:    %d\n"                   \
                                                \
        "imfile:        %s\n"                   \
        "pimfile:       %s\n"                   \
        "bimfile:       %s\n",                  \
        execArgIdx,                             \
        argv[execArgIdx],                       \
        flags,                                  \
        (flags & f_doPreProcess) != 0,          \
        (flags & f_doCompile) != 0,             \
        (flags & f_doExec) != 0,                \
        (flags & f_rmPim) != 0,                 \
        (flags & f_rmBim) != 0,                 \
        imFile,                                 \
        pimFile,                                \
        bimFile);                               

    atexit(cleanup);

    if (flags & f_icmexec)                  /* direct execute the bim-file */
        execute(argv + execArgIdx);         /* ends icmake  */

    preProcess();                           
    compile();                              /* f_compile ends icmake    */
    execute(argv + execArgIdx);             /* ends icmake  */
}
