#include "icmake.ih"

void sourceByArgument(int argc, char **argv)
{
    source_name = try_source(argv[1]);  /* determine source */

    if (!(flags & f_tmpbim))            /* unless it's a temp. bimfile */
        dest_name = argc2 >= 3 ? argv[2] : argv[1];
}
