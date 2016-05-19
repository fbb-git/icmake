#include "icm-pp.ih"

void options(int argc, char **argv)
{
    int dump_symbols = 0;
    int load_symbols = 1;

    while (argc > 1 && *argv[1] == '-')
    {
        if (! strcmp(argv[1], "-define"))
        {
            if (argc < 3)
                rss_fatal(0, 0, "missing symbol after \"-define\"");

            linear_add(argv[2], "1");

            ++argv;
            --argc;
        }

        else if (! strcmp(argv[1], "-nostdsymbols"))
            load_symbols = 0;

        else if (! strcmp(argv[1], "-dumpsymbols"))
            ++dump_symbols;

        else 
            rss_fatal(0, 0, "Option `%s' not supported", argv[1]);
    
        ++argv;
        ++argc;
    }

    if (argc < 3)
        usage(*argv);

    if (load_symbols)
        loadSymbols();                  /* platform specific #define's */

    if (dump_symbols)
        linear_show();
}




