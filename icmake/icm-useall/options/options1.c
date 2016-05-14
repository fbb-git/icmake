#include "options.ih"

static struct option longOpts[] = 
{
    {"classes",     required_argument,  NULL, 'c'},
    {"dry",         no_argument,        NULL, 'd'},        // no -d option
    {"go",          no_argument,        NULL, 'g'},        // no -g option
    {"help",        no_argument,        NULL, 'h'},
    {"icmconf",     required_argument,  NULL, 'i'},
    {"mainih",      required_argument,  NULL, 'm'},
    {"gch",         required_argument,  NULL, 'G'},        // no -G option
    {"use-all",     required_argument,  NULL, 'u'},        // no -u option
    {"verbose",     no_argument,        NULL, 'V'},
    {"version",     no_argument,        NULL, 'v'},
    {NULL}
};

Options sopts;

void OptionsCons(int argc, char **argv)
{
    regComp(&sopts.icmconfRE, 
            "^[ \t]*#define[ \t]*"
                    "([^ \t]+)"     //      #1: key 
                    "[ \t]*\""
                    "([^\"]+)?"     //      #2: value (opt)
                    "\"");        

    sopts.classes    = "CLASSES";
    sopts.icmconf    = "icmconf";
    sopts.mainih     = "main.ih";
    sopts.ih         = ".ih";
    sopts.use_all    = "i";        // by default: read icmconf
    sopts.gch        = 'i';

    int showVersion = 0;

    while (1)
    {
        int opt = getopt_long(argc, argv, "cdimhvV", longOpts, NULL);

        switch (opt)
        {
            case 'c':
                sopts.classes = rss_strdup(optarg);
            break;

            case 'd':
                sopts.dry = 1;
            break;

            case 'g':
                sopts.go = 1;
            break;

            case 'G':
                sopts.gch = optarg[0] == 'y';
            break;

            case 'h':
                usage(argv[0]);
            break;                  // usage exits

            case 'i':
                sopts.icmconf = rss_strdup(optarg);
            break;

            case 'm':
                sopts.mainih = rss_strdup(optarg);
            break;

            case 'u':
                sopts.use_all = optarg[0] == '/' ? NULL : rss_strdup(optarg);
            break;

            case 'v':
                showVersion = 1;
            break;

            case 'V':
                ++sopts.verbose;
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

                if (sopts.go == 0 && sopts.dry == 0)
                    usage(argv[0]);

                if (sopts.dry)
                    sopts.go = 0;

                oIcmconf();

            return;
        }
    }
}
