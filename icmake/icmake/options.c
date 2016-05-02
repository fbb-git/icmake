#define msg

#include "icmake.ih"

    /*
        process all std options or perform -h and -a actions
        see README.options for an overview of actions
    */
void options(int argc, char **argv)
{
    char const *program = rss_programName(argv[0]);
    
    if (argc == 1)
        usage(program);
    
    execArgIdx = dashesIndex(argv, argv + argc);    /* beyond -- */

    setTmpDir();

    int ready = 0;
    
    while (!ready)
    {
        int c = getopt(argc, argv, "ac:e:fFhi:t:T:p:quv");

        switch (c)
        {
            case 'a':
                flags |= f_about;
            break;

            case 'c':
                optCompile(argv);
            break;

            case 'e':
                optExecute();
                ready = 1;
            break;

            case 'h':
            usage(program);

            case 'f':
                flags |= f_force;
            break;

            case 'F':
                flags |= f_showFlags;
            break;

            case 'i':
                optIm(argv);
                ready = 1;
            break;

            case 'T':
                optTmpDir();
            break;

            case 't':
                optTmpBim(argv);
                ready = 1;
            break;
        
            case 'p':
                optPreProcess(argv);
            break;

            case 'q':
                /* ignored, but kept to prevent breaking existing scripts */
            break;

            case 'u':
                flags |= f_doUseAll;
            return;

            case 'v':
                printf("%s V%s\n", program, version);
            exit(0);

            case -1:
                ready = 1;
            break;

            case '?':
            rss_fatal(0, 0, "option -%c not supported", optopt);

        } /* switch */
    } /* while */

    inspectFlags(program, argv);
}










