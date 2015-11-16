#include "icmake.ih"

void usage(char const *program)
{
    rss_copyright(program);

    printf
    (
        "%s%s%s%s%s",

        "Usage: ",
            program,
        " [options] source [dest] [-- [args]]\n"
        "where:\n"
        "    options:  optional arguments:\n"
        "      -a     : information about ",
            program,
        "\n"
        "      -b     : blunt execution of the destinationfile, which is\n"
        "               provided as `source'\n"
        "      -c     : the destination file is compiled (even if it's "
                                                            "up-to-date)\n"
        "      -f     : the icmake source file is recompiled (even if the\n"
        "               .bim file is up-to-date) either when no other "
                                                                "options\n"
        "               are specified, or when in combination with options\n"
        "               -i and -t\n"
        "      -i     : the first argument is the icmake source file to\n"
        "               process (default extension: .im), the default\n"
        "               .bim-filename is used and the .bim file is kept;\n"
        "               remaining arguments are passed to icm-exec\n"
        "      -p     : only the preprocessor is activated\n"
        "      -t     : the filename following -t is the name of the "
                                                                "compiled\n"
        "               .bim-file (removed on exit). The first argument is "
                                                                "the\n"
        "               icmake source file to process (using default "
                                                                "extension\n"
        "               .im). Remaining arguments are passed to icm-exec\n"

        "\n"
        "    source: icmake source file to process (default extension: .im,\n"
        "            with -b the default extension is .bim)\n"
        "    dest:   generated binary icmake file (default: source.bim)\n"
        "            (ignored with -t and -b)\n"
        "    -- :   separator separating icmake's arguments from icm-exec's\n"
        "           arguments\n"
        "    args:  arguments passed to icm-exec\n"
        "\n"
    );

    exit(0);
}
