#include "int.h"

void intcons(IntVariable *var)
{
    var->type = e_int;
    var->intValue = 0;
}
