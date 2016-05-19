#include "options.ih"

static struct option longOpts[] = 
{
    {"classes",     required_argument,  NULL, 'c'},
    {"dry",         no_argument,        NULL, 'd'},        // no -d option
    {"gch",         no_argument,        NULL, 'G'},        // no -G option
    {"go",          no_argument,        NULL, 'g'},        // no -g option
    {"help",        no_argument,        NULL, 'h'},
    {"icmconf",     required_argument,  NULL, 'i'},
    {"mainih",      required_argument,  NULL, 'm'},
    {"no-gch",      no_argument,        NULL, 'n'},        // no -n option
    {"no-use-all",  no_argument,        NULL, 'U'},        // no -U option
    {"use-all",     required_argument,  NULL, 'u'},        // no -u option
    {"verbose",     no_argument,        NULL, 'V'},
    {"version",     no_argument,        NULL, 'v'},
    {NULL}
};

Options sopts;

void OptionsCons(int argc, char **argv)
{
    regComp(&sopts.d_icmconfRE, 
            "^[ \t]*#define[ \t]*"
                    "([^ \t]+)"     //      #1: key 
                    "[ \t]*\""
                    "([^\"]+)?"     //      #2: value (opt)
                    "\"");        

    sopts.d_classes    = "CLASSES";
    sopts.d_icmconf    = "icmconf";
    sopts.d_mainih     = "main.ih";
    sopts.d_ih         = ".ih";

    sopts.d_use_all    = (char *)UNSPECIFIED;  // by default: read icmconf
    sopts.d_gch        = UNSPECIFIED;
    sopts.d_go         = UNSPECIFIED;

    int showVersion = 0;

    while (1)
    {
        int opt = getopt_long(argc, argv, "cdimhvV", longOpts, NULL);

        switch (opt)
        {
            case 'c':
                sopts.d_classes = rss_strdup(optarg);
            break;

            case 'd':
                sopts.d_go = DRY;
                optMsg(2, "dry run (no actions)");
            break;

            case 'g':
                sopts.d_go = GO;
                optMsg(2, "%s active", argv[0]);
            break;

            case 'G':
                sopts.d_gch = GCH;
                optMsg(2, "inspecting .gch files");
            break;

            case 'h':
                usage(argv[0]);
            break;                  // usage exits

            case 'i':
                sopts.d_icmconf = rss_strdup(optarg);
                optMsg(2, "using icmconf `%s'", optarg);
            break;

            case 'm':
                sopts.d_mainih = rss_strdup(optarg);
                optMsg(2, "using main.ih `%s'", optarg);
            break;

            case 'u':
                sopts.d_use_all = rss_strdup(optarg);
                optMsg(2, "using USE_ALL filename `%s'", optarg);
            break;

            case 'U':
                sopts.d_use_all = NULL;
                optMsg(2, "not inspecting USE_ALL files");
            break;

            case 'v':
                showVersion = 1;
            break;

            case 'V':
                ++sopts.d_verbose;
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

                if (sopts.d_go == UNSPECIFIED)
                    usage(argv[0]);

                if (!rss_exists(sopts.d_classes))
                {
                    optMsg(1, "No file '%s'", sopts.d_classes);
                    exit(0);
                }

                oIcmconf(argv[0]);
            return;
        }
    }
}
