/* #define msg
*/

#include "out.ih"

void out_nl()
{
    if (o_nl == 0)
        o_nl = scanner_lineNr();

    msg("o_nl = %u", o_nl);
}
