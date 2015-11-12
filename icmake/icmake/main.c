#define msg

#include "icmake.ih"
                                         /* icmake source(txt) dest(bin) */
int main(int argc, char **argv)
{
    size_t execArgIdx = options(argc, argv);


    atexit(cleanup);

    if (flags & f_icmexec)                  /* direct execute the bim-file */
        execute(0, argv[1], argv + execArgIdx);    /* ends icmake  */


    imFile = tryFile(argv[1], "im");        /* see if there is a source */

    preProcess(argv[2]);                    /* f_preprocess ends icmake */

    compile();                              /* f_compile ends icmake    */

    execute(flags & f_tmpBim, bimFile,      /* execute the bim file  */
                                argv + execArgIdx);  

}










