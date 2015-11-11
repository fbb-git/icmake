/*
                                A B O U T . C
*/

#include "icmake.ih"

void about()
{
    rss_copyright("Make Utility", version, release);

    rss_error("%s%s",

            "ICMAKE consists of a set of five programs. Together, they can\n"
            "be used for managing program development comparable to, e.g.,\n"
            "the UNIX make facility, or as a SHELL-script language.\n"
            "\n"
            "Icmake was developed using the C programming language by "
                                                            "Karel Kubat\n"
            "and Frank Brokken.\n"
            "\n"
            "ICMAKE is available for several UNIX-platforms.\n"
            "\n",

            "ICMAKE's home page is:\n"
            "    http://fbb-git.github.io/icmake/\n"
            "Also, ICMAKE is included in the Debian Linux distribution\n"
            "\n"
            "Questions, remarks, etc. about ICMAKE can be sent to:\n"
            "\n"
            "              Frank B. Brokken,\n"
            "phone:        (+31) 50 363 9281\n"
            "e-mail:       f.b.brokken@rug.nl\n"
            "surface mail: Center of Information Technology, "
                                                "University of Groningen\n"
            "              P.O. Box 11044,  9700 CA Groningen, "
                                                "the Netherlands");
}




