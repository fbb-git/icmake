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
        "      --about (-a)     : information about ",
            program,
        "\n"
        "      --compile (-c)   : the destination file is compiled (even if "
                                                                "it's\n"
        "                         up-to-date)\n"

        "      --directory (-T) : the directory name following -T is used "
                                                "for icmake's\n"
        "               temporary files. By default /tmp is used or the "
                                                "HOME\n"
        "               directory if /tmp is not writable. When used, -T is\n"
        "               usually specified as icmake's first option\n"

        "      --execute (-e)   : execute the .bim file, which is provided "
                                                "as `source'\n"
        "               (remaining arguments are passed as-is to the .bim\n"
        "               file)\n"

        "      --force (-f)     : the icmake source file is recompiled "
                                                "(even if the\n"
        "               .bim file is up-to-date) either when no other "
                                                "options\n"
        "               are specified, or when specified in combination "
                                                "with options\n"
        "               --source and --tmpbin\n"

        "      --help (-h)      : provide this help and end ",
                                                                program, "\n"

        "      --icm-dep (-d)   : call icm-dep, passing it any remaining "
                                                "arguments\n"

        "      --preprocess (-p): only the preprocessor is activated\n"

        "      --source (-i)    : the first argument is the icmake source "
                                                "file to\n"
        "               process (default extension: .im), the default\n"
        "               .bim-filename is used and the .bim file is kept;\n"
        "               remaining arguments are passed to icm-exec\n"

        "      --summary (-F)   : show filenames, flags, and actions to "
                                                "perform\n"

        "      --tmpbin (-t)    : the filename following -t is the name of "
                                                "the compiled\n"
        "               .bim-file (removed on exit). The first argument is "
                                                "the\n"
        "               icmake source file to process (using default "
                                                "extension\n"
        "               .im). Remaining arguments are passed as-is to "
                                                "icm-exec\n"

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



