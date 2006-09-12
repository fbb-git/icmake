/*
                                    E N T E R V A R . C
*/

#include "iccomp.h"

void entervar()
{
    enter();
    entertab->symbol[entertab->n_defined - 1].var.type |= e_var;
}
