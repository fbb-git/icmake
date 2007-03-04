/*
                                A B O U T . C
*/

#include "icmake.h"

void about()
{
    copyright("Make Utility", version, release, 1);

    error("%s%s",

            "ICMAKE consists of a set of five programs. Together, they can\n"
            "be used for managing program development comparable to, e.g.,\n"
            "the UNIX make facility, or as a SHELL-script language.\n"
            "\n"
            "Icmake was developed in the C programming language by Karel Kubat\n"
            "and Frank Brokken.\n"
            "\n"
            "ICMAKE is available for several UNIX-platforms. MS-DOS is not\n"
            "directly supported anymore\n"
            "\n",

            "ICMAKE can be obtained by anonymous ftp at:\n"
            "    ftp.rug.nl/contrib/frank/software/linux/icmake\n"
            "Also, ICMAKE is part of the Debian distribution\n"
            "\n"
            "Questions, remarks, etc. about ICMAKE can be sent to:\n"
            "\n"
            "              Frank B. Brokken,\n"
            "phone:        (+31) 50 363 9281\n"
            "e-mail:       f.b.brokken@rug.nl\n"
            "surface mail: Computer center, University of Groningen\n"
            "              P.O. Box 11044,  9700 CA Groningen, the Netherlands");
}
