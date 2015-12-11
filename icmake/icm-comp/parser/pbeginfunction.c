
#define msgx
#include "parser.ih"

void p_beginFunction()
{
                                    /* test if function name already exists */
    if (symtab_addFunction(gp_varType, ftell(gp_bin)) != 0)
    {
        util_semantic("%s p_multiply defined", util_string());
        return;
    }

    symtab_push();              /* setup the local symbol table */
                                /* 1 global, 1 local symbol table */

    gp_dead_sp = 0;             /* allow code generation */
    gp_dead[0] = 0;
    ++gp_nestLevel;             /* no code-writes to gp_bin in functions */

    msg("END");
}
