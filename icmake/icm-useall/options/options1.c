#include "options.ih"

static struct option longOpts[] = 
{
    {"classes", required_argument,  NULL, 'c'},
    {"dry",     no_argument,        NULL, 'd'},            // no -d option
    {"help",    no_argument,        NULL, 'h'},
    {"icmconf", required_argument,  NULL, 'i'},
    {"mainih",  required_argument,  NULL, 'm'},
    {"rm",      no_argument,        NULL, 'r'},            // no -r option
    {"use_all", no_argument,        NULL, 'u'},            // no -u option
    {"verbose", no_argument,        NULL, 'V'},
    {"version", no_argument,        NULL, 'v'},
    {NULL}
};

Options *OptionsCons(int argc, char **argv)
{
    Options *options = rss_realloc(0, sizeof(Options));

    regComp(&options->icmconfRE, 
            "^[ \t]*#define[ \t]*"
                    "([^ \t]+)"     //      #1: key 
                    "[ \t]*\""
                    "([^\"]+)?"     //      #2: value (opt)
                    "\"");        

    options->classes    = "CLASSES";
    options->icmconf    = "icmconf";
    options->mainih     = "main.ih";
    options->ih         = ".ih";
    options->use_all    = NULL;

    options->dry        = 0;
    options->rm         = 0;
    options->verbose    = 0;

    options->parser     = NULL;
    options->scanner    = NULL;

    int showVersion = 0;

    while (1)
    {
        int opt = getopt_long(argc, argv, "cdimhvV", longOpts, NULL);

        switch (opt)
        {
            case 'c':
                options->classes = rss_strdup(optarg);
            break;

            case 'i':
                options->icmconf = rss_strdup(optarg);
            break;

            case 'm':
                options->mainih = rss_strdup(optarg);
            break;

            case 'd':
                options->dry = 1;
            break;

            case 'r':
                options->rm = 1;
            break;

            case 'u':
                options->use_all = rss_strdup(optarg);
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

                if (options->rm == 0 && options->use_all == 0)
                    usage(argv[0]);

                setUseAll(options);

            return options;
        }
    }
}
