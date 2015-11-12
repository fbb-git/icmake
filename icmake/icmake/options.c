#include "icmake.ih"

static void testFlags(char const *program)
{
    if (flags & f_about)                    /* -a specified: about info */
        about(program);

    if ((flags & (flags - 1)))   /* not a power of 2 -> multiple options */
        rss_error("multiple options are not supported");
}

    /*
        remove all std options and return the index of the first argument
        beyond --. 0 is returned if there is no -- options to handle,
        which is also returned for the terminating options -h and -a
    */

static char opt[] =         {'a',     'b',       'c',       
                                   'i',     'p',          't',      0};

static FLAGS_ flagValue[] = {f_about, f_icmexec, f_compile, 
                                    f_im,   f_preprocess, f_tmpBim};

size_t options(int argc, char **argv)
{
    char *program = rss_programName(argv[0]);
    char **ptr = argv + 1;
    int c;

    if (argc == 1)
        usage(program);

    while (*ptr)
    {
        if (**ptr != '-')                   /* no -x: skip & continue */
        {
            ++ptr;
            continue;
        }
        
        switch (c = (*ptr)[1])
        {
            case 'h':                   /* set flags matching options */
            usage(program);             /* usage requested: provide help */

            case 'a':
            case 'b':
            case 'c':
            case 'i':
            case 'p':
                flags |= flagValue[strchr(opt, c) - opt];
            break;

            case '-':                   
                testFlags(program);     /* verify -a and no multiple flags */
            return ptr - argv + 1;      /* return index of icm-exec args */

            default:
            rss_error("option -%c not supported", c);
        }
                                        /* remove the option */
        memmove(ptr, ptr + 1, (argv + argc - ptr + 1) * sizeof(char *));
    }

    testFlags(program);        /* all done: verify -a and no multiple flags */
    return 0;                       
}

#if 0
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
#endif




