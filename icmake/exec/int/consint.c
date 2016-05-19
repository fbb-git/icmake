/*#define msg
*/

#include "int.ih"

void intcons_int(IntVariable *intVar, int value)
{
    intVar->type = e_int;
    intVar->intValue = value;
}
