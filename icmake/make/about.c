/*
                                A B O U T . C
*/

#include "icmake.h"

void about()
{
    copyright("Make Utility", version, release, 1);

    error("ICMAKE consists of a set of five programs. Together, they can\n"
          "be used for managing program development comparable to, e.g.,\n"
          "the UNIX make facility, or as a SHELL-script language.\n"
          "\n"
          "Icmake was developed in the C programming language by Karel Kubat\n"
          "and Frank Brokken.\n"
          "\n"
          "ICMAKE is available for MS-DOS- and for several UNIX-platforms.\n"
          "ICMAKE can be obtained by anonymous ftp at:\n"
          "    beatrix.icce.rug.nl, in the directory pub/unix\n"
          "\n"
          "Questions, remarks, etc. about ICMAKE can be sent to:\n"
          "\n"
          "              Frank B. Brokken         ---     Karel Kubat,\n"
          "phone:        (+31) 50 63 36 88        ---     (+31) 50 63 36 47\n"
          "e-mail:       f.b.brokken@icce.rug.nl  ---     k.kubat@icce.rug.nl\n"
          "surface mail: ICCE, University of Groningen\n"
          "              P.O. Box 335,  9700 AH Groningen, the Netherlands");

}
