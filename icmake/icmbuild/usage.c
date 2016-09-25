#include "icmbuild.ih"

int usage()
{
    rss_copyright("icmbuild");

    printf("Usage: icmbuild [-h] [-c] args\n"
        "   -h              - Disply this help-information (ends "
                                                        "`icmbuild')\n"
        "                     (this help is also shown if the file "
                                                                "`icmconf',\n"
        "                     required by `icmbuild', does not exist in the "
                                                                "current\n"
        "                     working directory)\n"
        "   -c              - Do 'tput clear' (clear screen) just before\n"
        "                     processing 'args'\n"
        "\n"
        "   args - select from:\n"
        "        clean           - clean up remnants of previous activities\n"
        "\n"
        "(library construction:)\n"
        "        library         - build a static library (using icmconf's"
                                                                " defines\n"
        "                          `TMP_DIR' and `LIBRARY')\n"
        "                          optionally (when `SHARED' is defined in "
                                                                "`icmconf')\n"
        "                          `icmbuild' also build a shared library\n"

        "        strip-shared    - strip a shared library (requires `SHARED' "
                                                                     "in\n"
        "                          `icmconf')\n"
        "        install static <dir> - install the static library in "
                                                            "directory <dir>\n"
        "                          (may start with ~)\n"
        "        install shared <dir> - install the shared library in "
                                                            "directory <dir>\n"
        "                          (may start with ~)\n"
        "\n"
        "(program construction)\n"
        "        program         - build a program (using icmconf's "
                                                         "define `TMP_DIR')\n"
        "        program strip   - build stripped TMP_DIR/bin/binary\n"
        "        install program path - install the binary program at "
                                                                "`path'\n"
        "                          (provide the full path-name (may start "
                                                                "with ~)\n"
    );

    return 0;
}



