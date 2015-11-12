#include "icmake.ih"

void usage(char const *program)
{
    rss_copyright(program);

    printf
    (
        "%s%s%s%s%s",

        "Icmake by Frank B. Brokken (and Karel Kubat until V 6.30).\n"
        "\n"
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
        "      -c     : the destination file is compiled\n"
        "      -i source: 'source' is the icmake source file to process\n"
        "               (default extension: .im); remaining arguments are\n"
        "               passed to icm-exec\n"
        "      -p     : only the preprocessor is activated\n"
        "      -q     : quiet mode: copyright banner not displayed\n"
        "      -t file: 'file' is used as a temporary bim-file, removed\n"
        "               on exit, argument processing stops.\n"
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
