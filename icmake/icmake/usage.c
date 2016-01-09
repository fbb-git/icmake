#include "icmake.ih"

void usage(char const *program)
{
    rss_copyright(program);

    printf
    (
        "%s%s%s%s%s%s%s%s%s%s%s",

        "Usage: ",
            program,
        " [options] source [dest] [-- [args]]\n"
        "where:\n"
        "    options:  optional arguments:\n"
        "      -a     : information about ",
            program,
        "\n"
        "      -c     : the destination file is compiled (even if it's "
                                                            "up-to-date)\n"
        "      -e     : execute the .bim file, which is provided as "
                                                            "`source'\n"
        "               (remaining arguments are passed as-is to the .bim\n"
        "               file)\n"
        "      -f     : the icmake source file is recompiled (even if the\n"
        "               .bim file is up-to-date) either when no other "
                                                                "options\n"
        "               are specified, or when in combination with options\n"
        "               -i and -t\n"
        "      -F     : show filenames, flags, and actions to perform\n"
        "      -h     : provide this help and end ",
            program,
                    "\n"
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
        "               .im). Remaining arguments are passed as-is to "
                                                                "icm-exec\n"
        "      -T     : the directory name following -T is used for "
                                                                "icmake's\n"
        "               temporary files. By default /tmp is used or the "
                                                                "HOME\n"
        "               directory if /tmp is not writable. When used, -T is\n"
        "               usually specified as icmake's first option\n"
        "      -v     : display ",
            program,
                   "'s version number and end ",
            program,
                    "\n"
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



