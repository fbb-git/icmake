
/* #define msg
*/

#include "icmake.ih"
                                         /* icmake source(txt) dest(bin) */
int main(int argc, char **argv)
{
    options(argc, argv);

    if (flags & f_doIcmDep)
        icmDep(argv + optind - 1);

    atexit(cleanup);

    if (flags & f_icmexec)                  /* direct execute the bim-file */
        execute(argv + execArgIdx);         /* ends icmake  */

    preProcess();                           
    compile();                              /* f_compile ends icmake    */
    execute(argv + execArgIdx);             /* ends icmake  */
}
