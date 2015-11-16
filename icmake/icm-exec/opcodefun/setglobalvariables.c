#include "opcodefun.ih"

void opcodefun_setGlobalVariables()
{
    size_t  nvars;
    Variable *var;

                                        /* return array of global vars */
    if ((nvars = rss_getVar(go_infile, go_header, &var)) == (int16_t)-1)
        rss_error("invalid bim-file, cannot read variable section");

        /* global string/list variables haven't been initialized by */
        /*  the compiler, so that's icm-exec's job                  */
    for (size_t idx = 0; idx != nvars; ++idx, ++var)
    {
        switch (var_type(var))
        {
            case e_str:
                *var = *stringcons();
            break;

            case e_list:
                *var = *listcons();
            break;
        }
    }

    fseek(go_infile, go_header->offset[3], SEEK_SET);
}






