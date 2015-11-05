#include "parser.ih"

void open_fun()
{
                                    /* test if function name already exists */
    if (symtab_addFunction(gp_varType | e_reg) != 0)
    {
        semantic("%s multiply defined", g_lexstring);
        return;
    }

    symtab_push();                   /* setup the local symbol table */
                                    /* 1 global, 1 local symbol table */

    gp_nParams = 0;                           /* no parameters as yet */
    g_dead_sp = 0;                            /* allow code generation */
    g_dead[0] = 0;
}
