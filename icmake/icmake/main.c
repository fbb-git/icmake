#define msg

#include "icmake.ih"


                                         /* icmake source(txt) dest(bin) */
int main(int argc, char **argv)
{
    char *program = rss_programName(argv[0]);

    size_t idx = options(argc, argv);

    if (argc == 1 || flags & f_usage)   /* no arguments provided or     */
        usage(program);                 /* usage requested: provide help */

    if (flags & f_about)                    /* -a specified: about info */
        usage(program);

    if (flags & f_execute)                  /* direct execute the bim-file */
        execute(0, argv + idx);             /* ends icmake  */

    source = tryFile(argv[1], "im");        /* see if there is a source */

    preprocess();                           /* f_preprocess ends icmake */

    compile();                              /* f_compile ends icmake    */

    execute(flags & f_tmpbim, argv + idx);  /* execute the bim file     */
    
#if 0
   
    msg("optind: %u, optRet: %u, first non-option arg: %s",  optind, \
                                                optRet, argv[optRet]);

    if (flags & f_imByOption)               /* literal source via -i */
        literalSource(argc, argv);          /* remaining args for icm-exec */
    else
        sourceByArgument(argc, argv);

    if (!(flags & f_imByOption))                /* do not take the source via -i */
    {
        source_name = try_source(argv[1]);  /* determine source */

        if (!(flags & f_tmpbim))            /* unless it's a temp. bimfile */
            dest_name = argc2 >= 3 ? argv[2] : argv[1];
    }
    else if (!(flags & f_tmpbim))           /* unless it's a temp. bimfile */
        dest_name = source_name;

    if (!(flags & f_tmpbim))                /* adapt extension of destination */
        dest_name =                         /* if not tmp. bimfile */
                rss_strdup(rss_changeExt(dest_name, bim)); 

    if
    (
        !(flags & f_execute)                  /* no forced execution */
        &&
        compile_test()                      /* compilation needed */
    )
    {
                                            /* preprocessor filename */
        if (!(flags & f_tmpbim))            /* use .pim unless -t given */
            temporary = rss_strdup(rss_changeExt(source_name, pim));

        signal(SIGINT, abnormal_exit);      /* abnormal exits process */
                                            /* do the preprocessing */

        msg("calling icm_pp with %s and %s", source_name, temporary);
/*
        ret = spawnlp(P_WAIT, icm_pp, icm_pp, source_name, temporary, NULL);
        if (ret)
        {
            if (ret == -1)
                rss_spawnErr(icm_pp);
            cleanup();
            return 1;
        }
*/
        if (flags & f_preprocessor)
            return 0;


                                            /* do the compilation */

    }

    if (flags & f_tmpbim)                       /* -t used */
    {
        argc2 -= 3;                             /* set index to start of args */
        argv[argc2 + 1] = "-t";                 /* signal temporary */
        argv[argc2 + 2] = (char *)dest_name;    /* store dest-name */
    }
    else
    {
        argc2 -= 2;                             /* set index to start of args */
        argv[argc2 + 1] = (char *)dest_name;    /* store dest-name */
    }
    argv[argc2] = icm_exec;                     /* store executor's name */

    errors = execvp(icm_exec, &argv[argc2]);    /* make the file */

    rss_spawnErr(icm_exec);                    /* shouldn't get here ... */

    cleanup();                              /* remove tempfiles etc. */
    return 1;
#endif
}










