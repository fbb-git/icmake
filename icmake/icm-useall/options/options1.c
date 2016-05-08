#include "options.ih"

static struct option longOpts[] = 
{
    {"classes", required_argument, NULL, 'C'},
    {"icmconf", required_argument, NULL, 'c'},
    {"precomp", no_argument, NULL, 'p'},
    {"mainih",  required_argument, NULL, 'm'},
    {"rm",      no_argument, NULL, 'r'},            // no -r option
    {"help", no_argument, NULL, 'h'},
    {"verbose", no_argument, NULL, 'V'},
    {"version", no_argument, NULL, 'v'},
    {NULL}
};

Options *OptionsCons(int argc, char **argv)
{
    Options *options = rss_realloc(0, sizeof(Options));

    regComp(&options->useAllRE, 
            "^[ \t]*#define[ \t]*"
                    "([^ \t]+)"     //      #1: key 
                    "[ \t]*\""
                    "([^\"]+)?"     //      #2: value (opt)
                    "\"");        

    options->parser = NULL;
    options->scanner = NULL;

    options->ih = rss_strdup(".ih");
    options->classes = rss_strdup("CLASSES");
    options->useAll = rss_strdup("icmconf");
    options->mainih = rss_strdup("main.ih");
    options->verbose = 0;
    options->remove = 0;
    options->precomp = 0;

    int showVersion = 0;

    while (1)
    {
        int opt = getopt_long(argc, argv, "gmhvV", longOpts, NULL);

        switch (opt)
        {
            case 'C':
                options->classes = rss_strdup(optarg);
            break;

            case 'c':
                options->useAll = rss_strdup(optarg);
            break;

            case 'i':
//                options->inspect = rss_strdup(optarg);
            break;

            case 'p':
                options->precomp = 1; // rss_strdup(optarg);
            break;

            case 'm':
                options->mainih = rss_strdup(optarg);
            break;

            case 'r':
                options->remove = 1;
            break;

            case 'h':
                usage(argv[0]);
            break;                  // usage exits

            case 'v':
                showVersion = 1;
            break;

            case 'V':
                ++options->verbose;
            break;

            case '?':
                printf("no option '-%c'\n", (char)opt);
                exit(1);
            break;

            case -1:
                if (showVersion)
                {
                    printf("V %s\n", version);
                    exit(0);
                }
                if ((options->nArgs = argc - optind) == 0)
                    usage(argv[0]);

                setUseAll(options);

                options->arg = argv + optind;
            return options;
        }
    }
}
