#include "icmake.ih"

size_t options(int argc, char **argv)
{
    register int c;
    char *cp;
    char pid_string[30];                     /* used with -x */

    while ((c = getopt(argc, argv, "abci:pqt-")) != -1)
    {
        switch (c)
        {
            case '?':       /* error: unknown option char or missing arg */
                switch (optopt)
                {
                    case 'i':
                    rss_error("-i requires source-filename");

                    case 't':
                    rss_error("-t requires temporary bim-filename");
                }
            rss_error("option -%c not supported", getopt);

            case 'a':
                about();
            break;

            case 'b':
                flags |= f_blunt;
            break;

            case 'c':
                flags |= f_compiler;
            break;

            case 'h':
                flags |= f_help;
            return optind;

            case 'i':
                flags |= f_icmake;      /* flag icmake taken literally  */
            return optind;              /* return the index of argv */

            case 'p':
                flags |= f_preprocessor;
            break;

            case 'q':
                flags |= f_quiet;           /* no banner */
            break;

            case 't':
                flags |= f_tmpbim | f_icmake; /* flag use temporary bimfile  */

                cp = optarg;

                while (*cp == ' ')          /* skip initial blanks in optval*/
                    cp++;

                                            /* build pid-string */
                sprintf(pid_string, "%d", getpid());
                                            /* destination with pid-extension */
                dest_name = rss_strdup(rss_changeExt(cp, pid_string));
                                            
                rss_strcat(pid_string, "a");    /* temp. pim-file extension */
                temporary = rss_strdup(rss_changeExt(cp, pid_string));

                source_name = argv[1];
            return optind + 1;              /* index of remaining args */
                                            /* + 1 for the extra arg on the */
                                            /* #!/...-x... line */

            case '-':
                return optind;        /* return index of args to icm-exec */
        }
    }
    return argc;                    /* return index of args to icm-exec */
}


/*************************************

void about()
{
    puts("about icmake\n");
}


FLAGS_ flags;

char *temporary;
char *source_name;
char *dest_name;

void main(int argc, char **argv)
{
    options(argc, argv);

    printf("flags: %x\n"
            "arguments:\n"
            ,
            flags);
    while (argc--)
        puts(*argv++);
}

**************************************/




