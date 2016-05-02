#include "options.ih"

static struct option longOpts[] = 
{
    {"classes", required_argument, NULL, 'c'},
    {"mainBase", required_argument, NULL, 'm'},
    {"icmconf", required_argument, NULL, 'i'},
    {"gch", no_argument, NULL, 'g'},
    {"help", no_argument, NULL, 'h'},
    {"verbose", no_argument, NULL, 'V'},
    {"version", no_argument, NULL, 'v'},
    {NULL}
};

void OptionsCons(Options *options, int argc, char **argv)
{
    regComp(&options->useAllRE, 
            "^[ \t]*#define[ \t]*USE_ALL[ \t]*\"([^\"]+)\"");

    options->classes = rss_strdup("CLASSES");
    options->mainBase = rss_strdup("main");
    options->useAll = rss_strdup("icmconf");
    options->verbose = 0;
    options->gchDep = 0;

    int showVersion = 0;

    while (1)
    {
        int opt = getopt_long(argc, argv, "ghvV", longOpts, NULL);

        switch (opt)
        {
            case 'c':
                options->classes = rss_strdup(optarg);
            break;

            case 'm':
                options->mainBase = rss_strdup(optarg);
            break;

            case 'i':
                options->useAll = rss_strdup(optarg);
            break;

            case 'g':
                options->gchDep = 1;
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
            return;
        }
    }
}

