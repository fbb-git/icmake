#define msg

#include "icmake.ih"

static char
    bim[]       = "bim",
    icm_comp[]  = LIBDIR "/icm-comp",
    icm_exec[]  = LIBDIR "/icm-exec",
    icm_pp[]    = LIBDIR "/icm-pp",
    pim[]       = "pim";

                                         /* icmake source(txt) dest(bin) */
int main(int argc, char **argv)
{
    char *program = rss_programName(argv[0]);

    size_t optRet = options(argc, argv);

    if (argc == optind)                 /* no arguments provided: usage */
        usage(program);

    msg("optind: %u, optRet: %u", optind, optRet);
    for (int idx = 0; idx != argc; ++idx)
    printf("%s ", argv[idx]);
    printf("\n");
return 0;

    copyright(program);


#if 0
    if (!(flags & f_icmake))                /* do not take source literally */
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
        !(flags & f_blunt)                  /* no forced execution */
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
        errors = spawnlp(P_WAIT, icm_comp, icm_comp,
                                  temporary, dest_name, NULL);
        cleanup();

        if (errors)
        {
            if (errors == -1)
                rss_spawnErr(icm_comp);
            return 1;
        }

        if (flags & f_compiler)
            return 0;


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










