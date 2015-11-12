#include "icmake.ih"

static void testFlags()
{
    if ((flags & (flags - 1)))   /* not a power of 2 -> multiple options */
        rss_error("multiple options are not supported");
}

    /*
        remove all std options and return the index of the first argument
        beyond --. 0 is returned if there is no -- options to handle,
        which is also returned for the terminating options -h and -a
    */
size_t options(int argc, char **argv)
{
    char **ptr = argv + 1;
    int c;

    while (*ptr)
    {
        if (**ptr != '-')                   /* no -x: skip & continue */
        {
            ++ptr;
            continue;
        }
        
        switch (c = (*ptr)[1])
        {
            case 'h':                       /* set flags matching options */
                flags |= f_help;
            return 0;

            case 'a':
                flags = f_about;
            return 0;


            case 'b':
                flags |= f_icmexec;
            break;

            case 'c':
                flags |= f_compiler;
            break;

            case 'i':
               flags |= f_imByOption;  
            break;

            case 'p':
                flags |= f_preprocessor;
            break;

            case 't':
                flags |= f_tmpbim;
            break;

            case '-':                   
                testFlags();            /* verify no multiple flags */
            return ptr - argv + 1;      /* return index of icm-exec args */

            default:
            rss_error("option -%c not supported", c);
        }
                                        /* remove the option */
        memmove(ptr, ptr + 1, (argv + argc - ptr + 1) * sizeof(char *));
    }

    testFlags();                    /* all done: verify no multiple flags */
    return 0;                       

#if 0


    while ((c = getopt(argc, argv, "abcipt-")) != -1)
    {
        switch (c)
        {
            case '?':       /* error: unknown option */
            rss_error("option -%c not supported", getopt);

            case 'h':
                flags |= f_help;
            return optind;

            case 'a':
                flags = f_about;
            return optind;


            case 'b':
                flags |= f_execute;
            break;

            case 'c':
                flags |= f_compiler;
            break;

            case 'i':
                flags |= f_imByOption;      /* flag icmake taken literally  */
            break;

            case 'p':
                flags |= f_preprocessor;
            break;

            case 't':
{
    char *cp;
    char pid_string[30];                     /* used with -x */
                flags |= f_tmpbim; /* flag use temporary bimfile  */

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
            return optind;          /* return index of args to icm-exec */
}
        }


    }
    return optind;                  /* return index of args to icm-exec */
#endif

}

/*************************************


void about(char const *p)
{
    puts("about icmake\n");
}


FLAGS_ flags;

char *temporary;
char *source_name;
char *dest_name;

void main(int argc, char **argv)
{
    int idx = options(argc, argv);

    printf("idx: %u flags: %x\n"
            "arguments:\n"
            ,
            idx, flags);

    while (*argv)
        puts(*argv++);
}

**************************************/




